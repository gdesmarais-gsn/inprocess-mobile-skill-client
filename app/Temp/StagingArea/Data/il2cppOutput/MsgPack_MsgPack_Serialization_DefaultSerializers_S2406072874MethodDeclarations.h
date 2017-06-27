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

// MsgPack.Serialization.DefaultSerializers.SByteArraySerializer
struct SByteArraySerializer_t2406072874;
// MsgPack.Serialization.SerializationContext
struct SerializationContext_t1484625559;
// MsgPack.Packer
struct Packer_t1439452732;
// System.SByte[]
struct SByteU5BU5D_t3472287392;
// MsgPack.Unpacker
struct Unpacker_t998931393;

#include "codegen/il2cpp-codegen.h"
#include "MsgPack_MsgPack_Serialization_SerializationContext1484625559.h"
#include "MsgPack_MsgPack_Packer1439452732.h"
#include "MsgPack_MsgPack_Unpacker998931393.h"

// System.Void MsgPack.Serialization.DefaultSerializers.SByteArraySerializer::.ctor(MsgPack.Serialization.SerializationContext)
extern "C"  void SByteArraySerializer__ctor_m2704748750 (SByteArraySerializer_t2406072874 * __this, SerializationContext_t1484625559 * ___ownerContext0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MsgPack.Serialization.DefaultSerializers.SByteArraySerializer::PackToCore(MsgPack.Packer,System.SByte[])
extern "C"  void SByteArraySerializer_PackToCore_m996165178 (SByteArraySerializer_t2406072874 * __this, Packer_t1439452732 * ___packer0, SByteU5BU5D_t3472287392* ___objectTree1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.SByte[] MsgPack.Serialization.DefaultSerializers.SByteArraySerializer::UnpackFromCore(MsgPack.Unpacker)
extern "C"  SByteU5BU5D_t3472287392* SByteArraySerializer_UnpackFromCore_m3860910658 (SByteArraySerializer_t2406072874 * __this, Unpacker_t998931393 * ___unpacker0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MsgPack.Serialization.DefaultSerializers.SByteArraySerializer::UnpackToCore(MsgPack.Unpacker,System.SByte[])
extern "C"  void SByteArraySerializer_UnpackToCore_m2859162296 (SByteArraySerializer_t2406072874 * __this, Unpacker_t998931393 * ___unpacker0, SByteU5BU5D_t3472287392* ___collection1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MsgPack.Serialization.DefaultSerializers.SByteArraySerializer::UnpackToCore(MsgPack.Unpacker,System.SByte[],System.Int32)
extern "C"  void SByteArraySerializer_UnpackToCore_m3921522571 (Il2CppObject * __this /* static, unused */, Unpacker_t998931393 * ___unpacker0, SByteU5BU5D_t3472287392* ___collection1, int32_t ___count2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
