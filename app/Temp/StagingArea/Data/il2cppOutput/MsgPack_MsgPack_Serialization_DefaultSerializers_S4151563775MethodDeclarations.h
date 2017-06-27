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

// MsgPack.Serialization.DefaultSerializers.System_Collections_QueueMessagePackSerializer
struct System_Collections_QueueMessagePackSerializer_t4151563775;
// MsgPack.Serialization.SerializationContext
struct SerializationContext_t1484625559;
// MsgPack.Packer
struct Packer_t1439452732;
// System.Collections.Queue
struct Queue_t1288490777;
// MsgPack.Unpacker
struct Unpacker_t998931393;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "MsgPack_MsgPack_Serialization_SerializationContext1484625559.h"
#include "MsgPack_MsgPack_Packer1439452732.h"
#include "mscorlib_System_Collections_Queue1288490777.h"
#include "MsgPack_MsgPack_Unpacker998931393.h"

// System.Void MsgPack.Serialization.DefaultSerializers.System_Collections_QueueMessagePackSerializer::.ctor(MsgPack.Serialization.SerializationContext)
extern "C"  void System_Collections_QueueMessagePackSerializer__ctor_m1221857327 (System_Collections_QueueMessagePackSerializer_t4151563775 * __this, SerializationContext_t1484625559 * ___ownerContext0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MsgPack.Serialization.DefaultSerializers.System_Collections_QueueMessagePackSerializer::PackToCore(MsgPack.Packer,System.Collections.Queue)
extern "C"  void System_Collections_QueueMessagePackSerializer_PackToCore_m3791552758 (System_Collections_QueueMessagePackSerializer_t4151563775 * __this, Packer_t1439452732 * ___packer0, Queue_t1288490777 * ___objectTree1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Queue MsgPack.Serialization.DefaultSerializers.System_Collections_QueueMessagePackSerializer::UnpackFromCore(MsgPack.Unpacker)
extern "C"  Queue_t1288490777 * System_Collections_QueueMessagePackSerializer_UnpackFromCore_m1353092618 (System_Collections_QueueMessagePackSerializer_t4151563775 * __this, Unpacker_t998931393 * ___unpacker0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MsgPack.Serialization.DefaultSerializers.System_Collections_QueueMessagePackSerializer::UnpackToCore(MsgPack.Unpacker,System.Collections.Queue)
extern "C"  void System_Collections_QueueMessagePackSerializer_UnpackToCore_m2706239412 (System_Collections_QueueMessagePackSerializer_t4151563775 * __this, Unpacker_t998931393 * ___unpacker0, Queue_t1288490777 * ___collection1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object MsgPack.Serialization.DefaultSerializers.System_Collections_QueueMessagePackSerializer::CreateInstance(System.Int32)
extern "C"  Il2CppObject * System_Collections_QueueMessagePackSerializer_CreateInstance_m394455621 (System_Collections_QueueMessagePackSerializer_t4151563775 * __this, int32_t ___initialCapacity0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
