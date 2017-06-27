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

// MsgPack.Serialization.DefaultSerializers.System_GuidMessagePackSerializer
struct System_GuidMessagePackSerializer_t2855993735;
// MsgPack.Serialization.SerializationContext
struct SerializationContext_t1484625559;
// MsgPack.Packer
struct Packer_t1439452732;
// MsgPack.Unpacker
struct Unpacker_t998931393;

#include "codegen/il2cpp-codegen.h"
#include "MsgPack_MsgPack_Serialization_SerializationContext1484625559.h"
#include "MsgPack_MsgPack_Packer1439452732.h"
#include "mscorlib_System_Guid2533601593.h"
#include "MsgPack_MsgPack_Unpacker998931393.h"

// System.Void MsgPack.Serialization.DefaultSerializers.System_GuidMessagePackSerializer::.ctor(MsgPack.Serialization.SerializationContext)
extern "C"  void System_GuidMessagePackSerializer__ctor_m3792745231 (System_GuidMessagePackSerializer_t2855993735 * __this, SerializationContext_t1484625559 * ___ownerContext0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MsgPack.Serialization.DefaultSerializers.System_GuidMessagePackSerializer::PackToCore(MsgPack.Packer,System.Guid)
extern "C"  void System_GuidMessagePackSerializer_PackToCore_m492905349 (System_GuidMessagePackSerializer_t2855993735 * __this, Packer_t1439452732 * ___packer0, Guid_t2533601593  ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Guid MsgPack.Serialization.DefaultSerializers.System_GuidMessagePackSerializer::UnpackFromCore(MsgPack.Unpacker)
extern "C"  Guid_t2533601593  System_GuidMessagePackSerializer_UnpackFromCore_m3123005151 (System_GuidMessagePackSerializer_t2855993735 * __this, Unpacker_t998931393 * ___unpacker0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
