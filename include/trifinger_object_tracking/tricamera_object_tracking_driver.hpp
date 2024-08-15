/**
 * @file
 * @copyright 2020, Max Planck Gesellschaft. All rights reserved.
 * @license BSD 3-clause
 */
#pragma once

#include <chrono>
#include <memory>

#include <robot_interfaces/sensors/sensor_driver.hpp>
#include <trifinger_cameras/pylon_driver.hpp>
#include <trifinger_object_tracking/cube_detector.hpp>
#include <trifinger_object_tracking/tricamera_object_observation.hpp>

namespace trifinger_object_tracking
{
/**
 * @brief Driver to create three instances of the PylonDriver
 * and get observations from them.
 */
class TriCameraObjectTrackerDriver
    : public robot_interfaces::SensorDriver<TriCameraObjectObservation>
{
public:
    //! @brief Rate at which images are acquired.
    static constexpr std::chrono::milliseconds rate =
        std::chrono::milliseconds(100);

    static constexpr unsigned int N_CAMERAS = 3;

    /**
     * @param device_id_1 device user id of first camera
     * @param device_id_2 likewise, the 2nd's
     * @param device_id_3 and the 3rd's
     * @param cube_model The model that is used for detecting the cube.
     * @param downsample_images If set to true (default), images are
     *     downsampled to half their original size.
     */
    TriCameraObjectTrackerDriver(const std::string& device_id_1,
                                 const std::string& device_id_2,
                                 const std::string& device_id_3,
                                 BaseCuboidModel::ConstPtr cube_model,
                                 bool downsample_images = true);

    /**
     * @brief Get the latest observation from the three cameras.
     * @return TricameraObservation
     */
    TriCameraObjectObservation get_observation();

    /**
     * @brief Fetch an observation from the cameras and create a debug image.
     *
     * The debug image shows various visualisations of the object detection, see
     * @ref CubeDetector::create_debug_image.
     *
     * @see CubeDetector::create_debug_image
     * @param fill_faces
     *
     * @return Debug image showing the result of the object detection.
     */
    cv::Mat get_debug_image(bool fill_faces = false);

private:
    std::array<trifinger_cameras::PylonDriver, N_CAMERAS> cameras_;
    trifinger_object_tracking::CubeDetector cube_detector_;
    std::chrono::time_point<std::chrono::system_clock> last_update_time_;
    bool downsample_images_;

    ObjectPose previous_pose_;
};

}  // namespace trifinger_object_tracking
