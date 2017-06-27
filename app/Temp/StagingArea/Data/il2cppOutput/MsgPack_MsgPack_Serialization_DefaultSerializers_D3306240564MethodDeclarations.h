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

// MsgPack.Serialization.DefaultSerializers.DoubleArraySerializer
struct DoubleArraySerializer_t3306240564;
// MsgPack.Serialization.SerializationContext
struct SerializationContext_t1484625559;
// MsgPack.Packer
struct Packer_t1439452732;
// System.Double[]
struct DoubleU5BU5D_t1889952540;
// MsgPack.Unpacker
struct Unpacker_t998931393;

#include "codegen/il2cpp-codegen.h"
#include "MsgPack_MsgPack_Serialization_SerializationContext1484625559.h"
#include "MsgPack_MsgPack_Packer1439452732.h"
#include "MsgPack_MsgPack_Unpacker998931393.h"

// System.Void MsgPack.Serialization.DefaultSerializers.DoubleArraySerializer::.ctor(MsgPack.Serialization.SerializationContext)
extern "C"  void DoubleArraySerializer__ctor_m266798020 (DoubleArraySerializer_t3306240564 * __this, SerializationContext_t1484625559 * ___ownerContext0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MsgPack.Serialization.DefaultSerializers.DoubleArraySerializer::PackToCore(MsgPack.Packer,System.Double[])
extern "C"  void DoubleArraySerializer_PackToCore_m1163811042 (DoubleArraySerializer_t3306240564 * __this, Packer_t1439452732 * ___packer0, DoubleU5BU5D_t1889952540* ___objectTree1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double[] MsgPack.Serialization.DefaultSerializers.DoubleArraySerializer::UnpackFromCore(MsgPack.Unpacker)
extern "C"  DoubleU5BU5D_t1889952540* DoubleArraySerializer_UnpackFromCore_m302191496 (DoubleArraySerializer_t3306240564 * __this, Unpacker_t998931393 * ___unpacker0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MsgPack.Serialization.DefaultSerializers.DoubleArraySerializer::UnpackToCore(MsgPack.Unpacker,System.Double[])
extern "C"  void DoubleArraySerializer_UnpackToCore_m2478042544 (DoubleArraySerializer_t3306240564 * __this, Unpacker_t998931393 * ___unpacker0, DoubleU5BU5D_t1889952540* ___collection1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MsgPack.Serialization.DefaultSerializers.DoubleArraySerializer::UnpackToCore(MsgPack.Unpacker,System.Double[],System.Int32)
extern "C"  void DoubleArraySerializer_UnpackToCore_m1609276723 (Il2CppObject * __this /* static, unused */, Unpacker_t998931393 * ___unpacker0, DoubleU5BU5D_t1889952540* ___collection1, int32_t ___count2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
