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

// MsgPack.Serialization.DefaultSerializers.Int32ArraySerializer
struct Int32ArraySerializer_t3458876511;
// MsgPack.Serialization.SerializationContext
struct SerializationContext_t1484625559;
// MsgPack.Packer
struct Packer_t1439452732;
// System.Int32[]
struct Int32U5BU5D_t3030399641;
// MsgPack.Unpacker
struct Unpacker_t998931393;

#include "codegen/il2cpp-codegen.h"
#include "MsgPack_MsgPack_Serialization_SerializationContext1484625559.h"
#include "MsgPack_MsgPack_Packer1439452732.h"
#include "MsgPack_MsgPack_Unpacker998931393.h"

// System.Void MsgPack.Serialization.DefaultSerializers.Int32ArraySerializer::.ctor(MsgPack.Serialization.SerializationContext)
extern "C"  void Int32ArraySerializer__ctor_m723175863 (Int32ArraySerializer_t3458876511 * __this, SerializationContext_t1484625559 * ___ownerContext0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MsgPack.Serialization.DefaultSerializers.Int32ArraySerializer::PackToCore(MsgPack.Packer,System.Int32[])
extern "C"  void Int32ArraySerializer_PackToCore_m3477207064 (Int32ArraySerializer_t3458876511 * __this, Packer_t1439452732 * ___packer0, Int32U5BU5D_t3030399641* ___objectTree1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32[] MsgPack.Serialization.DefaultSerializers.Int32ArraySerializer::UnpackFromCore(MsgPack.Unpacker)
extern "C"  Int32U5BU5D_t3030399641* Int32ArraySerializer_UnpackFromCore_m2914399560 (Int32ArraySerializer_t3458876511 * __this, Unpacker_t998931393 * ___unpacker0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MsgPack.Serialization.DefaultSerializers.Int32ArraySerializer::UnpackToCore(MsgPack.Unpacker,System.Int32[])
extern "C"  void Int32ArraySerializer_UnpackToCore_m4102171546 (Int32ArraySerializer_t3458876511 * __this, Unpacker_t998931393 * ___unpacker0, Int32U5BU5D_t3030399641* ___collection1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MsgPack.Serialization.DefaultSerializers.Int32ArraySerializer::UnpackToCore(MsgPack.Unpacker,System.Int32[],System.Int32)
extern "C"  void Int32ArraySerializer_UnpackToCore_m3412439871 (Il2CppObject * __this /* static, unused */, Unpacker_t998931393 * ___unpacker0, Int32U5BU5D_t3030399641* ___collection1, int32_t ___count2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
