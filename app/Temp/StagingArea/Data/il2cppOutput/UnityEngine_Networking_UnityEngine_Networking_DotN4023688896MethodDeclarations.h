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
// System.Delegate
struct Delegate_t3022476291;
// System.Type
struct Type_t;
// System.Net.Sockets.SocketException
struct SocketException_t1618573604;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Delegate3022476291.h"
#include "mscorlib_System_Type1303803226.h"
#include "System_System_Net_Sockets_SocketException1618573604.h"

// System.String UnityEngine.Networking.DotNetCompatibility::GetMethodName(System.Delegate)
extern "C"  String_t* DotNetCompatibility_GetMethodName_m1053637144 (Il2CppObject * __this /* static, unused */, Delegate_t3022476291 * ___func0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type UnityEngine.Networking.DotNetCompatibility::GetBaseType(System.Type)
extern "C"  Type_t * DotNetCompatibility_GetBaseType_m527770571 (Il2CppObject * __this /* static, unused */, Type_t * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Networking.DotNetCompatibility::GetErrorCode(System.Net.Sockets.SocketException)
extern "C"  String_t* DotNetCompatibility_GetErrorCode_m2768985617 (Il2CppObject * __this /* static, unused */, SocketException_t1618573604 * ___e0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
