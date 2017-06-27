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

// MsgPack.Serialization.ReflectionSerializers.ReflectionEnumMessagePackSerializer
struct ReflectionEnumMessagePackSerializer_t3834154452;
// MsgPack.Serialization.SerializationContext
struct SerializationContext_t1484625559;
// System.Type
struct Type_t;
// MsgPack.Packer
struct Packer_t1439452732;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "MsgPack_MsgPack_Serialization_SerializationContext1484625559.h"
#include "mscorlib_System_Type1303803226.h"
#include "MsgPack_MsgPack_Packer1439452732.h"
#include "mscorlib_System_Object2689449295.h"
#include "MsgPack_MsgPack_MessagePackObject2038085051.h"

// System.Void MsgPack.Serialization.ReflectionSerializers.ReflectionEnumMessagePackSerializer::.ctor(MsgPack.Serialization.SerializationContext,System.Type)
extern "C"  void ReflectionEnumMessagePackSerializer__ctor_m1040530097 (ReflectionEnumMessagePackSerializer_t3834154452 * __this, SerializationContext_t1484625559 * ___context0, Type_t * ___targetType1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MsgPack.Serialization.ReflectionSerializers.ReflectionEnumMessagePackSerializer::PackUnderlyingValueTo(MsgPack.Packer,System.Object)
extern "C"  void ReflectionEnumMessagePackSerializer_PackUnderlyingValueTo_m3782300595 (ReflectionEnumMessagePackSerializer_t3834154452 * __this, Packer_t1439452732 * ___packer0, Il2CppObject * ___enumValue1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object MsgPack.Serialization.ReflectionSerializers.ReflectionEnumMessagePackSerializer::UnpackFromUnderlyingValue(MsgPack.MessagePackObject)
extern "C"  Il2CppObject * ReflectionEnumMessagePackSerializer_UnpackFromUnderlyingValue_m2060604679 (ReflectionEnumMessagePackSerializer_t3834154452 * __this, MessagePackObject_t2038085051  ___messagePackObject0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
