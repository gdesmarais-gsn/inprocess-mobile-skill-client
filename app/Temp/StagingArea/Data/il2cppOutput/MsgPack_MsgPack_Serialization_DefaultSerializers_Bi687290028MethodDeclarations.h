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

// MsgPack.Serialization.DefaultSerializers.BinaryArraySerializer
struct BinaryArraySerializer_t687290028;
// MsgPack.Serialization.SerializationContext
struct SerializationContext_t1484625559;
// MsgPack.Packer
struct Packer_t1439452732;
// System.Byte[][]
struct ByteU5BU5DU5BU5D_t717853552;
// MsgPack.Unpacker
struct Unpacker_t998931393;

#include "codegen/il2cpp-codegen.h"
#include "MsgPack_MsgPack_Serialization_SerializationContext1484625559.h"
#include "MsgPack_MsgPack_Packer1439452732.h"
#include "MsgPack_MsgPack_Unpacker998931393.h"

// System.Void MsgPack.Serialization.DefaultSerializers.BinaryArraySerializer::.ctor(MsgPack.Serialization.SerializationContext)
extern "C"  void BinaryArraySerializer__ctor_m2253539772 (BinaryArraySerializer_t687290028 * __this, SerializationContext_t1484625559 * ___ownerContext0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MsgPack.Serialization.DefaultSerializers.BinaryArraySerializer::PackToCore(MsgPack.Packer,System.Byte[][])
extern "C"  void BinaryArraySerializer_PackToCore_m2382688573 (BinaryArraySerializer_t687290028 * __this, Packer_t1439452732 * ___packer0, ByteU5BU5DU5BU5D_t717853552* ___objectTree1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[][] MsgPack.Serialization.DefaultSerializers.BinaryArraySerializer::UnpackFromCore(MsgPack.Unpacker)
extern "C"  ByteU5BU5DU5BU5D_t717853552* BinaryArraySerializer_UnpackFromCore_m2948328643 (BinaryArraySerializer_t687290028 * __this, Unpacker_t998931393 * ___unpacker0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MsgPack.Serialization.DefaultSerializers.BinaryArraySerializer::UnpackToCore(MsgPack.Unpacker,System.Byte[][])
extern "C"  void BinaryArraySerializer_UnpackToCore_m907747861 (BinaryArraySerializer_t687290028 * __this, Unpacker_t998931393 * ___unpacker0, ByteU5BU5DU5BU5D_t717853552* ___collection1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MsgPack.Serialization.DefaultSerializers.BinaryArraySerializer::UnpackToCore(MsgPack.Unpacker,System.Byte[][],System.Int32)
extern "C"  void BinaryArraySerializer_UnpackToCore_m3839760420 (Il2CppObject * __this /* static, unused */, Unpacker_t998931393 * ___unpacker0, ByteU5BU5DU5BU5D_t717853552* ___collection1, int32_t ___count2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
