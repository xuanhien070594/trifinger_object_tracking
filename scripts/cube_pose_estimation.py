#!/usr/bin/env python3
import argparse
import time
import os
import signal
import sys
import select

import numpy as np
import cv2
import yaml
import rclpy

from ament_index_python.packages import get_package_share_directory
from rclpy.executors import MultiThreadedExecutor

from trifinger_cameras import utils
import trifinger_object_tracking.py_object_tracker
import trifinger_object_tracking.py_tricamera_types as tricamera
from trifinger_cameras.utils import convert_image
from trifinger_object_tracking import (
    CubePoseLcmPublisher,
    CubeTargetLcmSubscriber,
)


def run_cube_pose_tracker():
    camera_names = ["camera60", "camera180", "camera300"]

    argparser = argparse.ArgumentParser(description=__doc__)
    argparser.add_argument("--camera-name", "-c", choices=camera_names)
    argparser.add_argument(
        "--object-type", choices=["cube", "aruco"], default="cube"
    )
    argparser.add_argument(
        "--cube-model",
        type=str,
        default="cube_v2",
        help="""Name of the model used for cube detection (only used if
            --object-type=cube.  Default: %(default)s.
        """,
    )
    argparser.add_argument("--multi-process", action="store_true")
    argparser.add_argument("--live-viewer", action="store_true")
    argparser.add_argument("--publish-rate", type=int, default=10)

    args = argparser.parse_args()

    if args.camera_name:
        camera_index = camera_names.index(args.camera_name)
    else:
        camera_index = None

    print("Camera system is starting up ...")

    if args.multi_process:
        camera_data = tricamera.MultiProcessData("tricamera", False)
    else:
        camera_data = tricamera.SingleProcessData()

        model = trifinger_object_tracking.py_object_tracker.get_model_by_name(
            args.cube_model
        )
        camera_driver = tricamera.TriCameraObjectTrackerDriver(
            *camera_names, cube_model=model, downsample_images=False
        )
        camera_backend = tricamera.Backend(camera_driver, camera_data)
    camera_frontend = tricamera.Frontend(camera_data)
    camera_params = [
        "/home/trifinger/workspace/src/trifinger_object_tracking/camera_params/camera_calib_60.yml",
        "/home/trifinger/workspace/src/trifinger_object_tracking/camera_params/camera_calib_180.yml",
        "/home/trifinger/workspace/src/trifinger_object_tracking/camera_params/camera_calib_300.yml",
    ]
    cube_visualizer = tricamera.CubeVisualizer(model, camera_params)
    lcm_publisher = CubePoseLcmPublisher()
    cube_target_subscriber = CubeTargetLcmSubscriber()

    print("Camera system is ready!")

    def _signal_handler(signal, frame):
        if not args.multi_process:
            camera_backend.shutdown()
        sys.exit(0)

    signal.signal(signal.SIGINT, _signal_handler)
    cur_timeindex = camera_frontend.get_current_timeindex()
    measure_camera_rate = time.perf_counter()

    while True:
        # waiting for incoming lcm message of cube target pose
        rfds, wfds, efds = select.select([cube_target_subscriber.lc.fileno()], [], [], 1e-4)
        if rfds:
            cube_target_subscriber.lc.handle()

        start_time = time.perf_counter()
        observation = camera_frontend.get_latest_observation()
        # images = [
        #     utils.convert_image(camera.image) for camera in observation.cameras
        # ]

        # # draw projected cube with the estimated pose
        # images = cube_visualizer.draw_cube(
        #     images, observation.object_pose, np.array([255, 100, 0]), False
        # )

        # # draw target cube
        # images = cube_visualizer.draw_cube(
        #     images,
        #     cube_target_subscriber.get_cube_target_pose(),
        #     np.array([102, 102, 255]),
        #     False,
        # )

        # stacked_image = np.hstack(images)
        # resized_stacked_image = cv2.resize(
        #     stacked_image, (0, 0), fx=0.5, fy=0.5
        # )

        # if args.live_viewer:
        #     cv2.imshow(" | ".join(camera_names), resized_stacked_image)
        #     # stop if either "q" or ESC is pressed
        #     if cv2.waitKey(1) in [ord("q"), 27]:  # 27 = ESC
        #         break
        elapsed_time = time.perf_counter() - start_time
        remaining_time = (1.0 / args.publish_rate) - elapsed_time
        latest_timeindex = camera_frontend.get_current_timeindex()
        if latest_timeindex > cur_timeindex:
            print(time.perf_counter() - measure_camera_rate)
            cur_timeindex = latest_timeindex

        if remaining_time > 0:
            time.sleep(remaining_time)
        lcm_publisher.pub_pose(
            observation.object_pose,
            int(time.perf_counter() * 1e6),
        )

    if not args.multi_process:
        camera_backend.shutdown()


if __name__ == "__main__":
    run_cube_pose_tracker()
