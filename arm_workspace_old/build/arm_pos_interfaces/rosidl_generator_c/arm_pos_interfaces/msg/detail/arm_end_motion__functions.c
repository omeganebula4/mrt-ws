// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from arm_pos_interfaces:msg/ArmEndMotion.idl
// generated code does not contain a copyright notice
#include "arm_pos_interfaces/msg/detail/arm_end_motion__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `direction`
// Member `speed`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
arm_pos_interfaces__msg__ArmEndMotion__init(arm_pos_interfaces__msg__ArmEndMotion * msg)
{
  if (!msg) {
    return false;
  }
  // direction
  if (!rosidl_runtime_c__int64__Sequence__init(&msg->direction, 0)) {
    arm_pos_interfaces__msg__ArmEndMotion__fini(msg);
    return false;
  }
  // speed
  if (!rosidl_runtime_c__int64__Sequence__init(&msg->speed, 0)) {
    arm_pos_interfaces__msg__ArmEndMotion__fini(msg);
    return false;
  }
  // sys_check
  // reset
  return true;
}

void
arm_pos_interfaces__msg__ArmEndMotion__fini(arm_pos_interfaces__msg__ArmEndMotion * msg)
{
  if (!msg) {
    return;
  }
  // direction
  rosidl_runtime_c__int64__Sequence__fini(&msg->direction);
  // speed
  rosidl_runtime_c__int64__Sequence__fini(&msg->speed);
  // sys_check
  // reset
}

bool
arm_pos_interfaces__msg__ArmEndMotion__are_equal(const arm_pos_interfaces__msg__ArmEndMotion * lhs, const arm_pos_interfaces__msg__ArmEndMotion * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // direction
  if (!rosidl_runtime_c__int64__Sequence__are_equal(
      &(lhs->direction), &(rhs->direction)))
  {
    return false;
  }
  // speed
  if (!rosidl_runtime_c__int64__Sequence__are_equal(
      &(lhs->speed), &(rhs->speed)))
  {
    return false;
  }
  // sys_check
  if (lhs->sys_check != rhs->sys_check) {
    return false;
  }
  // reset
  if (lhs->reset != rhs->reset) {
    return false;
  }
  return true;
}

bool
arm_pos_interfaces__msg__ArmEndMotion__copy(
  const arm_pos_interfaces__msg__ArmEndMotion * input,
  arm_pos_interfaces__msg__ArmEndMotion * output)
{
  if (!input || !output) {
    return false;
  }
  // direction
  if (!rosidl_runtime_c__int64__Sequence__copy(
      &(input->direction), &(output->direction)))
  {
    return false;
  }
  // speed
  if (!rosidl_runtime_c__int64__Sequence__copy(
      &(input->speed), &(output->speed)))
  {
    return false;
  }
  // sys_check
  output->sys_check = input->sys_check;
  // reset
  output->reset = input->reset;
  return true;
}

arm_pos_interfaces__msg__ArmEndMotion *
arm_pos_interfaces__msg__ArmEndMotion__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  arm_pos_interfaces__msg__ArmEndMotion * msg = (arm_pos_interfaces__msg__ArmEndMotion *)allocator.allocate(sizeof(arm_pos_interfaces__msg__ArmEndMotion), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(arm_pos_interfaces__msg__ArmEndMotion));
  bool success = arm_pos_interfaces__msg__ArmEndMotion__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
arm_pos_interfaces__msg__ArmEndMotion__destroy(arm_pos_interfaces__msg__ArmEndMotion * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    arm_pos_interfaces__msg__ArmEndMotion__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
arm_pos_interfaces__msg__ArmEndMotion__Sequence__init(arm_pos_interfaces__msg__ArmEndMotion__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  arm_pos_interfaces__msg__ArmEndMotion * data = NULL;

  if (size) {
    data = (arm_pos_interfaces__msg__ArmEndMotion *)allocator.zero_allocate(size, sizeof(arm_pos_interfaces__msg__ArmEndMotion), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = arm_pos_interfaces__msg__ArmEndMotion__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        arm_pos_interfaces__msg__ArmEndMotion__fini(&data[i - 1]);
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
arm_pos_interfaces__msg__ArmEndMotion__Sequence__fini(arm_pos_interfaces__msg__ArmEndMotion__Sequence * array)
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
      arm_pos_interfaces__msg__ArmEndMotion__fini(&array->data[i]);
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

arm_pos_interfaces__msg__ArmEndMotion__Sequence *
arm_pos_interfaces__msg__ArmEndMotion__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  arm_pos_interfaces__msg__ArmEndMotion__Sequence * array = (arm_pos_interfaces__msg__ArmEndMotion__Sequence *)allocator.allocate(sizeof(arm_pos_interfaces__msg__ArmEndMotion__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = arm_pos_interfaces__msg__ArmEndMotion__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
arm_pos_interfaces__msg__ArmEndMotion__Sequence__destroy(arm_pos_interfaces__msg__ArmEndMotion__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    arm_pos_interfaces__msg__ArmEndMotion__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
arm_pos_interfaces__msg__ArmEndMotion__Sequence__are_equal(const arm_pos_interfaces__msg__ArmEndMotion__Sequence * lhs, const arm_pos_interfaces__msg__ArmEndMotion__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!arm_pos_interfaces__msg__ArmEndMotion__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
arm_pos_interfaces__msg__ArmEndMotion__Sequence__copy(
  const arm_pos_interfaces__msg__ArmEndMotion__Sequence * input,
  arm_pos_interfaces__msg__ArmEndMotion__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(arm_pos_interfaces__msg__ArmEndMotion);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    arm_pos_interfaces__msg__ArmEndMotion * data =
      (arm_pos_interfaces__msg__ArmEndMotion *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!arm_pos_interfaces__msg__ArmEndMotion__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          arm_pos_interfaces__msg__ArmEndMotion__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!arm_pos_interfaces__msg__ArmEndMotion__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
