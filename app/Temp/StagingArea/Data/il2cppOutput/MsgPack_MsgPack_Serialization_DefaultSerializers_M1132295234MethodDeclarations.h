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

// MsgPack.Serialization.DefaultSerializers.MsgPack_MessagePackObjectMessagePackSerializer
struct MsgPack_MessagePackObjectMessagePackSerializer_t1132295234;
// MsgPack.Serialization.SerializationContext
struct SerializationContext_t1484625559;
// MsgPack.Packer
struct Packer_t1439452732;
// MsgPack.Unpacker
struct Unpacker_t998931393;

#include "codegen/il2cpp-codegen.h"
#include "MsgPack_MsgPack_Serialization_SerializationContext1484625559.h"
#include "MsgPack_MsgPack_Packer1439452732.h"
#include "MsgPack_MsgPack_MessagePackObject2038085051.h"
#include "MsgPack_MsgPack_Unpacker998931393.h"

// System.Void MsgPack.Serialization.DefaultSerializers.MsgPack_MessagePackObjectMessagePackSerializer::.ctor(MsgPack.Serialization.SerializationContext)
extern "C"  void MsgPack_MessagePackObjectMessagePackSerializer__ctor_m1191984922 (MsgPack_MessagePackObjectMessagePackSerializer_t1132295234 * __this, SerializationContext_t1484625559 * ___ownerContext0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MsgPack.Serialization.DefaultSerializers.MsgPack_MessagePackObjectMessagePackSerializer::PackToCore(MsgPack.Packer,MsgPack.MessagePackObject)
extern "C"  void MsgPack_MessagePackObjectMessagePackSerializer_PackToCore_m3146317513 (MsgPack_MessagePackObjectMessagePackSerializer_t1132295234 * __this, Packer_t1439452732 * ___packer0, MessagePackObject_t2038085051  ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// MsgPack.MessagePackObject MsgPack.Serialization.DefaultSerializers.MsgPack_MessagePackObjectMessagePackSerializer::UnpackFromCore(MsgPack.Unpacker)
extern "C"  MessagePackObject_t2038085051  MsgPack_MessagePackObjectMessagePackSerializer_UnpackFromCore_m1591897975 (MsgPack_MessagePackObjectMessagePackSerializer_t1132295234 * __this, Unpacker_t998931393 * ___unpacker0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
