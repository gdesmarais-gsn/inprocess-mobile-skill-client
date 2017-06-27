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

// MsgPack.Serialization.CollectionSerializers.UnityCollectionMessagePackSerializer
struct UnityCollectionMessagePackSerializer_t4230566959;
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
// MsgPack.Unpacker
struct Unpacker_t998931393;

#include "codegen/il2cpp-codegen.h"
#include "MsgPack_MsgPack_Serialization_SerializationContext1484625559.h"
#include "mscorlib_System_Type1303803226.h"
#include "MsgPack_MsgPack_Serialization_CollectionTraits1823801989.h"
#include "MsgPack_MsgPack_Serialization_PolymorphismSchema2690808062.h"
#include "MsgPack_MsgPack_Packer1439452732.h"
#include "mscorlib_System_Object2689449295.h"
#include "MsgPack_MsgPack_Unpacker998931393.h"

// System.Void MsgPack.Serialization.CollectionSerializers.UnityCollectionMessagePackSerializer::.ctor(MsgPack.Serialization.SerializationContext,System.Type,MsgPack.Serialization.CollectionTraits,MsgPack.Serialization.PolymorphismSchema)
extern "C"  void UnityCollectionMessagePackSerializer__ctor_m1149205296 (UnityCollectionMessagePackSerializer_t4230566959 * __this, SerializationContext_t1484625559 * ___ownerContext0, Type_t * ___targetType1, CollectionTraits_t1823801989 * ___traits2, PolymorphismSchema_t2690808062 * ___schema3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MsgPack.Serialization.CollectionSerializers.UnityCollectionMessagePackSerializer::PackToCore(MsgPack.Packer,System.Object)
extern "C"  void UnityCollectionMessagePackSerializer_PackToCore_m1653783310 (UnityCollectionMessagePackSerializer_t4230566959 * __this, Packer_t1439452732 * ___packer0, Il2CppObject * ___objectTree1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object MsgPack.Serialization.CollectionSerializers.UnityCollectionMessagePackSerializer::UnpackFromCore(MsgPack.Unpacker)
extern "C"  Il2CppObject * UnityCollectionMessagePackSerializer_UnpackFromCore_m1298728456 (UnityCollectionMessagePackSerializer_t4230566959 * __this, Unpacker_t998931393 * ___unpacker0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object MsgPack.Serialization.CollectionSerializers.UnityCollectionMessagePackSerializer::InternalUnpackFromCore(MsgPack.Unpacker)
extern "C"  Il2CppObject * UnityCollectionMessagePackSerializer_InternalUnpackFromCore_m2608504379 (UnityCollectionMessagePackSerializer_t4230566959 * __this, Unpacker_t998931393 * ___unpacker0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MsgPack.Serialization.CollectionSerializers.UnityCollectionMessagePackSerializer::AddItem(System.Object,System.Object)
extern "C"  void UnityCollectionMessagePackSerializer_AddItem_m2002459549 (UnityCollectionMessagePackSerializer_t4230566959 * __this, Il2CppObject * ___collection0, Il2CppObject * ___item1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
