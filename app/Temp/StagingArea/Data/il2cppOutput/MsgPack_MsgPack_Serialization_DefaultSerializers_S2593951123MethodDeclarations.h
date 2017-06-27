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

// MsgPack.Serialization.DefaultSerializers.System_ByteArrayMessagePackSerializer
struct System_ByteArrayMessagePackSerializer_t2593951123;
// MsgPack.Serialization.SerializationContext
struct SerializationContext_t1484625559;
// MsgPack.Packer
struct Packer_t1439452732;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// MsgPack.Unpacker
struct Unpacker_t998931393;

#include "codegen/il2cpp-codegen.h"
#include "MsgPack_MsgPack_Serialization_SerializationContext1484625559.h"
#include "MsgPack_MsgPack_Packer1439452732.h"
#include "MsgPack_MsgPack_Unpacker998931393.h"

// System.Void MsgPack.Serialization.DefaultSerializers.System_ByteArrayMessagePackSerializer::.ctor(MsgPack.Serialization.SerializationContext)
extern "C"  void System_ByteArrayMessagePackSerializer__ctor_m2522096291 (System_ByteArrayMessagePackSerializer_t2593951123 * __this, SerializationContext_t1484625559 * ___ownerContext0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MsgPack.Serialization.DefaultSerializers.System_ByteArrayMessagePackSerializer::PackToCore(MsgPack.Packer,System.Byte[])
extern "C"  void System_ByteArrayMessagePackSerializer_PackToCore_m133284736 (System_ByteArrayMessagePackSerializer_t2593951123 * __this, Packer_t1439452732 * ___packer0, ByteU5BU5D_t3397334013* ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] MsgPack.Serialization.DefaultSerializers.System_ByteArrayMessagePackSerializer::UnpackFromCore(MsgPack.Unpacker)
extern "C"  ByteU5BU5D_t3397334013* System_ByteArrayMessagePackSerializer_UnpackFromCore_m2348083990 (System_ByteArrayMessagePackSerializer_t2593951123 * __this, Unpacker_t998931393 * ___unpacker0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
