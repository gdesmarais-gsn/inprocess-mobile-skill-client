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

// GSN.Skill.Games.Common.Utils.RequestWrapper/requestCustomizer
struct requestCustomizer_t2087322079;
// System.Object
struct Il2CppObject;
// System.Net.WebRequest
struct WebRequest_t1365124353;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "System_System_Net_WebRequest1365124353.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void GSN.Skill.Games.Common.Utils.RequestWrapper/requestCustomizer::.ctor(System.Object,System.IntPtr)
extern "C"  void requestCustomizer__ctor_m1641152328 (requestCustomizer_t2087322079 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Utils.RequestWrapper/requestCustomizer::Invoke(System.Net.WebRequest)
extern "C"  void requestCustomizer_Invoke_m142554761 (requestCustomizer_t2087322079 * __this, WebRequest_t1365124353 * ___request0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult GSN.Skill.Games.Common.Utils.RequestWrapper/requestCustomizer::BeginInvoke(System.Net.WebRequest,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * requestCustomizer_BeginInvoke_m3048274972 (requestCustomizer_t2087322079 * __this, WebRequest_t1365124353 * ___request0, AsyncCallback_t163412349 * ___callback1, Il2CppObject * ___object2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Utils.RequestWrapper/requestCustomizer::EndInvoke(System.IAsyncResult)
extern "C"  void requestCustomizer_EndInvoke_m1972991682 (requestCustomizer_t2087322079 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
