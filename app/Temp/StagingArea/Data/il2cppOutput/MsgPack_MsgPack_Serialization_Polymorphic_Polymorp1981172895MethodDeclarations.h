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

// MsgPack.Serialization.Polymorphic.PolymorphicSerializerProvider`1<System.Boolean>
struct PolymorphicSerializerProvider_1_t1981172895;
// MsgPack.Serialization.SerializationContext
struct SerializationContext_t1484625559;
// MsgPack.Serialization.IMessagePackSingleObjectSerializer
struct IMessagePackSingleObjectSerializer_t659509506;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "MsgPack_MsgPack_Serialization_SerializationContext1484625559.h"
#include "mscorlib_System_Object2689449295.h"

// System.Void MsgPack.Serialization.Polymorphic.PolymorphicSerializerProvider`1<System.Boolean>::.ctor(MsgPack.Serialization.SerializationContext,MsgPack.Serialization.IMessagePackSingleObjectSerializer)
extern "C"  void PolymorphicSerializerProvider_1__ctor_m3626694655_gshared (PolymorphicSerializerProvider_1_t1981172895 * __this, SerializationContext_t1484625559 * ___context0, Il2CppObject * ___defaultSerializer1, const MethodInfo* method);
#define PolymorphicSerializerProvider_1__ctor_m3626694655(__this, ___context0, ___defaultSerializer1, method) ((  void (*) (PolymorphicSerializerProvider_1_t1981172895 *, SerializationContext_t1484625559 *, Il2CppObject *, const MethodInfo*))PolymorphicSerializerProvider_1__ctor_m3626694655_gshared)(__this, ___context0, ___defaultSerializer1, method)
// System.Object MsgPack.Serialization.Polymorphic.PolymorphicSerializerProvider`1<System.Boolean>::Get(MsgPack.Serialization.SerializationContext,System.Object)
extern "C"  Il2CppObject * PolymorphicSerializerProvider_1_Get_m806230438_gshared (PolymorphicSerializerProvider_1_t1981172895 * __this, SerializationContext_t1484625559 * ___context0, Il2CppObject * ___providerParameter1, const MethodInfo* method);
#define PolymorphicSerializerProvider_1_Get_m806230438(__this, ___context0, ___providerParameter1, method) ((  Il2CppObject * (*) (PolymorphicSerializerProvider_1_t1981172895 *, SerializationContext_t1484625559 *, Il2CppObject *, const MethodInfo*))PolymorphicSerializerProvider_1_Get_m806230438_gshared)(__this, ___context0, ___providerParameter1, method)
