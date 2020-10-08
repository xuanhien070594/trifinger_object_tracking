/**
 * @file
 * @brief Wrapper on the Pylon Driver to synchronise three pylon dependent
 * cameras.
 * @copyright 2020, Max Planck Gesellschaft. All rights reserved.
 * @license BSD 3-clause
 */
#include <trifinger_object_tracking/tricamera_object_tracking_driver.hpp>

#include <cmath>
#include <thread>

#include <ros/package.h>
#include <opencv2/core/eigen.hpp>

#include <trifinger_cameras/parse_yml.h>

namespace trifinger_object_tracking
{
// this needs to be declared here...
constexpr std::chrono::milliseconds TriCameraObjectTrackerDriver::rate;

TriCameraObjectTrackerDriver::TriCameraObjectTrackerDriver(
    const std::string& device_id_1,
    const std::string& device_id_2,
    const std::string& device_id_3,
    bool downsample_images)
    : last_update_time_(std::chrono::system_clock::now()),
      downsample_images_(downsample_images),
      cameras_{trifinger_cameras::PylonDriver(device_id_1, false),
               trifinger_cameras::PylonDriver(device_id_2, false),
               trifinger_cameras::PylonDriver(device_id_3, false)}
{
    std::string model_directory =
        ros::package::getPath("trifinger_object_tracking") + "/data";

    std::array<trifinger_cameras::CameraParameters, 3> camera_params;
    std::string camera_name;
    bool success;
    success = trifinger_cameras::readCalibrationYml(
        "/etc/trifingerpro/camera60_cropped.yml",
        camera_name,
        camera_params[0]);
    if (!success)
    {
        throw std::runtime_error(
            "Failed to load calibration parameters of camera60.");
    }
    if (camera_name != "camera60")
    {
        throw std::runtime_error(
            "Camera name in calibration file does not match with camera60.");
    }

    success = trifinger_cameras::readCalibrationYml(
        "/etc/trifingerpro/camera180_cropped.yml",
        camera_name,
        camera_params[1]);
    if (!success)
    {
        throw std::runtime_error(
            "Failed to load calibration parameters of camera180.");
    }
    if (camera_name != "camera180")
    {
        throw std::runtime_error(
            "Camera name in calibration file does not match with camera180.");
    }

    success = trifinger_cameras::readCalibrationYml(
        "/etc/trifingerpro/camera300_cropped.yml",
        camera_name,
        camera_params[2]);
    if (!success)
    {
        throw std::runtime_error(
            "Failed to load calibration parameters of camera300.");
    }
    if (camera_name != "camera300")
    {
        throw std::runtime_error(
            "Camera name in calibration file does not match with camera300.");
    }

    cube_detector_ = std::make_unique<trifinger_object_tracking::CubeDetector>(
        model_directory, camera_params);
}

TriCameraObjectObservation TriCameraObjectTrackerDriver::get_observation()
{
    last_update_time_ += this->rate;
    std::this_thread::sleep_until(last_update_time_);

    std::array<cv::Mat, N_CAMERAS> full_res_images;
    TriCameraObjectObservation observation;

    for (size_t i = 0; i < N_CAMERAS; i++)
    {
        observation.cameras[i] = cameras_[i].get_observation();

        cv::cvtColor(observation.cameras[i].image,
                     full_res_images[i],
                     cv::COLOR_BayerBG2BGR);

        // downsample observation
        if (downsample_images_)
        {
            observation.cameras[i].image =
                trifinger_cameras::PylonDriver::downsample_raw_image(
                    observation.cameras[i].image);
        }
    }

    // Until object tracker is ready, simply return a fixed pose here
    Pose cube_pose(cv::Vec3f(0, 0, 0.0325), cv::Vec3f(0, 0, 0));
    // Pose cube_pose = cube_detector_->detect_cube(full_res_images);

    // convert rotation vector to quaternion
    // http://www.euclideanspace.com/maths/geometry/rotations/conversions/angleToQuaternion/
    //
    //     qx = ax * sin(angle/2)
    //     qy = ay * sin(angle/2)
    //     qz = az * sin(angle/2)
    //     qw = cos(angle/2)
    //
    float angle = cv::norm(cube_pose.rotation);
    cube_pose.rotation *= std::sin(angle / 2) / angle;
    cv::Vec4d quaternion(cube_pose.rotation[0],
                         cube_pose.rotation[1],
                         cube_pose.rotation[2],
                         std::cos(angle / 2));

    cv::cv2eigen(static_cast<cv::Vec3d>(cube_pose.translation),
                 observation.object_pose.position);
    cv::cv2eigen(quaternion, observation.object_pose.orientation);

    // FIXME
    observation.object_pose.confidence = 0;

    return observation;
}

}  // namespace trifinger_object_tracking
