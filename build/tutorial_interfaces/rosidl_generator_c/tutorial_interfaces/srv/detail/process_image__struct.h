// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tutorial_interfaces:srv/ProcessImage.idl
// generated code does not contain a copyright notice

#ifndef TUTORIAL_INTERFACES__SRV__DETAIL__PROCESS_IMAGE__STRUCT_H_
#define TUTORIAL_INTERFACES__SRV__DETAIL__PROCESS_IMAGE__STRUCT_H_

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

/// Struct defined in srv/ProcessImage in the package tutorial_interfaces.
typedef struct tutorial_interfaces__srv__ProcessImage_Request
{
  sensor_msgs__msg__Image img;
} tutorial_interfaces__srv__ProcessImage_Request;

// Struct for a sequence of tutorial_interfaces__srv__ProcessImage_Request.
typedef struct tutorial_interfaces__srv__ProcessImage_Request__Sequence
{
  tutorial_interfaces__srv__ProcessImage_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tutorial_interfaces__srv__ProcessImage_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'imgbounds'
#include "tutorial_interfaces/msg/detail/image_bounds__struct.h"

/// Struct defined in srv/ProcessImage in the package tutorial_interfaces.
typedef struct tutorial_interfaces__srv__ProcessImage_Response
{
  tutorial_interfaces__msg__ImageBounds imgbounds;
} tutorial_interfaces__srv__ProcessImage_Response;

// Struct for a sequence of tutorial_interfaces__srv__ProcessImage_Response.
typedef struct tutorial_interfaces__srv__ProcessImage_Response__Sequence
{
  tutorial_interfaces__srv__ProcessImage_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tutorial_interfaces__srv__ProcessImage_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TUTORIAL_INTERFACES__SRV__DETAIL__PROCESS_IMAGE__STRUCT_H_
