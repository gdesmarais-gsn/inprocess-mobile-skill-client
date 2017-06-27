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

// MsgPack.Serialization.DefaultSerializers.System_TimeSpanMessagePackSerializer
struct System_TimeSpanMessagePackSerializer_t3351620197;
// MsgPack.Serialization.SerializationContext
struct SerializationContext_t1484625559;
// MsgPack.Packer
struct Packer_t1439452732;
// MsgPack.Unpacker
struct Unpacker_t998931393;

#include "codegen/il2cpp-codegen.h"
#include "MsgPack_MsgPack_Serialization_SerializationContext1484625559.h"
#include "MsgPack_MsgPack_Packer1439452732.h"
#include "mscorlib_System_TimeSpan3430258949.h"
#include "MsgPack_MsgPack_Unpacker998931393.h"

// System.Void MsgPack.Serialization.DefaultSerializers.System_TimeSpanMessagePackSerializer::.ctor(MsgPack.Serialization.SerializationContext)
extern "C"  void System_TimeSpanMessagePackSerializer__ctor_m2702477025 (System_TimeSpanMessagePackSerializer_t3351620197 * __this, SerializationContext_t1484625559 * ___ownerContext0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MsgPack.Serialization.DefaultSerializers.System_TimeSpanMessagePackSerializer::PackToCore(MsgPack.Packer,System.TimeSpan)
extern "C"  void System_TimeSpanMessagePackSerializer_PackToCore_m4258652485 (System_TimeSpanMessagePackSerializer_t3351620197 * __this, Packer_t1439452732 * ___packer0, TimeSpan_t3430258949  ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan MsgPack.Serialization.DefaultSerializers.System_TimeSpanMessagePackSerializer::UnpackFromCore(MsgPack.Unpacker)
extern "C"  TimeSpan_t3430258949  System_TimeSpanMessagePackSerializer_UnpackFromCore_m2910992479 (System_TimeSpanMessagePackSerializer_t3351620197 * __this, Unpacker_t998931393 * ___unpacker0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
