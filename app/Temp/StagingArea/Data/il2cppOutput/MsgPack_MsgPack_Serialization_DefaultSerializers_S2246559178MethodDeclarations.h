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

// MsgPack.Serialization.DefaultSerializers.System_VersionMessagePackSerializer
struct System_VersionMessagePackSerializer_t2246559178;
// MsgPack.Serialization.SerializationContext
struct SerializationContext_t1484625559;
// MsgPack.Packer
struct Packer_t1439452732;
// System.Version
struct Version_t1755874712;
// MsgPack.Unpacker
struct Unpacker_t998931393;

#include "codegen/il2cpp-codegen.h"
#include "MsgPack_MsgPack_Serialization_SerializationContext1484625559.h"
#include "MsgPack_MsgPack_Packer1439452732.h"
#include "mscorlib_System_Version1755874712.h"
#include "MsgPack_MsgPack_Unpacker998931393.h"

// System.Void MsgPack.Serialization.DefaultSerializers.System_VersionMessagePackSerializer::.ctor(MsgPack.Serialization.SerializationContext)
extern "C"  void System_VersionMessagePackSerializer__ctor_m3016991738 (System_VersionMessagePackSerializer_t2246559178 * __this, SerializationContext_t1484625559 * ___ownerContext0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MsgPack.Serialization.DefaultSerializers.System_VersionMessagePackSerializer::PackToCore(MsgPack.Packer,System.Version)
extern "C"  void System_VersionMessagePackSerializer_PackToCore_m3864995201 (System_VersionMessagePackSerializer_t2246559178 * __this, Packer_t1439452732 * ___packer0, Version_t1755874712 * ___objectTree1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Version MsgPack.Serialization.DefaultSerializers.System_VersionMessagePackSerializer::UnpackFromCore(MsgPack.Unpacker)
extern "C"  Version_t1755874712 * System_VersionMessagePackSerializer_UnpackFromCore_m2909226235 (System_VersionMessagePackSerializer_t2246559178 * __this, Unpacker_t998931393 * ___unpacker0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
