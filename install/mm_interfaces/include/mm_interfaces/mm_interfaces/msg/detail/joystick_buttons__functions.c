// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from mm_interfaces:msg/JoystickButtons.idl
// generated code does not contain a copyright notice
#include "mm_interfaces/msg/detail/joystick_buttons__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
mm_interfaces__msg__JoystickButtons__init(mm_interfaces__msg__JoystickButtons * msg)
{
  if (!msg) {
    return false;
  }
  // a
  // b
  // rtr
  // rg
  return true;
}

void
mm_interfaces__msg__JoystickButtons__fini(mm_interfaces__msg__JoystickButtons * msg)
{
  if (!msg) {
    return;
  }
  // a
  // b
  // rtr
  // rg
}

bool
mm_interfaces__msg__JoystickButtons__are_equal(const mm_interfaces__msg__JoystickButtons * lhs, const mm_interfaces__msg__JoystickButtons * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // a
  if (lhs->a != rhs->a) {
    return false;
  }
  // b
  if (lhs->b != rhs->b) {
    return false;
  }
  // rtr
  if (lhs->rtr != rhs->rtr) {
    return false;
  }
  // rg
  if (lhs->rg != rhs->rg) {
    return false;
  }
  return true;
}

bool
mm_interfaces__msg__JoystickButtons__copy(
  const mm_interfaces__msg__JoystickButtons * input,
  mm_interfaces__msg__JoystickButtons * output)
{
  if (!input || !output) {
    return false;
  }
  // a
  output->a = input->a;
  // b
  output->b = input->b;
  // rtr
  output->rtr = input->rtr;
  // rg
  output->rg = input->rg;
  return true;
}

mm_interfaces__msg__JoystickButtons *
mm_interfaces__msg__JoystickButtons__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mm_interfaces__msg__JoystickButtons * msg = (mm_interfaces__msg__JoystickButtons *)allocator.allocate(sizeof(mm_interfaces__msg__JoystickButtons), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mm_interfaces__msg__JoystickButtons));
  bool success = mm_interfaces__msg__JoystickButtons__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
mm_interfaces__msg__JoystickButtons__destroy(mm_interfaces__msg__JoystickButtons * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    mm_interfaces__msg__JoystickButtons__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
mm_interfaces__msg__JoystickButtons__Sequence__init(mm_interfaces__msg__JoystickButtons__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mm_interfaces__msg__JoystickButtons * data = NULL;

  if (size) {
    data = (mm_interfaces__msg__JoystickButtons *)allocator.zero_allocate(size, sizeof(mm_interfaces__msg__JoystickButtons), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mm_interfaces__msg__JoystickButtons__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mm_interfaces__msg__JoystickButtons__fini(&data[i - 1]);
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
mm_interfaces__msg__JoystickButtons__Sequence__fini(mm_interfaces__msg__JoystickButtons__Sequence * array)
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
      mm_interfaces__msg__JoystickButtons__fini(&array->data[i]);
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

mm_interfaces__msg__JoystickButtons__Sequence *
mm_interfaces__msg__JoystickButtons__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mm_interfaces__msg__JoystickButtons__Sequence * array = (mm_interfaces__msg__JoystickButtons__Sequence *)allocator.allocate(sizeof(mm_interfaces__msg__JoystickButtons__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = mm_interfaces__msg__JoystickButtons__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
mm_interfaces__msg__JoystickButtons__Sequence__destroy(mm_interfaces__msg__JoystickButtons__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    mm_interfaces__msg__JoystickButtons__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
mm_interfaces__msg__JoystickButtons__Sequence__are_equal(const mm_interfaces__msg__JoystickButtons__Sequence * lhs, const mm_interfaces__msg__JoystickButtons__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mm_interfaces__msg__JoystickButtons__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mm_interfaces__msg__JoystickButtons__Sequence__copy(
  const mm_interfaces__msg__JoystickButtons__Sequence * input,
  mm_interfaces__msg__JoystickButtons__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(mm_interfaces__msg__JoystickButtons);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    mm_interfaces__msg__JoystickButtons * data =
      (mm_interfaces__msg__JoystickButtons *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mm_interfaces__msg__JoystickButtons__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          mm_interfaces__msg__JoystickButtons__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!mm_interfaces__msg__JoystickButtons__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
