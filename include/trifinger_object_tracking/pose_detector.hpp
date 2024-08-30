#pragma once
#include <Eigen/Geometry>
#include <opencv2/core/eigen.hpp>
#include <opencv2/opencv.hpp>
#include <trifinger_cameras/camera_parameters.hpp>
#include <trifinger_object_tracking/cube_model.hpp>
#include <trifinger_object_tracking/types.hpp>

// ignore all warnings of optim (this is a third-party library)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wunused-parameter"

#define OPTIM_ENABLE_ARMA_WRAPPERS
#define OPTIM_DONT_USE_OPENMP
#include <optim/optim.hpp>

#pragma GCC diagnostic pop

namespace trifinger_object_tracking
{
struct Stats
{
    cv::Vec3f lower_bound;
    cv::Vec3f upper_bound;
    cv::Vec3f mean;
};

cv::Mat getPoseMatrix(cv::Point3f, cv::Point3f);

class PoseDetector
{
public:
    //! Number of cameras
    static constexpr unsigned int N_CAMERAS = 3;

    typedef std::array<std::vector<std::vector<cv::Point>>,
                       PoseDetector::N_CAMERAS>
        MasksPixels;

    PoseDetector(BaseCuboidModel::ConstPtr cube_model,
                 const std::array<trifinger_cameras::CameraParameters,
                                  N_CAMERAS> &camera_parameters);

    Pose find_pose(
        const std::array<std::vector<FaceColor>, N_CAMERAS> &dominant_colors,
        const std::array<std::vector<cv::Mat>, N_CAMERAS> &masks);

    // TODO which points are projected?
    std::vector<std::vector<cv::Point2f>> get_projected_points() const;

    /**
     * @brief Get corner indices of the visible faces.
     *
     * Determines which faces of the object is visible to the camera and returns
     * the corner indices of these faces.
     *
     * @param camera_idx Index of the camera.
     * @param cube_pose_world Pose of the cube in the world frame.
     *
     * @return For each visible face a pair of the face color and the list of
     *     the corner indices of the four corners of that face.
     */
    std::vector<std::pair<FaceColor, std::array<unsigned int, 4>>>
    get_visible_faces(unsigned int camera_idx,
                      const cv::Affine3f &cube_pose_world) const;

    /**
     * @brief Get corner indices of the visible faces.
     *
     * Overloaded version that used the last detected pose for the cube.
     * Call find_pose() first, otherwise the result is undefined!
     *
     * @param camera_idx Index of the camera.
     *
     * @return For each visible face a pair of the face color and the list of
     *     the corner indices of the four corners of that face.
     */
    std::vector<std::pair<FaceColor, std::array<unsigned int, 4>>>
    get_visible_faces(unsigned int camera_idx) const;

    unsigned int get_num_misclassified_pixels() const
    {
        return num_misclassified_pixels_;
    }

    float get_segmented_pixels_ratio() const
    {
        return segmented_pixels_ratio_;
    }

    float get_confidence() const
    {
        return confidence_;
    }

    void set_pose(const Pose &pose);

private:
    arma::vec pose_ = {0., 0., 0.0325, 0., 0., 0.};
    BaseCuboidModel::ConstPtr cube_model_;

    std::array<cv::Mat, N_CAMERAS> camera_matrices_;
    std::array<cv::Mat, N_CAMERAS> distortion_coeffs_;
    std::array<cv::Vec3d, N_CAMERAS> camera_orientations_;
    std::array<cv::Vec3d, N_CAMERAS> camera_translations_;

    cv::Mat corners_in_cube_frame_;
    cv::Mat reference_vector_normals_;

    Stats position_;
    Stats orientation_;

    //! Total number of pixels in one image (i.e. width*height).
    const unsigned int num_total_pixels_in_image_;

    //! @brief Number of misclassified pixels in the last call of find_pose().
    unsigned int num_misclassified_pixels_ = 0;
    float segmented_pixels_ratio_ = 0;
    float confidence_ = 0.0;

    void optimize_using_optim(
        const std::array<std::vector<FaceColor>, N_CAMERAS> &dominant_colors,
        const std::array<std::vector<cv::Mat>, N_CAMERAS> &masks);

    float cost_function(
        const cv::Vec3f &position,
        const cv::Vec3f &orientation,
        const std::array<std::vector<FaceColor>, N_CAMERAS> &dominant_colors,
        const MasksPixels &masks_pixels,
        const float distance_cost_scaling,
        const float invisibility_cost_scaling,
        const float height_cost_scaling);

    float compute_confidence(
        const cv::Vec3f &position,
        const cv::Vec3f &orientation,
        const std::array<std::vector<FaceColor>, N_CAMERAS> &dominant_colors,
        const MasksPixels &masks_pixels);

    void compute_color_visibility(
        const FaceColor &color,
        const cv::Mat &face_normals,
        const cv::Mat &cube_corners,
        bool *is_visible,
        float *face_normal_dot_camera_direction) const;

    void compute_face_normals_and_corners(const unsigned int camera_idx,
                                          const cv::Affine3f &cube_pose_world,
                                          cv::Mat *normals,
                                          cv::Mat *corners) const;

    bool is_face_visible(FaceColor color,
                         unsigned int camera_idx,
                         const cv::Affine3f &cube_pose_world,
                         float *out_dot_product = nullptr) const;
};

}  // namespace trifinger_object_tracking
