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

// MsgPack.Serialization.DefaultSerializers.System_DoubleMessagePackSerializer
struct System_DoubleMessagePackSerializer_t1731986357;
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

// System.Void MsgPack.Serialization.DefaultSerializers.System_DoubleMessagePackSerializer::.ctor(MsgPack.Serialization.SerializationContext)
extern "C"  void System_DoubleMessagePackSerializer__ctor_m3833521769 (System_DoubleMessagePackSerializer_t1731986357 * __this, SerializationContext_t1484625559 * ___ownerContext0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MsgPack.Serialization.DefaultSerializers.System_DoubleMessagePackSerializer::PackToCore(MsgPack.Packer,System.Double)
extern "C"  void System_DoubleMessagePackSerializer_PackToCore_m992822053 (System_DoubleMessagePackSerializer_t1731986357 * __this, Packer_t1439452732 * ___packer0, double ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double MsgPack.Serialization.DefaultSerializers.System_DoubleMessagePackSerializer::UnpackFromCore(MsgPack.Unpacker)
extern "C"  double System_DoubleMessagePackSerializer_UnpackFromCore_m2057143303 (System_DoubleMessagePackSerializer_t1731986357 * __this, Unpacker_t998931393 * ___unpacker0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
