// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from custom_messages:msg/RobotAction.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "custom_messages/msg/detail/robot_action__rosidl_typesupport_introspection_c.h"
#include "custom_messages/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "custom_messages/msg/detail/robot_action__functions.h"
#include "custom_messages/msg/detail/robot_action__struct.h"


// Include directives for member types
// Member `command`
#include "rosidl_runtime_c/string_functions.h"
// Member `x`
// Member `y`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void custom_messages__msg__RobotAction__rosidl_typesupport_introspection_c__RobotAction_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  custom_messages__msg__RobotAction__init(message_memory);
}

void custom_messages__msg__RobotAction__rosidl_typesupport_introspection_c__RobotAction_fini_function(void * message_memory)
{
  custom_messages__msg__RobotAction__fini(message_memory);
}

size_t custom_messages__msg__RobotAction__rosidl_typesupport_introspection_c__size_function__RobotAction__x(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * custom_messages__msg__RobotAction__rosidl_typesupport_introspection_c__get_const_function__RobotAction__x(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * custom_messages__msg__RobotAction__rosidl_typesupport_introspection_c__get_function__RobotAction__x(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void custom_messages__msg__RobotAction__rosidl_typesupport_introspection_c__fetch_function__RobotAction__x(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    custom_messages__msg__RobotAction__rosidl_typesupport_introspection_c__get_const_function__RobotAction__x(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void custom_messages__msg__RobotAction__rosidl_typesupport_introspection_c__assign_function__RobotAction__x(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    custom_messages__msg__RobotAction__rosidl_typesupport_introspection_c__get_function__RobotAction__x(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool custom_messages__msg__RobotAction__rosidl_typesupport_introspection_c__resize_function__RobotAction__x(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t custom_messages__msg__RobotAction__rosidl_typesupport_introspection_c__size_function__RobotAction__y(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * custom_messages__msg__RobotAction__rosidl_typesupport_introspection_c__get_const_function__RobotAction__y(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * custom_messages__msg__RobotAction__rosidl_typesupport_introspection_c__get_function__RobotAction__y(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void custom_messages__msg__RobotAction__rosidl_typesupport_introspection_c__fetch_function__RobotAction__y(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    custom_messages__msg__RobotAction__rosidl_typesupport_introspection_c__get_const_function__RobotAction__y(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void custom_messages__msg__RobotAction__rosidl_typesupport_introspection_c__assign_function__RobotAction__y(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    custom_messages__msg__RobotAction__rosidl_typesupport_introspection_c__get_function__RobotAction__y(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool custom_messages__msg__RobotAction__rosidl_typesupport_introspection_c__resize_function__RobotAction__y(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember custom_messages__msg__RobotAction__rosidl_typesupport_introspection_c__RobotAction_message_member_array[3] = {
  {
    "command",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(custom_messages__msg__RobotAction, command),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "x",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(custom_messages__msg__RobotAction, x),  // bytes offset in struct
    NULL,  // default value
    custom_messages__msg__RobotAction__rosidl_typesupport_introspection_c__size_function__RobotAction__x,  // size() function pointer
    custom_messages__msg__RobotAction__rosidl_typesupport_introspection_c__get_const_function__RobotAction__x,  // get_const(index) function pointer
    custom_messages__msg__RobotAction__rosidl_typesupport_introspection_c__get_function__RobotAction__x,  // get(index) function pointer
    custom_messages__msg__RobotAction__rosidl_typesupport_introspection_c__fetch_function__RobotAction__x,  // fetch(index, &value) function pointer
    custom_messages__msg__RobotAction__rosidl_typesupport_introspection_c__assign_function__RobotAction__x,  // assign(index, value) function pointer
    custom_messages__msg__RobotAction__rosidl_typesupport_introspection_c__resize_function__RobotAction__x  // resize(index) function pointer
  },
  {
    "y",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(custom_messages__msg__RobotAction, y),  // bytes offset in struct
    NULL,  // default value
    custom_messages__msg__RobotAction__rosidl_typesupport_introspection_c__size_function__RobotAction__y,  // size() function pointer
    custom_messages__msg__RobotAction__rosidl_typesupport_introspection_c__get_const_function__RobotAction__y,  // get_const(index) function pointer
    custom_messages__msg__RobotAction__rosidl_typesupport_introspection_c__get_function__RobotAction__y,  // get(index) function pointer
    custom_messages__msg__RobotAction__rosidl_typesupport_introspection_c__fetch_function__RobotAction__y,  // fetch(index, &value) function pointer
    custom_messages__msg__RobotAction__rosidl_typesupport_introspection_c__assign_function__RobotAction__y,  // assign(index, value) function pointer
    custom_messages__msg__RobotAction__rosidl_typesupport_introspection_c__resize_function__RobotAction__y  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers custom_messages__msg__RobotAction__rosidl_typesupport_introspection_c__RobotAction_message_members = {
  "custom_messages__msg",  // message namespace
  "RobotAction",  // message name
  3,  // number of fields
  sizeof(custom_messages__msg__RobotAction),
  custom_messages__msg__RobotAction__rosidl_typesupport_introspection_c__RobotAction_message_member_array,  // message members
  custom_messages__msg__RobotAction__rosidl_typesupport_introspection_c__RobotAction_init_function,  // function to initialize message memory (memory has to be allocated)
  custom_messages__msg__RobotAction__rosidl_typesupport_introspection_c__RobotAction_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t custom_messages__msg__RobotAction__rosidl_typesupport_introspection_c__RobotAction_message_type_support_handle = {
  0,
  &custom_messages__msg__RobotAction__rosidl_typesupport_introspection_c__RobotAction_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_custom_messages
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, custom_messages, msg, RobotAction)() {
  if (!custom_messages__msg__RobotAction__rosidl_typesupport_introspection_c__RobotAction_message_type_support_handle.typesupport_identifier) {
    custom_messages__msg__RobotAction__rosidl_typesupport_introspection_c__RobotAction_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &custom_messages__msg__RobotAction__rosidl_typesupport_introspection_c__RobotAction_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
