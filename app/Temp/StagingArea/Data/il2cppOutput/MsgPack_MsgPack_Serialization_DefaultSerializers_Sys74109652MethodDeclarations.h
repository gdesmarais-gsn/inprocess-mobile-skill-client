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

// MsgPack.Serialization.DefaultSerializers.System_Collections_DictionaryEntryMessagePackSerializer
struct System_Collections_DictionaryEntryMessagePackSerializer_t74109652;
// MsgPack.Serialization.SerializationContext
struct SerializationContext_t1484625559;
// MsgPack.Packer
struct Packer_t1439452732;
// System.Object
struct Il2CppObject;
// MsgPack.Unpacker
struct Unpacker_t998931393;

#include "codegen/il2cpp-codegen.h"
#include "MsgPack_MsgPack_Serialization_SerializationContext1484625559.h"
#include "MsgPack_MsgPack_Packer1439452732.h"
#include "mscorlib_System_Collections_DictionaryEntry3048875398.h"
#include "MsgPack_MsgPack_MessagePackObject2038085051.h"
#include "mscorlib_System_Object2689449295.h"
#include "MsgPack_MsgPack_Unpacker998931393.h"

// System.Void MsgPack.Serialization.DefaultSerializers.System_Collections_DictionaryEntryMessagePackSerializer::.ctor(MsgPack.Serialization.SerializationContext)
extern "C"  void System_Collections_DictionaryEntryMessagePackSerializer__ctor_m2967361604 (System_Collections_DictionaryEntryMessagePackSerializer_t74109652 * __this, SerializationContext_t1484625559 * ___ownerContext0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MsgPack.Serialization.DefaultSerializers.System_Collections_DictionaryEntryMessagePackSerializer::PackToCore(MsgPack.Packer,System.Collections.DictionaryEntry)
extern "C"  void System_Collections_DictionaryEntryMessagePackSerializer_PackToCore_m4167800048 (System_Collections_DictionaryEntryMessagePackSerializer_t74109652 * __this, Packer_t1439452732 * ___packer0, DictionaryEntry_t3048875398  ___objectTree1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// MsgPack.MessagePackObject MsgPack.Serialization.DefaultSerializers.System_Collections_DictionaryEntryMessagePackSerializer::EnsureMessagePackObject(System.Object)
extern "C"  MessagePackObject_t2038085051  System_Collections_DictionaryEntryMessagePackSerializer_EnsureMessagePackObject_m2104097154 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.DictionaryEntry MsgPack.Serialization.DefaultSerializers.System_Collections_DictionaryEntryMessagePackSerializer::UnpackFromCore(MsgPack.Unpacker)
extern "C"  DictionaryEntry_t3048875398  System_Collections_DictionaryEntryMessagePackSerializer_UnpackFromCore_m2227564970 (System_Collections_DictionaryEntryMessagePackSerializer_t74109652 * __this, Unpacker_t998931393 * ___unpacker0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
