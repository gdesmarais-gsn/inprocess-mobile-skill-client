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

// MsgPack.Serialization.DefaultSerializers.DateTimeOffsetMessagePackSerializer
struct DateTimeOffsetMessagePackSerializer_t4214966254;
// MsgPack.Serialization.SerializationContext
struct SerializationContext_t1484625559;
// MsgPack.Packer
struct Packer_t1439452732;
// MsgPack.Unpacker
struct Unpacker_t998931393;

#include "codegen/il2cpp-codegen.h"
#include "MsgPack_MsgPack_Serialization_SerializationContext1484625559.h"
#include "MsgPack_MsgPack_Serialization_DateTimeConversionMe3801997378.h"
#include "MsgPack_MsgPack_Packer1439452732.h"
#include "mscorlib_System_DateTimeOffset1362988906.h"
#include "MsgPack_MsgPack_Unpacker998931393.h"

// System.Void MsgPack.Serialization.DefaultSerializers.DateTimeOffsetMessagePackSerializer::.ctor(MsgPack.Serialization.SerializationContext,MsgPack.Serialization.DateTimeConversionMethod)
extern "C"  void DateTimeOffsetMessagePackSerializer__ctor_m4154080224 (DateTimeOffsetMessagePackSerializer_t4214966254 * __this, SerializationContext_t1484625559 * ___ownerContext0, int32_t ___conversion1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MsgPack.Serialization.DefaultSerializers.DateTimeOffsetMessagePackSerializer::PackToCore(MsgPack.Packer,System.DateTimeOffset)
extern "C"  void DateTimeOffsetMessagePackSerializer_PackToCore_m3796443995 (DateTimeOffsetMessagePackSerializer_t4214966254 * __this, Packer_t1439452732 * ___packer0, DateTimeOffset_t1362988906  ___objectTree1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTimeOffset MsgPack.Serialization.DefaultSerializers.DateTimeOffsetMessagePackSerializer::UnpackFromCore(MsgPack.Unpacker)
extern "C"  DateTimeOffset_t1362988906  DateTimeOffsetMessagePackSerializer_UnpackFromCore_m3650423177 (DateTimeOffsetMessagePackSerializer_t4214966254 * __this, Unpacker_t998931393 * ___unpacker0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
