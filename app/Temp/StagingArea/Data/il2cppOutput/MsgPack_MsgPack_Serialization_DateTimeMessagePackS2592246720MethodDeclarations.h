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

// MsgPack.Serialization.SerializationContext
struct SerializationContext_t1484625559;
// System.Type
struct Type_t;

#include "codegen/il2cpp-codegen.h"
#include "MsgPack_MsgPack_Serialization_DateTimeConversionMe3801997378.h"
#include "MsgPack_MsgPack_Serialization_SerializationContext1484625559.h"
#include "MsgPack_MsgPack_Serialization_DateTimeMemberConver2824791652.h"
#include "mscorlib_System_Type1303803226.h"

// MsgPack.Serialization.DateTimeConversionMethod MsgPack.Serialization.DateTimeMessagePackSerializerHelpers::DetermineDateTimeConversionMethod(MsgPack.Serialization.SerializationContext,MsgPack.Serialization.DateTimeMemberConversionMethod)
extern "C"  int32_t DateTimeMessagePackSerializerHelpers_DetermineDateTimeConversionMethod_m1206151228 (Il2CppObject * __this /* static, unused */, SerializationContext_t1484625559 * ___context0, int32_t ___dateTimeMemberConversionMethod1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MsgPack.Serialization.DateTimeMessagePackSerializerHelpers::IsDateTime(System.Type)
extern "C"  bool DateTimeMessagePackSerializerHelpers_IsDateTime_m2241866975 (Il2CppObject * __this /* static, unused */, Type_t * ___dateTimeType0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
