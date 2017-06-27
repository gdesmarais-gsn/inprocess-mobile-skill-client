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

// MsgPack.Serialization.EnumMessagePackSerializerProvider
struct EnumMessagePackSerializerProvider_t542250694;
// System.Type
struct Type_t;
// MsgPack.Serialization.ICustomizableEnumSerializer
struct ICustomizableEnumSerializer_t3222914780;
// System.Object
struct Il2CppObject;
// MsgPack.Serialization.SerializationContext
struct SerializationContext_t1484625559;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Type1303803226.h"
#include "MsgPack_MsgPack_Serialization_SerializationContext1484625559.h"
#include "mscorlib_System_Object2689449295.h"

// System.Void MsgPack.Serialization.EnumMessagePackSerializerProvider::.ctor(System.Type,MsgPack.Serialization.ICustomizableEnumSerializer)
extern "C"  void EnumMessagePackSerializerProvider__ctor_m2927749702 (EnumMessagePackSerializerProvider_t542250694 * __this, Type_t * ___enumType0, Il2CppObject * ___serializer1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object MsgPack.Serialization.EnumMessagePackSerializerProvider::Get(MsgPack.Serialization.SerializationContext,System.Object)
extern "C"  Il2CppObject * EnumMessagePackSerializerProvider_Get_m1210007355 (EnumMessagePackSerializerProvider_t542250694 * __this, SerializationContext_t1484625559 * ___context0, Il2CppObject * ___providerParameter1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
