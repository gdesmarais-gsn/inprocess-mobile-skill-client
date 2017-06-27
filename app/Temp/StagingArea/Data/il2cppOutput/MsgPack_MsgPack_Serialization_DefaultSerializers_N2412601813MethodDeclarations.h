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

// MsgPack.Serialization.DefaultSerializers.NullableDoubleArraySerializer
struct NullableDoubleArraySerializer_t2412601813;
// MsgPack.Serialization.SerializationContext
struct SerializationContext_t1484625559;
// MsgPack.Packer
struct Packer_t1439452732;
// System.Nullable`1<System.Double>[]
struct Nullable_1U5BU5D_t641028293;
// MsgPack.Unpacker
struct Unpacker_t998931393;

#include "codegen/il2cpp-codegen.h"
#include "MsgPack_MsgPack_Serialization_SerializationContext1484625559.h"
#include "MsgPack_MsgPack_Packer1439452732.h"
#include "MsgPack_MsgPack_Unpacker998931393.h"

// System.Void MsgPack.Serialization.DefaultSerializers.NullableDoubleArraySerializer::.ctor(MsgPack.Serialization.SerializationContext)
extern "C"  void NullableDoubleArraySerializer__ctor_m1841745317 (NullableDoubleArraySerializer_t2412601813 * __this, SerializationContext_t1484625559 * ___ownerContext0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MsgPack.Serialization.DefaultSerializers.NullableDoubleArraySerializer::PackToCore(MsgPack.Packer,System.Nullable`1<System.Double>[])
extern "C"  void NullableDoubleArraySerializer_PackToCore_m889961752 (NullableDoubleArraySerializer_t2412601813 * __this, Packer_t1439452732 * ___packer0, Nullable_1U5BU5D_t641028293* ___objectTree1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Nullable`1<System.Double>[] MsgPack.Serialization.DefaultSerializers.NullableDoubleArraySerializer::UnpackFromCore(MsgPack.Unpacker)
extern "C"  Nullable_1U5BU5D_t641028293* NullableDoubleArraySerializer_UnpackFromCore_m1813947680 (NullableDoubleArraySerializer_t2412601813 * __this, Unpacker_t998931393 * ___unpacker0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MsgPack.Serialization.DefaultSerializers.NullableDoubleArraySerializer::UnpackToCore(MsgPack.Unpacker,System.Nullable`1<System.Double>[])
extern "C"  void NullableDoubleArraySerializer_UnpackToCore_m1380609898 (NullableDoubleArraySerializer_t2412601813 * __this, Unpacker_t998931393 * ___unpacker0, Nullable_1U5BU5D_t641028293* ___collection1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MsgPack.Serialization.DefaultSerializers.NullableDoubleArraySerializer::UnpackToCore(MsgPack.Unpacker,System.Nullable`1<System.Double>[],System.Int32)
extern "C"  void NullableDoubleArraySerializer_UnpackToCore_m3128113563 (Il2CppObject * __this /* static, unused */, Unpacker_t998931393 * ___unpacker0, Nullable_1U5BU5D_t641028293* ___collection1, int32_t ___count2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
