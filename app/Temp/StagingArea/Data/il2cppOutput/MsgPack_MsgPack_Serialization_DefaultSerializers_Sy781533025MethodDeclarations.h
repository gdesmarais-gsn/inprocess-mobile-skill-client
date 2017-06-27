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

// MsgPack.Serialization.DefaultSerializers.System_CharArrayMessagePackSerializer
struct System_CharArrayMessagePackSerializer_t781533025;
// MsgPack.Serialization.SerializationContext
struct SerializationContext_t1484625559;
// MsgPack.Packer
struct Packer_t1439452732;
// System.Char[]
struct CharU5BU5D_t1328083999;
// MsgPack.Unpacker
struct Unpacker_t998931393;

#include "codegen/il2cpp-codegen.h"
#include "MsgPack_MsgPack_Serialization_SerializationContext1484625559.h"
#include "MsgPack_MsgPack_Packer1439452732.h"
#include "MsgPack_MsgPack_Unpacker998931393.h"

// System.Void MsgPack.Serialization.DefaultSerializers.System_CharArrayMessagePackSerializer::.ctor(MsgPack.Serialization.SerializationContext)
extern "C"  void System_CharArrayMessagePackSerializer__ctor_m3386193489 (System_CharArrayMessagePackSerializer_t781533025 * __this, SerializationContext_t1484625559 * ___ownerContext0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MsgPack.Serialization.DefaultSerializers.System_CharArrayMessagePackSerializer::PackToCore(MsgPack.Packer,System.Char[])
extern "C"  void System_CharArrayMessagePackSerializer_PackToCore_m4180714168 (System_CharArrayMessagePackSerializer_t781533025 * __this, Packer_t1439452732 * ___packer0, CharU5BU5D_t1328083999* ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char[] MsgPack.Serialization.DefaultSerializers.System_CharArrayMessagePackSerializer::UnpackFromCore(MsgPack.Unpacker)
extern "C"  CharU5BU5D_t1328083999* System_CharArrayMessagePackSerializer_UnpackFromCore_m2541640106 (System_CharArrayMessagePackSerializer_t781533025 * __this, Unpacker_t998931393 * ___unpacker0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
