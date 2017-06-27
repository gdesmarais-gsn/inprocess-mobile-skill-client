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

// MsgPack.Serialization.SerializingMember
struct SerializingMember_t909336757;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// MsgPack.Serialization.DataMemberContract
struct DataMemberContract_t3068833586;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Reflection_MemberInfo4043097260.h"
#include "MsgPack_MsgPack_Serialization_DataMemberContract3068833586.h"
#include "MsgPack_MsgPack_Serialization_EnumMemberSerializat4018077542.h"
#include "MsgPack_MsgPack_Serialization_DateTimeMemberConver2824791652.h"

// System.Void MsgPack.Serialization.SerializingMember::.ctor()
extern "C"  void SerializingMember__ctor_m3753774090 (SerializingMember_t909336757 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MsgPack.Serialization.SerializingMember::.ctor(System.Reflection.MemberInfo,MsgPack.Serialization.DataMemberContract)
extern "C"  void SerializingMember__ctor_m3139937996 (SerializingMember_t909336757 * __this, MemberInfo_t * ___member0, DataMemberContract_t3068833586 * ___contract1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// MsgPack.Serialization.EnumMemberSerializationMethod MsgPack.Serialization.SerializingMember::GetEnumMemberSerializationMethod()
extern "C"  int32_t SerializingMember_GetEnumMemberSerializationMethod_m383163345 (SerializingMember_t909336757 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// MsgPack.Serialization.DateTimeMemberConversionMethod MsgPack.Serialization.SerializingMember::GetDateTimeMemberConversionMethod()
extern "C"  int32_t SerializingMember_GetDateTimeMemberConversionMethod_m4038300253 (SerializingMember_t909336757 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
