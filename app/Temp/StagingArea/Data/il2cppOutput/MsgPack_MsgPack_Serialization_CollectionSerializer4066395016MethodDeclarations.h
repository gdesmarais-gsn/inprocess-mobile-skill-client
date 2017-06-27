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

// MsgPack.Serialization.CollectionSerializers.UnityEnumerableMessagePackSerializerBase
struct UnityEnumerableMessagePackSerializerBase_t4066395016;
// MsgPack.Serialization.IMessagePackSingleObjectSerializer
struct IMessagePackSingleObjectSerializer_t659509506;
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
#include "mscorlib_System_Object2689449295.h"

// MsgPack.Serialization.IMessagePackSingleObjectSerializer MsgPack.Serialization.CollectionSerializers.UnityEnumerableMessagePackSerializerBase::get_ItemSerializer()
extern "C"  Il2CppObject * UnityEnumerableMessagePackSerializerBase_get_ItemSerializer_m2737676573 (UnityEnumerableMessagePackSerializerBase_t4066395016 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MsgPack.Serialization.CollectionSerializers.UnityEnumerableMessagePackSerializerBase::.ctor(MsgPack.Serialization.SerializationContext,System.Type,System.Type,MsgPack.Serialization.PolymorphismSchema)
extern "C"  void UnityEnumerableMessagePackSerializerBase__ctor_m3699104277 (UnityEnumerableMessagePackSerializerBase_t4066395016 * __this, SerializationContext_t1484625559 * ___ownerContext0, Type_t * ___targetType1, Type_t * ___itemType2, PolymorphismSchema_t2690808062 * ___schema3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object MsgPack.Serialization.CollectionSerializers.UnityEnumerableMessagePackSerializerBase::MsgPack.Serialization.CollectionSerializers.ICollectionInstanceFactory.CreateInstance(System.Int32)
extern "C"  Il2CppObject * UnityEnumerableMessagePackSerializerBase_MsgPack_Serialization_CollectionSerializers_ICollectionInstanceFactory_CreateInstance_m4026211886 (UnityEnumerableMessagePackSerializerBase_t4066395016 * __this, int32_t ___initialCapacity0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MsgPack.Serialization.CollectionSerializers.UnityEnumerableMessagePackSerializerBase::UnpackToCore(MsgPack.Unpacker,System.Object)
extern "C"  void UnityEnumerableMessagePackSerializerBase_UnpackToCore_m1349300443 (UnityEnumerableMessagePackSerializerBase_t4066395016 * __this, Unpacker_t998931393 * ___unpacker0, Il2CppObject * ___collection1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MsgPack.Serialization.CollectionSerializers.UnityEnumerableMessagePackSerializerBase::UnpackToCore(MsgPack.Unpacker,System.Object,System.Int32)
extern "C"  void UnityEnumerableMessagePackSerializerBase_UnpackToCore_m2336865974 (UnityEnumerableMessagePackSerializerBase_t4066395016 * __this, Unpacker_t998931393 * ___unpacker0, Il2CppObject * ___collection1, int32_t ___itemsCount2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MsgPack.Serialization.CollectionSerializers.UnityEnumerableMessagePackSerializerBase::AddItem(System.Object,System.Object)
extern "C"  void UnityEnumerableMessagePackSerializerBase_AddItem_m3556121316 (UnityEnumerableMessagePackSerializerBase_t4066395016 * __this, Il2CppObject * ___collection0, Il2CppObject * ___item1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
