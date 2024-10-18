// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from aruco_detection_interfaces:msg/ImageBounds.idl
// generated code does not contain a copyright notice
#include "aruco_detection_interfaces/msg/detail/image_bounds__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `ids`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `bounds`
#include "aruco_detection_interfaces/msg/detail/point_array__functions.h"

bool
aruco_detection_interfaces__msg__ImageBounds__init(aruco_detection_interfaces__msg__ImageBounds * msg)
{
  if (!msg) {
    return false;
  }
  // ids
  if (!rosidl_runtime_c__uint64__Sequence__init(&msg->ids, 0)) {
    aruco_detection_interfaces__msg__ImageBounds__fini(msg);
    return false;
  }
  // bounds
  for (size_t i = 0; i < 1000; ++i) {
    if (!aruco_detection_interfaces__msg__PointArray__init(&msg->bounds[i])) {
      aruco_detection_interfaces__msg__ImageBounds__fini(msg);
      return false;
    }
  }
  return true;
}

void
aruco_detection_interfaces__msg__ImageBounds__fini(aruco_detection_interfaces__msg__ImageBounds * msg)
{
  if (!msg) {
    return;
  }
  // ids
  rosidl_runtime_c__uint64__Sequence__fini(&msg->ids);
  // bounds
  for (size_t i = 0; i < 1000; ++i) {
    aruco_detection_interfaces__msg__PointArray__fini(&msg->bounds[i]);
  }
}

bool
aruco_detection_interfaces__msg__ImageBounds__are_equal(const aruco_detection_interfaces__msg__ImageBounds * lhs, const aruco_detection_interfaces__msg__ImageBounds * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // ids
  if (!rosidl_runtime_c__uint64__Sequence__are_equal(
      &(lhs->ids), &(rhs->ids)))
  {
    return false;
  }
  // bounds
  for (size_t i = 0; i < 1000; ++i) {
    if (!aruco_detection_interfaces__msg__PointArray__are_equal(
        &(lhs->bounds[i]), &(rhs->bounds[i])))
    {
      return false;
    }
  }
  return true;
}

bool
aruco_detection_interfaces__msg__ImageBounds__copy(
  const aruco_detection_interfaces__msg__ImageBounds * input,
  aruco_detection_interfaces__msg__ImageBounds * output)
{
  if (!input || !output) {
    return false;
  }
  // ids
  if (!rosidl_runtime_c__uint64__Sequence__copy(
      &(input->ids), &(output->ids)))
  {
    return false;
  }
  // bounds
  for (size_t i = 0; i < 1000; ++i) {
    if (!aruco_detection_interfaces__msg__PointArray__copy(
        &(input->bounds[i]), &(output->bounds[i])))
    {
      return false;
    }
  }
  return true;
}

aruco_detection_interfaces__msg__ImageBounds *
aruco_detection_interfaces__msg__ImageBounds__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aruco_detection_interfaces__msg__ImageBounds * msg = (aruco_detection_interfaces__msg__ImageBounds *)allocator.allocate(sizeof(aruco_detection_interfaces__msg__ImageBounds), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(aruco_detection_interfaces__msg__ImageBounds));
  bool success = aruco_detection_interfaces__msg__ImageBounds__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
aruco_detection_interfaces__msg__ImageBounds__destroy(aruco_detection_interfaces__msg__ImageBounds * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    aruco_detection_interfaces__msg__ImageBounds__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
aruco_detection_interfaces__msg__ImageBounds__Sequence__init(aruco_detection_interfaces__msg__ImageBounds__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aruco_detection_interfaces__msg__ImageBounds * data = NULL;

  if (size) {
    data = (aruco_detection_interfaces__msg__ImageBounds *)allocator.zero_allocate(size, sizeof(aruco_detection_interfaces__msg__ImageBounds), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = aruco_detection_interfaces__msg__ImageBounds__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        aruco_detection_interfaces__msg__ImageBounds__fini(&data[i - 1]);
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
aruco_detection_interfaces__msg__ImageBounds__Sequence__fini(aruco_detection_interfaces__msg__ImageBounds__Sequence * array)
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
      aruco_detection_interfaces__msg__ImageBounds__fini(&array->data[i]);
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

aruco_detection_interfaces__msg__ImageBounds__Sequence *
aruco_detection_interfaces__msg__ImageBounds__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aruco_detection_interfaces__msg__ImageBounds__Sequence * array = (aruco_detection_interfaces__msg__ImageBounds__Sequence *)allocator.allocate(sizeof(aruco_detection_interfaces__msg__ImageBounds__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = aruco_detection_interfaces__msg__ImageBounds__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
aruco_detection_interfaces__msg__ImageBounds__Sequence__destroy(aruco_detection_interfaces__msg__ImageBounds__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    aruco_detection_interfaces__msg__ImageBounds__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
aruco_detection_interfaces__msg__ImageBounds__Sequence__are_equal(const aruco_detection_interfaces__msg__ImageBounds__Sequence * lhs, const aruco_detection_interfaces__msg__ImageBounds__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!aruco_detection_interfaces__msg__ImageBounds__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
aruco_detection_interfaces__msg__ImageBounds__Sequence__copy(
  const aruco_detection_interfaces__msg__ImageBounds__Sequence * input,
  aruco_detection_interfaces__msg__ImageBounds__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(aruco_detection_interfaces__msg__ImageBounds);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    aruco_detection_interfaces__msg__ImageBounds * data =
      (aruco_detection_interfaces__msg__ImageBounds *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!aruco_detection_interfaces__msg__ImageBounds__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          aruco_detection_interfaces__msg__ImageBounds__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!aruco_detection_interfaces__msg__ImageBounds__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
