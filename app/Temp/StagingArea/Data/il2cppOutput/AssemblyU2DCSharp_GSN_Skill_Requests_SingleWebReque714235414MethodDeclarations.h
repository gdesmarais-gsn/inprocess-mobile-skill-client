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

// GSN.Skill.Requests.SingleWebRequestBegin
struct SingleWebRequestBegin_t714235414;
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

// System.Void GSN.Skill.Requests.SingleWebRequestBegin::.ctor(System.Object,System.IntPtr)
extern "C"  void SingleWebRequestBegin__ctor_m3445468410 (SingleWebRequestBegin_t714235414 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Requests.SingleWebRequestBegin::Invoke(GSN.Skill.Requests.IWebRequest)
extern "C"  void SingleWebRequestBegin_Invoke_m2616839867 (SingleWebRequestBegin_t714235414 * __this, Il2CppObject * ___request0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult GSN.Skill.Requests.SingleWebRequestBegin::BeginInvoke(GSN.Skill.Requests.IWebRequest,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * SingleWebRequestBegin_BeginInvoke_m4002353356 (SingleWebRequestBegin_t714235414 * __this, Il2CppObject * ___request0, AsyncCallback_t163412349 * ___callback1, Il2CppObject * ___object2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Requests.SingleWebRequestBegin::EndInvoke(System.IAsyncResult)
extern "C"  void SingleWebRequestBegin_EndInvoke_m1083596504 (SingleWebRequestBegin_t714235414 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
