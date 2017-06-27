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

// MsgPack.Serialization.DefaultSerializers.System_Text_StringBuilderMessagePackSerializer
struct System_Text_StringBuilderMessagePackSerializer_t1611551542;
// MsgPack.Serialization.SerializationContext
struct SerializationContext_t1484625559;
// MsgPack.Packer
struct Packer_t1439452732;
// System.Text.StringBuilder
struct StringBuilder_t1221177846;
// MsgPack.Unpacker
struct Unpacker_t998931393;

#include "codegen/il2cpp-codegen.h"
#include "MsgPack_MsgPack_Serialization_SerializationContext1484625559.h"
#include "MsgPack_MsgPack_Packer1439452732.h"
#include "mscorlib_System_Text_StringBuilder1221177846.h"
#include "MsgPack_MsgPack_Unpacker998931393.h"

// System.Void MsgPack.Serialization.DefaultSerializers.System_Text_StringBuilderMessagePackSerializer::.ctor(MsgPack.Serialization.SerializationContext)
extern "C"  void System_Text_StringBuilderMessagePackSerializer__ctor_m1855609054 (System_Text_StringBuilderMessagePackSerializer_t1611551542 * __this, SerializationContext_t1484625559 * ___ownerContext0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MsgPack.Serialization.DefaultSerializers.System_Text_StringBuilderMessagePackSerializer::PackToCore(MsgPack.Packer,System.Text.StringBuilder)
extern "C"  void System_Text_StringBuilderMessagePackSerializer_PackToCore_m526461684 (System_Text_StringBuilderMessagePackSerializer_t1611551542 * __this, Packer_t1439452732 * ___packer0, StringBuilder_t1221177846 * ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder MsgPack.Serialization.DefaultSerializers.System_Text_StringBuilderMessagePackSerializer::UnpackFromCore(MsgPack.Unpacker)
extern "C"  StringBuilder_t1221177846 * System_Text_StringBuilderMessagePackSerializer_UnpackFromCore_m3124560176 (System_Text_StringBuilderMessagePackSerializer_t1611551542 * __this, Unpacker_t998931393 * ___unpacker0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
