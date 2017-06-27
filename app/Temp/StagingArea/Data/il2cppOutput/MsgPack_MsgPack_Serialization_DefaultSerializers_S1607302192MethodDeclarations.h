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

// MsgPack.Serialization.DefaultSerializers.System_Int16MessagePackSerializer
struct System_Int16MessagePackSerializer_t1607302192;
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

// System.Void MsgPack.Serialization.DefaultSerializers.System_Int16MessagePackSerializer::.ctor(MsgPack.Serialization.SerializationContext)
extern "C"  void System_Int16MessagePackSerializer__ctor_m3092668704 (System_Int16MessagePackSerializer_t1607302192 * __this, SerializationContext_t1484625559 * ___ownerContext0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MsgPack.Serialization.DefaultSerializers.System_Int16MessagePackSerializer::PackToCore(MsgPack.Packer,System.Int16)
extern "C"  void System_Int16MessagePackSerializer_PackToCore_m1715817109 (System_Int16MessagePackSerializer_t1607302192 * __this, Packer_t1439452732 * ___packer0, int16_t ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 MsgPack.Serialization.DefaultSerializers.System_Int16MessagePackSerializer::UnpackFromCore(MsgPack.Unpacker)
extern "C"  int16_t System_Int16MessagePackSerializer_UnpackFromCore_m2410694971 (System_Int16MessagePackSerializer_t1607302192 * __this, Unpacker_t998931393 * ___unpacker0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
