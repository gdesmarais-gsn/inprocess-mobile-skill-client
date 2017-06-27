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

// MsgPack.Serialization.DefaultSerializers.System_Globalization_CultureInfoMessagePackSerializer
struct System_Globalization_CultureInfoMessagePackSerializer_t3635447374;
// MsgPack.Serialization.SerializationContext
struct SerializationContext_t1484625559;
// MsgPack.Packer
struct Packer_t1439452732;
// System.Globalization.CultureInfo
struct CultureInfo_t3500843524;
// MsgPack.Unpacker
struct Unpacker_t998931393;

#include "codegen/il2cpp-codegen.h"
#include "MsgPack_MsgPack_Serialization_SerializationContext1484625559.h"
#include "MsgPack_MsgPack_Packer1439452732.h"
#include "mscorlib_System_Globalization_CultureInfo3500843524.h"
#include "MsgPack_MsgPack_Unpacker998931393.h"

// System.Void MsgPack.Serialization.DefaultSerializers.System_Globalization_CultureInfoMessagePackSerializer::.ctor(MsgPack.Serialization.SerializationContext)
extern "C"  void System_Globalization_CultureInfoMessagePackSerializer__ctor_m2380871614 (System_Globalization_CultureInfoMessagePackSerializer_t3635447374 * __this, SerializationContext_t1484625559 * ___ownerContext0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MsgPack.Serialization.DefaultSerializers.System_Globalization_CultureInfoMessagePackSerializer::PackToCore(MsgPack.Packer,System.Globalization.CultureInfo)
extern "C"  void System_Globalization_CultureInfoMessagePackSerializer_PackToCore_m4222018436 (System_Globalization_CultureInfoMessagePackSerializer_t3635447374 * __this, Packer_t1439452732 * ___packer0, CultureInfo_t3500843524 * ___objectTree1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.CultureInfo MsgPack.Serialization.DefaultSerializers.System_Globalization_CultureInfoMessagePackSerializer::UnpackFromCore(MsgPack.Unpacker)
extern "C"  CultureInfo_t3500843524 * System_Globalization_CultureInfoMessagePackSerializer_UnpackFromCore_m3025585930 (System_Globalization_CultureInfoMessagePackSerializer_t3635447374 * __this, Unpacker_t998931393 * ___unpacker0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
