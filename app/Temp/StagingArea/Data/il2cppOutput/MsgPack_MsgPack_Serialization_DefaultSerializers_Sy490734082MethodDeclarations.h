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

// MsgPack.Serialization.DefaultSerializers.System_SingleMessagePackSerializer
struct System_SingleMessagePackSerializer_t490734082;
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

// System.Void MsgPack.Serialization.DefaultSerializers.System_SingleMessagePackSerializer::.ctor(MsgPack.Serialization.SerializationContext)
extern "C"  void System_SingleMessagePackSerializer__ctor_m2912795354 (System_SingleMessagePackSerializer_t490734082 * __this, SerializationContext_t1484625559 * ___ownerContext0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MsgPack.Serialization.DefaultSerializers.System_SingleMessagePackSerializer::PackToCore(MsgPack.Packer,System.Single)
extern "C"  void System_SingleMessagePackSerializer_PackToCore_m2747200645 (System_SingleMessagePackSerializer_t490734082 * __this, Packer_t1439452732 * ___packer0, float ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single MsgPack.Serialization.DefaultSerializers.System_SingleMessagePackSerializer::UnpackFromCore(MsgPack.Unpacker)
extern "C"  float System_SingleMessagePackSerializer_UnpackFromCore_m3958865619 (System_SingleMessagePackSerializer_t490734082 * __this, Unpacker_t998931393 * ___unpacker0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
