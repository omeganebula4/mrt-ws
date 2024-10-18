// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from aruco_detection_interfaces:srv/ProcessImage.idl
// generated code does not contain a copyright notice
#include "aruco_detection_interfaces/srv/detail/process_image__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `img`
#include "sensor_msgs/msg/detail/image__functions.h"
// Member `path`
#include "rosidl_runtime_c/string_functions.h"

bool
aruco_detection_interfaces__srv__ProcessImage_Request__init(aruco_detection_interfaces__srv__ProcessImage_Request * msg)
{
  if (!msg) {
    return false;
  }
  // img
  if (!sensor_msgs__msg__Image__init(&msg->img)) {
    aruco_detection_interfaces__srv__ProcessImage_Request__fini(msg);
    return false;
  }
  // path
  if (!rosidl_runtime_c__String__init(&msg->path)) {
    aruco_detection_interfaces__srv__ProcessImage_Request__fini(msg);
    return false;
  }
  // imgorvid
  // frame
  return true;
}

void
aruco_detection_interfaces__srv__ProcessImage_Request__fini(aruco_detection_interfaces__srv__ProcessImage_Request * msg)
{
  if (!msg) {
    return;
  }
  // img
  sensor_msgs__msg__Image__fini(&msg->img);
  // path
  rosidl_runtime_c__String__fini(&msg->path);
  // imgorvid
  // frame
}

bool
aruco_detection_interfaces__srv__ProcessImage_Request__are_equal(const aruco_detection_interfaces__srv__ProcessImage_Request * lhs, const aruco_detection_interfaces__srv__ProcessImage_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // img
  if (!sensor_msgs__msg__Image__are_equal(
      &(lhs->img), &(rhs->img)))
  {
    return false;
  }
  // path
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->path), &(rhs->path)))
  {
    return false;
  }
  // imgorvid
  if (lhs->imgorvid != rhs->imgorvid) {
    return false;
  }
  // frame
  if (lhs->frame != rhs->frame) {
    return false;
  }
  return true;
}

bool
aruco_detection_interfaces__srv__ProcessImage_Request__copy(
  const aruco_detection_interfaces__srv__ProcessImage_Request * input,
  aruco_detection_interfaces__srv__ProcessImage_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // img
  if (!sensor_msgs__msg__Image__copy(
      &(input->img), &(output->img)))
  {
    return false;
  }
  // path
  if (!rosidl_runtime_c__String__copy(
      &(input->path), &(output->path)))
  {
    return false;
  }
  // imgorvid
  output->imgorvid = input->imgorvid;
  // frame
  output->frame = input->frame;
  return true;
}

aruco_detection_interfaces__srv__ProcessImage_Request *
aruco_detection_interfaces__srv__ProcessImage_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aruco_detection_interfaces__srv__ProcessImage_Request * msg = (aruco_detection_interfaces__srv__ProcessImage_Request *)allocator.allocate(sizeof(aruco_detection_interfaces__srv__ProcessImage_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(aruco_detection_interfaces__srv__ProcessImage_Request));
  bool success = aruco_detection_interfaces__srv__ProcessImage_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
aruco_detection_interfaces__srv__ProcessImage_Request__destroy(aruco_detection_interfaces__srv__ProcessImage_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    aruco_detection_interfaces__srv__ProcessImage_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
aruco_detection_interfaces__srv__ProcessImage_Request__Sequence__init(aruco_detection_interfaces__srv__ProcessImage_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aruco_detection_interfaces__srv__ProcessImage_Request * data = NULL;

  if (size) {
    data = (aruco_detection_interfaces__srv__ProcessImage_Request *)allocator.zero_allocate(size, sizeof(aruco_detection_interfaces__srv__ProcessImage_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = aruco_detection_interfaces__srv__ProcessImage_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        aruco_detection_interfaces__srv__ProcessImage_Request__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
aruco_detection_interfaces__srv__ProcessImage_Request__Sequence__fini(aruco_detection_interfaces__srv__ProcessImage_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      aruco_detection_interfaces__srv__ProcessImage_Request__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

aruco_detection_interfaces__srv__ProcessImage_Request__Sequence *
aruco_detection_interfaces__srv__ProcessImage_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aruco_detection_interfaces__srv__ProcessImage_Request__Sequence * array = (aruco_detection_interfaces__srv__ProcessImage_Request__Sequence *)allocator.allocate(sizeof(aruco_detection_interfaces__srv__ProcessImage_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = aruco_detection_interfaces__srv__ProcessImage_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
aruco_detection_interfaces__srv__ProcessImage_Request__Sequence__destroy(aruco_detection_interfaces__srv__ProcessImage_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    aruco_detection_interfaces__srv__ProcessImage_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
aruco_detection_interfaces__srv__ProcessImage_Request__Sequence__are_equal(const aruco_detection_interfaces__srv__ProcessImage_Request__Sequence * lhs, const aruco_detection_interfaces__srv__ProcessImage_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!aruco_detection_interfaces__srv__ProcessImage_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
aruco_detection_interfaces__srv__ProcessImage_Request__Sequence__copy(
  const aruco_detection_interfaces__srv__ProcessImage_Request__Sequence * input,
  aruco_detection_interfaces__srv__ProcessImage_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(aruco_detection_interfaces__srv__ProcessImage_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    aruco_detection_interfaces__srv__ProcessImage_Request * data =
      (aruco_detection_interfaces__srv__ProcessImage_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!aruco_detection_interfaces__srv__ProcessImage_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          aruco_detection_interfaces__srv__ProcessImage_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!aruco_detection_interfaces__srv__ProcessImage_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `imgbounds`
#include "aruco_detection_interfaces/msg/detail/image_bounds__functions.h"

bool
aruco_detection_interfaces__srv__ProcessImage_Response__init(aruco_detection_interfaces__srv__ProcessImage_Response * msg)
{
  if (!msg) {
    return false;
  }
  // imgbounds
  if (!aruco_detection_interfaces__msg__ImageBounds__init(&msg->imgbounds)) {
    aruco_detection_interfaces__srv__ProcessImage_Response__fini(msg);
    return false;
  }
  return true;
}

void
aruco_detection_interfaces__srv__ProcessImage_Response__fini(aruco_detection_interfaces__srv__ProcessImage_Response * msg)
{
  if (!msg) {
    return;
  }
  // imgbounds
  aruco_detection_interfaces__msg__ImageBounds__fini(&msg->imgbounds);
}

bool
aruco_detection_interfaces__srv__ProcessImage_Response__are_equal(const aruco_detection_interfaces__srv__ProcessImage_Response * lhs, const aruco_detection_interfaces__srv__ProcessImage_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // imgbounds
  if (!aruco_detection_interfaces__msg__ImageBounds__are_equal(
      &(lhs->imgbounds), &(rhs->imgbounds)))
  {
    return false;
  }
  return true;
}

bool
aruco_detection_interfaces__srv__ProcessImage_Response__copy(
  const aruco_detection_interfaces__srv__ProcessImage_Response * input,
  aruco_detection_interfaces__srv__ProcessImage_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // imgbounds
  if (!aruco_detection_interfaces__msg__ImageBounds__copy(
      &(input->imgbounds), &(output->imgbounds)))
  {
    return false;
  }
  return true;
}

aruco_detection_interfaces__srv__ProcessImage_Response *
aruco_detection_interfaces__srv__ProcessImage_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aruco_detection_interfaces__srv__ProcessImage_Response * msg = (aruco_detection_interfaces__srv__ProcessImage_Response *)allocator.allocate(sizeof(aruco_detection_interfaces__srv__ProcessImage_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(aruco_detection_interfaces__srv__ProcessImage_Response));
  bool success = aruco_detection_interfaces__srv__ProcessImage_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
aruco_detection_interfaces__srv__ProcessImage_Response__destroy(aruco_detection_interfaces__srv__ProcessImage_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    aruco_detection_interfaces__srv__ProcessImage_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
aruco_detection_interfaces__srv__ProcessImage_Response__Sequence__init(aruco_detection_interfaces__srv__ProcessImage_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aruco_detection_interfaces__srv__ProcessImage_Response * data = NULL;

  if (size) {
    data = (aruco_detection_interfaces__srv__ProcessImage_Response *)allocator.zero_allocate(size, sizeof(aruco_detection_interfaces__srv__ProcessImage_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = aruco_detection_interfaces__srv__ProcessImage_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        aruco_detection_interfaces__srv__ProcessImage_Response__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
aruco_detection_interfaces__srv__ProcessImage_Response__Sequence__fini(aruco_detection_interfaces__srv__ProcessImage_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      aruco_detection_interfaces__srv__ProcessImage_Response__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

aruco_detection_interfaces__srv__ProcessImage_Response__Sequence *
aruco_detection_interfaces__srv__ProcessImage_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aruco_detection_interfaces__srv__ProcessImage_Response__Sequence * array = (aruco_detection_interfaces__srv__ProcessImage_Response__Sequence *)allocator.allocate(sizeof(aruco_detection_interfaces__srv__ProcessImage_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = aruco_detection_interfaces__srv__ProcessImage_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
aruco_detection_interfaces__srv__ProcessImage_Response__Sequence__destroy(aruco_detection_interfaces__srv__ProcessImage_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    aruco_detection_interfaces__srv__ProcessImage_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
aruco_detection_interfaces__srv__ProcessImage_Response__Sequence__are_equal(const aruco_detection_interfaces__srv__ProcessImage_Response__Sequence * lhs, const aruco_detection_interfaces__srv__ProcessImage_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!aruco_detection_interfaces__srv__ProcessImage_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
aruco_detection_interfaces__srv__ProcessImage_Response__Sequence__copy(
  const aruco_detection_interfaces__srv__ProcessImage_Response__Sequence * input,
  aruco_detection_interfaces__srv__ProcessImage_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(aruco_detection_interfaces__srv__ProcessImage_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    aruco_detection_interfaces__srv__ProcessImage_Response * data =
      (aruco_detection_interfaces__srv__ProcessImage_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!aruco_detection_interfaces__srv__ProcessImage_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          aruco_detection_interfaces__srv__ProcessImage_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!aruco_detection_interfaces__srv__ProcessImage_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
