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

// MsgPack.Serialization.DefaultSerializers.System_UInt64MessagePackSerializer
struct System_UInt64MessagePackSerializer_t241305760;
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

// System.Void MsgPack.Serialization.DefaultSerializers.System_UInt64MessagePackSerializer::.ctor(MsgPack.Serialization.SerializationContext)
extern "C"  void System_UInt64MessagePackSerializer__ctor_m1796606164 (System_UInt64MessagePackSerializer_t241305760 * __this, SerializationContext_t1484625559 * ___ownerContext0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MsgPack.Serialization.DefaultSerializers.System_UInt64MessagePackSerializer::PackToCore(MsgPack.Packer,System.UInt64)
extern "C"  void System_UInt64MessagePackSerializer_PackToCore_m622617221 (System_UInt64MessagePackSerializer_t241305760 * __this, Packer_t1439452732 * ___packer0, uint64_t ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 MsgPack.Serialization.DefaultSerializers.System_UInt64MessagePackSerializer::UnpackFromCore(MsgPack.Unpacker)
extern "C"  uint64_t System_UInt64MessagePackSerializer_UnpackFromCore_m2791554403 (System_UInt64MessagePackSerializer_t241305760 * __this, Unpacker_t998931393 * ___unpacker0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
