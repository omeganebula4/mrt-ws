// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from aruco_detection_interfaces:msg/PointArray.idl
// generated code does not contain a copyright notice

#ifndef ARUCO_DETECTION_INTERFACES__MSG__DETAIL__POINT_ARRAY__BUILDER_HPP_
#define ARUCO_DETECTION_INTERFACES__MSG__DETAIL__POINT_ARRAY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "aruco_detection_interfaces/msg/detail/point_array__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace aruco_detection_interfaces
{

namespace msg
{

namespace builder
{

class Init_PointArray_rowpoints
{
public:
  Init_PointArray_rowpoints()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::aruco_detection_interfaces::msg::PointArray rowpoints(::aruco_detection_interfaces::msg::PointArray::_rowpoints_type arg)
  {
    msg_.rowpoints = std::move(arg);
    return std::move(msg_);
  }

private:
  ::aruco_detection_interfaces::msg::PointArray msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::aruco_detection_interfaces::msg::PointArray>()
{
  return aruco_detection_interfaces::msg::builder::Init_PointArray_rowpoints();
}

}  // namespace aruco_detection_interfaces

#endif  // ARUCO_DETECTION_INTERFACES__MSG__DETAIL__POINT_ARRAY__BUILDER_HPP_
