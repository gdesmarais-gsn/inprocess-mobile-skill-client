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

// MsgPack.Serialization.SerializerTypeKeyRepository
struct SerializerTypeKeyRepository_t521032515;
// System.Collections.Generic.Dictionary`2<System.RuntimeTypeHandle,System.Object>
struct Dictionary_2_t613314382;
// System.Object
struct Il2CppObject;
// MsgPack.Serialization.SerializationContext
struct SerializationContext_t1484625559;
// System.Type
struct Type_t;

#include "codegen/il2cpp-codegen.h"
#include "MsgPack_MsgPack_Serialization_SerializerTypeKeyRepo521032515.h"
#include "MsgPack_MsgPack_Serialization_SerializationContext1484625559.h"
#include "mscorlib_System_Type1303803226.h"

// System.Void MsgPack.Serialization.SerializerTypeKeyRepository::.ctor(MsgPack.Serialization.SerializerTypeKeyRepository)
extern "C"  void SerializerTypeKeyRepository__ctor_m2204937015 (SerializerTypeKeyRepository_t521032515 * __this, SerializerTypeKeyRepository_t521032515 * ___copiedFrom0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MsgPack.Serialization.SerializerTypeKeyRepository::.ctor(System.Collections.Generic.Dictionary`2<System.RuntimeTypeHandle,System.Object>)
extern "C"  void SerializerTypeKeyRepository__ctor_m3093188308 (SerializerTypeKeyRepository_t521032515 * __this, Dictionary_2_t613314382 * ___table0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object MsgPack.Serialization.SerializerTypeKeyRepository::Get(MsgPack.Serialization.SerializationContext,System.Type)
extern "C"  Il2CppObject * SerializerTypeKeyRepository_Get_m3582968739 (SerializerTypeKeyRepository_t521032515 * __this, SerializationContext_t1484625559 * ___context0, Type_t * ___keyType1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MsgPack.Serialization.SerializerTypeKeyRepository::.cctor()
extern "C"  void SerializerTypeKeyRepository__cctor_m3571682955 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
