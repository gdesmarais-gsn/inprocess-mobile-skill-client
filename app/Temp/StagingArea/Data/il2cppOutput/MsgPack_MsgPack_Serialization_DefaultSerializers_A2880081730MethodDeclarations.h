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

// MsgPack.Serialization.DefaultSerializers.AbstractNonGenericCollectionMessagePackSerializer
struct AbstractNonGenericCollectionMessagePackSerializer_t2880081730;
// MsgPack.Serialization.SerializationContext
struct SerializationContext_t1484625559;
// System.Type
struct Type_t;
// MsgPack.Serialization.PolymorphismSchema
struct PolymorphismSchema_t2690808062;
// System.Object
struct Il2CppObject;
// MsgPack.Unpacker
struct Unpacker_t998931393;

#include "codegen/il2cpp-codegen.h"
#include "MsgPack_MsgPack_Serialization_SerializationContext1484625559.h"
#include "mscorlib_System_Type1303803226.h"
#include "MsgPack_MsgPack_Serialization_PolymorphismSchema2690808062.h"
#include "MsgPack_MsgPack_Unpacker998931393.h"

// System.Void MsgPack.Serialization.DefaultSerializers.AbstractNonGenericCollectionMessagePackSerializer::.ctor(MsgPack.Serialization.SerializationContext,System.Type,System.Type,MsgPack.Serialization.PolymorphismSchema)
extern "C"  void AbstractNonGenericCollectionMessagePackSerializer__ctor_m1296886180 (AbstractNonGenericCollectionMessagePackSerializer_t2880081730 * __this, SerializationContext_t1484625559 * ___ownerContext0, Type_t * ___abstractType1, Type_t * ___concreteType2, PolymorphismSchema_t2690808062 * ___schema3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object MsgPack.Serialization.DefaultSerializers.AbstractNonGenericCollectionMessagePackSerializer::UnpackFromCore(MsgPack.Unpacker)
extern "C"  Il2CppObject * AbstractNonGenericCollectionMessagePackSerializer_UnpackFromCore_m639165992 (AbstractNonGenericCollectionMessagePackSerializer_t2880081730 * __this, Unpacker_t998931393 * ___unpacker0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object MsgPack.Serialization.DefaultSerializers.AbstractNonGenericCollectionMessagePackSerializer::CreateInstance(System.Int32)
extern "C"  Il2CppObject * AbstractNonGenericCollectionMessagePackSerializer_CreateInstance_m3805205538 (AbstractNonGenericCollectionMessagePackSerializer_t2880081730 * __this, int32_t ___initialCapacity0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
