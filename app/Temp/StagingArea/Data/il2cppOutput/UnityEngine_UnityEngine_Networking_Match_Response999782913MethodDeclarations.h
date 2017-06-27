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

// UnityEngine.Networking.Match.Response
struct Response_t999782913;
// System.String
struct String_t;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Object2689449295.h"

// System.Void UnityEngine.Networking.Match.Response::.ctor()
extern "C"  void Response__ctor_m578023311 (Response_t999782913 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.Match.Response::get_success()
extern "C"  bool Response_get_success_m3840560101 (Response_t999782913 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.Match.Response::set_success(System.Boolean)
extern "C"  void Response_set_success_m3411677690 (Response_t999782913 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Networking.Match.Response::get_extendedInfo()
extern "C"  String_t* Response_get_extendedInfo_m2740277232 (Response_t999782913 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.Match.Response::set_extendedInfo(System.String)
extern "C"  void Response_set_extendedInfo_m1911491085 (Response_t999782913 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.Match.Response::SetFailure(System.String)
extern "C"  void Response_SetFailure_m3586177683 (Response_t999782913 * __this, String_t* ___info0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Networking.Match.Response::ToString()
extern "C"  String_t* Response_ToString_m1113113200 (Response_t999782913 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.Match.Response::Parse(System.Object)
extern "C"  void Response_Parse_m682266676 (Response_t999782913 * __this, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
