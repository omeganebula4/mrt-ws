// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from aruco_detection_interfaces:msg/ImageBounds.idl
// generated code does not contain a copyright notice

#ifndef ARUCO_DETECTION_INTERFACES__MSG__DETAIL__IMAGE_BOUNDS__TRAITS_HPP_
#define ARUCO_DETECTION_INTERFACES__MSG__DETAIL__IMAGE_BOUNDS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "aruco_detection_interfaces/msg/detail/image_bounds__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'bounds'
#include "aruco_detection_interfaces/msg/detail/point_array__traits.hpp"

namespace aruco_detection_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const ImageBounds & msg,
  std::ostream & out)
{
  out << "{";
  // member: ids
  {
    if (msg.ids.size() == 0) {
      out << "ids: []";
    } else {
      out << "ids: [";
      size_t pending_items = msg.ids.size();
      for (auto item : msg.ids) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: bounds
  {
    if (msg.bounds.size() == 0) {
      out << "bounds: []";
    } else {
      out << "bounds: [";
      size_t pending_items = msg.bounds.size();
      for (auto item : msg.bounds) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ImageBounds & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: ids
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.ids.size() == 0) {
      out << "ids: []\n";
    } else {
      out << "ids:\n";
      for (auto item : msg.ids) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: bounds
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.bounds.size() == 0) {
      out << "bounds: []\n";
    } else {
      out << "bounds:\n";
      for (auto item : msg.bounds) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ImageBounds & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace aruco_detection_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use aruco_detection_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const aruco_detection_interfaces::msg::ImageBounds & msg,
  std::ostream & out, size_t indentation = 0)
{
  aruco_detection_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use aruco_detection_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const aruco_detection_interfaces::msg::ImageBounds & msg)
{
  return aruco_detection_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<aruco_detection_interfaces::msg::ImageBounds>()
{
  return "aruco_detection_interfaces::msg::ImageBounds";
}

template<>
inline const char * name<aruco_detection_interfaces::msg::ImageBounds>()
{
  return "aruco_detection_interfaces/msg/ImageBounds";
}

template<>
struct has_fixed_size<aruco_detection_interfaces::msg::ImageBounds>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<aruco_detection_interfaces::msg::ImageBounds>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<aruco_detection_interfaces::msg::ImageBounds>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ARUCO_DETECTION_INTERFACES__MSG__DETAIL__IMAGE_BOUNDS__TRAITS_HPP_
