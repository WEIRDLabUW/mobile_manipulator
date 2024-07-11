// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from mm_interfaces:msg/JoystickButtons.idl
// generated code does not contain a copyright notice
#include "mm_interfaces/msg/detail/joystick_buttons__rosidl_typesupport_fastrtps_cpp.hpp"
#include "mm_interfaces/msg/detail/joystick_buttons__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace mm_interfaces
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mm_interfaces
cdr_serialize(
  const mm_interfaces::msg::JoystickButtons & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: a
  cdr << (ros_message.a ? true : false);
  // Member: b
  cdr << (ros_message.b ? true : false);
  // Member: rtr
  cdr << (ros_message.rtr ? true : false);
  // Member: rg
  cdr << (ros_message.rg ? true : false);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mm_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  mm_interfaces::msg::JoystickButtons & ros_message)
{
  // Member: a
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.a = tmp ? true : false;
  }

  // Member: b
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.b = tmp ? true : false;
  }

  // Member: rtr
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.rtr = tmp ? true : false;
  }

  // Member: rg
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.rg = tmp ? true : false;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mm_interfaces
get_serialized_size(
  const mm_interfaces::msg::JoystickButtons & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: a
  {
    size_t item_size = sizeof(ros_message.a);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: b
  {
    size_t item_size = sizeof(ros_message.b);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: rtr
  {
    size_t item_size = sizeof(ros_message.rtr);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: rg
  {
    size_t item_size = sizeof(ros_message.rg);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mm_interfaces
max_serialized_size_JoystickButtons(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;


  // Member: a
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: b
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: rtr
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: rg
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = mm_interfaces::msg::JoystickButtons;
    is_plain =
      (
      offsetof(DataType, rg) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _JoystickButtons__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const mm_interfaces::msg::JoystickButtons *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _JoystickButtons__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<mm_interfaces::msg::JoystickButtons *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _JoystickButtons__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const mm_interfaces::msg::JoystickButtons *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _JoystickButtons__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_JoystickButtons(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _JoystickButtons__callbacks = {
  "mm_interfaces::msg",
  "JoystickButtons",
  _JoystickButtons__cdr_serialize,
  _JoystickButtons__cdr_deserialize,
  _JoystickButtons__get_serialized_size,
  _JoystickButtons__max_serialized_size
};

static rosidl_message_type_support_t _JoystickButtons__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_JoystickButtons__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace mm_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_mm_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<mm_interfaces::msg::JoystickButtons>()
{
  return &mm_interfaces::msg::typesupport_fastrtps_cpp::_JoystickButtons__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, mm_interfaces, msg, JoystickButtons)() {
  return &mm_interfaces::msg::typesupport_fastrtps_cpp::_JoystickButtons__handle;
}

#ifdef __cplusplus
}
#endif
