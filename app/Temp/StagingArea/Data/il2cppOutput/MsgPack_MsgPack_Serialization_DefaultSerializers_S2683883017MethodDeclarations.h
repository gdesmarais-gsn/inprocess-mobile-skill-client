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

// MsgPack.Serialization.DefaultSerializers.System_StringMessagePackSerializer
struct System_StringMessagePackSerializer_t2683883017;
// MsgPack.Serialization.SerializationContext
struct SerializationContext_t1484625559;
// MsgPack.Packer
struct Packer_t1439452732;
// System.String
struct String_t;
// MsgPack.Unpacker
struct Unpacker_t998931393;

#include "codegen/il2cpp-codegen.h"
#include "MsgPack_MsgPack_Serialization_SerializationContext1484625559.h"
#include "MsgPack_MsgPack_Packer1439452732.h"
#include "mscorlib_System_String2029220233.h"
#include "MsgPack_MsgPack_Unpacker998931393.h"

// System.Void MsgPack.Serialization.DefaultSerializers.System_StringMessagePackSerializer::.ctor(MsgPack.Serialization.SerializationContext)
extern "C"  void System_StringMessagePackSerializer__ctor_m3089836661 (System_StringMessagePackSerializer_t2683883017 * __this, SerializationContext_t1484625559 * ___ownerContext0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MsgPack.Serialization.DefaultSerializers.System_StringMessagePackSerializer::PackToCore(MsgPack.Packer,System.String)
extern "C"  void System_StringMessagePackSerializer_PackToCore_m2078885157 (System_StringMessagePackSerializer_t2683883017 * __this, Packer_t1439452732 * ___packer0, String_t* ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String MsgPack.Serialization.DefaultSerializers.System_StringMessagePackSerializer::UnpackFromCore(MsgPack.Unpacker)
extern "C"  String_t* System_StringMessagePackSerializer_UnpackFromCore_m766443719 (System_StringMessagePackSerializer_t2683883017 * __this, Unpacker_t998931393 * ___unpacker0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
