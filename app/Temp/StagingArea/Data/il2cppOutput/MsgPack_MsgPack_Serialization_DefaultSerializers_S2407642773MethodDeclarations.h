﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// MsgPack.Serialization.DefaultSerializers.System_ObjectMessagePackSerializer
struct System_ObjectMessagePackSerializer_t2407642773;
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
#include "mscorlib_System_Object2689449295.h"
#include "MsgPack_MsgPack_Unpacker998931393.h"

// System.Void MsgPack.Serialization.DefaultSerializers.System_ObjectMessagePackSerializer::.ctor(MsgPack.Serialization.SerializationContext)
extern "C"  void System_ObjectMessagePackSerializer__ctor_m1478239361 (System_ObjectMessagePackSerializer_t2407642773 * __this, SerializationContext_t1484625559 * ___ownerContext0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MsgPack.Serialization.DefaultSerializers.System_ObjectMessagePackSerializer::PackToCore(MsgPack.Packer,System.Object)
extern "C"  void System_ObjectMessagePackSerializer_PackToCore_m1150542373 (System_ObjectMessagePackSerializer_t2407642773 * __this, Packer_t1439452732 * ___packer0, Il2CppObject * ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object MsgPack.Serialization.DefaultSerializers.System_ObjectMessagePackSerializer::UnpackFromCore(MsgPack.Unpacker)
extern "C"  Il2CppObject * System_ObjectMessagePackSerializer_UnpackFromCore_m4047951399 (System_ObjectMessagePackSerializer_t2407642773 * __this, Unpacker_t998931393 * ___unpacker0, const MethodInfo* method) IL2CPP_METHOD_ATTR;