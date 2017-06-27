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

// MsgPack.Serialization.IMessagePackSingleObjectSerializer
struct IMessagePackSingleObjectSerializer_t659509506;
// MsgPack.Serialization.SerializationContext
struct SerializationContext_t1484625559;
// System.Type
struct Type_t;
// MsgPack.Serialization.PolymorphismSchema
struct PolymorphismSchema_t2690808062;
// MsgPack.Serialization.CollectionTraits
struct CollectionTraits_t1823801989;

#include "codegen/il2cpp-codegen.h"
#include "MsgPack_MsgPack_Serialization_SerializationContext1484625559.h"
#include "mscorlib_System_Type1303803226.h"
#include "MsgPack_MsgPack_Serialization_PolymorphismSchema2690808062.h"
#include "MsgPack_MsgPack_Serialization_CollectionTraits1823801989.h"

// MsgPack.Serialization.IMessagePackSingleObjectSerializer MsgPack.Serialization.DefaultSerializers.GenericSerializer::Create(MsgPack.Serialization.SerializationContext,System.Type,MsgPack.Serialization.PolymorphismSchema)
extern "C"  Il2CppObject * GenericSerializer_Create_m2087876189 (Il2CppObject * __this /* static, unused */, SerializationContext_t1484625559 * ___context0, Type_t * ___targetType1, PolymorphismSchema_t2690808062 * ___schema2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// MsgPack.Serialization.IMessagePackSingleObjectSerializer MsgPack.Serialization.DefaultSerializers.GenericSerializer::CreateArraySerializer(MsgPack.Serialization.SerializationContext,System.Type,MsgPack.Serialization.PolymorphismSchema)
extern "C"  Il2CppObject * GenericSerializer_CreateArraySerializer_m181581372 (Il2CppObject * __this /* static, unused */, SerializationContext_t1484625559 * ___context0, Type_t * ___targetType1, PolymorphismSchema_t2690808062 * ___itemsSchema2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// MsgPack.Serialization.IMessagePackSingleObjectSerializer MsgPack.Serialization.DefaultSerializers.GenericSerializer::CreateNullableSerializer(MsgPack.Serialization.SerializationContext,System.Type,System.Type)
extern "C"  Il2CppObject * GenericSerializer_CreateNullableSerializer_m3565279697 (Il2CppObject * __this /* static, unused */, SerializationContext_t1484625559 * ___context0, Type_t * ___nullableType1, Type_t * ___underlyingType2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// MsgPack.Serialization.IMessagePackSingleObjectSerializer MsgPack.Serialization.DefaultSerializers.GenericSerializer::CreateListSerializer(MsgPack.Serialization.SerializationContext,System.Type,MsgPack.Serialization.CollectionTraits,MsgPack.Serialization.PolymorphismSchema)
extern "C"  Il2CppObject * GenericSerializer_CreateListSerializer_m971972282 (Il2CppObject * __this /* static, unused */, SerializationContext_t1484625559 * ___context0, Type_t * ___targetType1, CollectionTraits_t1823801989 * ___traits2, PolymorphismSchema_t2690808062 * ___schema3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// MsgPack.Serialization.IMessagePackSingleObjectSerializer MsgPack.Serialization.DefaultSerializers.GenericSerializer::CreateDictionarySerializer(MsgPack.Serialization.SerializationContext,System.Type,MsgPack.Serialization.CollectionTraits,System.Type,System.Type,MsgPack.Serialization.PolymorphismSchema)
extern "C"  Il2CppObject * GenericSerializer_CreateDictionarySerializer_m3540123362 (Il2CppObject * __this /* static, unused */, SerializationContext_t1484625559 * ___context0, Type_t * ___targetType1, CollectionTraits_t1823801989 * ___traits2, Type_t * ___keyType3, Type_t * ___valueType4, PolymorphismSchema_t2690808062 * ___schema5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// MsgPack.Serialization.IMessagePackSingleObjectSerializer MsgPack.Serialization.DefaultSerializers.GenericSerializer::TryCreateAbstractCollectionSerializer(MsgPack.Serialization.SerializationContext,System.Type,System.Type,MsgPack.Serialization.PolymorphismSchema)
extern "C"  Il2CppObject * GenericSerializer_TryCreateAbstractCollectionSerializer_m1439608103 (Il2CppObject * __this /* static, unused */, SerializationContext_t1484625559 * ___context0, Type_t * ___abstractType1, Type_t * ___concreteType2, PolymorphismSchema_t2690808062 * ___schema3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// MsgPack.Serialization.IMessagePackSingleObjectSerializer MsgPack.Serialization.DefaultSerializers.GenericSerializer::TryCreateAbstractCollectionSerializer(MsgPack.Serialization.SerializationContext,System.Type,System.Type,MsgPack.Serialization.PolymorphismSchema,MsgPack.Serialization.CollectionTraits)
extern "C"  Il2CppObject * GenericSerializer_TryCreateAbstractCollectionSerializer_m3578198164 (Il2CppObject * __this /* static, unused */, SerializationContext_t1484625559 * ___context0, Type_t * ___abstractType1, Type_t * ___concreteType2, PolymorphismSchema_t2690808062 * ___schema3, CollectionTraits_t1823801989 * ___traits4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
