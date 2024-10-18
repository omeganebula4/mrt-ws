// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from aruco_detection_interfaces:msg/ImageBounds.idl
// generated code does not contain a copyright notice

#ifndef ARUCO_DETECTION_INTERFACES__MSG__DETAIL__IMAGE_BOUNDS__BUILDER_HPP_
#define ARUCO_DETECTION_INTERFACES__MSG__DETAIL__IMAGE_BOUNDS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "aruco_detection_interfaces/msg/detail/image_bounds__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace aruco_detection_interfaces
{

namespace msg
{

namespace builder
{

class Init_ImageBounds_bounds
{
public:
  explicit Init_ImageBounds_bounds(::aruco_detection_interfaces::msg::ImageBounds & msg)
  : msg_(msg)
  {}
  ::aruco_detection_interfaces::msg::ImageBounds bounds(::aruco_detection_interfaces::msg::ImageBounds::_bounds_type arg)
  {
    msg_.bounds = std::move(arg);
    return std::move(msg_);
  }

private:
  ::aruco_detection_interfaces::msg::ImageBounds msg_;
};

class Init_ImageBounds_ids
{
public:
  Init_ImageBounds_ids()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ImageBounds_bounds ids(::aruco_detection_interfaces::msg::ImageBounds::_ids_type arg)
  {
    msg_.ids = std::move(arg);
    return Init_ImageBounds_bounds(msg_);
  }

private:
  ::aruco_detection_interfaces::msg::ImageBounds msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::aruco_detection_interfaces::msg::ImageBounds>()
{
  return aruco_detection_interfaces::msg::builder::Init_ImageBounds_ids();
}

}  // namespace aruco_detection_interfaces

#endif  // ARUCO_DETECTION_INTERFACES__MSG__DETAIL__IMAGE_BOUNDS__BUILDER_HPP_
