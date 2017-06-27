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

// MsgPack.Serialization.SerializationContext/SerializerGetter
struct SerializerGetter_t1981919291;
// MsgPack.Serialization.IMessagePackSingleObjectSerializer
struct IMessagePackSingleObjectSerializer_t659509506;
// MsgPack.Serialization.SerializationContext
struct SerializationContext_t1484625559;
// System.Type
struct Type_t;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "MsgPack_MsgPack_Serialization_SerializationContext1484625559.h"
#include "mscorlib_System_Type1303803226.h"
#include "mscorlib_System_Object2689449295.h"

// System.Void MsgPack.Serialization.SerializationContext/SerializerGetter::.ctor()
extern "C"  void SerializerGetter__ctor_m562346390 (SerializerGetter_t1981919291 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// MsgPack.Serialization.IMessagePackSingleObjectSerializer MsgPack.Serialization.SerializationContext/SerializerGetter::Get(MsgPack.Serialization.SerializationContext,System.Type,System.Object)
extern "C"  Il2CppObject * SerializerGetter_Get_m4135342519 (SerializerGetter_t1981919291 * __this, SerializationContext_t1484625559 * ___context0, Type_t * ___targetType1, Il2CppObject * ___providerParameter2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MsgPack.Serialization.SerializationContext/SerializerGetter::.cctor()
extern "C"  void SerializerGetter__cctor_m223344017 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
