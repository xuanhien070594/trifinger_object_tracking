/**
 * @file
 * @copyright 2020, Max Planck Gesellschaft. All rights reserved.
 * @license BSD 3-clause
 */
#pragma once

#include <trifinger_object_tracking/color_segmenter.hpp>
#include <trifinger_object_tracking/cube_model.hpp>
#include <trifinger_object_tracking/cv_sub_images.hpp>
#include <trifinger_object_tracking/object_pose.hpp>
#include <trifinger_object_tracking/pose_detector.hpp>
#include <trifinger_object_tracking/scoped_timer.hpp>

namespace trifinger_object_tracking
{
/**
 * @brief Detect coloured cube in images from a three-camera setup.
 */
class CubeDetector
{
public:
    static constexpr unsigned int N_CAMERAS = 3;

    /**
     * @param cube_model The model that is used for detecting the cube.
     * @param camera_params Calibration parameters of the cameras.
     */
    CubeDetector(BaseCuboidModel::ConstPtr cube_model,
                 const std::array<trifinger_cameras::CameraParameters,
                                  N_CAMERAS> &camera_params);

    /**
     * @param cube_model The model that is used for detecting the cube.
     * @param camera_param_files Paths to the camera calibration files.
     */
    CubeDetector(BaseCuboidModel::ConstPtr cube_model,
                 const std::array<std::string, N_CAMERAS> &camera_param_files);

    ObjectPose detect_cube_single_thread(
        const std::array<cv::Mat, N_CAMERAS> &images);

    /**
     * @brief Detect cube in the given images
     *
     * @param images Images from cameras camera60, camera180, camera300.
     *
     * @return Pose of the cube.
     */
    ObjectPose detect_cube(const std::array<cv::Mat, N_CAMERAS> &images);

    /**
     * @brief Create debug image for the last call of detect_cube.
     *
     * @param fill_faces If true, the cube is drawn with filled faces, otherwise
     *     only a wire frame is drawn.
     * @return Aggregate image showing different stages of the cube detection.
     */
    cv::Mat create_debug_image(bool fill_faces = false) const;

private:
    BaseCuboidModel::ConstPtr cube_model_;
    std::array<ColorSegmenter, N_CAMERAS> color_segmenters_;
    PoseDetector pose_detector_;

    //! Convert Pose to ObjectPose
    static ObjectPose convert_pose(const Pose &pose);
};

/**
 * @brief Create cube detector for a TriFingerPro robot.
 *
 * Loads the camera calibration of the robot on which it is executed and creates
 * a CubeDetector instance for it.
 *
 * @param cube_model The model that is used for detecting the cube.
 */
CubeDetector create_trifinger_cube_detector(
    BaseCuboidModel::ConstPtr cube_model);

}  // namespace trifinger_object_tracking
