// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from tutorial_interfaces:srv/ProcessImage.idl
// generated code does not contain a copyright notice

#ifndef TUTORIAL_INTERFACES__SRV__DETAIL__PROCESS_IMAGE__TRAITS_HPP_
#define TUTORIAL_INTERFACES__SRV__DETAIL__PROCESS_IMAGE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "tutorial_interfaces/srv/detail/process_image__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'img'
#include "sensor_msgs/msg/detail/image__traits.hpp"

namespace tutorial_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const ProcessImage_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: img
  {
    out << "img: ";
    to_flow_style_yaml(msg.img, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ProcessImage_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: img
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "img:\n";
    to_block_style_yaml(msg.img, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ProcessImage_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace tutorial_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use tutorial_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const tutorial_interfaces::srv::ProcessImage_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  tutorial_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use tutorial_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const tutorial_interfaces::srv::ProcessImage_Request & msg)
{
  return tutorial_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<tutorial_interfaces::srv::ProcessImage_Request>()
{
  return "tutorial_interfaces::srv::ProcessImage_Request";
}

template<>
inline const char * name<tutorial_interfaces::srv::ProcessImage_Request>()
{
  return "tutorial_interfaces/srv/ProcessImage_Request";
}

template<>
struct has_fixed_size<tutorial_interfaces::srv::ProcessImage_Request>
  : std::integral_constant<bool, has_fixed_size<sensor_msgs::msg::Image>::value> {};

template<>
struct has_bounded_size<tutorial_interfaces::srv::ProcessImage_Request>
  : std::integral_constant<bool, has_bounded_size<sensor_msgs::msg::Image>::value> {};

template<>
struct is_message<tutorial_interfaces::srv::ProcessImage_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'imgbounds'
#include "tutorial_interfaces/msg/detail/image_bounds__traits.hpp"

namespace tutorial_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const ProcessImage_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: imgbounds
  {
    out << "imgbounds: ";
    to_flow_style_yaml(msg.imgbounds, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ProcessImage_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: imgbounds
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "imgbounds:\n";
    to_block_style_yaml(msg.imgbounds, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ProcessImage_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace tutorial_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use tutorial_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const tutorial_interfaces::srv::ProcessImage_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  tutorial_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use tutorial_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const tutorial_interfaces::srv::ProcessImage_Response & msg)
{
  return tutorial_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<tutorial_interfaces::srv::ProcessImage_Response>()
{
  return "tutorial_interfaces::srv::ProcessImage_Response";
}

template<>
inline const char * name<tutorial_interfaces::srv::ProcessImage_Response>()
{
  return "tutorial_interfaces/srv/ProcessImage_Response";
}

template<>
struct has_fixed_size<tutorial_interfaces::srv::ProcessImage_Response>
  : std::integral_constant<bool, has_fixed_size<tutorial_interfaces::msg::ImageBounds>::value> {};

template<>
struct has_bounded_size<tutorial_interfaces::srv::ProcessImage_Response>
  : std::integral_constant<bool, has_bounded_size<tutorial_interfaces::msg::ImageBounds>::value> {};

template<>
struct is_message<tutorial_interfaces::srv::ProcessImage_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<tutorial_interfaces::srv::ProcessImage>()
{
  return "tutorial_interfaces::srv::ProcessImage";
}

template<>
inline const char * name<tutorial_interfaces::srv::ProcessImage>()
{
  return "tutorial_interfaces/srv/ProcessImage";
}

template<>
struct has_fixed_size<tutorial_interfaces::srv::ProcessImage>
  : std::integral_constant<
    bool,
    has_fixed_size<tutorial_interfaces::srv::ProcessImage_Request>::value &&
    has_fixed_size<tutorial_interfaces::srv::ProcessImage_Response>::value
  >
{
};

template<>
struct has_bounded_size<tutorial_interfaces::srv::ProcessImage>
  : std::integral_constant<
    bool,
    has_bounded_size<tutorial_interfaces::srv::ProcessImage_Request>::value &&
    has_bounded_size<tutorial_interfaces::srv::ProcessImage_Response>::value
  >
{
};

template<>
struct is_service<tutorial_interfaces::srv::ProcessImage>
  : std::true_type
{
};

template<>
struct is_service_request<tutorial_interfaces::srv::ProcessImage_Request>
  : std::true_type
{
};

template<>
struct is_service_response<tutorial_interfaces::srv::ProcessImage_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // TUTORIAL_INTERFACES__SRV__DETAIL__PROCESS_IMAGE__TRAITS_HPP_
