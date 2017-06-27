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

// MsgPack.Serialization.ReflectionSerializers.ReflectionNonGenericDictionaryMessagePackSerializer
struct ReflectionNonGenericDictionaryMessagePackSerializer_t2871816727;
// MsgPack.Serialization.SerializationContext
struct SerializationContext_t1484625559;
// System.Type
struct Type_t;
// MsgPack.Serialization.PolymorphismSchema
struct PolymorphismSchema_t2690808062;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "MsgPack_MsgPack_Serialization_SerializationContext1484625559.h"
#include "mscorlib_System_Type1303803226.h"
#include "MsgPack_MsgPack_Serialization_PolymorphismSchema2690808062.h"

// System.Void MsgPack.Serialization.ReflectionSerializers.ReflectionNonGenericDictionaryMessagePackSerializer::.ctor(MsgPack.Serialization.SerializationContext,System.Type,System.Type,MsgPack.Serialization.PolymorphismSchema)
extern "C"  void ReflectionNonGenericDictionaryMessagePackSerializer__ctor_m2964097645 (ReflectionNonGenericDictionaryMessagePackSerializer_t2871816727 * __this, SerializationContext_t1484625559 * ___ownerContext0, Type_t * ___abstractType1, Type_t * ___concreteType2, PolymorphismSchema_t2690808062 * ___itemsSchema3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object MsgPack.Serialization.ReflectionSerializers.ReflectionNonGenericDictionaryMessagePackSerializer::CreateInstance(System.Int32)
extern "C"  Il2CppObject * ReflectionNonGenericDictionaryMessagePackSerializer_CreateInstance_m2393764245 (ReflectionNonGenericDictionaryMessagePackSerializer_t2871816727 * __this, int32_t ___initialCapacity0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
