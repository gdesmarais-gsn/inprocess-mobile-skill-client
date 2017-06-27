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

// MsgPack.Serialization.DefaultSerializers.MsgPack_MessagePackExtendedTypeObjectMessagePackSerializer
struct MsgPack_MessagePackExtendedTypeObjectMessagePackSerializer_t2675704845;
// MsgPack.Serialization.SerializationContext
struct SerializationContext_t1484625559;
// MsgPack.Packer
struct Packer_t1439452732;
// MsgPack.Unpacker
struct Unpacker_t998931393;

#include "codegen/il2cpp-codegen.h"
#include "MsgPack_MsgPack_Serialization_SerializationContext1484625559.h"
#include "MsgPack_MsgPack_Packer1439452732.h"
#include "MsgPack_MsgPack_MessagePackExtendedTypeObject1459807206.h"
#include "MsgPack_MsgPack_Unpacker998931393.h"

// System.Void MsgPack.Serialization.DefaultSerializers.MsgPack_MessagePackExtendedTypeObjectMessagePackSerializer::.ctor(MsgPack.Serialization.SerializationContext)
extern "C"  void MsgPack_MessagePackExtendedTypeObjectMessagePackSerializer__ctor_m3623777905 (MsgPack_MessagePackExtendedTypeObjectMessagePackSerializer_t2675704845 * __this, SerializationContext_t1484625559 * ___ownerContext0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MsgPack.Serialization.DefaultSerializers.MsgPack_MessagePackExtendedTypeObjectMessagePackSerializer::PackToCore(MsgPack.Packer,MsgPack.MessagePackExtendedTypeObject)
extern "C"  void MsgPack_MessagePackExtendedTypeObjectMessagePackSerializer_PackToCore_m1870514025 (MsgPack_MessagePackExtendedTypeObjectMessagePackSerializer_t2675704845 * __this, Packer_t1439452732 * ___packer0, MessagePackExtendedTypeObject_t1459807206  ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// MsgPack.MessagePackExtendedTypeObject MsgPack.Serialization.DefaultSerializers.MsgPack_MessagePackExtendedTypeObjectMessagePackSerializer::UnpackFromCore(MsgPack.Unpacker)
extern "C"  MessagePackExtendedTypeObject_t1459807206  MsgPack_MessagePackExtendedTypeObjectMessagePackSerializer_UnpackFromCore_m276159459 (MsgPack_MessagePackExtendedTypeObjectMessagePackSerializer_t2675704845 * __this, Unpacker_t998931393 * ___unpacker0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
