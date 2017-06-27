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

// MsgPack.Serialization.CollectionSerializers.UnityEnumerableMessagePackSerializer
struct UnityEnumerableMessagePackSerializer_t3236157933;
// MsgPack.Serialization.SerializationContext
struct SerializationContext_t1484625559;
// System.Type
struct Type_t;
// MsgPack.Serialization.CollectionTraits
struct CollectionTraits_t1823801989;
// MsgPack.Serialization.PolymorphismSchema
struct PolymorphismSchema_t2690808062;
// MsgPack.Packer
struct Packer_t1439452732;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "MsgPack_MsgPack_Serialization_SerializationContext1484625559.h"
#include "mscorlib_System_Type1303803226.h"
#include "MsgPack_MsgPack_Serialization_CollectionTraits1823801989.h"
#include "MsgPack_MsgPack_Serialization_PolymorphismSchema2690808062.h"
#include "MsgPack_MsgPack_Packer1439452732.h"
#include "mscorlib_System_Object2689449295.h"

// System.Void MsgPack.Serialization.CollectionSerializers.UnityEnumerableMessagePackSerializer::.ctor(MsgPack.Serialization.SerializationContext,System.Type,MsgPack.Serialization.CollectionTraits,MsgPack.Serialization.PolymorphismSchema)
extern "C"  void UnityEnumerableMessagePackSerializer__ctor_m2727882194 (UnityEnumerableMessagePackSerializer_t3236157933 * __this, SerializationContext_t1484625559 * ___ownerContext0, Type_t * ___targetType1, CollectionTraits_t1823801989 * ___traits2, PolymorphismSchema_t2690808062 * ___schema3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MsgPack.Serialization.CollectionSerializers.UnityEnumerableMessagePackSerializer::PackToCore(MsgPack.Packer,System.Object)
extern "C"  void UnityEnumerableMessagePackSerializer_PackToCore_m3623660940 (UnityEnumerableMessagePackSerializer_t3236157933 * __this, Packer_t1439452732 * ___packer0, Il2CppObject * ___objectTree1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
