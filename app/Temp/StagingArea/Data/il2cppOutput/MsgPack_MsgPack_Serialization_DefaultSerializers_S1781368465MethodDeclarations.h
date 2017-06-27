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

// MsgPack.Serialization.DefaultSerializers.System_SByteMessagePackSerializer
struct System_SByteMessagePackSerializer_t1781368465;
// MsgPack.Serialization.SerializationContext
struct SerializationContext_t1484625559;
// MsgPack.Packer
struct Packer_t1439452732;
// MsgPack.Unpacker
struct Unpacker_t998931393;

#include "codegen/il2cpp-codegen.h"
#include "MsgPack_MsgPack_Serialization_SerializationContext1484625559.h"
#include "MsgPack_MsgPack_Packer1439452732.h"
#include "MsgPack_MsgPack_Unpacker998931393.h"

// System.Void MsgPack.Serialization.DefaultSerializers.System_SByteMessagePackSerializer::.ctor(MsgPack.Serialization.SerializationContext)
extern "C"  void System_SByteMessagePackSerializer__ctor_m1630126241 (System_SByteMessagePackSerializer_t1781368465 * __this, SerializationContext_t1484625559 * ___ownerContext0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MsgPack.Serialization.DefaultSerializers.System_SByteMessagePackSerializer::PackToCore(MsgPack.Packer,System.SByte)
extern "C"  void System_SByteMessagePackSerializer_PackToCore_m1486427481 (System_SByteMessagePackSerializer_t1781368465 * __this, Packer_t1439452732 * ___packer0, int8_t ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.SByte MsgPack.Serialization.DefaultSerializers.System_SByteMessagePackSerializer::UnpackFromCore(MsgPack.Unpacker)
extern "C"  int8_t System_SByteMessagePackSerializer_UnpackFromCore_m593651931 (System_SByteMessagePackSerializer_t1781368465 * __this, Unpacker_t998931393 * ___unpacker0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
