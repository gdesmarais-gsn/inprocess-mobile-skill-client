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

// MsgPack.Serialization.DefaultSerializers.NullableInt32ArraySerializer
struct NullableInt32ArraySerializer_t3300768650;
// MsgPack.Serialization.SerializationContext
struct SerializationContext_t1484625559;
// MsgPack.Packer
struct Packer_t1439452732;
// System.Nullable`1<System.Int32>[]
struct Nullable_1U5BU5D_t1781475394;
// MsgPack.Unpacker
struct Unpacker_t998931393;

#include "codegen/il2cpp-codegen.h"
#include "MsgPack_MsgPack_Serialization_SerializationContext1484625559.h"
#include "MsgPack_MsgPack_Packer1439452732.h"
#include "MsgPack_MsgPack_Unpacker998931393.h"

// System.Void MsgPack.Serialization.DefaultSerializers.NullableInt32ArraySerializer::.ctor(MsgPack.Serialization.SerializationContext)
extern "C"  void NullableInt32ArraySerializer__ctor_m3768424594 (NullableInt32ArraySerializer_t3300768650 * __this, SerializationContext_t1484625559 * ___ownerContext0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MsgPack.Serialization.DefaultSerializers.NullableInt32ArraySerializer::PackToCore(MsgPack.Packer,System.Nullable`1<System.Int32>[])
extern "C"  void NullableInt32ArraySerializer_PackToCore_m4181468840 (NullableInt32ArraySerializer_t3300768650 * __this, Packer_t1439452732 * ___packer0, Nullable_1U5BU5D_t1781475394* ___objectTree1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Nullable`1<System.Int32>[] MsgPack.Serialization.DefaultSerializers.NullableInt32ArraySerializer::UnpackFromCore(MsgPack.Unpacker)
extern "C"  Nullable_1U5BU5D_t1781475394* NullableInt32ArraySerializer_UnpackFromCore_m2127081952 (NullableInt32ArraySerializer_t3300768650 * __this, Unpacker_t998931393 * ___unpacker0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MsgPack.Serialization.DefaultSerializers.NullableInt32ArraySerializer::UnpackToCore(MsgPack.Unpacker,System.Nullable`1<System.Int32>[])
extern "C"  void NullableInt32ArraySerializer_UnpackToCore_m3207449258 (NullableInt32ArraySerializer_t3300768650 * __this, Unpacker_t998931393 * ___unpacker0, Nullable_1U5BU5D_t1781475394* ___collection1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MsgPack.Serialization.DefaultSerializers.NullableInt32ArraySerializer::UnpackToCore(MsgPack.Unpacker,System.Nullable`1<System.Int32>[],System.Int32)
extern "C"  void NullableInt32ArraySerializer_UnpackToCore_m1546010211 (Il2CppObject * __this /* static, unused */, Unpacker_t998931393 * ___unpacker0, Nullable_1U5BU5D_t1781475394* ___collection1, int32_t ___count2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
