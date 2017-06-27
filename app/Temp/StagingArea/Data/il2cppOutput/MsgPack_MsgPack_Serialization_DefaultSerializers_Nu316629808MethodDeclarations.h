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

// MsgPack.Serialization.DefaultSerializers.NullableSingleArraySerializer
struct NullableSingleArraySerializer_t316629808;
// MsgPack.Serialization.SerializationContext
struct SerializationContext_t1484625559;
// MsgPack.Packer
struct Packer_t1439452732;
// System.Nullable`1<System.Single>[]
struct Nullable_1U5BU5D_t3623170446;
// MsgPack.Unpacker
struct Unpacker_t998931393;

#include "codegen/il2cpp-codegen.h"
#include "MsgPack_MsgPack_Serialization_SerializationContext1484625559.h"
#include "MsgPack_MsgPack_Packer1439452732.h"
#include "MsgPack_MsgPack_Unpacker998931393.h"

// System.Void MsgPack.Serialization.DefaultSerializers.NullableSingleArraySerializer::.ctor(MsgPack.Serialization.SerializationContext)
extern "C"  void NullableSingleArraySerializer__ctor_m1318738752 (NullableSingleArraySerializer_t316629808 * __this, SerializationContext_t1484625559 * ___ownerContext0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MsgPack.Serialization.DefaultSerializers.NullableSingleArraySerializer::PackToCore(MsgPack.Packer,System.Nullable`1<System.Single>[])
extern "C"  void NullableSingleArraySerializer_PackToCore_m1895193656 (NullableSingleArraySerializer_t316629808 * __this, Packer_t1439452732 * ___packer0, Nullable_1U5BU5D_t3623170446* ___objectTree1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Nullable`1<System.Single>[] MsgPack.Serialization.DefaultSerializers.NullableSingleArraySerializer::UnpackFromCore(MsgPack.Unpacker)
extern "C"  Nullable_1U5BU5D_t3623170446* NullableSingleArraySerializer_UnpackFromCore_m2367416058 (NullableSingleArraySerializer_t316629808 * __this, Unpacker_t998931393 * ___unpacker0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MsgPack.Serialization.DefaultSerializers.NullableSingleArraySerializer::UnpackToCore(MsgPack.Unpacker,System.Nullable`1<System.Single>[])
extern "C"  void NullableSingleArraySerializer_UnpackToCore_m3674854986 (NullableSingleArraySerializer_t316629808 * __this, Unpacker_t998931393 * ___unpacker0, Nullable_1U5BU5D_t3623170446* ___collection1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MsgPack.Serialization.DefaultSerializers.NullableSingleArraySerializer::UnpackToCore(MsgPack.Unpacker,System.Nullable`1<System.Single>[],System.Int32)
extern "C"  void NullableSingleArraySerializer_UnpackToCore_m3164627515 (Il2CppObject * __this /* static, unused */, Unpacker_t998931393 * ___unpacker0, Nullable_1U5BU5D_t3623170446* ___collection1, int32_t ___count2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
