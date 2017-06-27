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

// MsgPack.Serialization.SerializationContext
struct SerializationContext_t1484625559;
// MsgPack.Serialization.PolymorphismSchema
struct PolymorphismSchema_t2690808062;
// System.Type
struct Type_t;
// MsgPack.Serialization.CollectionSerializers.ICollectionInstanceFactory
struct ICollectionInstanceFactory_t3704555280;
// MsgPack.Serialization.IMessagePackSingleObjectSerializer
struct IMessagePackSingleObjectSerializer_t659509506;

#include "codegen/il2cpp-codegen.h"
#include "MsgPack_MsgPack_Serialization_SerializationContext1484625559.h"
#include "MsgPack_MsgPack_Serialization_PolymorphismSchema2690808062.h"
#include "mscorlib_System_Type1303803226.h"

// System.Void MsgPack.Serialization.DefaultSerializers.AbstractCollectionSerializerHelper::GetConcreteSerializer(MsgPack.Serialization.SerializationContext,MsgPack.Serialization.PolymorphismSchema,System.Type,System.Type,System.Type,MsgPack.Serialization.CollectionSerializers.ICollectionInstanceFactory&,MsgPack.Serialization.IMessagePackSingleObjectSerializer&)
extern "C"  void AbstractCollectionSerializerHelper_GetConcreteSerializer_m2458290601 (Il2CppObject * __this /* static, unused */, SerializationContext_t1484625559 * ___context0, PolymorphismSchema_t2690808062 * ___schema1, Type_t * ___abstractType2, Type_t * ___targetType3, Type_t * ___exampleType4, Il2CppObject ** ___factory5, Il2CppObject ** ___serializer6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
