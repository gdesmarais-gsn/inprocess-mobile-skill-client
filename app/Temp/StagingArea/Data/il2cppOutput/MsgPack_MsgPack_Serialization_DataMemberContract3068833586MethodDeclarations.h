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

// MsgPack.Serialization.DataMemberContract
struct DataMemberContract_t3068833586;
// System.String
struct String_t;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// MsgPack.Serialization.MessagePackMemberAttribute
struct MessagePackMemberAttribute_t1681615454;

#include "codegen/il2cpp-codegen.h"
#include "MsgPack_MsgPack_Serialization_NilImplication418432652.h"
#include "mscorlib_System_Reflection_MemberInfo4043097260.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Nullable_1_gen334943763.h"
#include "MsgPack_MsgPack_Serialization_MessagePackMemberAtt1681615454.h"

// System.String MsgPack.Serialization.DataMemberContract::get_Name()
extern "C"  String_t* DataMemberContract_get_Name_m2282613176 (DataMemberContract_t3068833586 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 MsgPack.Serialization.DataMemberContract::get_Id()
extern "C"  int32_t DataMemberContract_get_Id_m1683335049 (DataMemberContract_t3068833586 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// MsgPack.Serialization.NilImplication MsgPack.Serialization.DataMemberContract::get_NilImplication()
extern "C"  int32_t DataMemberContract_get_NilImplication_m3442133623 (DataMemberContract_t3068833586 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MsgPack.Serialization.DataMemberContract::.ctor()
extern "C"  void DataMemberContract__ctor_m494604511 (DataMemberContract_t3068833586 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MsgPack.Serialization.DataMemberContract::.ctor(System.Reflection.MemberInfo)
extern "C"  void DataMemberContract__ctor_m3798934075 (DataMemberContract_t3068833586 * __this, MemberInfo_t * ___member0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MsgPack.Serialization.DataMemberContract::.ctor(System.Reflection.MemberInfo,System.String,MsgPack.Serialization.NilImplication,System.Nullable`1<System.Int32>)
extern "C"  void DataMemberContract__ctor_m2513499955 (DataMemberContract_t3068833586 * __this, MemberInfo_t * ___member0, String_t* ___name1, int32_t ___nilImplication2, Nullable_1_t334943763  ___id3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MsgPack.Serialization.DataMemberContract::.ctor(System.Reflection.MemberInfo,MsgPack.Serialization.MessagePackMemberAttribute)
extern "C"  void DataMemberContract__ctor_m1777207411 (DataMemberContract_t3068833586 * __this, MemberInfo_t * ___member0, MessagePackMemberAttribute_t1681615454 * ___attribute1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MsgPack.Serialization.DataMemberContract::.cctor()
extern "C"  void DataMemberContract__cctor_m2336336050 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
