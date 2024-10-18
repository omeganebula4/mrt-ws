// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from aruco_detection_interfaces:msg/Point.idl
// generated code does not contain a copyright notice

#ifndef ARUCO_DETECTION_INTERFACES__MSG__DETAIL__POINT__STRUCT_H_
#define ARUCO_DETECTION_INTERFACES__MSG__DETAIL__POINT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/Point in the package aruco_detection_interfaces.
typedef struct aruco_detection_interfaces__msg__Point
{
  float coords[2];
} aruco_detection_interfaces__msg__Point;

// Struct for a sequence of aruco_detection_interfaces__msg__Point.
typedef struct aruco_detection_interfaces__msg__Point__Sequence
{
  aruco_detection_interfaces__msg__Point * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} aruco_detection_interfaces__msg__Point__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ARUCO_DETECTION_INTERFACES__MSG__DETAIL__POINT__STRUCT_H_
