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

// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.Text.StringBuilder
struct StringBuilder_t1221177846;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Text_StringBuilder1221177846.h"

// System.String MsgPack.Binary::ToHexString(System.Byte[])
extern "C"  String_t* Binary_ToHexString_m1439056179 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___blob0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String MsgPack.Binary::ToHexString(System.Byte[],System.Boolean)
extern "C"  String_t* Binary_ToHexString_m4133124548 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___blob0, bool ___withPrefix1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MsgPack.Binary::ToHexString(System.Byte[],System.Text.StringBuilder)
extern "C"  void Binary_ToHexString_m1662615236 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___blob0, StringBuilder_t1221177846 * ___buffer1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MsgPack.Binary::ToHexStringCore(System.Byte[],System.Text.StringBuilder,System.Boolean)
extern "C"  void Binary_ToHexStringCore_m2485692020 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___blob0, StringBuilder_t1221177846 * ___buffer1, bool ___withPrefix2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char MsgPack.Binary::ToHexChar(System.Int32)
extern "C"  Il2CppChar Binary_ToHexChar_m1789586921 (Il2CppObject * __this /* static, unused */, int32_t ___b0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MsgPack.Binary::.cctor()
extern "C"  void Binary__cctor_m3874070921 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
