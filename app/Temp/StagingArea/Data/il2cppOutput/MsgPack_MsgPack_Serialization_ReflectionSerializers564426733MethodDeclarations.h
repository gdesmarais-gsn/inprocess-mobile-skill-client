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

// MsgPack.Serialization.ReflectionSerializers.ReflectionNonGenericCollectionMessagePackSerializer
struct ReflectionNonGenericCollectionMessagePackSerializer_t564426733;
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

// System.Void MsgPack.Serialization.ReflectionSerializers.ReflectionNonGenericCollectionMessagePackSerializer::.ctor(MsgPack.Serialization.SerializationContext,System.Type,System.Type,MsgPack.Serialization.PolymorphismSchema)
extern "C"  void ReflectionNonGenericCollectionMessagePackSerializer__ctor_m4082305247 (ReflectionNonGenericCollectionMessagePackSerializer_t564426733 * __this, SerializationContext_t1484625559 * ___ownerContext0, Type_t * ___abstractType1, Type_t * ___concreteType2, PolymorphismSchema_t2690808062 * ___itemsSchema3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object MsgPack.Serialization.ReflectionSerializers.ReflectionNonGenericCollectionMessagePackSerializer::UnpackFromCore(MsgPack.Unpacker)
extern "C"  Il2CppObject * ReflectionNonGenericCollectionMessagePackSerializer_UnpackFromCore_m2736139843 (ReflectionNonGenericCollectionMessagePackSerializer_t564426733 * __this, Unpacker_t998931393 * ___unpacker0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object MsgPack.Serialization.ReflectionSerializers.ReflectionNonGenericCollectionMessagePackSerializer::CreateInstance(System.Int32)
extern "C"  Il2CppObject * ReflectionNonGenericCollectionMessagePackSerializer_CreateInstance_m1697385079 (ReflectionNonGenericCollectionMessagePackSerializer_t564426733 * __this, int32_t ___initialCapacity0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MsgPack.Serialization.ReflectionSerializers.ReflectionNonGenericCollectionMessagePackSerializer::AddItem(System.Object,System.Object)
extern "C"  void ReflectionNonGenericCollectionMessagePackSerializer_AddItem_m2936522842 (ReflectionNonGenericCollectionMessagePackSerializer_t564426733 * __this, Il2CppObject * ___collection0, Il2CppObject * ___item1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
