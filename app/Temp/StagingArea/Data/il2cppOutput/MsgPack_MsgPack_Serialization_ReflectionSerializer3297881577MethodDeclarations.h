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

// MsgPack.Serialization.ReflectionSerializers.ReflectionNonGenericEnumerableMessagePackSerializer
struct ReflectionNonGenericEnumerableMessagePackSerializer_t3297881577;
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

// System.Void MsgPack.Serialization.ReflectionSerializers.ReflectionNonGenericEnumerableMessagePackSerializer::.ctor(MsgPack.Serialization.SerializationContext,System.Type,System.Type,MsgPack.Serialization.PolymorphismSchema)
extern "C"  void ReflectionNonGenericEnumerableMessagePackSerializer__ctor_m3213373371 (ReflectionNonGenericEnumerableMessagePackSerializer_t3297881577 * __this, SerializationContext_t1484625559 * ___ownerContext0, Type_t * ___abstractType1, Type_t * ___concreteType2, PolymorphismSchema_t2690808062 * ___itemsSchema3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object MsgPack.Serialization.ReflectionSerializers.ReflectionNonGenericEnumerableMessagePackSerializer::UnpackFromCore(MsgPack.Unpacker)
extern "C"  Il2CppObject * ReflectionNonGenericEnumerableMessagePackSerializer_UnpackFromCore_m984706743 (ReflectionNonGenericEnumerableMessagePackSerializer_t3297881577 * __this, Unpacker_t998931393 * ___unpacker0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object MsgPack.Serialization.ReflectionSerializers.ReflectionNonGenericEnumerableMessagePackSerializer::CreateInstance(System.Int32)
extern "C"  Il2CppObject * ReflectionNonGenericEnumerableMessagePackSerializer_CreateInstance_m2423378739 (ReflectionNonGenericEnumerableMessagePackSerializer_t3297881577 * __this, int32_t ___initialCapacity0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MsgPack.Serialization.ReflectionSerializers.ReflectionNonGenericEnumerableMessagePackSerializer::AddItem(System.Object,System.Object)
extern "C"  void ReflectionNonGenericEnumerableMessagePackSerializer_AddItem_m3345206936 (ReflectionNonGenericEnumerableMessagePackSerializer_t3297881577 * __this, Il2CppObject * ___collection0, Il2CppObject * ___item1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
