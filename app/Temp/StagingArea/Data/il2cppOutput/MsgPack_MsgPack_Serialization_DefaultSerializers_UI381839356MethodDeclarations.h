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

// MsgPack.Serialization.DefaultSerializers.UInt32ArraySerializer
struct UInt32ArraySerializer_t381839356;
// MsgPack.Serialization.SerializationContext
struct SerializationContext_t1484625559;
// MsgPack.Packer
struct Packer_t1439452732;
// System.UInt32[]
struct UInt32U5BU5D_t59386216;
// MsgPack.Unpacker
struct Unpacker_t998931393;

#include "codegen/il2cpp-codegen.h"
#include "MsgPack_MsgPack_Serialization_SerializationContext1484625559.h"
#include "MsgPack_MsgPack_Packer1439452732.h"
#include "MsgPack_MsgPack_Unpacker998931393.h"

// System.Void MsgPack.Serialization.DefaultSerializers.UInt32ArraySerializer::.ctor(MsgPack.Serialization.SerializationContext)
extern "C"  void UInt32ArraySerializer__ctor_m1733356396 (UInt32ArraySerializer_t381839356 * __this, SerializationContext_t1484625559 * ___ownerContext0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MsgPack.Serialization.DefaultSerializers.UInt32ArraySerializer::PackToCore(MsgPack.Packer,System.UInt32[])
extern "C"  void UInt32ArraySerializer_PackToCore_m976245410 (UInt32ArraySerializer_t381839356 * __this, Packer_t1439452732 * ___packer0, UInt32U5BU5D_t59386216* ___objectTree1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32[] MsgPack.Serialization.DefaultSerializers.UInt32ArraySerializer::UnpackFromCore(MsgPack.Unpacker)
extern "C"  UInt32U5BU5D_t59386216* UInt32ArraySerializer_UnpackFromCore_m43457992 (UInt32ArraySerializer_t381839356 * __this, Unpacker_t998931393 * ___unpacker0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MsgPack.Serialization.DefaultSerializers.UInt32ArraySerializer::UnpackToCore(MsgPack.Unpacker,System.UInt32[])
extern "C"  void UInt32ArraySerializer_UnpackToCore_m1564007984 (UInt32ArraySerializer_t381839356 * __this, Unpacker_t998931393 * ___unpacker0, UInt32U5BU5D_t59386216* ___collection1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MsgPack.Serialization.DefaultSerializers.UInt32ArraySerializer::UnpackToCore(MsgPack.Unpacker,System.UInt32[],System.Int32)
extern "C"  void UInt32ArraySerializer_UnpackToCore_m3289927091 (Il2CppObject * __this /* static, unused */, Unpacker_t998931393 * ___unpacker0, UInt32U5BU5D_t59386216* ___collection1, int32_t ___count2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
