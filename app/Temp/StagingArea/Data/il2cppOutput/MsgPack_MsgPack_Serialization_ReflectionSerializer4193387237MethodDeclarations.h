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

// System.Action`2<System.Object,System.Object>
struct Action_2_t2572051853;
// System.Type
struct Type_t;
// System.Collections.Generic.IList`1<MsgPack.Serialization.SerializingMember>
struct IList_1_t1450277358;
// MsgPack.Serialization.SerializationContext
struct SerializationContext_t1484625559;
// System.Func`2<System.Object,System.Object>[]
struct Func_2U5BU5D_t3764038616;
// System.Action`2<System.Object,System.Object>[]
struct Action_2U5BU5D_t1510349216;
// System.Reflection.MemberInfo[]
struct MemberInfoU5BU5D_t4238939941;
// MsgPack.Serialization.DataMemberContract[]
struct DataMemberContractU5BU5D_t2356511687;
// MsgPack.Serialization.IMessagePackSerializer[]
struct IMessagePackSerializerU5BU5D_t3829684320;
// System.Func`2<System.Int32,System.Object>
struct Func_2_t2241269688;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Type1303803226.h"
#include "MsgPack_MsgPack_Serialization_SerializationContext1484625559.h"

// System.Action`2<System.Object,System.Object> MsgPack.Serialization.ReflectionSerializers.ReflectionSerializerHelper::GetAddItem(System.Type)
extern "C"  Action_2_t2572051853 * ReflectionSerializerHelper_GetAddItem_m3944887765 (Il2CppObject * __this /* static, unused */, Type_t * ___targetType0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MsgPack.Serialization.ReflectionSerializers.ReflectionSerializerHelper::GetMetadata(System.Collections.Generic.IList`1<MsgPack.Serialization.SerializingMember>,MsgPack.Serialization.SerializationContext,System.Func`2<System.Object,System.Object>[]&,System.Action`2<System.Object,System.Object>[]&,System.Reflection.MemberInfo[]&,MsgPack.Serialization.DataMemberContract[]&,MsgPack.Serialization.IMessagePackSerializer[]&)
extern "C"  void ReflectionSerializerHelper_GetMetadata_m3205792981 (Il2CppObject * __this /* static, unused */, Il2CppObject* ___members0, SerializationContext_t1484625559 * ___context1, Func_2U5BU5D_t3764038616** ___getters2, Action_2U5BU5D_t1510349216** ___setters3, MemberInfoU5BU5D_t4238939941** ___memberInfos4, DataMemberContractU5BU5D_t2356511687** ___contracts5, IMessagePackSerializerU5BU5D_t3829684320** ___serializers6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Func`2<System.Int32,System.Object> MsgPack.Serialization.ReflectionSerializers.ReflectionSerializerHelper::CreateCollectionInstanceFactory(System.Type,System.Type,System.Type)
extern "C"  Func_2_t2241269688 * ReflectionSerializerHelper_CreateCollectionInstanceFactory_m1977256591 (Il2CppObject * __this /* static, unused */, Type_t * ___abstractType0, Type_t * ___targetType1, Type_t * ___comparisonType2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
