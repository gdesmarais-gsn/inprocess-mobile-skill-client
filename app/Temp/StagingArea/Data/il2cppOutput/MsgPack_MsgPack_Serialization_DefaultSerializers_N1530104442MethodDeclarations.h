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

// MsgPack.Serialization.DefaultSerializers.NullableByteArraySerializer
struct NullableByteArraySerializer_t1530104442;
// MsgPack.Serialization.SerializationContext
struct SerializationContext_t1484625559;
// MsgPack.Packer
struct Packer_t1439452732;
// System.Nullable`1<System.Byte>[]
struct Nullable_1U5BU5D_t2148409766;
// MsgPack.Unpacker
struct Unpacker_t998931393;

#include "codegen/il2cpp-codegen.h"
#include "MsgPack_MsgPack_Serialization_SerializationContext1484625559.h"
#include "MsgPack_MsgPack_Packer1439452732.h"
#include "MsgPack_MsgPack_Unpacker998931393.h"

// System.Void MsgPack.Serialization.DefaultSerializers.NullableByteArraySerializer::.ctor(MsgPack.Serialization.SerializationContext)
extern "C"  void NullableByteArraySerializer__ctor_m7229002 (NullableByteArraySerializer_t1530104442 * __this, SerializationContext_t1484625559 * ___ownerContext0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MsgPack.Serialization.DefaultSerializers.NullableByteArraySerializer::PackToCore(MsgPack.Packer,System.Nullable`1<System.Byte>[])
extern "C"  void NullableByteArraySerializer_PackToCore_m3105666360 (NullableByteArraySerializer_t1530104442 * __this, Packer_t1439452732 * ___packer0, Nullable_1U5BU5D_t2148409766* ___objectTree1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Nullable`1<System.Byte>[] MsgPack.Serialization.DefaultSerializers.NullableByteArraySerializer::UnpackFromCore(MsgPack.Unpacker)
extern "C"  Nullable_1U5BU5D_t2148409766* NullableByteArraySerializer_UnpackFromCore_m3681012154 (NullableByteArraySerializer_t1530104442 * __this, Unpacker_t998931393 * ___unpacker0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MsgPack.Serialization.DefaultSerializers.NullableByteArraySerializer::UnpackToCore(MsgPack.Unpacker,System.Nullable`1<System.Byte>[])
extern "C"  void NullableByteArraySerializer_UnpackToCore_m441018762 (NullableByteArraySerializer_t1530104442 * __this, Unpacker_t998931393 * ___unpacker0, Nullable_1U5BU5D_t2148409766* ___collection1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MsgPack.Serialization.DefaultSerializers.NullableByteArraySerializer::UnpackToCore(MsgPack.Unpacker,System.Nullable`1<System.Byte>[],System.Int32)
extern "C"  void NullableByteArraySerializer_UnpackToCore_m431044091 (Il2CppObject * __this /* static, unused */, Unpacker_t998931393 * ___unpacker0, Nullable_1U5BU5D_t2148409766* ___collection1, int32_t ___count2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
