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

// MsgPack.Serialization.DefaultSerializers.NullableUInt32ArraySerializer
struct NullableUInt32ArraySerializer_t679342319;
// MsgPack.Serialization.SerializationContext
struct SerializationContext_t1484625559;
// MsgPack.Packer
struct Packer_t1439452732;
// System.Nullable`1<System.UInt32>[]
struct Nullable_1U5BU5D_t3105429265;
// MsgPack.Unpacker
struct Unpacker_t998931393;

#include "codegen/il2cpp-codegen.h"
#include "MsgPack_MsgPack_Serialization_SerializationContext1484625559.h"
#include "MsgPack_MsgPack_Packer1439452732.h"
#include "MsgPack_MsgPack_Unpacker998931393.h"

// System.Void MsgPack.Serialization.DefaultSerializers.NullableUInt32ArraySerializer::.ctor(MsgPack.Serialization.SerializationContext)
extern "C"  void NullableUInt32ArraySerializer__ctor_m1570816351 (NullableUInt32ArraySerializer_t679342319 * __this, SerializationContext_t1484625559 * ___ownerContext0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MsgPack.Serialization.DefaultSerializers.NullableUInt32ArraySerializer::PackToCore(MsgPack.Packer,System.Nullable`1<System.UInt32>[])
extern "C"  void NullableUInt32ArraySerializer_PackToCore_m2269451544 (NullableUInt32ArraySerializer_t679342319 * __this, Packer_t1439452732 * ___packer0, Nullable_1U5BU5D_t3105429265* ___objectTree1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Nullable`1<System.UInt32>[] MsgPack.Serialization.DefaultSerializers.NullableUInt32ArraySerializer::UnpackFromCore(MsgPack.Unpacker)
extern "C"  Nullable_1U5BU5D_t3105429265* NullableUInt32ArraySerializer_UnpackFromCore_m3549983860 (NullableUInt32ArraySerializer_t679342319 * __this, Unpacker_t998931393 * ___unpacker0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MsgPack.Serialization.DefaultSerializers.NullableUInt32ArraySerializer::UnpackToCore(MsgPack.Unpacker,System.Nullable`1<System.UInt32>[])
extern "C"  void NullableUInt32ArraySerializer_UnpackToCore_m1225190634 (NullableUInt32ArraySerializer_t679342319 * __this, Unpacker_t998931393 * ___unpacker0, Nullable_1U5BU5D_t3105429265* ___collection1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MsgPack.Serialization.DefaultSerializers.NullableUInt32ArraySerializer::UnpackToCore(MsgPack.Unpacker,System.Nullable`1<System.UInt32>[],System.Int32)
extern "C"  void NullableUInt32ArraySerializer_UnpackToCore_m2330458715 (Il2CppObject * __this /* static, unused */, Unpacker_t998931393 * ___unpacker0, Nullable_1U5BU5D_t3105429265* ___collection1, int32_t ___count2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
