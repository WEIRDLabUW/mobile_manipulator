// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from mm_interfaces:msg/JoystickButtons.idl
// generated code does not contain a copyright notice

#ifndef MM_INTERFACES__MSG__DETAIL__JOYSTICK_BUTTONS__FUNCTIONS_H_
#define MM_INTERFACES__MSG__DETAIL__JOYSTICK_BUTTONS__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "mm_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "mm_interfaces/msg/detail/joystick_buttons__struct.h"

/// Initialize msg/JoystickButtons message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * mm_interfaces__msg__JoystickButtons
 * )) before or use
 * mm_interfaces__msg__JoystickButtons__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_mm_interfaces
bool
mm_interfaces__msg__JoystickButtons__init(mm_interfaces__msg__JoystickButtons * msg);

/// Finalize msg/JoystickButtons message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mm_interfaces
void
mm_interfaces__msg__JoystickButtons__fini(mm_interfaces__msg__JoystickButtons * msg);

/// Create msg/JoystickButtons message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * mm_interfaces__msg__JoystickButtons__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_mm_interfaces
mm_interfaces__msg__JoystickButtons *
mm_interfaces__msg__JoystickButtons__create();

/// Destroy msg/JoystickButtons message.
/**
 * It calls
 * mm_interfaces__msg__JoystickButtons__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mm_interfaces
void
mm_interfaces__msg__JoystickButtons__destroy(mm_interfaces__msg__JoystickButtons * msg);

/// Check for msg/JoystickButtons message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_mm_interfaces
bool
mm_interfaces__msg__JoystickButtons__are_equal(const mm_interfaces__msg__JoystickButtons * lhs, const mm_interfaces__msg__JoystickButtons * rhs);

/// Copy a msg/JoystickButtons message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_mm_interfaces
bool
mm_interfaces__msg__JoystickButtons__copy(
  const mm_interfaces__msg__JoystickButtons * input,
  mm_interfaces__msg__JoystickButtons * output);

/// Initialize array of msg/JoystickButtons messages.
/**
 * It allocates the memory for the number of elements and calls
 * mm_interfaces__msg__JoystickButtons__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_mm_interfaces
bool
mm_interfaces__msg__JoystickButtons__Sequence__init(mm_interfaces__msg__JoystickButtons__Sequence * array, size_t size);

/// Finalize array of msg/JoystickButtons messages.
/**
 * It calls
 * mm_interfaces__msg__JoystickButtons__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mm_interfaces
void
mm_interfaces__msg__JoystickButtons__Sequence__fini(mm_interfaces__msg__JoystickButtons__Sequence * array);

/// Create array of msg/JoystickButtons messages.
/**
 * It allocates the memory for the array and calls
 * mm_interfaces__msg__JoystickButtons__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_mm_interfaces
mm_interfaces__msg__JoystickButtons__Sequence *
mm_interfaces__msg__JoystickButtons__Sequence__create(size_t size);

/// Destroy array of msg/JoystickButtons messages.
/**
 * It calls
 * mm_interfaces__msg__JoystickButtons__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mm_interfaces
void
mm_interfaces__msg__JoystickButtons__Sequence__destroy(mm_interfaces__msg__JoystickButtons__Sequence * array);

/// Check for msg/JoystickButtons message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_mm_interfaces
bool
mm_interfaces__msg__JoystickButtons__Sequence__are_equal(const mm_interfaces__msg__JoystickButtons__Sequence * lhs, const mm_interfaces__msg__JoystickButtons__Sequence * rhs);

/// Copy an array of msg/JoystickButtons messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_mm_interfaces
bool
mm_interfaces__msg__JoystickButtons__Sequence__copy(
  const mm_interfaces__msg__JoystickButtons__Sequence * input,
  mm_interfaces__msg__JoystickButtons__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // MM_INTERFACES__MSG__DETAIL__JOYSTICK_BUTTONS__FUNCTIONS_H_
