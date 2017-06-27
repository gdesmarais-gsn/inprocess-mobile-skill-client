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

// MsgPack.Serialization.DefaultSerializers.ByteArraySerializer
struct ByteArraySerializer_t3005340975;
// MsgPack.Serialization.SerializationContext
struct SerializationContext_t1484625559;
// MsgPack.Packer
struct Packer_t1439452732;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// MsgPack.Unpacker
struct Unpacker_t998931393;

#include "codegen/il2cpp-codegen.h"
#include "MsgPack_MsgPack_Serialization_SerializationContext1484625559.h"
#include "MsgPack_MsgPack_Packer1439452732.h"
#include "MsgPack_MsgPack_Unpacker998931393.h"

// System.Void MsgPack.Serialization.DefaultSerializers.ByteArraySerializer::.ctor(MsgPack.Serialization.SerializationContext)
extern "C"  void ByteArraySerializer__ctor_m3755583103 (ByteArraySerializer_t3005340975 * __this, SerializationContext_t1484625559 * ___ownerContext0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MsgPack.Serialization.DefaultSerializers.ByteArraySerializer::PackToCore(MsgPack.Packer,System.Byte[])
extern "C"  void ByteArraySerializer_PackToCore_m3431699074 (ByteArraySerializer_t3005340975 * __this, Packer_t1439452732 * ___packer0, ByteU5BU5D_t3397334013* ___objectTree1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] MsgPack.Serialization.DefaultSerializers.ByteArraySerializer::UnpackFromCore(MsgPack.Unpacker)
extern "C"  ByteU5BU5D_t3397334013* ByteArraySerializer_UnpackFromCore_m3409479080 (ByteArraySerializer_t3005340975 * __this, Unpacker_t998931393 * ___unpacker0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MsgPack.Serialization.DefaultSerializers.ByteArraySerializer::UnpackToCore(MsgPack.Unpacker,System.Byte[])
extern "C"  void ByteArraySerializer_UnpackToCore_m2053772880 (ByteArraySerializer_t3005340975 * __this, Unpacker_t998931393 * ___unpacker0, ByteU5BU5D_t3397334013* ___collection1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MsgPack.Serialization.DefaultSerializers.ByteArraySerializer::UnpackToCore(MsgPack.Unpacker,System.Byte[],System.Int32)
extern "C"  void ByteArraySerializer_UnpackToCore_m529039443 (Il2CppObject * __this /* static, unused */, Unpacker_t998931393 * ___unpacker0, ByteU5BU5D_t3397334013* ___collection1, int32_t ___count2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
