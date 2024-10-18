// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tutorial_interfaces:msg/ImageBounds.idl
// generated code does not contain a copyright notice

#ifndef TUTORIAL_INTERFACES__MSG__DETAIL__IMAGE_BOUNDS__STRUCT_H_
#define TUTORIAL_INTERFACES__MSG__DETAIL__IMAGE_BOUNDS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'ids'
#include "rosidl_runtime_c/primitives_sequence.h"
// Member 'bounds'
#include "tutorial_interfaces/msg/detail/point_array__struct.h"

/// Struct defined in msg/ImageBounds in the package tutorial_interfaces.
typedef struct tutorial_interfaces__msg__ImageBounds
{
  rosidl_runtime_c__uint64__Sequence ids;
  tutorial_interfaces__msg__PointArray bounds[1000];
} tutorial_interfaces__msg__ImageBounds;

// Struct for a sequence of tutorial_interfaces__msg__ImageBounds.
typedef struct tutorial_interfaces__msg__ImageBounds__Sequence
{
  tutorial_interfaces__msg__ImageBounds * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tutorial_interfaces__msg__ImageBounds__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TUTORIAL_INTERFACES__MSG__DETAIL__IMAGE_BOUNDS__STRUCT_H_
