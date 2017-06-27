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

// MsgPack.Serialization.DefaultSerializers.NullableBooleanArraySerializer
struct NullableBooleanArraySerializer_t2148955562;
// MsgPack.Serialization.SerializationContext
struct SerializationContext_t1484625559;
// MsgPack.Packer
struct Packer_t1439452732;
// System.Nullable`1<System.Boolean>[]
struct Nullable_1U5BU5D_t2319110068;
// MsgPack.Unpacker
struct Unpacker_t998931393;

#include "codegen/il2cpp-codegen.h"
#include "MsgPack_MsgPack_Serialization_SerializationContext1484625559.h"
#include "MsgPack_MsgPack_Packer1439452732.h"
#include "MsgPack_MsgPack_Unpacker998931393.h"

// System.Void MsgPack.Serialization.DefaultSerializers.NullableBooleanArraySerializer::.ctor(MsgPack.Serialization.SerializationContext)
extern "C"  void NullableBooleanArraySerializer__ctor_m2547316214 (NullableBooleanArraySerializer_t2148955562 * __this, SerializationContext_t1484625559 * ___ownerContext0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MsgPack.Serialization.DefaultSerializers.NullableBooleanArraySerializer::PackToCore(MsgPack.Packer,System.Nullable`1<System.Boolean>[])
extern "C"  void NullableBooleanArraySerializer_PackToCore_m448895576 (NullableBooleanArraySerializer_t2148955562 * __this, Packer_t1439452732 * ___packer0, Nullable_1U5BU5D_t2319110068* ___objectTree1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Nullable`1<System.Boolean>[] MsgPack.Serialization.DefaultSerializers.NullableBooleanArraySerializer::UnpackFromCore(MsgPack.Unpacker)
extern "C"  Nullable_1U5BU5D_t2319110068* NullableBooleanArraySerializer_UnpackFromCore_m1383341568 (NullableBooleanArraySerializer_t2148955562 * __this, Unpacker_t998931393 * ___unpacker0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MsgPack.Serialization.DefaultSerializers.NullableBooleanArraySerializer::UnpackToCore(MsgPack.Unpacker,System.Nullable`1<System.Boolean>[])
extern "C"  void NullableBooleanArraySerializer_UnpackToCore_m1202493578 (NullableBooleanArraySerializer_t2148955562 * __this, Unpacker_t998931393 * ___unpacker0, Nullable_1U5BU5D_t2319110068* ___collection1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MsgPack.Serialization.DefaultSerializers.NullableBooleanArraySerializer::UnpackToCore(MsgPack.Unpacker,System.Nullable`1<System.Boolean>[],System.Int32)
extern "C"  void NullableBooleanArraySerializer_UnpackToCore_m3967533595 (Il2CppObject * __this /* static, unused */, Unpacker_t998931393 * ___unpacker0, Nullable_1U5BU5D_t2319110068* ___collection1, int32_t ___count2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
