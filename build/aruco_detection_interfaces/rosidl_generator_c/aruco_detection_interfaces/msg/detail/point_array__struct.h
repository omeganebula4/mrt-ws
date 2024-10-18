// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from aruco_detection_interfaces:msg/PointArray.idl
// generated code does not contain a copyright notice

#ifndef ARUCO_DETECTION_INTERFACES__MSG__DETAIL__POINT_ARRAY__STRUCT_H_
#define ARUCO_DETECTION_INTERFACES__MSG__DETAIL__POINT_ARRAY__STRUCT_H_

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
#include "aruco_detection_interfaces/msg/detail/point__struct.h"

/// Struct defined in msg/PointArray in the package aruco_detection_interfaces.
typedef struct aruco_detection_interfaces__msg__PointArray
{
  aruco_detection_interfaces__msg__Point rowpoints[4];
} aruco_detection_interfaces__msg__PointArray;

// Struct for a sequence of aruco_detection_interfaces__msg__PointArray.
typedef struct aruco_detection_interfaces__msg__PointArray__Sequence
{
  aruco_detection_interfaces__msg__PointArray * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} aruco_detection_interfaces__msg__PointArray__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ARUCO_DETECTION_INTERFACES__MSG__DETAIL__POINT_ARRAY__STRUCT_H_
