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
// System.Exception
struct Exception_t1927440687;
// System.Object
struct Il2CppObject;
// System.UnhandledExceptionEventArgs
struct UnhandledExceptionEventArgs_t3067050131;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Exception1927440687.h"
#include "System_System_Net_HttpStatusCode1898409641.h"
#include "System_System_Net_WebExceptionStatus1169373531.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_UnhandledExceptionEventArgs3067050131.h"
#include "UnityEngine_UnityEngine_LogType1559732862.h"

// System.Void CrittercismIOS::Init(System.String)
extern "C"  void CrittercismIOS_Init_m2771686297 (Il2CppObject * __this /* static, unused */, String_t* ___appID0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String CrittercismIOS::StackTrace(System.Exception)
extern "C"  String_t* CrittercismIOS_StackTrace_m1665647339 (Il2CppObject * __this /* static, unused */, Exception_t1927440687 * ___e0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CrittercismIOS::LogHandledException(System.Exception)
extern "C"  void CrittercismIOS_LogHandledException_m3153660840 (Il2CppObject * __this /* static, unused */, Exception_t1927440687 * ___e0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean CrittercismIOS::GetOptOut()
extern "C"  bool CrittercismIOS_GetOptOut_m2680546342 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CrittercismIOS::SetOptOut(System.Boolean)
extern "C"  void CrittercismIOS_SetOptOut_m3195991385 (Il2CppObject * __this /* static, unused */, bool ___isOptedOut0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CrittercismIOS::SetUsername(System.String)
extern "C"  void CrittercismIOS_SetUsername_m2468186167 (Il2CppObject * __this /* static, unused */, String_t* ___username0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CrittercismIOS::SetValue(System.String,System.String)
extern "C"  void CrittercismIOS_SetValue_m4262689140 (Il2CppObject * __this /* static, unused */, String_t* ___val0, String_t* ___key1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CrittercismIOS::LeaveBreadcrumb(System.String)
extern "C"  void CrittercismIOS_LeaveBreadcrumb_m2908359863 (Il2CppObject * __this /* static, unused */, String_t* ___breadcrumb0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CrittercismIOS::LogNetworkRequest(System.String,System.String,System.Double,System.Int32,System.Int32,System.Net.HttpStatusCode,System.Net.WebExceptionStatus)
extern "C"  void CrittercismIOS_LogNetworkRequest_m976253048 (Il2CppObject * __this /* static, unused */, String_t* ___method0, String_t* ___uriString1, double ___latency2, int32_t ___bytesRead3, int32_t ___bytesSent4, int32_t ___responseCode5, int32_t ___exceptionStatus6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean CrittercismIOS::DidCrashOnLastLoad()
extern "C"  bool CrittercismIOS_DidCrashOnLastLoad_m2119198912 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CrittercismIOS::BeginUserflow(System.String)
extern "C"  void CrittercismIOS_BeginUserflow_m664990195 (Il2CppObject * __this /* static, unused */, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CrittercismIOS::BeginTransaction(System.String)
extern "C"  void CrittercismIOS_BeginTransaction_m442471018 (Il2CppObject * __this /* static, unused */, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CrittercismIOS::BeginUserflow(System.String,System.Int32)
extern "C"  void CrittercismIOS_BeginUserflow_m3598173544 (Il2CppObject * __this /* static, unused */, String_t* ___name0, int32_t ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CrittercismIOS::BeginTransaction(System.String,System.Int32)
extern "C"  void CrittercismIOS_BeginTransaction_m2839052645 (Il2CppObject * __this /* static, unused */, String_t* ___name0, int32_t ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CrittercismIOS::CancelUserflow(System.String)
extern "C"  void CrittercismIOS_CancelUserflow_m1288343724 (Il2CppObject * __this /* static, unused */, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CrittercismIOS::CancelTransaction(System.String)
extern "C"  void CrittercismIOS_CancelTransaction_m133738869 (Il2CppObject * __this /* static, unused */, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CrittercismIOS::EndUserflow(System.String)
extern "C"  void CrittercismIOS_EndUserflow_m2349452291 (Il2CppObject * __this /* static, unused */, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CrittercismIOS::EndTransaction(System.String)
extern "C"  void CrittercismIOS_EndTransaction_m417442358 (Il2CppObject * __this /* static, unused */, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CrittercismIOS::FailUserflow(System.String)
extern "C"  void CrittercismIOS_FailUserflow_m1940023090 (Il2CppObject * __this /* static, unused */, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CrittercismIOS::FailTransaction(System.String)
extern "C"  void CrittercismIOS_FailTransaction_m3617392841 (Il2CppObject * __this /* static, unused */, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CrittercismIOS::SetUserflowValue(System.String,System.Int32)
extern "C"  void CrittercismIOS_SetUserflowValue_m1396115842 (Il2CppObject * __this /* static, unused */, String_t* ___name0, int32_t ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CrittercismIOS::SetTransactionValue(System.String,System.Int32)
extern "C"  void CrittercismIOS_SetTransactionValue_m103377647 (Il2CppObject * __this /* static, unused */, String_t* ___name0, int32_t ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 CrittercismIOS::GetUserflowValue(System.String)
extern "C"  int32_t CrittercismIOS_GetUserflowValue_m4215686567 (Il2CppObject * __this /* static, unused */, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 CrittercismIOS::GetTransactionValue(System.String)
extern "C"  int32_t CrittercismIOS_GetTransactionValue_m4083095042 (Il2CppObject * __this /* static, unused */, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CrittercismIOS::OnUnhandledException(System.Object,System.UnhandledExceptionEventArgs)
extern "C"  void CrittercismIOS_OnUnhandledException_m1598935110 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___sender0, UnhandledExceptionEventArgs_t3067050131 * ___args1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CrittercismIOS::SetLogUnhandledExceptionAsCrash(System.Boolean)
extern "C"  void CrittercismIOS_SetLogUnhandledExceptionAsCrash_m1981031827 (Il2CppObject * __this /* static, unused */, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean CrittercismIOS::GetLogUnhandledExceptionAsCrash()
extern "C"  bool CrittercismIOS_GetLogUnhandledExceptionAsCrash_m1701944100 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CrittercismIOS::OnLogMessageReceived(System.String,System.String,UnityEngine.LogType)
extern "C"  void CrittercismIOS_OnLogMessageReceived_m4263408435 (Il2CppObject * __this /* static, unused */, String_t* ___name0, String_t* ___stack1, int32_t ___type2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CrittercismIOS::.cctor()
extern "C"  void CrittercismIOS__cctor_m3447620098 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
