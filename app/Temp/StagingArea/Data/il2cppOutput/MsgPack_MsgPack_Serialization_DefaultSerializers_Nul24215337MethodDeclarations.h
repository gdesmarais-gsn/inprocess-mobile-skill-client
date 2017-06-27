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

// MsgPack.Serialization.DefaultSerializers.NullableUInt16ArraySerializer
struct NullableUInt16ArraySerializer_t24215337;
// MsgPack.Serialization.SerializationContext
struct SerializationContext_t1484625559;
// MsgPack.Packer
struct Packer_t1439452732;
// System.Nullable`1<System.UInt16>[]
struct Nullable_1U5BU5D_t1278342475;
// MsgPack.Unpacker
struct Unpacker_t998931393;

#include "codegen/il2cpp-codegen.h"
#include "MsgPack_MsgPack_Serialization_SerializationContext1484625559.h"
#include "MsgPack_MsgPack_Packer1439452732.h"
#include "MsgPack_MsgPack_Unpacker998931393.h"

// System.Void MsgPack.Serialization.DefaultSerializers.NullableUInt16ArraySerializer::.ctor(MsgPack.Serialization.SerializationContext)
extern "C"  void NullableUInt16ArraySerializer__ctor_m4133737945 (NullableUInt16ArraySerializer_t24215337 * __this, SerializationContext_t1484625559 * ___ownerContext0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MsgPack.Serialization.DefaultSerializers.NullableUInt16ArraySerializer::PackToCore(MsgPack.Packer,System.Nullable`1<System.UInt16>[])
extern "C"  void NullableUInt16ArraySerializer_PackToCore_m3619553240 (NullableUInt16ArraySerializer_t24215337 * __this, Packer_t1439452732 * ___packer0, Nullable_1U5BU5D_t1278342475* ___objectTree1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Nullable`1<System.UInt16>[] MsgPack.Serialization.DefaultSerializers.NullableUInt16ArraySerializer::UnpackFromCore(MsgPack.Unpacker)
extern "C"  Nullable_1U5BU5D_t1278342475* NullableUInt16ArraySerializer_UnpackFromCore_m3245066128 (NullableUInt16ArraySerializer_t24215337 * __this, Unpacker_t998931393 * ___unpacker0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MsgPack.Serialization.DefaultSerializers.NullableUInt16ArraySerializer::UnpackToCore(MsgPack.Unpacker,System.Nullable`1<System.UInt16>[])
extern "C"  void NullableUInt16ArraySerializer_UnpackToCore_m4174618282 (NullableUInt16ArraySerializer_t24215337 * __this, Unpacker_t998931393 * ___unpacker0, Nullable_1U5BU5D_t1278342475* ___collection1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MsgPack.Serialization.DefaultSerializers.NullableUInt16ArraySerializer::UnpackToCore(MsgPack.Unpacker,System.Nullable`1<System.UInt16>[],System.Int32)
extern "C"  void NullableUInt16ArraySerializer_UnpackToCore_m1075360795 (Il2CppObject * __this /* static, unused */, Unpacker_t998931393 * ___unpacker0, Nullable_1U5BU5D_t1278342475* ___collection1, int32_t ___count2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
