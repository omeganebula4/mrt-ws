// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from aruco_detection_interfaces:msg/ImageBounds.idl
// generated code does not contain a copyright notice

#ifndef ARUCO_DETECTION_INTERFACES__MSG__DETAIL__IMAGE_BOUNDS__STRUCT_H_
#define ARUCO_DETECTION_INTERFACES__MSG__DETAIL__IMAGE_BOUNDS__STRUCT_H_

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
#include "aruco_detection_interfaces/msg/detail/point_array__struct.h"

/// Struct defined in msg/ImageBounds in the package aruco_detection_interfaces.
typedef struct aruco_detection_interfaces__msg__ImageBounds
{
  rosidl_runtime_c__uint64__Sequence ids;
  /// float32[] bounds
  aruco_detection_interfaces__msg__PointArray__Sequence bounds;
} aruco_detection_interfaces__msg__ImageBounds;

// Struct for a sequence of aruco_detection_interfaces__msg__ImageBounds.
typedef struct aruco_detection_interfaces__msg__ImageBounds__Sequence
{
  aruco_detection_interfaces__msg__ImageBounds * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} aruco_detection_interfaces__msg__ImageBounds__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ARUCO_DETECTION_INTERFACES__MSG__DETAIL__IMAGE_BOUNDS__STRUCT_H_
