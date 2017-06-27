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

// GSN.Skill.Requests.WebRequestsComplete
struct WebRequestsComplete_t1110411373;
// System.Object
struct Il2CppObject;
// GSN.Skill.Requests.WebRequests
struct WebRequests_t3348797540;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "AssemblyU2DCSharp_GSN_Skill_Requests_WebRequests3348797540.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void GSN.Skill.Requests.WebRequestsComplete::.ctor(System.Object,System.IntPtr)
extern "C"  void WebRequestsComplete__ctor_m1153059419 (WebRequestsComplete_t1110411373 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Requests.WebRequestsComplete::Invoke(GSN.Skill.Requests.WebRequests)
extern "C"  void WebRequestsComplete_Invoke_m1194686874 (WebRequestsComplete_t1110411373 * __this, WebRequests_t3348797540 * ___requests0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult GSN.Skill.Requests.WebRequestsComplete::BeginInvoke(GSN.Skill.Requests.WebRequests,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * WebRequestsComplete_BeginInvoke_m4046314005 (WebRequestsComplete_t1110411373 * __this, WebRequests_t3348797540 * ___requests0, AsyncCallback_t163412349 * ___callback1, Il2CppObject * ___object2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Requests.WebRequestsComplete::EndInvoke(System.IAsyncResult)
extern "C"  void WebRequestsComplete_EndInvoke_m2419494497 (WebRequestsComplete_t1110411373 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
