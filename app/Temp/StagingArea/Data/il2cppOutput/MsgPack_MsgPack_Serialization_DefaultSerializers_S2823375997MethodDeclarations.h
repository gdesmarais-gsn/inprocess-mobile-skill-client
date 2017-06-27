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

// MsgPack.Serialization.DefaultSerializers.System_DBNullMessagePackSerializer
struct System_DBNullMessagePackSerializer_t2823375997;
// MsgPack.Serialization.SerializationContext
struct SerializationContext_t1484625559;
// MsgPack.Packer
struct Packer_t1439452732;
// System.DBNull
struct DBNull_t972229383;
// MsgPack.Unpacker
struct Unpacker_t998931393;

#include "codegen/il2cpp-codegen.h"
#include "MsgPack_MsgPack_Serialization_SerializationContext1484625559.h"
#include "MsgPack_MsgPack_Packer1439452732.h"
#include "mscorlib_System_DBNull972229383.h"
#include "MsgPack_MsgPack_Unpacker998931393.h"

// System.Void MsgPack.Serialization.DefaultSerializers.System_DBNullMessagePackSerializer::.ctor(MsgPack.Serialization.SerializationContext)
extern "C"  void System_DBNullMessagePackSerializer__ctor_m3535387225 (System_DBNullMessagePackSerializer_t2823375997 * __this, SerializationContext_t1484625559 * ___ownerContext0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MsgPack.Serialization.DefaultSerializers.System_DBNullMessagePackSerializer::PackToCore(MsgPack.Packer,System.DBNull)
extern "C"  void System_DBNullMessagePackSerializer_PackToCore_m3665711397 (System_DBNullMessagePackSerializer_t2823375997 * __this, Packer_t1439452732 * ___packer0, DBNull_t972229383 * ___objectTree1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DBNull MsgPack.Serialization.DefaultSerializers.System_DBNullMessagePackSerializer::UnpackFromCore(MsgPack.Unpacker)
extern "C"  DBNull_t972229383 * System_DBNullMessagePackSerializer_UnpackFromCore_m146155783 (System_DBNullMessagePackSerializer_t2823375997 * __this, Unpacker_t998931393 * ___unpacker0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DBNull MsgPack.Serialization.DefaultSerializers.System_DBNullMessagePackSerializer::UnpackNil()
extern "C"  DBNull_t972229383 * System_DBNullMessagePackSerializer_UnpackNil_m2892369702 (System_DBNullMessagePackSerializer_t2823375997 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
