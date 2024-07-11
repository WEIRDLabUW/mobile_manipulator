// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mm_interfaces:msg/JoystickButtons.idl
// generated code does not contain a copyright notice

#ifndef MM_INTERFACES__MSG__DETAIL__JOYSTICK_BUTTONS__TRAITS_HPP_
#define MM_INTERFACES__MSG__DETAIL__JOYSTICK_BUTTONS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "mm_interfaces/msg/detail/joystick_buttons__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace mm_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const JoystickButtons & msg,
  std::ostream & out)
{
  out << "{";
  // member: a
  {
    out << "a: ";
    rosidl_generator_traits::value_to_yaml(msg.a, out);
    out << ", ";
  }

  // member: b
  {
    out << "b: ";
    rosidl_generator_traits::value_to_yaml(msg.b, out);
    out << ", ";
  }

  // member: rtr
  {
    out << "rtr: ";
    rosidl_generator_traits::value_to_yaml(msg.rtr, out);
    out << ", ";
  }

  // member: rg
  {
    out << "rg: ";
    rosidl_generator_traits::value_to_yaml(msg.rg, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const JoystickButtons & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: a
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "a: ";
    rosidl_generator_traits::value_to_yaml(msg.a, out);
    out << "\n";
  }

  // member: b
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "b: ";
    rosidl_generator_traits::value_to_yaml(msg.b, out);
    out << "\n";
  }

  // member: rtr
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rtr: ";
    rosidl_generator_traits::value_to_yaml(msg.rtr, out);
    out << "\n";
  }

  // member: rg
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rg: ";
    rosidl_generator_traits::value_to_yaml(msg.rg, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const JoystickButtons & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace mm_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use mm_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const mm_interfaces::msg::JoystickButtons & msg,
  std::ostream & out, size_t indentation = 0)
{
  mm_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mm_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const mm_interfaces::msg::JoystickButtons & msg)
{
  return mm_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<mm_interfaces::msg::JoystickButtons>()
{
  return "mm_interfaces::msg::JoystickButtons";
}

template<>
inline const char * name<mm_interfaces::msg::JoystickButtons>()
{
  return "mm_interfaces/msg/JoystickButtons";
}

template<>
struct has_fixed_size<mm_interfaces::msg::JoystickButtons>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<mm_interfaces::msg::JoystickButtons>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<mm_interfaces::msg::JoystickButtons>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MM_INTERFACES__MSG__DETAIL__JOYSTICK_BUTTONS__TRAITS_HPP_
