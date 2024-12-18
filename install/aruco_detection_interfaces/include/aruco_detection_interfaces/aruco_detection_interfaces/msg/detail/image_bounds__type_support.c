// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from aruco_detection_interfaces:msg/ImageBounds.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "aruco_detection_interfaces/msg/detail/image_bounds__rosidl_typesupport_introspection_c.h"
#include "aruco_detection_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "aruco_detection_interfaces/msg/detail/image_bounds__functions.h"
#include "aruco_detection_interfaces/msg/detail/image_bounds__struct.h"


// Include directives for member types
// Member `ids`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `bounds`
#include "aruco_detection_interfaces/msg/point_array.h"
// Member `bounds`
#include "aruco_detection_interfaces/msg/detail/point_array__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void aruco_detection_interfaces__msg__ImageBounds__rosidl_typesupport_introspection_c__ImageBounds_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  aruco_detection_interfaces__msg__ImageBounds__init(message_memory);
}

void aruco_detection_interfaces__msg__ImageBounds__rosidl_typesupport_introspection_c__ImageBounds_fini_function(void * message_memory)
{
  aruco_detection_interfaces__msg__ImageBounds__fini(message_memory);
}

size_t aruco_detection_interfaces__msg__ImageBounds__rosidl_typesupport_introspection_c__size_function__ImageBounds__ids(
  const void * untyped_member)
{
  const rosidl_runtime_c__uint64__Sequence * member =
    (const rosidl_runtime_c__uint64__Sequence *)(untyped_member);
  return member->size;
}

const void * aruco_detection_interfaces__msg__ImageBounds__rosidl_typesupport_introspection_c__get_const_function__ImageBounds__ids(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__uint64__Sequence * member =
    (const rosidl_runtime_c__uint64__Sequence *)(untyped_member);
  return &member->data[index];
}

void * aruco_detection_interfaces__msg__ImageBounds__rosidl_typesupport_introspection_c__get_function__ImageBounds__ids(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__uint64__Sequence * member =
    (rosidl_runtime_c__uint64__Sequence *)(untyped_member);
  return &member->data[index];
}

void aruco_detection_interfaces__msg__ImageBounds__rosidl_typesupport_introspection_c__fetch_function__ImageBounds__ids(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint64_t * item =
    ((const uint64_t *)
    aruco_detection_interfaces__msg__ImageBounds__rosidl_typesupport_introspection_c__get_const_function__ImageBounds__ids(untyped_member, index));
  uint64_t * value =
    (uint64_t *)(untyped_value);
  *value = *item;
}

void aruco_detection_interfaces__msg__ImageBounds__rosidl_typesupport_introspection_c__assign_function__ImageBounds__ids(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint64_t * item =
    ((uint64_t *)
    aruco_detection_interfaces__msg__ImageBounds__rosidl_typesupport_introspection_c__get_function__ImageBounds__ids(untyped_member, index));
  const uint64_t * value =
    (const uint64_t *)(untyped_value);
  *item = *value;
}

bool aruco_detection_interfaces__msg__ImageBounds__rosidl_typesupport_introspection_c__resize_function__ImageBounds__ids(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__uint64__Sequence * member =
    (rosidl_runtime_c__uint64__Sequence *)(untyped_member);
  rosidl_runtime_c__uint64__Sequence__fini(member);
  return rosidl_runtime_c__uint64__Sequence__init(member, size);
}

size_t aruco_detection_interfaces__msg__ImageBounds__rosidl_typesupport_introspection_c__size_function__ImageBounds__bounds(
  const void * untyped_member)
{
  const aruco_detection_interfaces__msg__PointArray__Sequence * member =
    (const aruco_detection_interfaces__msg__PointArray__Sequence *)(untyped_member);
  return member->size;
}

const void * aruco_detection_interfaces__msg__ImageBounds__rosidl_typesupport_introspection_c__get_const_function__ImageBounds__bounds(
  const void * untyped_member, size_t index)
{
  const aruco_detection_interfaces__msg__PointArray__Sequence * member =
    (const aruco_detection_interfaces__msg__PointArray__Sequence *)(untyped_member);
  return &member->data[index];
}

void * aruco_detection_interfaces__msg__ImageBounds__rosidl_typesupport_introspection_c__get_function__ImageBounds__bounds(
  void * untyped_member, size_t index)
{
  aruco_detection_interfaces__msg__PointArray__Sequence * member =
    (aruco_detection_interfaces__msg__PointArray__Sequence *)(untyped_member);
  return &member->data[index];
}

void aruco_detection_interfaces__msg__ImageBounds__rosidl_typesupport_introspection_c__fetch_function__ImageBounds__bounds(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const aruco_detection_interfaces__msg__PointArray * item =
    ((const aruco_detection_interfaces__msg__PointArray *)
    aruco_detection_interfaces__msg__ImageBounds__rosidl_typesupport_introspection_c__get_const_function__ImageBounds__bounds(untyped_member, index));
  aruco_detection_interfaces__msg__PointArray * value =
    (aruco_detection_interfaces__msg__PointArray *)(untyped_value);
  *value = *item;
}

void aruco_detection_interfaces__msg__ImageBounds__rosidl_typesupport_introspection_c__assign_function__ImageBounds__bounds(
  void * untyped_member, size_t index, const void * untyped_value)
{
  aruco_detection_interfaces__msg__PointArray * item =
    ((aruco_detection_interfaces__msg__PointArray *)
    aruco_detection_interfaces__msg__ImageBounds__rosidl_typesupport_introspection_c__get_function__ImageBounds__bounds(untyped_member, index));
  const aruco_detection_interfaces__msg__PointArray * value =
    (const aruco_detection_interfaces__msg__PointArray *)(untyped_value);
  *item = *value;
}

bool aruco_detection_interfaces__msg__ImageBounds__rosidl_typesupport_introspection_c__resize_function__ImageBounds__bounds(
  void * untyped_member, size_t size)
{
  aruco_detection_interfaces__msg__PointArray__Sequence * member =
    (aruco_detection_interfaces__msg__PointArray__Sequence *)(untyped_member);
  aruco_detection_interfaces__msg__PointArray__Sequence__fini(member);
  return aruco_detection_interfaces__msg__PointArray__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember aruco_detection_interfaces__msg__ImageBounds__rosidl_typesupport_introspection_c__ImageBounds_message_member_array[2] = {
  {
    "ids",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(aruco_detection_interfaces__msg__ImageBounds, ids),  // bytes offset in struct
    NULL,  // default value
    aruco_detection_interfaces__msg__ImageBounds__rosidl_typesupport_introspection_c__size_function__ImageBounds__ids,  // size() function pointer
    aruco_detection_interfaces__msg__ImageBounds__rosidl_typesupport_introspection_c__get_const_function__ImageBounds__ids,  // get_const(index) function pointer
    aruco_detection_interfaces__msg__ImageBounds__rosidl_typesupport_introspection_c__get_function__ImageBounds__ids,  // get(index) function pointer
    aruco_detection_interfaces__msg__ImageBounds__rosidl_typesupport_introspection_c__fetch_function__ImageBounds__ids,  // fetch(index, &value) function pointer
    aruco_detection_interfaces__msg__ImageBounds__rosidl_typesupport_introspection_c__assign_function__ImageBounds__ids,  // assign(index, value) function pointer
    aruco_detection_interfaces__msg__ImageBounds__rosidl_typesupport_introspection_c__resize_function__ImageBounds__ids  // resize(index) function pointer
  },
  {
    "bounds",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(aruco_detection_interfaces__msg__ImageBounds, bounds),  // bytes offset in struct
    NULL,  // default value
    aruco_detection_interfaces__msg__ImageBounds__rosidl_typesupport_introspection_c__size_function__ImageBounds__bounds,  // size() function pointer
    aruco_detection_interfaces__msg__ImageBounds__rosidl_typesupport_introspection_c__get_const_function__ImageBounds__bounds,  // get_const(index) function pointer
    aruco_detection_interfaces__msg__ImageBounds__rosidl_typesupport_introspection_c__get_function__ImageBounds__bounds,  // get(index) function pointer
    aruco_detection_interfaces__msg__ImageBounds__rosidl_typesupport_introspection_c__fetch_function__ImageBounds__bounds,  // fetch(index, &value) function pointer
    aruco_detection_interfaces__msg__ImageBounds__rosidl_typesupport_introspection_c__assign_function__ImageBounds__bounds,  // assign(index, value) function pointer
    aruco_detection_interfaces__msg__ImageBounds__rosidl_typesupport_introspection_c__resize_function__ImageBounds__bounds  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers aruco_detection_interfaces__msg__ImageBounds__rosidl_typesupport_introspection_c__ImageBounds_message_members = {
  "aruco_detection_interfaces__msg",  // message namespace
  "ImageBounds",  // message name
  2,  // number of fields
  sizeof(aruco_detection_interfaces__msg__ImageBounds),
  aruco_detection_interfaces__msg__ImageBounds__rosidl_typesupport_introspection_c__ImageBounds_message_member_array,  // message members
  aruco_detection_interfaces__msg__ImageBounds__rosidl_typesupport_introspection_c__ImageBounds_init_function,  // function to initialize message memory (memory has to be allocated)
  aruco_detection_interfaces__msg__ImageBounds__rosidl_typesupport_introspection_c__ImageBounds_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t aruco_detection_interfaces__msg__ImageBounds__rosidl_typesupport_introspection_c__ImageBounds_message_type_support_handle = {
  0,
  &aruco_detection_interfaces__msg__ImageBounds__rosidl_typesupport_introspection_c__ImageBounds_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_aruco_detection_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, aruco_detection_interfaces, msg, ImageBounds)() {
  aruco_detection_interfaces__msg__ImageBounds__rosidl_typesupport_introspection_c__ImageBounds_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, aruco_detection_interfaces, msg, PointArray)();
  if (!aruco_detection_interfaces__msg__ImageBounds__rosidl_typesupport_introspection_c__ImageBounds_message_type_support_handle.typesupport_identifier) {
    aruco_detection_interfaces__msg__ImageBounds__rosidl_typesupport_introspection_c__ImageBounds_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &aruco_detection_interfaces__msg__ImageBounds__rosidl_typesupport_introspection_c__ImageBounds_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
