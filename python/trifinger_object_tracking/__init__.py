import cv_bridge
import rclpy
import lcm
import numpy as np
from rclpy.node import Node
from sensor_msgs.msg import Image
from geometry_msgs.msg import Pose
from trifinger_cameras import utils
from rclpy.callback_groups import MutuallyExclusiveCallbackGroup

from lcmt_object_state import lcmt_object_state
from lcmt_image import lcmt_image

CAMERA_NAMES = ["camera60", "camera180", "camera300"]


class CubePosePublisher(Node):
    def __init__(self, camera_frontend, cube_visualizer):
        super().__init__("cube_pose_publisher")
        self.cv_bridge_ = cv_bridge.CvBridge()
        self.camera_frontend = camera_frontend
        self.cube_visualizer = cube_visualizer
        self.cube_pose_publisher_ = self.create_publisher(
            Pose, "/trifinger/cube_object_state", 10
        )
        self.camera60_cube_imposed_img_pubisher_ = self.create_publisher(
            Image, "/camera60/cube_imposed_img", 10
        )
        self.camera180_cube_imposed_img_pubisher_ = self.create_publisher(
            Image, "/camera180/cube_imposed_img", 10
        )
        self.camera300_cube_imposed_img_pubisher_ = self.create_publisher(
            Image, "/camera300/cube_imposed_img", 10
        )
        cube_pose_publish_cb_group = MutuallyExclusiveCallbackGroup()

        timer_period = 1e-1  # seconds (10Hz)
        self.timer = self.create_timer(
            timer_period,
            self.cube_pose_pub_callback,
            callback_group=cube_pose_publish_cb_group,
        )

    def cube_pose_pub_callback(self):
        # retrieve cube observation from backend.
        observation = self.camera_frontend.get_latest_observation()
        cube_pose = observation.object_pose
        images = [
            utils.convert_image(camera.image) for camera in observation.cameras
        ]

        # reproject cube to the raw images given estimated cube poses.
        cube_imposed_images = self.cube_visualizer.draw_cube(
            images, cube_pose, fill=False
        )

        # publish annotated images
        self.camera60_cube_imposed_img_pubisher_.publish(
            self.cv_bridge_.cv2_to_imgmsg(cube_imposed_images[0], "bgr8")
        )
        self.camera180_cube_imposed_img_pubisher_.publish(
            self.cv_bridge_.cv2_to_imgmsg(cube_imposed_images[1], "bgr8")
        )
        self.camera300_cube_imposed_img_pubisher_.publish(
            self.cv_bridge_.cv2_to_imgmsg(cube_imposed_images[2], "bgr8")
        )

        # publish cube poses.
        msg = Pose()
        msg.position.x = cube_pose.position[0]
        msg.position.y = cube_pose.position[1]
        msg.position.z = cube_pose.position[2]
        msg.orientation.x = cube_pose.orientation[0]
        msg.orientation.y = cube_pose.orientation[1]
        msg.orientation.z = cube_pose.orientation[2]
        msg.orientation.w = cube_pose.orientation[3]
        self.cube_pose_publisher_.publish(msg)


class CubePoseLcmPublisher(Node):
    def __init__(self):
        self.cube_pose_lcm_channel = "CUBE_STATE"
        self.cube_image_lcm_channel = "CUBE_IMAGE"
        self.lc = lcm.LCM()
        self.cv_bridge_ = cv_bridge.CvBridge()

    def publish(self, cube_pose, images, timestamp):
        # publish cube poses.
        pose_msg = lcmt_object_state()
        pose_msg.utime = timestamp
        pose_msg.num_positions = 7
        pose_msg.num_velocities = 6
        pose_msg.position_names = [
            "cube_qw",
            "cube_qx",
            "cube_qy",
            "cube_qz",
            "cube_x",
            "cube_y",
            "cube_z",
        ]
        pose_msg.velocity_names = [
            "cube_wx",
            "cube_wy",
            "cube_wz",
            "cube_vx",
            "cube_vy",
            "cube_vz",
        ]
        pose_msg.position = np.concatenate(
            [
                cube_pose.orientation[[3]],
                cube_pose.orientation[:3],
                cube_pose.position,
            ]
        ).tolist()
        pose_msg.velocity = np.zeros(pose_msg.num_velocities).tolist()
        self.lc.publish(self.cube_pose_lcm_channel, pose_msg.encode())

        # publish images
        img_msg = self.cv2_image_to_lcm(images, "bgr8", timestamp)
        self.lc.publish(self.cube_image_lcm_channel, img_msg.encode())

    def cv2_image_to_lcm(self, cvim, encoding="passthrough", timestamp=None):
        if not isinstance(cvim, (np.ndarray, np.generic)):
            raise TypeError("Your input type is not a numpy array")
        img_msg = lcmt_image()
        img_msg.height = cvim.shape[0]
        img_msg.width = cvim.shape[1]

        if len(cvim.shape) < 3:
            cv_type = self.cv_bridge_.dtype_with_channels_to_cvtype2(
                cvim.dtype, 1
            )
        else:
            cv_type = self.cv_bridge_.dtype_with_channels_to_cvtype2(
                cvim.dtype, cvim.shape[2]
            )

        if encoding == "passthrough":
            img_msg.encoding = cv_type
        else:
            img_msg.encoding = encoding
            # Verify that the supplied encoding is compatible with the type of the OpenCV image
            if (
                self.cv_bridge_.cvtype_to_name[
                    self.cv_bridge_.encoding_to_cvtype2(encoding)
                ]
                != cv_type
            ):
                raise CvBridgeError(
                    "encoding specified as %s, but image has incompatible type %s"
                    % (encoding, cv_type)
                )
        if cvim.dtype.byteorder == ">":
            img_msg.is_bigendian = True
        data = cvim.tobytes()
        img_msg.size = len(data)
        img_msg.data = data

        return img_msg
