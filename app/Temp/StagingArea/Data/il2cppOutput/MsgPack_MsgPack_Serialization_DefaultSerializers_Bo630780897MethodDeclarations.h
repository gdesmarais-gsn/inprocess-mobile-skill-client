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

// MsgPack.Serialization.DefaultSerializers.BooleanArraySerializer
struct BooleanArraySerializer_t630780897;
// MsgPack.Serialization.SerializationContext
struct SerializationContext_t1484625559;
// MsgPack.Packer
struct Packer_t1439452732;
// System.Boolean[]
struct BooleanU5BU5D_t3568034315;
// MsgPack.Unpacker
struct Unpacker_t998931393;

#include "codegen/il2cpp-codegen.h"
#include "MsgPack_MsgPack_Serialization_SerializationContext1484625559.h"
#include "MsgPack_MsgPack_Packer1439452732.h"
#include "MsgPack_MsgPack_Unpacker998931393.h"

// System.Void MsgPack.Serialization.DefaultSerializers.BooleanArraySerializer::.ctor(MsgPack.Serialization.SerializationContext)
extern "C"  void BooleanArraySerializer__ctor_m3830298229 (BooleanArraySerializer_t630780897 * __this, SerializationContext_t1484625559 * ___ownerContext0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MsgPack.Serialization.DefaultSerializers.BooleanArraySerializer::PackToCore(MsgPack.Packer,System.Boolean[])
extern "C"  void BooleanArraySerializer_PackToCore_m1024770040 (BooleanArraySerializer_t630780897 * __this, Packer_t1439452732 * ___packer0, BooleanU5BU5D_t3568034315* ___objectTree1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean[] MsgPack.Serialization.DefaultSerializers.BooleanArraySerializer::UnpackFromCore(MsgPack.Unpacker)
extern "C"  BooleanU5BU5D_t3568034315* BooleanArraySerializer_UnpackFromCore_m2615787500 (BooleanArraySerializer_t630780897 * __this, Unpacker_t998931393 * ___unpacker0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MsgPack.Serialization.DefaultSerializers.BooleanArraySerializer::UnpackToCore(MsgPack.Unpacker,System.Boolean[])
extern "C"  void BooleanArraySerializer_UnpackToCore_m3096242890 (BooleanArraySerializer_t630780897 * __this, Unpacker_t998931393 * ___unpacker0, BooleanU5BU5D_t3568034315* ___collection1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MsgPack.Serialization.DefaultSerializers.BooleanArraySerializer::UnpackToCore(MsgPack.Unpacker,System.Boolean[],System.Int32)
extern "C"  void BooleanArraySerializer_UnpackToCore_m2118930951 (Il2CppObject * __this /* static, unused */, Unpacker_t998931393 * ___unpacker0, BooleanU5BU5D_t3568034315* ___collection1, int32_t ___count2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
