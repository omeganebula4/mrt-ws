// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from aruco_detection_interfaces:srv/ProcessImage.idl
// generated code does not contain a copyright notice

#ifndef ARUCO_DETECTION_INTERFACES__SRV__DETAIL__PROCESS_IMAGE__STRUCT_H_
#define ARUCO_DETECTION_INTERFACES__SRV__DETAIL__PROCESS_IMAGE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'img'
#include "sensor_msgs/msg/detail/image__struct.h"
// Member 'path'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/ProcessImage in the package aruco_detection_interfaces.
typedef struct aruco_detection_interfaces__srv__ProcessImage_Request
{
  sensor_msgs__msg__Image img;
  rosidl_runtime_c__String path;
  /// 0 for img, 1 for vid
  bool imgorvid;
  uint16_t frame;
} aruco_detection_interfaces__srv__ProcessImage_Request;

// Struct for a sequence of aruco_detection_interfaces__srv__ProcessImage_Request.
typedef struct aruco_detection_interfaces__srv__ProcessImage_Request__Sequence
{
  aruco_detection_interfaces__srv__ProcessImage_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} aruco_detection_interfaces__srv__ProcessImage_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'imgbounds'
#include "aruco_detection_interfaces/msg/detail/image_bounds__struct.h"

/// Struct defined in srv/ProcessImage in the package aruco_detection_interfaces.
typedef struct aruco_detection_interfaces__srv__ProcessImage_Response
{
  aruco_detection_interfaces__msg__ImageBounds imgbounds;
} aruco_detection_interfaces__srv__ProcessImage_Response;

// Struct for a sequence of aruco_detection_interfaces__srv__ProcessImage_Response.
typedef struct aruco_detection_interfaces__srv__ProcessImage_Response__Sequence
{
  aruco_detection_interfaces__srv__ProcessImage_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} aruco_detection_interfaces__srv__ProcessImage_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ARUCO_DETECTION_INTERFACES__SRV__DETAIL__PROCESS_IMAGE__STRUCT_H_
