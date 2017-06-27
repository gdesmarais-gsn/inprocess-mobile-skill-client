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

// MsgPack.Serialization.DefaultSerializers.System_Collections_StackMessagePackSerializer
struct System_Collections_StackMessagePackSerializer_t3660834000;
// MsgPack.Serialization.SerializationContext
struct SerializationContext_t1484625559;
// MsgPack.Packer
struct Packer_t1439452732;
// System.Collections.Stack
struct Stack_t1043988394;
// MsgPack.Unpacker
struct Unpacker_t998931393;
// System.Collections.ICollection
struct ICollection_t91669223;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "MsgPack_MsgPack_Serialization_SerializationContext1484625559.h"
#include "MsgPack_MsgPack_Packer1439452732.h"
#include "mscorlib_System_Collections_Stack1043988394.h"
#include "MsgPack_MsgPack_Unpacker998931393.h"

// System.Void MsgPack.Serialization.DefaultSerializers.System_Collections_StackMessagePackSerializer::.ctor(MsgPack.Serialization.SerializationContext)
extern "C"  void System_Collections_StackMessagePackSerializer__ctor_m2578007520 (System_Collections_StackMessagePackSerializer_t3660834000 * __this, SerializationContext_t1484625559 * ___ownerContext0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MsgPack.Serialization.DefaultSerializers.System_Collections_StackMessagePackSerializer::PackToCore(MsgPack.Packer,System.Collections.Stack)
extern "C"  void System_Collections_StackMessagePackSerializer_PackToCore_m2892886116 (System_Collections_StackMessagePackSerializer_t3660834000 * __this, Packer_t1439452732 * ___packer0, Stack_t1043988394 * ___objectTree1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Stack MsgPack.Serialization.DefaultSerializers.System_Collections_StackMessagePackSerializer::UnpackFromCore(MsgPack.Unpacker)
extern "C"  Stack_t1043988394 * System_Collections_StackMessagePackSerializer_UnpackFromCore_m2804444266 (System_Collections_StackMessagePackSerializer_t3660834000 * __this, Unpacker_t998931393 * ___unpacker0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MsgPack.Serialization.DefaultSerializers.System_Collections_StackMessagePackSerializer::UnpackToCore(MsgPack.Unpacker,System.Collections.Stack)
extern "C"  void System_Collections_StackMessagePackSerializer_UnpackToCore_m2249610470 (System_Collections_StackMessagePackSerializer_t3660834000 * __this, Unpacker_t998931393 * ___unpacker0, Stack_t1043988394 * ___collection1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ICollection MsgPack.Serialization.DefaultSerializers.System_Collections_StackMessagePackSerializer::UnpackItemsInReverseOrder(MsgPack.Unpacker,System.Int32)
extern "C"  Il2CppObject * System_Collections_StackMessagePackSerializer_UnpackItemsInReverseOrder_m729834492 (Il2CppObject * __this /* static, unused */, Unpacker_t998931393 * ___unpacker0, int32_t ___count1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object MsgPack.Serialization.DefaultSerializers.System_Collections_StackMessagePackSerializer::CreateInstance(System.Int32)
extern "C"  Il2CppObject * System_Collections_StackMessagePackSerializer_CreateInstance_m3466363552 (System_Collections_StackMessagePackSerializer_t3660834000 * __this, int32_t ___initialCapacity0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
