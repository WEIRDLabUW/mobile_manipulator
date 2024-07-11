// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mm_interfaces:msg/JoystickButtons.idl
// generated code does not contain a copyright notice

#ifndef MM_INTERFACES__MSG__DETAIL__JOYSTICK_BUTTONS__STRUCT_H_
#define MM_INTERFACES__MSG__DETAIL__JOYSTICK_BUTTONS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/JoystickButtons in the package mm_interfaces.
typedef struct mm_interfaces__msg__JoystickButtons
{
  bool a;
  bool b;
  bool rtr;
  bool rg;
} mm_interfaces__msg__JoystickButtons;

// Struct for a sequence of mm_interfaces__msg__JoystickButtons.
typedef struct mm_interfaces__msg__JoystickButtons__Sequence
{
  mm_interfaces__msg__JoystickButtons * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mm_interfaces__msg__JoystickButtons__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MM_INTERFACES__MSG__DETAIL__JOYSTICK_BUTTONS__STRUCT_H_
