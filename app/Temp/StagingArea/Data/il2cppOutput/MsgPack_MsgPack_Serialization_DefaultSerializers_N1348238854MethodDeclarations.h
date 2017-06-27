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

// MsgPack.Serialization.DefaultSerializers.NullableUInt64ArraySerializer
struct NullableUInt64ArraySerializer_t1348238854;
// MsgPack.Serialization.SerializationContext
struct SerializationContext_t1484625559;
// MsgPack.Packer
struct Packer_t1439452732;
// System.Nullable`1<System.UInt64>[]
struct Nullable_1U5BU5D_t419764528;
// MsgPack.Unpacker
struct Unpacker_t998931393;

#include "codegen/il2cpp-codegen.h"
#include "MsgPack_MsgPack_Serialization_SerializationContext1484625559.h"
#include "MsgPack_MsgPack_Packer1439452732.h"
#include "MsgPack_MsgPack_Unpacker998931393.h"

// System.Void MsgPack.Serialization.DefaultSerializers.NullableUInt64ArraySerializer::.ctor(MsgPack.Serialization.SerializationContext)
extern "C"  void NullableUInt64ArraySerializer__ctor_m2326646102 (NullableUInt64ArraySerializer_t1348238854 * __this, SerializationContext_t1484625559 * ___ownerContext0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MsgPack.Serialization.DefaultSerializers.NullableUInt64ArraySerializer::PackToCore(MsgPack.Packer,System.Nullable`1<System.UInt64>[])
extern "C"  void NullableUInt64ArraySerializer_PackToCore_m1970768632 (NullableUInt64ArraySerializer_t1348238854 * __this, Packer_t1439452732 * ___packer0, Nullable_1U5BU5D_t419764528* ___objectTree1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Nullable`1<System.UInt64>[] MsgPack.Serialization.DefaultSerializers.NullableUInt64ArraySerializer::UnpackFromCore(MsgPack.Unpacker)
extern "C"  Nullable_1U5BU5D_t419764528* NullableUInt64ArraySerializer_UnpackFromCore_m597929414 (NullableUInt64ArraySerializer_t1348238854 * __this, Unpacker_t998931393 * ___unpacker0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MsgPack.Serialization.DefaultSerializers.NullableUInt64ArraySerializer::UnpackToCore(MsgPack.Unpacker,System.Nullable`1<System.UInt64>[])
extern "C"  void NullableUInt64ArraySerializer_UnpackToCore_m201967306 (NullableUInt64ArraySerializer_t1348238854 * __this, Unpacker_t998931393 * ___unpacker0, Nullable_1U5BU5D_t419764528* ___collection1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MsgPack.Serialization.DefaultSerializers.NullableUInt64ArraySerializer::UnpackToCore(MsgPack.Unpacker,System.Nullable`1<System.UInt64>[],System.Int32)
extern "C"  void NullableUInt64ArraySerializer_UnpackToCore_m548647611 (Il2CppObject * __this /* static, unused */, Unpacker_t998931393 * ___unpacker0, Nullable_1U5BU5D_t419764528* ___collection1, int32_t ___count2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
