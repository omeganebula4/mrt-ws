// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from all_interfaces:msg/Waypoint.idl
// generated code does not contain a copyright notice

#ifndef ALL_INTERFACES__MSG__DETAIL__WAYPOINT__STRUCT_H_
#define ALL_INTERFACES__MSG__DETAIL__WAYPOINT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'x'
// Member 'y'
// Member 'z'
// Member 't'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/Waypoint in the package all_interfaces.
typedef struct all_interfaces__msg__Waypoint
{
  rosidl_runtime_c__double__Sequence x;
  rosidl_runtime_c__double__Sequence y;
  rosidl_runtime_c__double__Sequence z;
  rosidl_runtime_c__double__Sequence t;
} all_interfaces__msg__Waypoint;

// Struct for a sequence of all_interfaces__msg__Waypoint.
typedef struct all_interfaces__msg__Waypoint__Sequence
{
  all_interfaces__msg__Waypoint * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} all_interfaces__msg__Waypoint__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ALL_INTERFACES__MSG__DETAIL__WAYPOINT__STRUCT_H_
