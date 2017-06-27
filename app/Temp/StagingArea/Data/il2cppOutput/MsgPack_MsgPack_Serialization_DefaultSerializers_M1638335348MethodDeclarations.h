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

// MsgPack.Serialization.DefaultSerializers.MessagePackObjectArraySerializer
struct MessagePackObjectArraySerializer_t1638335348;
// MsgPack.Serialization.SerializationContext
struct SerializationContext_t1484625559;
// MsgPack.Packer
struct Packer_t1439452732;
// MsgPack.MessagePackObject[]
struct MessagePackObjectU5BU5D_t2140654842;
// MsgPack.Unpacker
struct Unpacker_t998931393;

#include "codegen/il2cpp-codegen.h"
#include "MsgPack_MsgPack_Serialization_SerializationContext1484625559.h"
#include "MsgPack_MsgPack_Packer1439452732.h"
#include "MsgPack_MsgPack_Unpacker998931393.h"

// System.Void MsgPack.Serialization.DefaultSerializers.MessagePackObjectArraySerializer::.ctor(MsgPack.Serialization.SerializationContext)
extern "C"  void MessagePackObjectArraySerializer__ctor_m2073472908 (MessagePackObjectArraySerializer_t1638335348 * __this, SerializationContext_t1484625559 * ___ownerContext0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MsgPack.Serialization.DefaultSerializers.MessagePackObjectArraySerializer::PackToCore(MsgPack.Packer,MsgPack.MessagePackObject[])
extern "C"  void MessagePackObjectArraySerializer_PackToCore_m2365096795 (MessagePackObjectArraySerializer_t1638335348 * __this, Packer_t1439452732 * ___packer0, MessagePackObjectU5BU5D_t2140654842* ___objectTree1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// MsgPack.MessagePackObject[] MsgPack.Serialization.DefaultSerializers.MessagePackObjectArraySerializer::UnpackFromCore(MsgPack.Unpacker)
extern "C"  MessagePackObjectU5BU5D_t2140654842* MessagePackObjectArraySerializer_UnpackFromCore_m2194637265 (MessagePackObjectArraySerializer_t1638335348 * __this, Unpacker_t998931393 * ___unpacker0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MsgPack.Serialization.DefaultSerializers.MessagePackObjectArraySerializer::UnpackToCore(MsgPack.Unpacker,MsgPack.MessagePackObject[])
extern "C"  void MessagePackObjectArraySerializer_UnpackToCore_m2402469327 (MessagePackObjectArraySerializer_t1638335348 * __this, Unpacker_t998931393 * ___unpacker0, MessagePackObjectU5BU5D_t2140654842* ___collection1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MsgPack.Serialization.DefaultSerializers.MessagePackObjectArraySerializer::UnpackToCore(MsgPack.Unpacker,MsgPack.MessagePackObject[],System.Int32)
extern "C"  void MessagePackObjectArraySerializer_UnpackToCore_m380224992 (Il2CppObject * __this /* static, unused */, Unpacker_t998931393 * ___unpacker0, MessagePackObjectU5BU5D_t2140654842* ___collection1, int32_t ___count2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
