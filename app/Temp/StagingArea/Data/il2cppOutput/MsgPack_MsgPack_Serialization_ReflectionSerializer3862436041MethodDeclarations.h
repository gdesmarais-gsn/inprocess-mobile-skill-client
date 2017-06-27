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

// MsgPack.Serialization.ReflectionSerializers.ReflectionDictionaryMessagePackSerializer
struct ReflectionDictionaryMessagePackSerializer_t3862436041;
// MsgPack.Serialization.SerializationContext
struct SerializationContext_t1484625559;
// System.Type
struct Type_t;
// MsgPack.Serialization.CollectionTraits
struct CollectionTraits_t1823801989;
// MsgPack.Serialization.PolymorphismSchema
struct PolymorphismSchema_t2690808062;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "MsgPack_MsgPack_Serialization_SerializationContext1484625559.h"
#include "mscorlib_System_Type1303803226.h"
#include "MsgPack_MsgPack_Serialization_CollectionTraits1823801989.h"
#include "MsgPack_MsgPack_Serialization_PolymorphismSchema2690808062.h"

// System.Void MsgPack.Serialization.ReflectionSerializers.ReflectionDictionaryMessagePackSerializer::.ctor(MsgPack.Serialization.SerializationContext,System.Type,System.Type,System.Type,System.Type,MsgPack.Serialization.CollectionTraits,MsgPack.Serialization.PolymorphismSchema)
extern "C"  void ReflectionDictionaryMessagePackSerializer__ctor_m1174029256 (ReflectionDictionaryMessagePackSerializer_t3862436041 * __this, SerializationContext_t1484625559 * ___ownerContext0, Type_t * ___abstractType1, Type_t * ___concreteType2, Type_t * ___keyType3, Type_t * ___valueType4, CollectionTraits_t1823801989 * ___traits5, PolymorphismSchema_t2690808062 * ___itemsSchema6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object MsgPack.Serialization.ReflectionSerializers.ReflectionDictionaryMessagePackSerializer::CreateInstance(System.Int32)
extern "C"  Il2CppObject * ReflectionDictionaryMessagePackSerializer_CreateInstance_m4149562175 (ReflectionDictionaryMessagePackSerializer_t3862436041 * __this, int32_t ___initialCapacity0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
