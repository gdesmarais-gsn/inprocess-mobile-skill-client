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

// MsgPack.Packer
struct Packer_t1439452732;
// System.Object
struct Il2CppObject;
// MsgPack.Serialization.SerializationContext
struct SerializationContext_t1484625559;

#include "codegen/il2cpp-codegen.h"
#include "MsgPack_MsgPack_Packer1439452732.h"
#include "mscorlib_System_Object2689449295.h"
#include "MsgPack_MsgPack_Serialization_SerializationContext1484625559.h"

// MsgPack.Packer MsgPack.PackerUnpackerExtensions::PackObject(MsgPack.Packer,System.Object)
extern "C"  Packer_t1439452732 * PackerUnpackerExtensions_PackObject_m1205497009 (Il2CppObject * __this /* static, unused */, Packer_t1439452732 * ___source0, Il2CppObject * ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// MsgPack.Packer MsgPack.PackerUnpackerExtensions::PackObject(MsgPack.Packer,System.Object,MsgPack.Serialization.SerializationContext)
extern "C"  Packer_t1439452732 * PackerUnpackerExtensions_PackObject_m3784705094 (Il2CppObject * __this /* static, unused */, Packer_t1439452732 * ___source0, Il2CppObject * ___value1, SerializationContext_t1484625559 * ___context2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MsgPack.PackerUnpackerExtensions::PackObjectCore(MsgPack.Packer,System.Object,MsgPack.Serialization.SerializationContext)
extern "C"  void PackerUnpackerExtensions_PackObjectCore_m3589354690 (Il2CppObject * __this /* static, unused */, Packer_t1439452732 * ___source0, Il2CppObject * ___value1, SerializationContext_t1484625559 * ___context2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
