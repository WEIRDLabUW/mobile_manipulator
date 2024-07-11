// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from mm_interfaces:msg/JoystickButtons.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "mm_interfaces/msg/detail/joystick_buttons__rosidl_typesupport_introspection_c.h"
#include "mm_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "mm_interfaces/msg/detail/joystick_buttons__functions.h"
#include "mm_interfaces/msg/detail/joystick_buttons__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void mm_interfaces__msg__JoystickButtons__rosidl_typesupport_introspection_c__JoystickButtons_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  mm_interfaces__msg__JoystickButtons__init(message_memory);
}

void mm_interfaces__msg__JoystickButtons__rosidl_typesupport_introspection_c__JoystickButtons_fini_function(void * message_memory)
{
  mm_interfaces__msg__JoystickButtons__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember mm_interfaces__msg__JoystickButtons__rosidl_typesupport_introspection_c__JoystickButtons_message_member_array[4] = {
  {
    "a",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mm_interfaces__msg__JoystickButtons, a),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "b",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mm_interfaces__msg__JoystickButtons, b),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "rtr",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mm_interfaces__msg__JoystickButtons, rtr),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "rg",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mm_interfaces__msg__JoystickButtons, rg),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers mm_interfaces__msg__JoystickButtons__rosidl_typesupport_introspection_c__JoystickButtons_message_members = {
  "mm_interfaces__msg",  // message namespace
  "JoystickButtons",  // message name
  4,  // number of fields
  sizeof(mm_interfaces__msg__JoystickButtons),
  mm_interfaces__msg__JoystickButtons__rosidl_typesupport_introspection_c__JoystickButtons_message_member_array,  // message members
  mm_interfaces__msg__JoystickButtons__rosidl_typesupport_introspection_c__JoystickButtons_init_function,  // function to initialize message memory (memory has to be allocated)
  mm_interfaces__msg__JoystickButtons__rosidl_typesupport_introspection_c__JoystickButtons_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t mm_interfaces__msg__JoystickButtons__rosidl_typesupport_introspection_c__JoystickButtons_message_type_support_handle = {
  0,
  &mm_interfaces__msg__JoystickButtons__rosidl_typesupport_introspection_c__JoystickButtons_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_mm_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mm_interfaces, msg, JoystickButtons)() {
  if (!mm_interfaces__msg__JoystickButtons__rosidl_typesupport_introspection_c__JoystickButtons_message_type_support_handle.typesupport_identifier) {
    mm_interfaces__msg__JoystickButtons__rosidl_typesupport_introspection_c__JoystickButtons_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &mm_interfaces__msg__JoystickButtons__rosidl_typesupport_introspection_c__JoystickButtons_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
