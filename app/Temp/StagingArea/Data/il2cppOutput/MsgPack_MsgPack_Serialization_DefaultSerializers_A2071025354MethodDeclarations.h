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

// MsgPack.Serialization.DefaultSerializers.AbstractDictionaryMessagePackSerializer
struct AbstractDictionaryMessagePackSerializer_t2071025354;
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
// MsgPack.Unpacker
struct Unpacker_t998931393;

#include "codegen/il2cpp-codegen.h"
#include "MsgPack_MsgPack_Serialization_SerializationContext1484625559.h"
#include "mscorlib_System_Type1303803226.h"
#include "MsgPack_MsgPack_Serialization_CollectionTraits1823801989.h"
#include "MsgPack_MsgPack_Serialization_PolymorphismSchema2690808062.h"
#include "MsgPack_MsgPack_Unpacker998931393.h"

// System.Void MsgPack.Serialization.DefaultSerializers.AbstractDictionaryMessagePackSerializer::.ctor(MsgPack.Serialization.SerializationContext,System.Type,System.Type,System.Type,System.Type,MsgPack.Serialization.CollectionTraits,MsgPack.Serialization.PolymorphismSchema)
extern "C"  void AbstractDictionaryMessagePackSerializer__ctor_m10822373 (AbstractDictionaryMessagePackSerializer_t2071025354 * __this, SerializationContext_t1484625559 * ___ownerContext0, Type_t * ___abstractType1, Type_t * ___concreteType2, Type_t * ___keyType3, Type_t * ___valueType4, CollectionTraits_t1823801989 * ___traits5, PolymorphismSchema_t2690808062 * ___schema6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object MsgPack.Serialization.DefaultSerializers.AbstractDictionaryMessagePackSerializer::InternalUnpackFromCore(MsgPack.Unpacker)
extern "C"  Il2CppObject * AbstractDictionaryMessagePackSerializer_InternalUnpackFromCore_m2144846127 (AbstractDictionaryMessagePackSerializer_t2071025354 * __this, Unpacker_t998931393 * ___unpacker0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object MsgPack.Serialization.DefaultSerializers.AbstractDictionaryMessagePackSerializer::CreateInstance(System.Int32)
extern "C"  Il2CppObject * AbstractDictionaryMessagePackSerializer_CreateInstance_m1404160318 (AbstractDictionaryMessagePackSerializer_t2071025354 * __this, int32_t ___initialCapacity0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
