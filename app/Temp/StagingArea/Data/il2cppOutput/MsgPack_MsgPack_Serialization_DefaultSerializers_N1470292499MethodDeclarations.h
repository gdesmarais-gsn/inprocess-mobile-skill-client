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

// MsgPack.Serialization.DefaultSerializers.NullableMessagePackSerializer
struct NullableMessagePackSerializer_t1470292499;
// MsgPack.Serialization.SerializationContext
struct SerializationContext_t1484625559;
// System.Type
struct Type_t;
// MsgPack.Serialization.IMessagePackSingleObjectSerializer
struct IMessagePackSingleObjectSerializer_t659509506;
// MsgPack.Packer
struct Packer_t1439452732;
// System.Object
struct Il2CppObject;
// MsgPack.Unpacker
struct Unpacker_t998931393;

#include "codegen/il2cpp-codegen.h"
#include "MsgPack_MsgPack_Serialization_SerializationContext1484625559.h"
#include "mscorlib_System_Type1303803226.h"
#include "MsgPack_MsgPack_Packer1439452732.h"
#include "mscorlib_System_Object2689449295.h"
#include "MsgPack_MsgPack_Unpacker998931393.h"

// System.Void MsgPack.Serialization.DefaultSerializers.NullableMessagePackSerializer::.ctor(MsgPack.Serialization.SerializationContext,System.Type,System.Type)
extern "C"  void NullableMessagePackSerializer__ctor_m2681428835 (NullableMessagePackSerializer_t1470292499 * __this, SerializationContext_t1484625559 * ___ownerContext0, Type_t * ___nullableType1, Type_t * ___underlyingType2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MsgPack.Serialization.DefaultSerializers.NullableMessagePackSerializer::.ctor(MsgPack.Serialization.SerializationContext,System.Type,MsgPack.Serialization.IMessagePackSingleObjectSerializer)
extern "C"  void NullableMessagePackSerializer__ctor_m1322787260 (NullableMessagePackSerializer_t1470292499 * __this, SerializationContext_t1484625559 * ___ownerContext0, Type_t * ___nullableType1, Il2CppObject * ___valueSerializer2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MsgPack.Serialization.DefaultSerializers.NullableMessagePackSerializer::PackToCore(MsgPack.Packer,System.Object)
extern "C"  void NullableMessagePackSerializer_PackToCore_m2301166907 (NullableMessagePackSerializer_t1470292499 * __this, Packer_t1439452732 * ___packer0, Il2CppObject * ___objectTree1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object MsgPack.Serialization.DefaultSerializers.NullableMessagePackSerializer::UnpackFromCore(MsgPack.Unpacker)
extern "C"  Il2CppObject * NullableMessagePackSerializer_UnpackFromCore_m826485617 (NullableMessagePackSerializer_t1470292499 * __this, Unpacker_t998931393 * ___unpacker0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
