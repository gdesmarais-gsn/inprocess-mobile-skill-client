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

// GSN.Skill.Games.Common.Model.GameModelBase/ReportMetricDelegate
struct ReportMetricDelegate_t3706644810;
// System.Object
struct Il2CppObject;
// System.String
struct String_t;
// Newtonsoft.Json.Linq.JToken
struct JToken_t2552644013;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "mscorlib_System_String2029220233.h"
#include "Json_NET_Newtonsoft_Json_Linq_JToken2552644013.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void GSN.Skill.Games.Common.Model.GameModelBase/ReportMetricDelegate::.ctor(System.Object,System.IntPtr)
extern "C"  void ReportMetricDelegate__ctor_m119200723 (ReportMetricDelegate_t3706644810 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Model.GameModelBase/ReportMetricDelegate::Invoke(System.String,Newtonsoft.Json.Linq.JToken)
extern "C"  void ReportMetricDelegate_Invoke_m3458502347 (ReportMetricDelegate_t3706644810 * __this, String_t* ___key0, JToken_t2552644013 * ___val1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult GSN.Skill.Games.Common.Model.GameModelBase/ReportMetricDelegate::BeginInvoke(System.String,Newtonsoft.Json.Linq.JToken,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * ReportMetricDelegate_BeginInvoke_m3031370880 (ReportMetricDelegate_t3706644810 * __this, String_t* ___key0, JToken_t2552644013 * ___val1, AsyncCallback_t163412349 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Model.GameModelBase/ReportMetricDelegate::EndInvoke(System.IAsyncResult)
extern "C"  void ReportMetricDelegate_EndInvoke_m2315342549 (ReportMetricDelegate_t3706644810 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
