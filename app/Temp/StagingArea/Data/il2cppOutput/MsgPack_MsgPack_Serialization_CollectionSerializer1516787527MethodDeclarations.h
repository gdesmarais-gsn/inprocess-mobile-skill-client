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

// MsgPack.Serialization.CollectionSerializers.UnityDictionaryMessagePackSerializer
struct UnityDictionaryMessagePackSerializer_t1516787527;
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

// System.Void MsgPack.Serialization.CollectionSerializers.UnityDictionaryMessagePackSerializer::.ctor(MsgPack.Serialization.SerializationContext,System.Type,System.Type,System.Type,MsgPack.Serialization.CollectionTraits,MsgPack.Serialization.PolymorphismSchema)
extern "C"  void UnityDictionaryMessagePackSerializer__ctor_m2467969600 (UnityDictionaryMessagePackSerializer_t1516787527 * __this, SerializationContext_t1484625559 * ___ownerContext0, Type_t * ___targetType1, Type_t * ___keyType2, Type_t * ___valueType3, CollectionTraits_t1823801989 * ___traits4, PolymorphismSchema_t2690808062 * ___schema5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MsgPack.Serialization.CollectionSerializers.UnityDictionaryMessagePackSerializer::PackToCore(MsgPack.Packer,System.Object)
extern "C"  void UnityDictionaryMessagePackSerializer_PackToCore_m3107139002 (UnityDictionaryMessagePackSerializer_t1516787527 * __this, Packer_t1439452732 * ___packer0, Il2CppObject * ___objectTree1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object MsgPack.Serialization.CollectionSerializers.UnityDictionaryMessagePackSerializer::UnpackFromCore(MsgPack.Unpacker)
extern "C"  Il2CppObject * UnityDictionaryMessagePackSerializer_UnpackFromCore_m3378453292 (UnityDictionaryMessagePackSerializer_t1516787527 * __this, Unpacker_t998931393 * ___unpacker0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object MsgPack.Serialization.CollectionSerializers.UnityDictionaryMessagePackSerializer::InternalUnpackFromCore(MsgPack.Unpacker)
extern "C"  Il2CppObject * UnityDictionaryMessagePackSerializer_InternalUnpackFromCore_m1368716269 (UnityDictionaryMessagePackSerializer_t1516787527 * __this, Unpacker_t998931393 * ___unpacker0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object MsgPack.Serialization.CollectionSerializers.UnityDictionaryMessagePackSerializer::MsgPack.Serialization.CollectionSerializers.ICollectionInstanceFactory.CreateInstance(System.Int32)
extern "C"  Il2CppObject * UnityDictionaryMessagePackSerializer_MsgPack_Serialization_CollectionSerializers_ICollectionInstanceFactory_CreateInstance_m569838255 (UnityDictionaryMessagePackSerializer_t1516787527 * __this, int32_t ___initialCapacity0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MsgPack.Serialization.CollectionSerializers.UnityDictionaryMessagePackSerializer::UnpackToCore(MsgPack.Unpacker,System.Object)
extern "C"  void UnityDictionaryMessagePackSerializer_UnpackToCore_m3074543320 (UnityDictionaryMessagePackSerializer_t1516787527 * __this, Unpacker_t998931393 * ___unpacker0, Il2CppObject * ___collection1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MsgPack.Serialization.CollectionSerializers.UnityDictionaryMessagePackSerializer::UnpackToCore(MsgPack.Unpacker,System.Object,System.Int32)
extern "C"  void UnityDictionaryMessagePackSerializer_UnpackToCore_m3844734017 (UnityDictionaryMessagePackSerializer_t1516787527 * __this, Unpacker_t998931393 * ___unpacker0, Il2CppObject * ___collection1, int32_t ___itemsCount2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
