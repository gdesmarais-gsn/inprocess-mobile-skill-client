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

// MsgPack.Serialization.DefaultSerializers.NullableSByteArraySerializer
struct NullableSByteArraySerializer_t1194933953;
// MsgPack.Serialization.SerializationContext
struct SerializationContext_t1484625559;
// MsgPack.Packer
struct Packer_t1439452732;
// System.Nullable`1<System.SByte>[]
struct Nullable_1U5BU5D_t2223363145;
// MsgPack.Unpacker
struct Unpacker_t998931393;

#include "codegen/il2cpp-codegen.h"
#include "MsgPack_MsgPack_Serialization_SerializationContext1484625559.h"
#include "MsgPack_MsgPack_Packer1439452732.h"
#include "MsgPack_MsgPack_Unpacker998931393.h"

// System.Void MsgPack.Serialization.DefaultSerializers.NullableSByteArraySerializer::.ctor(MsgPack.Serialization.SerializationContext)
extern "C"  void NullableSByteArraySerializer__ctor_m2932030269 (NullableSByteArraySerializer_t1194933953 * __this, SerializationContext_t1484625559 * ___ownerContext0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MsgPack.Serialization.DefaultSerializers.NullableSByteArraySerializer::PackToCore(MsgPack.Packer,System.Nullable`1<System.SByte>[])
extern "C"  void NullableSByteArraySerializer_PackToCore_m3985775946 (NullableSByteArraySerializer_t1194933953 * __this, Packer_t1439452732 * ___packer0, Nullable_1U5BU5D_t2223363145* ___objectTree1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Nullable`1<System.SByte>[] MsgPack.Serialization.DefaultSerializers.NullableSByteArraySerializer::UnpackFromCore(MsgPack.Unpacker)
extern "C"  Nullable_1U5BU5D_t2223363145* NullableSByteArraySerializer_UnpackFromCore_m3661865856 (NullableSByteArraySerializer_t1194933953 * __this, Unpacker_t998931393 * ___unpacker0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MsgPack.Serialization.DefaultSerializers.NullableSByteArraySerializer::UnpackToCore(MsgPack.Unpacker,System.Nullable`1<System.SByte>[])
extern "C"  void NullableSByteArraySerializer_UnpackToCore_m520940680 (NullableSByteArraySerializer_t1194933953 * __this, Unpacker_t998931393 * ___unpacker0, Nullable_1U5BU5D_t2223363145* ___collection1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MsgPack.Serialization.DefaultSerializers.NullableSByteArraySerializer::UnpackToCore(MsgPack.Unpacker,System.Nullable`1<System.SByte>[],System.Int32)
extern "C"  void NullableSByteArraySerializer_UnpackToCore_m1425036263 (Il2CppObject * __this /* static, unused */, Unpacker_t998931393 * ___unpacker0, Nullable_1U5BU5D_t2223363145* ___collection1, int32_t ___count2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
