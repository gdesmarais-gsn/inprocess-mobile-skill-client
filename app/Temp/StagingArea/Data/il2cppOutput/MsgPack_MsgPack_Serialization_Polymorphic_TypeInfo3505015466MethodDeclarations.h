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
// System.String
struct String_t;
// System.Type
struct Type_t;
// MsgPack.Unpacker
struct Unpacker_t998931393;

#include "codegen/il2cpp-codegen.h"
#include "MsgPack_MsgPack_Packer1439452732.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Type1303803226.h"
#include "MsgPack_MsgPack_Unpacker998931393.h"

// System.Void MsgPack.Serialization.Polymorphic.TypeInfoEncoder::Encode(MsgPack.Packer,System.String)
extern "C"  void TypeInfoEncoder_Encode_m2355899729 (Il2CppObject * __this /* static, unused */, Packer_t1439452732 * ___packer0, String_t* ___typeCode1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MsgPack.Serialization.Polymorphic.TypeInfoEncoder::Encode(MsgPack.Packer,System.Type)
extern "C"  void TypeInfoEncoder_Encode_m1184629304 (Il2CppObject * __this /* static, unused */, Packer_t1439452732 * ___packer0, Type_t * ___type1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type MsgPack.Serialization.Polymorphic.TypeInfoEncoder::DecodeRuntimeTypeInfo(MsgPack.Unpacker)
extern "C"  Type_t * TypeInfoEncoder_DecodeRuntimeTypeInfo_m1585317928 (Il2CppObject * __this /* static, unused */, Unpacker_t998931393 * ___unpacker0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
