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

// MsgPack.Serialization.DefaultSerializers.System_CharMessagePackSerializer
struct System_CharMessagePackSerializer_t734474150;
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

// System.Void MsgPack.Serialization.DefaultSerializers.System_CharMessagePackSerializer::.ctor(MsgPack.Serialization.SerializationContext)
extern "C"  void System_CharMessagePackSerializer__ctor_m397365570 (System_CharMessagePackSerializer_t734474150 * __this, SerializationContext_t1484625559 * ___ownerContext0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MsgPack.Serialization.DefaultSerializers.System_CharMessagePackSerializer::PackToCore(MsgPack.Packer,System.Char)
extern "C"  void System_CharMessagePackSerializer_PackToCore_m1575135749 (System_CharMessagePackSerializer_t734474150 * __this, Packer_t1439452732 * ___packer0, Il2CppChar ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char MsgPack.Serialization.DefaultSerializers.System_CharMessagePackSerializer::UnpackFromCore(MsgPack.Unpacker)
extern "C"  Il2CppChar System_CharMessagePackSerializer_UnpackFromCore_m208888059 (System_CharMessagePackSerializer_t734474150 * __this, Unpacker_t998931393 * ___unpacker0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
