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

// GSN.Skill.Requests.SingleWebRequestComplete
struct SingleWebRequestComplete_t61608820;
// System.Object
struct Il2CppObject;
// GSN.Skill.Requests.IWebRequest
struct IWebRequest_t216132554;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void GSN.Skill.Requests.SingleWebRequestComplete::.ctor(System.Object,System.IntPtr)
extern "C"  void SingleWebRequestComplete__ctor_m1493425564 (SingleWebRequestComplete_t61608820 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Requests.SingleWebRequestComplete::Invoke(GSN.Skill.Requests.IWebRequest)
extern "C"  void SingleWebRequestComplete_Invoke_m1829290581 (SingleWebRequestComplete_t61608820 * __this, Il2CppObject * ___request0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult GSN.Skill.Requests.SingleWebRequestComplete::BeginInvoke(GSN.Skill.Requests.IWebRequest,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * SingleWebRequestComplete_BeginInvoke_m1612563062 (SingleWebRequestComplete_t61608820 * __this, Il2CppObject * ___request0, AsyncCallback_t163412349 * ___callback1, Il2CppObject * ___object2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Requests.SingleWebRequestComplete::EndInvoke(System.IAsyncResult)
extern "C"  void SingleWebRequestComplete_EndInvoke_m3793519178 (SingleWebRequestComplete_t61608820 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
