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

// MsgPack.Serialization.SerializerRepository
struct SerializerRepository_t73916898;
// System.Collections.Generic.Dictionary`2<System.RuntimeTypeHandle,System.Object>
struct Dictionary_2_t613314382;
// System.Type
struct Type_t;
// MsgPack.Serialization.MessagePackSerializerProvider
struct MessagePackSerializerProvider_t92845713;
// MsgPack.Serialization.SerializationContext
struct SerializationContext_t1484625559;

#include "codegen/il2cpp-codegen.h"
#include "MsgPack_MsgPack_Serialization_SerializerRepository73916898.h"
#include "mscorlib_System_Type1303803226.h"
#include "MsgPack_MsgPack_Serialization_MessagePackSerializerP92845713.h"
#include "MsgPack_MsgPack_Serialization_SerializerRegistratio603011963.h"
#include "MsgPack_MsgPack_Serialization_SerializationContext1484625559.h"

// System.Void MsgPack.Serialization.SerializerRepository::.ctor(MsgPack.Serialization.SerializerRepository)
extern "C"  void SerializerRepository__ctor_m3556691315 (SerializerRepository_t73916898 * __this, SerializerRepository_t73916898 * ___copiedFrom0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MsgPack.Serialization.SerializerRepository::.ctor(System.Collections.Generic.Dictionary`2<System.RuntimeTypeHandle,System.Object>)
extern "C"  void SerializerRepository__ctor_m2432418279 (SerializerRepository_t73916898 * __this, Dictionary_2_t613314382 * ___table0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MsgPack.Serialization.SerializerRepository::Dispose()
extern "C"  void SerializerRepository_Dispose_m2350646246 (SerializerRepository_t73916898 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MsgPack.Serialization.SerializerRepository::Register(System.Type,MsgPack.Serialization.MessagePackSerializerProvider,System.Type,MsgPack.Serialization.MessagePackSerializerProvider,MsgPack.Serialization.SerializerRegistrationOptions)
extern "C"  bool SerializerRepository_Register_m1393941405 (SerializerRepository_t73916898 * __this, Type_t * ___targetType0, MessagePackSerializerProvider_t92845713 * ___serializerProvider1, Type_t * ___nullableType2, MessagePackSerializerProvider_t92845713 * ___nullableSerializerProvider3, int32_t ___options4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// MsgPack.Serialization.SerializerRepository MsgPack.Serialization.SerializerRepository::GetDefault(MsgPack.Serialization.SerializationContext)
extern "C"  SerializerRepository_t73916898 * SerializerRepository_GetDefault_m1782847084 (Il2CppObject * __this /* static, unused */, SerializationContext_t1484625559 * ___ownerContext0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MsgPack.Serialization.SerializerRepository::Contains(System.Type)
extern "C"  bool SerializerRepository_Contains_m2857508743 (SerializerRepository_t73916898 * __this, Type_t * ___rootType0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.RuntimeTypeHandle,System.Object> MsgPack.Serialization.SerializerRepository::InitializeDefaultTable(MsgPack.Serialization.SerializationContext)
extern "C"  Dictionary_2_t613314382 * SerializerRepository_InitializeDefaultTable_m2788714846 (Il2CppObject * __this /* static, unused */, SerializationContext_t1484625559 * ___ownerContext0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MsgPack.Serialization.SerializerRepository::.cctor()
extern "C"  void SerializerRepository__cctor_m3143613482 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
