/*++

Copyright (c) Microsoft Corporation.  All rights reserved.

Module Name:

    devfiltertypes.h

Abstract:

    Defines types relating to device filters that evaluate on property sets

--*/



#pragma once

#include <winapifamily.h>
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
#include <devpropdef.h>

//
// DEVPROP_OPERATOR enum
//
// This enum are the operators that can be used in a DEVPROP_FILTER_EXPRESSION.
//

typedef 
#ifdef MIDL_PASS
[v1_enum] 
#endif
enum _DEVPROP_OPERATOR {
    // operator modifiers
    DEVPROP_OPERATOR_MODIFIER_NOT               = 0x00010000,
    DEVPROP_OPERATOR_MODIFIER_IGNORE_CASE       = 0x00020000,

    // comparison operators
    DEVPROP_OPERATOR_NONE                       = 0x00000000,
    DEVPROP_OPERATOR_EXISTS                     = 0x00000001,
    DEVPROP_OPERATOR_NOT_EXISTS                 = DEVPROP_OPERATOR_EXISTS | DEVPROP_OPERATOR_MODIFIER_NOT,
    DEVPROP_OPERATOR_EQUALS                     = 0x00000002,
    DEVPROP_OPERATOR_NOT_EQUALS                 = DEVPROP_OPERATOR_EQUALS | DEVPROP_OPERATOR_MODIFIER_NOT,
    DEVPROP_OPERATOR_GREATER_THAN               = 0x00000003,
    DEVPROP_OPERATOR_LESS_THAN                  = 0x00000004,
    DEVPROP_OPERATOR_GREATER_THAN_EQUALS        = 0x00000005,
    DEVPROP_OPERATOR_LESS_THAN_EQUALS           = 0x00000006,
    DEVPROP_OPERATOR_EQUALS_IGNORE_CASE         = DEVPROP_OPERATOR_EQUALS | DEVPROP_OPERATOR_MODIFIER_IGNORE_CASE,
    DEVPROP_OPERATOR_NOT_EQUALS_IGNORE_CASE     = DEVPROP_OPERATOR_EQUALS | DEVPROP_OPERATOR_MODIFIER_IGNORE_CASE | DEVPROP_OPERATOR_MODIFIER_NOT,
    DEVPROP_OPERATOR_BITWISE_AND                = 0x00000007,
    DEVPROP_OPERATOR_BITWISE_OR                 = 0x00000008,
    DEVPROP_OPERATOR_BEGINS_WITH                = 0x00000009,
    DEVPROP_OPERATOR_ENDS_WITH                  = 0x0000000a,
    DEVPROP_OPERATOR_CONTAINS                   = 0x0000000b,
    DEVPROP_OPERATOR_BEGINS_WITH_IGNORE_CASE    = DEVPROP_OPERATOR_BEGINS_WITH | DEVPROP_OPERATOR_MODIFIER_IGNORE_CASE,
    DEVPROP_OPERATOR_ENDS_WITH_IGNORE_CASE      = DEVPROP_OPERATOR_ENDS_WITH | DEVPROP_OPERATOR_MODIFIER_IGNORE_CASE,
    DEVPROP_OPERATOR_CONTAINS_IGNORE_CASE       = DEVPROP_OPERATOR_CONTAINS | DEVPROP_OPERATOR_MODIFIER_IGNORE_CASE,

    // list operators
    DEVPROP_OPERATOR_LIST_CONTAINS              = 0x00001000,
    DEVPROP_OPERATOR_LIST_ELEMENT_BEGINS_WITH   = 0x00002000,
    DEVPROP_OPERATOR_LIST_ELEMENT_ENDS_WITH     = 0x00003000,
    DEVPROP_OPERATOR_LIST_ELEMENT_CONTAINS      = 0x00004000,
    DEVPROP_OPERATOR_LIST_CONTAINS_IGNORE_CASE              = DEVPROP_OPERATOR_LIST_CONTAINS | DEVPROP_OPERATOR_MODIFIER_IGNORE_CASE,
    DEVPROP_OPERATOR_LIST_ELEMENT_BEGINS_WITH_IGNORE_CASE   = DEVPROP_OPERATOR_LIST_ELEMENT_BEGINS_WITH | DEVPROP_OPERATOR_MODIFIER_IGNORE_CASE,
    DEVPROP_OPERATOR_LIST_ELEMENT_ENDS_WITH_IGNORE_CASE     = DEVPROP_OPERATOR_LIST_ELEMENT_ENDS_WITH | DEVPROP_OPERATOR_MODIFIER_IGNORE_CASE,
    DEVPROP_OPERATOR_LIST_ELEMENT_CONTAINS_IGNORE_CASE      = DEVPROP_OPERATOR_LIST_ELEMENT_CONTAINS | DEVPROP_OPERATOR_MODIFIER_IGNORE_CASE,
    
    // logical operators
    DEVPROP_OPERATOR_AND_OPEN                   = 0x00100000,
    DEVPROP_OPERATOR_AND_CLOSE                  = 0x00200000,
    DEVPROP_OPERATOR_OR_OPEN                    = 0x00300000,
    DEVPROP_OPERATOR_OR_CLOSE                   = 0x00400000,
    DEVPROP_OPERATOR_NOT_OPEN                   = 0x00500000,
    DEVPROP_OPERATOR_NOT_CLOSE                  = 0x00600000,

    // array operators
    DEVPROP_OPERATOR_ARRAY_CONTAINS             = 0x10000000,

    // masks
    DEVPROP_OPERATOR_MASK_EVAL                  = 0x00000FFF,
    DEVPROP_OPERATOR_MASK_LIST                  = 0x0000F000,
    DEVPROP_OPERATOR_MASK_MODIFIER              = 0x000F0000,
    DEVPROP_OPERATOR_MASK_NOT_LOGICAL           = 0xF00FFFFF,
    DEVPROP_OPERATOR_MASK_LOGICAL               = 0x0FF00000,
    DEVPROP_OPERATOR_MASK_ARRAY                 = 0xF0000000

} DEVPROP_OPERATOR, *PDEVPROP_OPERATOR;

#ifndef MIDL_PASS
DEFINE_ENUM_FLAG_OPERATORS(DEVPROP_OPERATOR);
#endif

//
// DEVPROP_FILTER_EXPRESSION structure
//
// An array of DEVPROP_FILTER_EXPRESSION structures makes a filter.
//

typedef struct _DEVPROP_FILTER_EXPRESSION {
    DEVPROP_OPERATOR Operator;
    DEVPROPERTY Property;
} DEVPROP_FILTER_EXPRESSION, *PDEVPROP_FILTER_EXPRESSION;

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM) */
