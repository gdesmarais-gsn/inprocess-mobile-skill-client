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

// MsgPack.Serialization.DefaultSerializers.NullableInt16ArraySerializer
struct NullableInt16ArraySerializer_t336170484;
// MsgPack.Serialization.SerializationContext
struct SerializationContext_t1484625559;
// MsgPack.Packer
struct Packer_t1439452732;
// System.Nullable`1<System.Int16>[]
struct Nullable_1U5BU5D_t1855359016;
// MsgPack.Unpacker
struct Unpacker_t998931393;

#include "codegen/il2cpp-codegen.h"
#include "MsgPack_MsgPack_Serialization_SerializationContext1484625559.h"
#include "MsgPack_MsgPack_Packer1439452732.h"
#include "MsgPack_MsgPack_Unpacker998931393.h"

// System.Void MsgPack.Serialization.DefaultSerializers.NullableInt16ArraySerializer::.ctor(MsgPack.Serialization.SerializationContext)
extern "C"  void NullableInt16ArraySerializer__ctor_m222412224 (NullableInt16ArraySerializer_t336170484 * __this, SerializationContext_t1484625559 * ___ownerContext0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MsgPack.Serialization.DefaultSerializers.NullableInt16ArraySerializer::PackToCore(MsgPack.Packer,System.Nullable`1<System.Int16>[])
extern "C"  void NullableInt16ArraySerializer_PackToCore_m1021348760 (NullableInt16ArraySerializer_t336170484 * __this, Packer_t1439452732 * ___packer0, Nullable_1U5BU5D_t1855359016* ___objectTree1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Nullable`1<System.Int16>[] MsgPack.Serialization.DefaultSerializers.NullableInt16ArraySerializer::UnpackFromCore(MsgPack.Unpacker)
extern "C"  Nullable_1U5BU5D_t1855359016* NullableInt16ArraySerializer_UnpackFromCore_m1165572768 (NullableInt16ArraySerializer_t336170484 * __this, Unpacker_t998931393 * ___unpacker0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MsgPack.Serialization.DefaultSerializers.NullableInt16ArraySerializer::UnpackToCore(MsgPack.Unpacker,System.Nullable`1<System.Int16>[])
extern "C"  void NullableInt16ArraySerializer_UnpackToCore_m3328682762 (NullableInt16ArraySerializer_t336170484 * __this, Unpacker_t998931393 * ___unpacker0, Nullable_1U5BU5D_t1855359016* ___collection1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MsgPack.Serialization.DefaultSerializers.NullableInt16ArraySerializer::UnpackToCore(MsgPack.Unpacker,System.Nullable`1<System.Int16>[],System.Int32)
extern "C"  void NullableInt16ArraySerializer_UnpackToCore_m1896963003 (Il2CppObject * __this /* static, unused */, Unpacker_t998931393 * ___unpacker0, Nullable_1U5BU5D_t1855359016* ___collection1, int32_t ___count2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
