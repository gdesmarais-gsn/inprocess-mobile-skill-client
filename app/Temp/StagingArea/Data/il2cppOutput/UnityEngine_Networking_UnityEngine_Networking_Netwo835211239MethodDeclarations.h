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

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netwo835211239.h"
#include "mscorlib_System_String2029220233.h"

// System.Void UnityEngine.Networking.NetworkHash128::Reset()
extern "C"  void NetworkHash128_Reset_m4000286319 (NetworkHash128_t835211239 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkHash128::IsValid()
extern "C"  bool NetworkHash128_IsValid_m4025581796 (NetworkHash128_t835211239 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Networking.NetworkHash128::HexToNumber(System.Char)
extern "C"  int32_t NetworkHash128_HexToNumber_m1659404144 (Il2CppObject * __this /* static, unused */, Il2CppChar ___c0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.NetworkHash128 UnityEngine.Networking.NetworkHash128::Parse(System.String)
extern "C"  NetworkHash128_t835211239  NetworkHash128_Parse_m1056379924 (Il2CppObject * __this /* static, unused */, String_t* ___text0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Networking.NetworkHash128::ToString()
extern "C"  String_t* NetworkHash128_ToString_m506494205 (NetworkHash128_t835211239 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
