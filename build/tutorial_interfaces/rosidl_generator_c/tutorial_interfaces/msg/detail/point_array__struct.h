// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tutorial_interfaces:msg/PointArray.idl
// generated code does not contain a copyright notice

#ifndef TUTORIAL_INTERFACES__MSG__DETAIL__POINT_ARRAY__STRUCT_H_
#define TUTORIAL_INTERFACES__MSG__DETAIL__POINT_ARRAY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'rowpoints'
#include "tutorial_interfaces/msg/detail/point__struct.h"

/// Struct defined in msg/PointArray in the package tutorial_interfaces.
typedef struct tutorial_interfaces__msg__PointArray
{
  tutorial_interfaces__msg__Point rowpoints[4];
} tutorial_interfaces__msg__PointArray;

// Struct for a sequence of tutorial_interfaces__msg__PointArray.
typedef struct tutorial_interfaces__msg__PointArray__Sequence
{
  tutorial_interfaces__msg__PointArray * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tutorial_interfaces__msg__PointArray__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TUTORIAL_INTERFACES__MSG__DETAIL__POINT_ARRAY__STRUCT_H_
