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

// MsgPack.Serialization.DefaultSerializers.UInt16ArraySerializer
struct UInt16ArraySerializer_t197758914;
// MsgPack.Serialization.SerializationContext
struct SerializationContext_t1484625559;
// MsgPack.Packer
struct Packer_t1439452732;
// System.UInt16[]
struct UInt16U5BU5D_t2527266722;
// MsgPack.Unpacker
struct Unpacker_t998931393;

#include "codegen/il2cpp-codegen.h"
#include "MsgPack_MsgPack_Serialization_SerializationContext1484625559.h"
#include "MsgPack_MsgPack_Packer1439452732.h"
#include "MsgPack_MsgPack_Unpacker998931393.h"

// System.Void MsgPack.Serialization.DefaultSerializers.UInt16ArraySerializer::.ctor(MsgPack.Serialization.SerializationContext)
extern "C"  void UInt16ArraySerializer__ctor_m752734194 (UInt16ArraySerializer_t197758914 * __this, SerializationContext_t1484625559 * ___ownerContext0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MsgPack.Serialization.DefaultSerializers.UInt16ArraySerializer::PackToCore(MsgPack.Packer,System.UInt16[])
extern "C"  void UInt16ArraySerializer_PackToCore_m256547234 (UInt16ArraySerializer_t197758914 * __this, Packer_t1439452732 * ___packer0, UInt16U5BU5D_t2527266722* ___objectTree1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt16[] MsgPack.Serialization.DefaultSerializers.UInt16ArraySerializer::UnpackFromCore(MsgPack.Unpacker)
extern "C"  UInt16U5BU5D_t2527266722* UInt16ArraySerializer_UnpackFromCore_m1820420744 (UInt16ArraySerializer_t197758914 * __this, Unpacker_t998931393 * ___unpacker0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MsgPack.Serialization.DefaultSerializers.UInt16ArraySerializer::UnpackToCore(MsgPack.Unpacker,System.UInt16[])
extern "C"  void UInt16ArraySerializer_UnpackToCore_m495234224 (UInt16ArraySerializer_t197758914 * __this, Unpacker_t998931393 * ___unpacker0, UInt16U5BU5D_t2527266722* ___collection1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MsgPack.Serialization.DefaultSerializers.UInt16ArraySerializer::UnpackToCore(MsgPack.Unpacker,System.UInt16[],System.Int32)
extern "C"  void UInt16ArraySerializer_UnpackToCore_m2570501171 (Il2CppObject * __this /* static, unused */, Unpacker_t998931393 * ___unpacker0, UInt16U5BU5D_t2527266722* ___collection1, int32_t ___count2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
