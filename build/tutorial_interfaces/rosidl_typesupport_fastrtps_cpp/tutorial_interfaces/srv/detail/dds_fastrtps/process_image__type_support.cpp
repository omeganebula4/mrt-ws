// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from tutorial_interfaces:srv/ProcessImage.idl
// generated code does not contain a copyright notice
#include "tutorial_interfaces/srv/detail/process_image__rosidl_typesupport_fastrtps_cpp.hpp"
#include "tutorial_interfaces/srv/detail/process_image__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions
namespace sensor_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const sensor_msgs::msg::Image &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  sensor_msgs::msg::Image &);
size_t get_serialized_size(
  const sensor_msgs::msg::Image &,
  size_t current_alignment);
size_t
max_serialized_size_Image(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace sensor_msgs


namespace tutorial_interfaces
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tutorial_interfaces
cdr_serialize(
  const tutorial_interfaces::srv::ProcessImage_Request & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: img
  sensor_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.img,
    cdr);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tutorial_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  tutorial_interfaces::srv::ProcessImage_Request & ros_message)
{
  // Member: img
  sensor_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.img);

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tutorial_interfaces
get_serialized_size(
  const tutorial_interfaces::srv::ProcessImage_Request & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: img

  current_alignment +=
    sensor_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.img, current_alignment);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tutorial_interfaces
max_serialized_size_ProcessImage_Request(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;


  // Member: img
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        sensor_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Image(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = tutorial_interfaces::srv::ProcessImage_Request;
    is_plain =
      (
      offsetof(DataType, img) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _ProcessImage_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const tutorial_interfaces::srv::ProcessImage_Request *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _ProcessImage_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<tutorial_interfaces::srv::ProcessImage_Request *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _ProcessImage_Request__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const tutorial_interfaces::srv::ProcessImage_Request *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _ProcessImage_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_ProcessImage_Request(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _ProcessImage_Request__callbacks = {
  "tutorial_interfaces::srv",
  "ProcessImage_Request",
  _ProcessImage_Request__cdr_serialize,
  _ProcessImage_Request__cdr_deserialize,
  _ProcessImage_Request__get_serialized_size,
  _ProcessImage_Request__max_serialized_size
};

static rosidl_message_type_support_t _ProcessImage_Request__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_ProcessImage_Request__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace tutorial_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_tutorial_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<tutorial_interfaces::srv::ProcessImage_Request>()
{
  return &tutorial_interfaces::srv::typesupport_fastrtps_cpp::_ProcessImage_Request__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, tutorial_interfaces, srv, ProcessImage_Request)() {
  return &tutorial_interfaces::srv::typesupport_fastrtps_cpp::_ProcessImage_Request__handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include <limits>
// already included above
// #include <stdexcept>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
// already included above
// #include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions
namespace tutorial_interfaces
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const tutorial_interfaces::msg::ImageBounds &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  tutorial_interfaces::msg::ImageBounds &);
size_t get_serialized_size(
  const tutorial_interfaces::msg::ImageBounds &,
  size_t current_alignment);
size_t
max_serialized_size_ImageBounds(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace tutorial_interfaces


namespace tutorial_interfaces
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tutorial_interfaces
cdr_serialize(
  const tutorial_interfaces::srv::ProcessImage_Response & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: imgbounds
  tutorial_interfaces::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.imgbounds,
    cdr);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tutorial_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  tutorial_interfaces::srv::ProcessImage_Response & ros_message)
{
  // Member: imgbounds
  tutorial_interfaces::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.imgbounds);

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tutorial_interfaces
get_serialized_size(
  const tutorial_interfaces::srv::ProcessImage_Response & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: imgbounds

  current_alignment +=
    tutorial_interfaces::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.imgbounds, current_alignment);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tutorial_interfaces
max_serialized_size_ProcessImage_Response(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;


  // Member: imgbounds
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        tutorial_interfaces::msg::typesupport_fastrtps_cpp::max_serialized_size_ImageBounds(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = tutorial_interfaces::srv::ProcessImage_Response;
    is_plain =
      (
      offsetof(DataType, imgbounds) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _ProcessImage_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const tutorial_interfaces::srv::ProcessImage_Response *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _ProcessImage_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<tutorial_interfaces::srv::ProcessImage_Response *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _ProcessImage_Response__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const tutorial_interfaces::srv::ProcessImage_Response *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _ProcessImage_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_ProcessImage_Response(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _ProcessImage_Response__callbacks = {
  "tutorial_interfaces::srv",
  "ProcessImage_Response",
  _ProcessImage_Response__cdr_serialize,
  _ProcessImage_Response__cdr_deserialize,
  _ProcessImage_Response__get_serialized_size,
  _ProcessImage_Response__max_serialized_size
};

static rosidl_message_type_support_t _ProcessImage_Response__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_ProcessImage_Response__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace tutorial_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_tutorial_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<tutorial_interfaces::srv::ProcessImage_Response>()
{
  return &tutorial_interfaces::srv::typesupport_fastrtps_cpp::_ProcessImage_Response__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, tutorial_interfaces, srv, ProcessImage_Response)() {
  return &tutorial_interfaces::srv::typesupport_fastrtps_cpp::_ProcessImage_Response__handle;
}

#ifdef __cplusplus
}
#endif

#include "rmw/error_handling.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support_decl.hpp"

namespace tutorial_interfaces
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

static service_type_support_callbacks_t _ProcessImage__callbacks = {
  "tutorial_interfaces::srv",
  "ProcessImage",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, tutorial_interfaces, srv, ProcessImage_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, tutorial_interfaces, srv, ProcessImage_Response)(),
};

static rosidl_service_type_support_t _ProcessImage__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_ProcessImage__callbacks,
  get_service_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace tutorial_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_tutorial_interfaces
const rosidl_service_type_support_t *
get_service_type_support_handle<tutorial_interfaces::srv::ProcessImage>()
{
  return &tutorial_interfaces::srv::typesupport_fastrtps_cpp::_ProcessImage__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, tutorial_interfaces, srv, ProcessImage)() {
  return &tutorial_interfaces::srv::typesupport_fastrtps_cpp::_ProcessImage__handle;
}

#ifdef __cplusplus
}
#endif
