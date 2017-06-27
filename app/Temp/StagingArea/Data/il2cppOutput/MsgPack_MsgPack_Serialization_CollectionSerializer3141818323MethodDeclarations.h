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

// MsgPack.Serialization.CollectionSerializers.UnityNonGenericListMessagePackSerializer
struct UnityNonGenericListMessagePackSerializer_t3141818323;
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

// System.Void MsgPack.Serialization.CollectionSerializers.UnityNonGenericListMessagePackSerializer::.ctor(MsgPack.Serialization.SerializationContext,System.Type,MsgPack.Serialization.PolymorphismSchema)
extern "C"  void UnityNonGenericListMessagePackSerializer__ctor_m861926937 (UnityNonGenericListMessagePackSerializer_t3141818323 * __this, SerializationContext_t1484625559 * ___ownerContext0, Type_t * ___targetType1, PolymorphismSchema_t2690808062 * ___schema2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object MsgPack.Serialization.CollectionSerializers.UnityNonGenericListMessagePackSerializer::UnpackFromCore(MsgPack.Unpacker)
extern "C"  Il2CppObject * UnityNonGenericListMessagePackSerializer_UnpackFromCore_m1976340472 (UnityNonGenericListMessagePackSerializer_t3141818323 * __this, Unpacker_t998931393 * ___unpacker0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object MsgPack.Serialization.CollectionSerializers.UnityNonGenericListMessagePackSerializer::InternalUnpackFromCore(MsgPack.Unpacker)
extern "C"  Il2CppObject * UnityNonGenericListMessagePackSerializer_InternalUnpackFromCore_m1870473401 (UnityNonGenericListMessagePackSerializer_t3141818323 * __this, Unpacker_t998931393 * ___unpacker0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MsgPack.Serialization.CollectionSerializers.UnityNonGenericListMessagePackSerializer::AddItem(System.Object,System.Object)
extern "C"  void UnityNonGenericListMessagePackSerializer_AddItem_m2720191143 (UnityNonGenericListMessagePackSerializer_t3141818323 * __this, Il2CppObject * ___collection0, Il2CppObject * ___item1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
