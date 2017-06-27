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

// MsgPack.Serialization.DefaultSerializers.System_ByteMessagePackSerializer
struct System_ByteMessagePackSerializer_t3331584584;
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

// System.Void MsgPack.Serialization.DefaultSerializers.System_ByteMessagePackSerializer::.ctor(MsgPack.Serialization.SerializationContext)
extern "C"  void System_ByteMessagePackSerializer__ctor_m349107664 (System_ByteMessagePackSerializer_t3331584584 * __this, SerializationContext_t1484625559 * ___ownerContext0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MsgPack.Serialization.DefaultSerializers.System_ByteMessagePackSerializer::PackToCore(MsgPack.Packer,System.Byte)
extern "C"  void System_ByteMessagePackSerializer_PackToCore_m1700639045 (System_ByteMessagePackSerializer_t3331584584 * __this, Packer_t1439452732 * ___packer0, uint8_t ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte MsgPack.Serialization.DefaultSerializers.System_ByteMessagePackSerializer::UnpackFromCore(MsgPack.Unpacker)
extern "C"  uint8_t System_ByteMessagePackSerializer_UnpackFromCore_m2373282419 (System_ByteMessagePackSerializer_t3331584584 * __this, Unpacker_t998931393 * ___unpacker0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
