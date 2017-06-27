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

// GSN.Skill.Requests.FetchHandler
struct FetchHandler_t3511486974;
// System.Object
struct Il2CppObject;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;
// GSN.Skill.Requests.IWebRequest
struct IWebRequest_t216132554;
// GSN.Skill.Requests.ISessionHandler
struct ISessionHandler_t2877131789;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void GSN.Skill.Requests.FetchHandler::.ctor(System.Object,System.IntPtr)
extern "C"  void FetchHandler__ctor_m4203693112 (FetchHandler_t3511486974 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator GSN.Skill.Requests.FetchHandler::Invoke(GSN.Skill.Requests.IWebRequest,GSN.Skill.Requests.ISessionHandler)
extern "C"  Il2CppObject * FetchHandler_Invoke_m3311675141 (FetchHandler_t3511486974 * __this, Il2CppObject * ___request0, Il2CppObject * ___sessionHandler1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult GSN.Skill.Requests.FetchHandler::BeginInvoke(GSN.Skill.Requests.IWebRequest,GSN.Skill.Requests.ISessionHandler,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * FetchHandler_BeginInvoke_m3427149044 (FetchHandler_t3511486974 * __this, Il2CppObject * ___request0, Il2CppObject * ___sessionHandler1, AsyncCallback_t163412349 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator GSN.Skill.Requests.FetchHandler::EndInvoke(System.IAsyncResult)
extern "C"  Il2CppObject * FetchHandler_EndInvoke_m2256019110 (FetchHandler_t3511486974 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
