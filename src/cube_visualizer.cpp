#include <trifinger_object_tracking/cube_visualizer.hpp>

namespace trifinger_object_tracking
{
std::array<cv::Mat, CubeVisualizer::N_CAMERAS> CubeVisualizer::draw_cube(
    const std::array<cv::Mat, CubeVisualizer::N_CAMERAS> &images,
    const ObjectPose &object_pose,
    const cv::Scalar &color,
    bool fill,
    float alpha)
{
    std::array<cv::Mat, CubeVisualizer::N_CAMERAS> out_images;

    auto projected_cube_corners = get_projected_points(object_pose);
    for (size_t i = 0; i < N_CAMERAS; i++)
    {
        out_images[i] = images[i].clone();
        std::vector<cv::Point2f> imgpoints = projected_cube_corners[i];

        if (fill)
        {
            draw_filled_cube(out_images[i], i, pose_detector_, imgpoints);
        }
        else
        {
            draw_cube_wireframe(out_images[i], i, color, imgpoints);
        }

        if (alpha < 1)
        {
            cv::addWeighted(
                out_images[i], alpha, images[i], 1 - alpha, 0, out_images[i]);
        }
    }

    return out_images;
}

std::array<cv::Mat, CubeVisualizer::N_CAMERAS> CubeVisualizer::draw_circle(
    const std::array<cv::Mat, CubeVisualizer::N_CAMERAS> &images,
    const ObjectPose &object_pose,
    bool fill,
    float alpha,
    float scale)
{
    std::array<cv::Mat, CubeVisualizer::N_CAMERAS> out_images;
    int thickness = fill ? cv::FILLED : 2;

    auto projected_cube_corners = get_projected_points(object_pose);
    for (size_t i = 0; i < N_CAMERAS; i++)
    {
        out_images[i] = images[i].clone();
        std::vector<cv::Point2f> imgpoints = projected_cube_corners[i];
        cv::Point2f center;
        float radius;

        cv::minEnclosingCircle(imgpoints, center, radius);
        radius *= scale;
        cv::circle(
            out_images[i], center, radius, cv::Scalar(50, 180, 0), thickness);

        if (alpha < 1)
        {
            cv::addWeighted(
                out_images[i], alpha, images[i], 1 - alpha, 0, out_images[i]);
        }
    }

    return out_images;
}

void CubeVisualizer::draw_filled_cube(cv::Mat &image,
                                      size_t camera_index,
                                      const PoseDetector &pose_detector,
                                      const std::vector<cv::Point2f> &imgpoints)
{
    for (auto [color, corner_indices] :
         pose_detector.get_visible_faces(camera_index))
    {
        auto rgb = cube_model_->get_rgb(color);

        std::vector<cv::Point> corners = {imgpoints[corner_indices[0]],
                                          imgpoints[corner_indices[1]],
                                          imgpoints[corner_indices[2]],
                                          imgpoints[corner_indices[3]]};

        cv::fillConvexPoly(image, corners, cv::Scalar(rgb[2], rgb[1], rgb[0]));
    }
}

void CubeVisualizer::draw_cube_wireframe(
    cv::Mat &image,
    size_t camera_index,
    const cv::Scalar &color,
    const std::vector<cv::Point2f> &imgpoints)
{
    // draw all the cube edges in the out_images[i]
    for (auto &it : cube_model_->edges)
    {
        cv::line(image,
                 imgpoints[it.second.c1],
                 imgpoints[it.second.c2],
                 //cv::Scalar(100, 50, 0),
                 color,
                 2);
    }

    // over-draw with the visible edges in a brighter colour
    for (auto [color, corner_indices] :
         pose_detector_.get_visible_faces(camera_index))
    {
        (void)color;  // suppress unused warning

        for (size_t ci = 0; ci < 4; ci++)
        {
            cv::line(image,
                     imgpoints[corner_indices[ci]],
                     imgpoints[corner_indices[(ci + 1) % 4]],
                     color,
                     //cv::Scalar(255, 100, 0),
                     2);
        }
    }
}

std::vector<std::vector<cv::Point2f>> CubeVisualizer::get_projected_points(
    const ObjectPose &object_pose)
{
    std::array<cv::Mat, CubeVisualizer::N_CAMERAS> out_images;

    cv::Vec3d position, rotvec;
    cv::eigen2cv(object_pose.position, position);

    // convert quaternion to rotvec
    double theta = 2 * std::acos(object_pose.orientation[3]);
    Eigen::Vector3d eigen_rotvec;
    if (theta == 0)
    {
        eigen_rotvec << 0, 0, 0;
    }
    else
    {
        eigen_rotvec =
            theta / std::sin(theta / 2) * object_pose.orientation.head<3>();
    }
    cv::eigen2cv(eigen_rotvec, rotvec);

    Pose pose(position, rotvec, object_pose.confidence);

    pose_detector_.set_pose(pose);

    return pose_detector_.get_projected_points();
}

}  // namespace trifinger_object_tracking
