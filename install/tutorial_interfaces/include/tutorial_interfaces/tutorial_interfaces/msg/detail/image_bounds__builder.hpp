// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tutorial_interfaces:msg/ImageBounds.idl
// generated code does not contain a copyright notice

#ifndef TUTORIAL_INTERFACES__MSG__DETAIL__IMAGE_BOUNDS__BUILDER_HPP_
#define TUTORIAL_INTERFACES__MSG__DETAIL__IMAGE_BOUNDS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tutorial_interfaces/msg/detail/image_bounds__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tutorial_interfaces
{

namespace msg
{

namespace builder
{

class Init_ImageBounds_bounds
{
public:
  explicit Init_ImageBounds_bounds(::tutorial_interfaces::msg::ImageBounds & msg)
  : msg_(msg)
  {}
  ::tutorial_interfaces::msg::ImageBounds bounds(::tutorial_interfaces::msg::ImageBounds::_bounds_type arg)
  {
    msg_.bounds = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tutorial_interfaces::msg::ImageBounds msg_;
};

class Init_ImageBounds_ids
{
public:
  Init_ImageBounds_ids()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ImageBounds_bounds ids(::tutorial_interfaces::msg::ImageBounds::_ids_type arg)
  {
    msg_.ids = std::move(arg);
    return Init_ImageBounds_bounds(msg_);
  }

private:
  ::tutorial_interfaces::msg::ImageBounds msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::tutorial_interfaces::msg::ImageBounds>()
{
  return tutorial_interfaces::msg::builder::Init_ImageBounds_ids();
}

}  // namespace tutorial_interfaces

#endif  // TUTORIAL_INTERFACES__MSG__DETAIL__IMAGE_BOUNDS__BUILDER_HPP_
