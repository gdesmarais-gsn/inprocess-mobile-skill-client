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

// MsgPack.Serialization.DefaultSerializers.System_DecimalMessagePackSerializer
struct System_DecimalMessagePackSerializer_t3015390323;
// MsgPack.Serialization.SerializationContext
struct SerializationContext_t1484625559;
// MsgPack.Packer
struct Packer_t1439452732;
// MsgPack.Unpacker
struct Unpacker_t998931393;

#include "codegen/il2cpp-codegen.h"
#include "MsgPack_MsgPack_Serialization_SerializationContext1484625559.h"
#include "MsgPack_MsgPack_Packer1439452732.h"
#include "mscorlib_System_Decimal724701077.h"
#include "MsgPack_MsgPack_Unpacker998931393.h"

// System.Void MsgPack.Serialization.DefaultSerializers.System_DecimalMessagePackSerializer::.ctor(MsgPack.Serialization.SerializationContext)
extern "C"  void System_DecimalMessagePackSerializer__ctor_m2121420067 (System_DecimalMessagePackSerializer_t3015390323 * __this, SerializationContext_t1484625559 * ___ownerContext0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MsgPack.Serialization.DefaultSerializers.System_DecimalMessagePackSerializer::PackToCore(MsgPack.Packer,System.Decimal)
extern "C"  void System_DecimalMessagePackSerializer_PackToCore_m874348741 (System_DecimalMessagePackSerializer_t3015390323 * __this, Packer_t1439452732 * ___packer0, Decimal_t724701077  ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal MsgPack.Serialization.DefaultSerializers.System_DecimalMessagePackSerializer::UnpackFromCore(MsgPack.Unpacker)
extern "C"  Decimal_t724701077  System_DecimalMessagePackSerializer_UnpackFromCore_m2128400123 (System_DecimalMessagePackSerializer_t3015390323 * __this, Unpacker_t998931393 * ___unpacker0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
