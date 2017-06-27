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

// GSN.Skill.Requests.SingleWebRequestFail
struct SingleWebRequestFail_t691327747;
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

// System.Void GSN.Skill.Requests.SingleWebRequestFail::.ctor(System.Object,System.IntPtr)
extern "C"  void SingleWebRequestFail__ctor_m2620635569 (SingleWebRequestFail_t691327747 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Requests.SingleWebRequestFail::Invoke(GSN.Skill.Requests.IWebRequest)
extern "C"  void SingleWebRequestFail_Invoke_m2242011312 (SingleWebRequestFail_t691327747 * __this, Il2CppObject * ___request0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult GSN.Skill.Requests.SingleWebRequestFail::BeginInvoke(GSN.Skill.Requests.IWebRequest,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * SingleWebRequestFail_BeginInvoke_m3668966737 (SingleWebRequestFail_t691327747 * __this, Il2CppObject * ___request0, AsyncCallback_t163412349 * ___callback1, Il2CppObject * ___object2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Requests.SingleWebRequestFail::EndInvoke(System.IAsyncResult)
extern "C"  void SingleWebRequestFail_EndInvoke_m1177544671 (SingleWebRequestFail_t691327747 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
