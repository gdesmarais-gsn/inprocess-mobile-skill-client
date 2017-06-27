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

// MsgPack.Serialization.DefaultSerializers.Int64ArraySerializer
struct Int64ArraySerializer_t45890286;
// MsgPack.Serialization.SerializationContext
struct SerializationContext_t1484625559;
// MsgPack.Packer
struct Packer_t1439452732;
// System.Int64[]
struct Int64U5BU5D_t717125112;
// MsgPack.Unpacker
struct Unpacker_t998931393;

#include "codegen/il2cpp-codegen.h"
#include "MsgPack_MsgPack_Serialization_SerializationContext1484625559.h"
#include "MsgPack_MsgPack_Packer1439452732.h"
#include "MsgPack_MsgPack_Unpacker998931393.h"

// System.Void MsgPack.Serialization.DefaultSerializers.Int64ArraySerializer::.ctor(MsgPack.Serialization.SerializationContext)
extern "C"  void Int64ArraySerializer__ctor_m2799620154 (Int64ArraySerializer_t45890286 * __this, SerializationContext_t1484625559 * ___ownerContext0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MsgPack.Serialization.DefaultSerializers.Int64ArraySerializer::PackToCore(MsgPack.Packer,System.Int64[])
extern "C"  void Int64ArraySerializer_PackToCore_m2230978250 (Int64ArraySerializer_t45890286 * __this, Packer_t1439452732 * ___packer0, Int64U5BU5D_t717125112* ___objectTree1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64[] MsgPack.Serialization.DefaultSerializers.Int64ArraySerializer::UnpackFromCore(MsgPack.Unpacker)
extern "C"  Int64U5BU5D_t717125112* Int64ArraySerializer_UnpackFromCore_m2323890658 (Int64ArraySerializer_t45890286 * __this, Unpacker_t998931393 * ___unpacker0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MsgPack.Serialization.DefaultSerializers.Int64ArraySerializer::UnpackToCore(MsgPack.Unpacker,System.Int64[])
extern "C"  void Int64ArraySerializer_UnpackToCore_m1205983784 (Int64ArraySerializer_t45890286 * __this, Unpacker_t998931393 * ___unpacker0, Int64U5BU5D_t717125112* ___collection1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MsgPack.Serialization.DefaultSerializers.Int64ArraySerializer::UnpackToCore(MsgPack.Unpacker,System.Int64[],System.Int32)
extern "C"  void Int64ArraySerializer_UnpackToCore_m2252242331 (Il2CppObject * __this /* static, unused */, Unpacker_t998931393 * ___unpacker0, Int64U5BU5D_t717125112* ___collection1, int32_t ___count2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
