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

// MsgPack.Serialization.DefaultSerializers.UnixEpocDateTimeMessagePackSerializer
struct UnixEpocDateTimeMessagePackSerializer_t2915577328;
// MsgPack.Serialization.SerializationContext
struct SerializationContext_t1484625559;
// MsgPack.Packer
struct Packer_t1439452732;
// MsgPack.Unpacker
struct Unpacker_t998931393;

#include "codegen/il2cpp-codegen.h"
#include "MsgPack_MsgPack_Serialization_SerializationContext1484625559.h"
#include "MsgPack_MsgPack_Packer1439452732.h"
#include "mscorlib_System_DateTime693205669.h"
#include "MsgPack_MsgPack_Unpacker998931393.h"

// System.Void MsgPack.Serialization.DefaultSerializers.UnixEpocDateTimeMessagePackSerializer::.ctor(MsgPack.Serialization.SerializationContext)
extern "C"  void UnixEpocDateTimeMessagePackSerializer__ctor_m1695551904 (UnixEpocDateTimeMessagePackSerializer_t2915577328 * __this, SerializationContext_t1484625559 * ___ownerContext0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MsgPack.Serialization.DefaultSerializers.UnixEpocDateTimeMessagePackSerializer::PackToCore(MsgPack.Packer,System.DateTime)
extern "C"  void UnixEpocDateTimeMessagePackSerializer_PackToCore_m3191735058 (UnixEpocDateTimeMessagePackSerializer_t2915577328 * __this, Packer_t1439452732 * ___packer0, DateTime_t693205669  ___objectTree1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime MsgPack.Serialization.DefaultSerializers.UnixEpocDateTimeMessagePackSerializer::UnpackFromCore(MsgPack.Unpacker)
extern "C"  DateTime_t693205669  UnixEpocDateTimeMessagePackSerializer_UnpackFromCore_m2936407256 (UnixEpocDateTimeMessagePackSerializer_t2915577328 * __this, Unpacker_t998931393 * ___unpacker0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
