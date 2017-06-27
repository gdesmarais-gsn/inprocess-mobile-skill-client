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

// MsgPack.Serialization.DefaultSerializers.System_UInt16MessagePackSerializer
struct System_UInt16MessagePackSerializer_t3814292665;
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

// System.Void MsgPack.Serialization.DefaultSerializers.System_UInt16MessagePackSerializer::.ctor(MsgPack.Serialization.SerializationContext)
extern "C"  void System_UInt16MessagePackSerializer__ctor_m302688869 (System_UInt16MessagePackSerializer_t3814292665 * __this, SerializationContext_t1484625559 * ___ownerContext0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MsgPack.Serialization.DefaultSerializers.System_UInt16MessagePackSerializer::PackToCore(MsgPack.Packer,System.UInt16)
extern "C"  void System_UInt16MessagePackSerializer_PackToCore_m3416841317 (System_UInt16MessagePackSerializer_t3814292665 * __this, Packer_t1439452732 * ___packer0, uint16_t ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt16 MsgPack.Serialization.DefaultSerializers.System_UInt16MessagePackSerializer::UnpackFromCore(MsgPack.Unpacker)
extern "C"  uint16_t System_UInt16MessagePackSerializer_UnpackFromCore_m2447691199 (System_UInt16MessagePackSerializer_t3814292665 * __this, Unpacker_t998931393 * ___unpacker0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
