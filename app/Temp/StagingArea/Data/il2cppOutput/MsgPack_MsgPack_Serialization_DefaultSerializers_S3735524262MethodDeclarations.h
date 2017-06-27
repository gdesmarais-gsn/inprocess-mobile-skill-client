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

// MsgPack.Serialization.DefaultSerializers.System_BooleanMessagePackSerializer
struct System_BooleanMessagePackSerializer_t3735524262;
// MsgPack.Serialization.SerializationContext
struct SerializationContext_t1484625559;
// MsgPack.Packer
struct Packer_t1439452732;
// MsgPack.Unpacker
struct Unpacker_t998931393;

#include "codegen/il2cpp-codegen.h"
#include "MsgPack_MsgPack_Serialization_SerializationContext1484625559.h"
#include "MsgPack_MsgPack_Packer1439452732.h"
#include "MsgPack_MsgPack_Unpacker998931393.h"

// System.Void MsgPack.Serialization.DefaultSerializers.System_BooleanMessagePackSerializer::.ctor(MsgPack.Serialization.SerializationContext)
extern "C"  void System_BooleanMessagePackSerializer__ctor_m3726077558 (System_BooleanMessagePackSerializer_t3735524262 * __this, SerializationContext_t1484625559 * ___ownerContext0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MsgPack.Serialization.DefaultSerializers.System_BooleanMessagePackSerializer::PackToCore(MsgPack.Packer,System.Boolean)
extern "C"  void System_BooleanMessagePackSerializer_PackToCore_m3911491733 (System_BooleanMessagePackSerializer_t3735524262 * __this, Packer_t1439452732 * ___packer0, bool ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MsgPack.Serialization.DefaultSerializers.System_BooleanMessagePackSerializer::UnpackFromCore(MsgPack.Unpacker)
extern "C"  bool System_BooleanMessagePackSerializer_UnpackFromCore_m2847279547 (System_BooleanMessagePackSerializer_t3735524262 * __this, Unpacker_t998931393 * ___unpacker0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
