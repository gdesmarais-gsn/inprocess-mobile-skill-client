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

// MsgPack.Serialization.DefaultSerializers.UInt64ArraySerializer
struct UInt64ArraySerializer_t1341192293;
// MsgPack.Serialization.SerializationContext
struct SerializationContext_t1484625559;
// MsgPack.Packer
struct Packer_t1439452732;
// System.UInt64[]
struct UInt64U5BU5D_t1668688775;
// MsgPack.Unpacker
struct Unpacker_t998931393;

#include "codegen/il2cpp-codegen.h"
#include "MsgPack_MsgPack_Serialization_SerializationContext1484625559.h"
#include "MsgPack_MsgPack_Packer1439452732.h"
#include "MsgPack_MsgPack_Unpacker998931393.h"

// System.Void MsgPack.Serialization.DefaultSerializers.UInt64ArraySerializer::.ctor(MsgPack.Serialization.SerializationContext)
extern "C"  void UInt64ArraySerializer__ctor_m3239017717 (UInt64ArraySerializer_t1341192293 * __this, SerializationContext_t1484625559 * ___ownerContext0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MsgPack.Serialization.DefaultSerializers.UInt64ArraySerializer::PackToCore(MsgPack.Packer,System.UInt64[])
extern "C"  void UInt64ArraySerializer_PackToCore_m3022880738 (UInt64ArraySerializer_t1341192293 * __this, Packer_t1439452732 * ___packer0, UInt64U5BU5D_t1668688775* ___objectTree1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64[] MsgPack.Serialization.DefaultSerializers.UInt64ArraySerializer::UnpackFromCore(MsgPack.Unpacker)
extern "C"  UInt64U5BU5D_t1668688775* UInt64ArraySerializer_UnpackFromCore_m1004592488 (UInt64ArraySerializer_t1341192293 * __this, Unpacker_t998931393 * ___unpacker0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MsgPack.Serialization.DefaultSerializers.UInt64ArraySerializer::UnpackToCore(MsgPack.Unpacker,System.UInt64[])
extern "C"  void UInt64ArraySerializer_UnpackToCore_m2230564144 (UInt64ArraySerializer_t1341192293 * __this, Unpacker_t998931393 * ___unpacker0, UInt64U5BU5D_t1668688775* ___collection1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MsgPack.Serialization.DefaultSerializers.UInt64ArraySerializer::UnpackToCore(MsgPack.Unpacker,System.UInt64[],System.Int32)
extern "C"  void UInt64ArraySerializer_UnpackToCore_m3614102707 (Il2CppObject * __this /* static, unused */, Unpacker_t998931393 * ___unpacker0, UInt64U5BU5D_t1668688775* ___collection1, int32_t ___count2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
