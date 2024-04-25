#!/usr/bin/env python3
import argparse
import time
import os

import numpy as np
import cv2
import yaml

from ament_index_python.packages import get_package_share_directory

import trifinger_object_tracking.py_object_tracker
import trifinger_object_tracking.py_tricamera_types as tricamera
from trifinger_cameras.utils import convert_image


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
    args = argparser.parse_args()

    if args.camera_name:
        camera_index = camera_names.index(args.camera_name)
    else:
        camera_index = None

    if args.multi_process:
        camera_data = tricamera.MultiProcessData("tricamera", False)
    else:
        camera_data = tricamera.SingleProcessData()

        model = trifinger_object_tracking.py_object_tracker.get_model_by_name(
            args.cube_model
        )
        camera_driver = tricamera.TriCameraObjectTrackerDriver(
            *camera_names,
            cube_model=model,
            downsample_images=False
        )
        camera_backend = tricamera.Backend(camera_driver, camera_data)
    camera_frontend = tricamera.Frontend(camera_data)
    camera_params = ["/home/src/trifinger_object_tracking/camera_params/camera_calib_60.yml", \
                     "/home/src/trifinger_object_tracking/camera_params/camera_calib_180.yml", \
                     "/home/src/trifinger_object_tracking/camera_params/camera_calib_300.yml"]
    cube_visualizer = tricamera.CubeVisualizer(model, camera_params)

    while True:
        obs = camera_frontend.get_latest_observation()
        object_pose = obs.object_pose
        #print("Object position:", np.round(cube_position[:3], 3))
        #print("Object orientation:", np.round(cube_orientation[:4], 3))
        images = [convert_image(camera.image) for camera in obs.cameras]
        imposed_cube_images = cube_visualizer.draw_cube(images, object_pose, fill=False)

        for i, name in enumerate(camera_names):
            cv2.imshow(name, imposed_cube_images[i])

        if cv2.waitKey(90) in [ord("q"), 27]:
            break

    if not args.multi_process:
        camera_backend.shutdown()


if __name__ == "__main__":
    run_cube_pose_tracker()
