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

// MsgPack.Serialization.DefaultSerializers.System_Int32MessagePackSerializer
struct System_Int32MessagePackSerializer_t1553725226;
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

// System.Void MsgPack.Serialization.DefaultSerializers.System_Int32MessagePackSerializer::.ctor(MsgPack.Serialization.SerializationContext)
extern "C"  void System_Int32MessagePackSerializer__ctor_m1053251162 (System_Int32MessagePackSerializer_t1553725226 * __this, SerializationContext_t1484625559 * ___ownerContext0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MsgPack.Serialization.DefaultSerializers.System_Int32MessagePackSerializer::PackToCore(MsgPack.Packer,System.Int32)
extern "C"  void System_Int32MessagePackSerializer_PackToCore_m2099997809 (System_Int32MessagePackSerializer_t1553725226 * __this, Packer_t1439452732 * ___packer0, int32_t ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 MsgPack.Serialization.DefaultSerializers.System_Int32MessagePackSerializer::UnpackFromCore(MsgPack.Unpacker)
extern "C"  int32_t System_Int32MessagePackSerializer_UnpackFromCore_m3364545787 (System_Int32MessagePackSerializer_t1553725226 * __this, Unpacker_t998931393 * ___unpacker0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
