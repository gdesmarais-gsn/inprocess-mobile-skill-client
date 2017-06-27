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

// MsgPack.Serialization.CollectionSerializers.UnityNonGenericEnumerableMessagePackSerializer
struct UnityNonGenericEnumerableMessagePackSerializer_t186213429;
// MsgPack.Serialization.SerializationContext
struct SerializationContext_t1484625559;
// System.Type
struct Type_t;
// MsgPack.Serialization.PolymorphismSchema
struct PolymorphismSchema_t2690808062;
// MsgPack.Packer
struct Packer_t1439452732;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "MsgPack_MsgPack_Serialization_SerializationContext1484625559.h"
#include "mscorlib_System_Type1303803226.h"
#include "MsgPack_MsgPack_Serialization_PolymorphismSchema2690808062.h"
#include "MsgPack_MsgPack_Packer1439452732.h"
#include "mscorlib_System_Object2689449295.h"

// System.Void MsgPack.Serialization.CollectionSerializers.UnityNonGenericEnumerableMessagePackSerializer::.ctor(MsgPack.Serialization.SerializationContext,System.Type,MsgPack.Serialization.PolymorphismSchema)
extern "C"  void UnityNonGenericEnumerableMessagePackSerializer__ctor_m3673981445 (UnityNonGenericEnumerableMessagePackSerializer_t186213429 * __this, SerializationContext_t1484625559 * ___ownerContext0, Type_t * ___targetType1, PolymorphismSchema_t2690808062 * ___schema2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MsgPack.Serialization.CollectionSerializers.UnityNonGenericEnumerableMessagePackSerializer::PackToCore(MsgPack.Packer,System.Object)
extern "C"  void UnityNonGenericEnumerableMessagePackSerializer_PackToCore_m732339856 (UnityNonGenericEnumerableMessagePackSerializer_t186213429 * __this, Packer_t1439452732 * ___packer0, Il2CppObject * ___objectTree1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
