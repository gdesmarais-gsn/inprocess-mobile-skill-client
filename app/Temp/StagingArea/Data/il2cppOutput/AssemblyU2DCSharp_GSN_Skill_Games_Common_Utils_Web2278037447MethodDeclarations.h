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

// GSN.Skill.Games.Common.Utils.WebRequestJob/onCompleteFunc
struct onCompleteFunc_t2278037447;
// System.Object
struct Il2CppObject;
// System.Net.WebResponse
struct WebResponse_t1895226051;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "System_System_Net_WebResponse1895226051.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void GSN.Skill.Games.Common.Utils.WebRequestJob/onCompleteFunc::.ctor(System.Object,System.IntPtr)
extern "C"  void onCompleteFunc__ctor_m1036924646 (onCompleteFunc_t2278037447 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Utils.WebRequestJob/onCompleteFunc::Invoke(System.Net.WebResponse)
extern "C"  void onCompleteFunc_Invoke_m2504174367 (onCompleteFunc_t2278037447 * __this, WebResponse_t1895226051 * ___response0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult GSN.Skill.Games.Common.Utils.WebRequestJob/onCompleteFunc::BeginInvoke(System.Net.WebResponse,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * onCompleteFunc_BeginInvoke_m526640020 (onCompleteFunc_t2278037447 * __this, WebResponse_t1895226051 * ___response0, AsyncCallback_t163412349 * ___callback1, Il2CppObject * ___object2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Utils.WebRequestJob/onCompleteFunc::EndInvoke(System.IAsyncResult)
extern "C"  void onCompleteFunc_EndInvoke_m2112671352 (onCompleteFunc_t2278037447 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
