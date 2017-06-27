#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// MsgPack.MessagePackObject/ValueTypeCode
struct ValueTypeCode_t533787052;
// System.Type
struct Type_t;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "MsgPack_MsgPack_MessagePackObject_MessagePackValue1429579074.h"
#include "mscorlib_System_Type1303803226.h"

// MsgPack.MessagePackObject/MessagePackValueTypeCode MsgPack.MessagePackObject/ValueTypeCode::get_TypeCode()
extern "C"  int32_t ValueTypeCode_get_TypeCode_m2456543592 (ValueTypeCode_t533787052 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MsgPack.MessagePackObject/ValueTypeCode::get_IsSigned()
extern "C"  bool ValueTypeCode_get_IsSigned_m3055474448 (ValueTypeCode_t533787052 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MsgPack.MessagePackObject/ValueTypeCode::get_IsInteger()
extern "C"  bool ValueTypeCode_get_IsInteger_m513830652 (ValueTypeCode_t533787052 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type MsgPack.MessagePackObject/ValueTypeCode::get_Type()
extern "C"  Type_t * ValueTypeCode_get_Type_m3159052412 (ValueTypeCode_t533787052 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MsgPack.MessagePackObject/ValueTypeCode::.ctor(System.Type,MsgPack.MessagePackObject/MessagePackValueTypeCode)
extern "C"  void ValueTypeCode__ctor_m1374015760 (ValueTypeCode_t533787052 * __this, Type_t * ___type0, int32_t ___typeCode1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String MsgPack.MessagePackObject/ValueTypeCode::ToString()
extern "C"  String_t* ValueTypeCode_ToString_m262353260 (ValueTypeCode_t533787052 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
