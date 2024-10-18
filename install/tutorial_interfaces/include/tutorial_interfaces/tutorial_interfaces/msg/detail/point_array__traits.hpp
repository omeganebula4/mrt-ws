// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from tutorial_interfaces:msg/PointArray.idl
// generated code does not contain a copyright notice

#ifndef TUTORIAL_INTERFACES__MSG__DETAIL__POINT_ARRAY__TRAITS_HPP_
#define TUTORIAL_INTERFACES__MSG__DETAIL__POINT_ARRAY__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "tutorial_interfaces/msg/detail/point_array__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'rowpoints'
#include "tutorial_interfaces/msg/detail/point__traits.hpp"

namespace tutorial_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const PointArray & msg,
  std::ostream & out)
{
  out << "{";
  // member: rowpoints
  {
    if (msg.rowpoints.size() == 0) {
      out << "rowpoints: []";
    } else {
      out << "rowpoints: [";
      size_t pending_items = msg.rowpoints.size();
      for (auto item : msg.rowpoints) {
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
  const PointArray & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: rowpoints
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.rowpoints.size() == 0) {
      out << "rowpoints: []\n";
    } else {
      out << "rowpoints:\n";
      for (auto item : msg.rowpoints) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PointArray & msg, bool use_flow_style = false)
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

}  // namespace tutorial_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use tutorial_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const tutorial_interfaces::msg::PointArray & msg,
  std::ostream & out, size_t indentation = 0)
{
  tutorial_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use tutorial_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const tutorial_interfaces::msg::PointArray & msg)
{
  return tutorial_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<tutorial_interfaces::msg::PointArray>()
{
  return "tutorial_interfaces::msg::PointArray";
}

template<>
inline const char * name<tutorial_interfaces::msg::PointArray>()
{
  return "tutorial_interfaces/msg/PointArray";
}

template<>
struct has_fixed_size<tutorial_interfaces::msg::PointArray>
  : std::integral_constant<bool, has_fixed_size<tutorial_interfaces::msg::Point>::value> {};

template<>
struct has_bounded_size<tutorial_interfaces::msg::PointArray>
  : std::integral_constant<bool, has_bounded_size<tutorial_interfaces::msg::Point>::value> {};

template<>
struct is_message<tutorial_interfaces::msg::PointArray>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TUTORIAL_INTERFACES__MSG__DETAIL__POINT_ARRAY__TRAITS_HPP_
