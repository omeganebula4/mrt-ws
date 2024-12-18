// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from aruco_detection_interfaces:msg/Point.idl
// generated code does not contain a copyright notice

#ifndef ARUCO_DETECTION_INTERFACES__MSG__DETAIL__POINT__TRAITS_HPP_
#define ARUCO_DETECTION_INTERFACES__MSG__DETAIL__POINT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "aruco_detection_interfaces/msg/detail/point__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace aruco_detection_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const Point & msg,
  std::ostream & out)
{
  out << "{";
  // member: coords
  {
    if (msg.coords.size() == 0) {
      out << "coords: []";
    } else {
      out << "coords: [";
      size_t pending_items = msg.coords.size();
      for (auto item : msg.coords) {
        rosidl_generator_traits::value_to_yaml(item, out);
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
  const Point & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: coords
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.coords.size() == 0) {
      out << "coords: []\n";
    } else {
      out << "coords:\n";
      for (auto item : msg.coords) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Point & msg, bool use_flow_style = false)
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
  const aruco_detection_interfaces::msg::Point & msg,
  std::ostream & out, size_t indentation = 0)
{
  aruco_detection_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use aruco_detection_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const aruco_detection_interfaces::msg::Point & msg)
{
  return aruco_detection_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<aruco_detection_interfaces::msg::Point>()
{
  return "aruco_detection_interfaces::msg::Point";
}

template<>
inline const char * name<aruco_detection_interfaces::msg::Point>()
{
  return "aruco_detection_interfaces/msg/Point";
}

template<>
struct has_fixed_size<aruco_detection_interfaces::msg::Point>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<aruco_detection_interfaces::msg::Point>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<aruco_detection_interfaces::msg::Point>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ARUCO_DETECTION_INTERFACES__MSG__DETAIL__POINT__TRAITS_HPP_
