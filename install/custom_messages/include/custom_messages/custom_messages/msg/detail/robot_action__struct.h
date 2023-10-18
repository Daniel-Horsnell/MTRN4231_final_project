// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from custom_messages:msg/RobotAction.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MESSAGES__MSG__DETAIL__ROBOT_ACTION__STRUCT_H_
#define CUSTOM_MESSAGES__MSG__DETAIL__ROBOT_ACTION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'command'
#include "rosidl_runtime_c/string.h"
// Member 'x'
// Member 'y'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/RobotAction in the package custom_messages.
/**
  * Robot Action Message
 */
typedef struct custom_messages__msg__RobotAction
{
  rosidl_runtime_c__String command;
  rosidl_runtime_c__double__Sequence x;
  rosidl_runtime_c__double__Sequence y;
} custom_messages__msg__RobotAction;

// Struct for a sequence of custom_messages__msg__RobotAction.
typedef struct custom_messages__msg__RobotAction__Sequence
{
  custom_messages__msg__RobotAction * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} custom_messages__msg__RobotAction__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CUSTOM_MESSAGES__MSG__DETAIL__ROBOT_ACTION__STRUCT_H_
