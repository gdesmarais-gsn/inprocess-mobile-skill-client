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

// Crittercism
struct Crittercism_t1506202693;
// System.Exception
struct Exception_t1927440687;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t1642385972;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Exception1927440687.h"
#include "mscorlib_System_String2029220233.h"
#include "System_System_Net_HttpStatusCode1898409641.h"
#include "System_System_Net_WebExceptionStatus1169373531.h"

// System.Void Crittercism::.ctor()
extern "C"  void Crittercism__ctor_m3078560558 (Crittercism_t1506202693 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Crittercism::Awake()
extern "C"  void Crittercism_Awake_m3305594853 (Crittercism_t1506202693 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Crittercism::LogHandledException(System.Exception)
extern "C"  void Crittercism_LogHandledException_m1057140817 (Il2CppObject * __this /* static, unused */, Exception_t1927440687 * ___e0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Crittercism::GetOptOut()
extern "C"  bool Crittercism_GetOptOut_m280964231 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Crittercism::SetOptOut(System.Boolean)
extern "C"  void Crittercism_SetOptOut_m2756626164 (Il2CppObject * __this /* static, unused */, bool ___isOptedOut0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Crittercism::SetUsername(System.String)
extern "C"  void Crittercism_SetUsername_m4104195400 (Il2CppObject * __this /* static, unused */, String_t* ___username0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Crittercism::SetValue(System.String,System.String)
extern "C"  void Crittercism_SetValue_m1640692781 (Il2CppObject * __this /* static, unused */, String_t* ___key0, String_t* ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Crittercism::SetMetadata(System.String[],System.String[])
extern "C"  void Crittercism_SetMetadata_m3727933247 (Il2CppObject * __this /* static, unused */, StringU5BU5D_t1642385972* ___keys0, StringU5BU5D_t1642385972* ___values1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Crittercism::LeaveBreadcrumb(System.String)
extern "C"  void Crittercism_LeaveBreadcrumb_m2476540950 (Il2CppObject * __this /* static, unused */, String_t* ___breadcrumb0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Crittercism::LogNetworkRequest(System.String,System.String,System.Double,System.Int32,System.Int32,System.Net.HttpStatusCode,System.Net.WebExceptionStatus)
extern "C"  void Crittercism_LogNetworkRequest_m750180635 (Il2CppObject * __this /* static, unused */, String_t* ___method0, String_t* ___uriString1, double ___latencyInSeconds2, int32_t ___bytesRead3, int32_t ___bytesSent4, int32_t ___responseCode5, int32_t ___exceptionStatus6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Crittercism::LogNetworkRequest(System.String,System.String,System.Int64,System.Int32,System.Int32,System.Net.HttpStatusCode,System.Net.WebExceptionStatus)
extern "C"  void Crittercism_LogNetworkRequest_m2168149715 (Il2CppObject * __this /* static, unused */, String_t* ___method0, String_t* ___uriString1, int64_t ___latencyInMilliseconds2, int32_t ___bytesRead3, int32_t ___bytesSent4, int32_t ___responseCode5, int32_t ___exceptionStatus6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Crittercism::DidCrashOnLastLoad()
extern "C"  bool Crittercism_DidCrashOnLastLoad_m1044517711 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Crittercism::BeginUserflow(System.String)
extern "C"  void Crittercism_BeginUserflow_m3301630906 (Il2CppObject * __this /* static, unused */, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Crittercism::BeginUserflow(System.String,System.Int32)
extern "C"  void Crittercism_BeginUserflow_m1767231371 (Il2CppObject * __this /* static, unused */, String_t* ___name0, int32_t ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Crittercism::CancelUserflow(System.String)
extern "C"  void Crittercism_CancelUserflow_m926758207 (Il2CppObject * __this /* static, unused */, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Crittercism::EndUserflow(System.String)
extern "C"  void Crittercism_EndUserflow_m3192979978 (Il2CppObject * __this /* static, unused */, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Crittercism::FailUserflow(System.String)
extern "C"  void Crittercism_FailUserflow_m248318287 (Il2CppObject * __this /* static, unused */, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Crittercism::SetUserflowValue(System.String,System.Int32)
extern "C"  void Crittercism_SetUserflowValue_m2850220897 (Il2CppObject * __this /* static, unused */, String_t* ___name0, int32_t ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Crittercism::GetUserflowValue(System.String)
extern "C"  int32_t Crittercism_GetUserflowValue_m620818444 (Il2CppObject * __this /* static, unused */, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Crittercism::SetLogUnhandledExceptionAsCrash(System.Boolean)
extern "C"  void Crittercism_SetLogUnhandledExceptionAsCrash_m3131724610 (Il2CppObject * __this /* static, unused */, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Crittercism::GetLogUnhandledExceptionAsCrash()
extern "C"  bool Crittercism_GetLogUnhandledExceptionAsCrash_m1497303697 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
