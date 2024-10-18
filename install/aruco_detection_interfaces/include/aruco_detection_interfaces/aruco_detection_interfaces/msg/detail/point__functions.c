// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from aruco_detection_interfaces:msg/Point.idl
// generated code does not contain a copyright notice
#include "aruco_detection_interfaces/msg/detail/point__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
aruco_detection_interfaces__msg__Point__init(aruco_detection_interfaces__msg__Point * msg)
{
  if (!msg) {
    return false;
  }
  // coords
  return true;
}

void
aruco_detection_interfaces__msg__Point__fini(aruco_detection_interfaces__msg__Point * msg)
{
  if (!msg) {
    return;
  }
  // coords
}

bool
aruco_detection_interfaces__msg__Point__are_equal(const aruco_detection_interfaces__msg__Point * lhs, const aruco_detection_interfaces__msg__Point * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // coords
  for (size_t i = 0; i < 2; ++i) {
    if (lhs->coords[i] != rhs->coords[i]) {
      return false;
    }
  }
  return true;
}

bool
aruco_detection_interfaces__msg__Point__copy(
  const aruco_detection_interfaces__msg__Point * input,
  aruco_detection_interfaces__msg__Point * output)
{
  if (!input || !output) {
    return false;
  }
  // coords
  for (size_t i = 0; i < 2; ++i) {
    output->coords[i] = input->coords[i];
  }
  return true;
}

aruco_detection_interfaces__msg__Point *
aruco_detection_interfaces__msg__Point__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aruco_detection_interfaces__msg__Point * msg = (aruco_detection_interfaces__msg__Point *)allocator.allocate(sizeof(aruco_detection_interfaces__msg__Point), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(aruco_detection_interfaces__msg__Point));
  bool success = aruco_detection_interfaces__msg__Point__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
aruco_detection_interfaces__msg__Point__destroy(aruco_detection_interfaces__msg__Point * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    aruco_detection_interfaces__msg__Point__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
aruco_detection_interfaces__msg__Point__Sequence__init(aruco_detection_interfaces__msg__Point__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aruco_detection_interfaces__msg__Point * data = NULL;

  if (size) {
    data = (aruco_detection_interfaces__msg__Point *)allocator.zero_allocate(size, sizeof(aruco_detection_interfaces__msg__Point), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = aruco_detection_interfaces__msg__Point__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        aruco_detection_interfaces__msg__Point__fini(&data[i - 1]);
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
aruco_detection_interfaces__msg__Point__Sequence__fini(aruco_detection_interfaces__msg__Point__Sequence * array)
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
      aruco_detection_interfaces__msg__Point__fini(&array->data[i]);
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

aruco_detection_interfaces__msg__Point__Sequence *
aruco_detection_interfaces__msg__Point__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aruco_detection_interfaces__msg__Point__Sequence * array = (aruco_detection_interfaces__msg__Point__Sequence *)allocator.allocate(sizeof(aruco_detection_interfaces__msg__Point__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = aruco_detection_interfaces__msg__Point__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
aruco_detection_interfaces__msg__Point__Sequence__destroy(aruco_detection_interfaces__msg__Point__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    aruco_detection_interfaces__msg__Point__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
aruco_detection_interfaces__msg__Point__Sequence__are_equal(const aruco_detection_interfaces__msg__Point__Sequence * lhs, const aruco_detection_interfaces__msg__Point__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!aruco_detection_interfaces__msg__Point__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
aruco_detection_interfaces__msg__Point__Sequence__copy(
  const aruco_detection_interfaces__msg__Point__Sequence * input,
  aruco_detection_interfaces__msg__Point__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(aruco_detection_interfaces__msg__Point);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    aruco_detection_interfaces__msg__Point * data =
      (aruco_detection_interfaces__msg__Point *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!aruco_detection_interfaces__msg__Point__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          aruco_detection_interfaces__msg__Point__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!aruco_detection_interfaces__msg__Point__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
