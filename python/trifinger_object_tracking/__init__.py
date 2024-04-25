import cv_bridge
import rclpy
from sensor_msgs.msg import Image
from geometry_msgs.msg import Pose
from trifinger_cameras import utils
from rclpy.callback_groups import MutuallyExclusiveCallbackGroup

CAMERA_NAMES = ["camera60", "camera180", "camera300"]


class CubePosePublisher(rclpy.Node):
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
