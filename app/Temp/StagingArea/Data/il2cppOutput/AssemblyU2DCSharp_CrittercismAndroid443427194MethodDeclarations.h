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
// CrittercismConfig
struct CrittercismConfig_t1370100647;
// System.Exception
struct Exception_t1927440687;
// System.String[]
struct StringU5BU5D_t1642385972;
// System.Object
struct Il2CppObject;
// System.UnhandledExceptionEventArgs
struct UnhandledExceptionEventArgs_t3067050131;
// System.Object[]
struct ObjectU5BU5D_t3614634134;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "AssemblyU2DCSharp_CrittercismConfig1370100647.h"
#include "mscorlib_System_Exception1927440687.h"
#include "System_System_Net_HttpStatusCode1898409641.h"
#include "System_System_Net_WebExceptionStatus1169373531.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_UnhandledExceptionEventArgs3067050131.h"
#include "UnityEngine_UnityEngine_LogType1559732862.h"

// System.Void CrittercismAndroid::Init(System.String)
extern "C"  void CrittercismAndroid_Init_m1525483891 (Il2CppObject * __this /* static, unused */, String_t* ___appID0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CrittercismAndroid::Init(System.String,CrittercismConfig)
extern "C"  void CrittercismAndroid_Init_m3081249440 (Il2CppObject * __this /* static, unused */, String_t* ___appID0, CrittercismConfig_t1370100647 * ___config1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String CrittercismAndroid::StackTrace(System.Exception)
extern "C"  String_t* CrittercismAndroid_StackTrace_m2615706457 (Il2CppObject * __this /* static, unused */, Exception_t1927440687 * ___e0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CrittercismAndroid::LogHandledException(System.Exception)
extern "C"  void CrittercismAndroid_LogHandledException_m4237769690 (Il2CppObject * __this /* static, unused */, Exception_t1927440687 * ___e0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CrittercismAndroid::LogUnhandledException(System.Exception)
extern "C"  void CrittercismAndroid_LogUnhandledException_m1303852929 (Il2CppObject * __this /* static, unused */, Exception_t1927440687 * ___e0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CrittercismAndroid::LogNetworkRequest(System.String,System.String,System.Int64,System.Int64,System.Int64,System.Net.HttpStatusCode,System.Net.WebExceptionStatus)
extern "C"  void CrittercismAndroid_LogNetworkRequest_m3928959938 (Il2CppObject * __this /* static, unused */, String_t* ___method0, String_t* ___uriString1, int64_t ___latency2, int64_t ___bytesRead3, int64_t ___bytesSent4, int32_t ___responseCode5, int32_t ___exceptionStatus6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean CrittercismAndroid::GetOptOut()
extern "C"  bool CrittercismAndroid_GetOptOut_m469181704 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CrittercismAndroid::SetOptOut(System.Boolean)
extern "C"  void CrittercismAndroid_SetOptOut_m1882324559 (Il2CppObject * __this /* static, unused */, bool ___optOutStatus0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean CrittercismAndroid::DidCrashOnLastLoad()
extern "C"  bool CrittercismAndroid_DidCrashOnLastLoad_m2187271298 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CrittercismAndroid::SetUsername(System.String)
extern "C"  void CrittercismAndroid_SetUsername_m2399485505 (Il2CppObject * __this /* static, unused */, String_t* ___username0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CrittercismAndroid::SetMetadata(System.String[],System.String[])
extern "C"  void CrittercismAndroid_SetMetadata_m2215933310 (Il2CppObject * __this /* static, unused */, StringU5BU5D_t1642385972* ___keys0, StringU5BU5D_t1642385972* ___values1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CrittercismAndroid::SetValue(System.String,System.String)
extern "C"  void CrittercismAndroid_SetValue_m3284751310 (Il2CppObject * __this /* static, unused */, String_t* ___key0, String_t* ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CrittercismAndroid::LeaveBreadcrumb(System.String)
extern "C"  void CrittercismAndroid_LeaveBreadcrumb_m802074865 (Il2CppObject * __this /* static, unused */, String_t* ___breadcrumb0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CrittercismAndroid::BeginUserflow(System.String)
extern "C"  void CrittercismAndroid_BeginUserflow_m1361324321 (Il2CppObject * __this /* static, unused */, String_t* ___userflowName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CrittercismAndroid::BeginTransaction(System.String)
extern "C"  void CrittercismAndroid_BeginTransaction_m3443954028 (Il2CppObject * __this /* static, unused */, String_t* ___userflowName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CrittercismAndroid::CancelUserflow(System.String)
extern "C"  void CrittercismAndroid_CancelUserflow_m909468798 (Il2CppObject * __this /* static, unused */, String_t* ___userflowName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CrittercismAndroid::CancelTransaction(System.String)
extern "C"  void CrittercismAndroid_CancelTransaction_m210288711 (Il2CppObject * __this /* static, unused */, String_t* ___userflowName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CrittercismAndroid::EndUserflow(System.String)
extern "C"  void CrittercismAndroid_EndUserflow_m4118957373 (Il2CppObject * __this /* static, unused */, String_t* ___userflowName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CrittercismAndroid::EndTransaction(System.String)
extern "C"  void CrittercismAndroid_EndTransaction_m1542241228 (Il2CppObject * __this /* static, unused */, String_t* ___userflowName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CrittercismAndroid::FailUserflow(System.String)
extern "C"  void CrittercismAndroid_FailUserflow_m988378248 (Il2CppObject * __this /* static, unused */, String_t* ___userflowName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CrittercismAndroid::FailTransaction(System.String)
extern "C"  void CrittercismAndroid_FailTransaction_m2173211551 (Il2CppObject * __this /* static, unused */, String_t* ___userflowName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CrittercismAndroid::SetUserflowValue(System.String,System.Int32)
extern "C"  void CrittercismAndroid_SetUserflowValue_m208971256 (Il2CppObject * __this /* static, unused */, String_t* ___userflowName0, int32_t ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CrittercismAndroid::SetTransactionValue(System.String,System.Int32)
extern "C"  void CrittercismAndroid_SetTransactionValue_m2940565205 (Il2CppObject * __this /* static, unused */, String_t* ___userflowName0, int32_t ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 CrittercismAndroid::GetUserflowValue(System.String)
extern "C"  int32_t CrittercismAndroid_GetUserflowValue_m20110085 (Il2CppObject * __this /* static, unused */, String_t* ___userflowName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 CrittercismAndroid::GetTransactionValue(System.String)
extern "C"  int32_t CrittercismAndroid_GetTransactionValue_m891986040 (Il2CppObject * __this /* static, unused */, String_t* ___userflowName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CrittercismAndroid::OnUnhandledException(System.Object,System.UnhandledExceptionEventArgs)
extern "C"  void CrittercismAndroid_OnUnhandledException_m3808860740 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___sender0, UnhandledExceptionEventArgs_t3067050131 * ___args1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CrittercismAndroid::SetLogUnhandledExceptionAsCrash(System.Boolean)
extern "C"  void CrittercismAndroid_SetLogUnhandledExceptionAsCrash_m587388389 (Il2CppObject * __this /* static, unused */, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean CrittercismAndroid::GetLogUnhandledExceptionAsCrash()
extern "C"  bool CrittercismAndroid_GetLogUnhandledExceptionAsCrash_m3279548410 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CrittercismAndroid::OnLogMessageReceived(System.String,System.String,UnityEngine.LogType)
extern "C"  void CrittercismAndroid_OnLogMessageReceived_m3799602317 (Il2CppObject * __this /* static, unused */, String_t* ___name0, String_t* ___stack1, int32_t ___type2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CrittercismAndroid::PluginCallStatic(System.String,System.Object[])
extern "C"  void CrittercismAndroid_PluginCallStatic_m1924156072 (Il2CppObject * __this /* static, unused */, String_t* ___methodName0, ObjectU5BU5D_t3614634134* ___args1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
