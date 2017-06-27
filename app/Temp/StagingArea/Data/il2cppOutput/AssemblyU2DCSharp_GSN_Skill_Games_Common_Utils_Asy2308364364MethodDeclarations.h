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

// GSN.Skill.Games.Common.Utils.AsyncFunctionCaller/AsyncFunction
struct AsyncFunction_t2308364364;
// System.Object
struct Il2CppObject;
// System.Action
struct Action_t3226471752;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "System_Core_System_Action3226471752.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void GSN.Skill.Games.Common.Utils.AsyncFunctionCaller/AsyncFunction::.ctor(System.Object,System.IntPtr)
extern "C"  void AsyncFunction__ctor_m3630983583 (AsyncFunction_t2308364364 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Utils.AsyncFunctionCaller/AsyncFunction::Invoke(System.Action)
extern "C"  void AsyncFunction_Invoke_m154318526 (AsyncFunction_t2308364364 * __this, Action_t3226471752 * ___doneAction0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult GSN.Skill.Games.Common.Utils.AsyncFunctionCaller/AsyncFunction::BeginInvoke(System.Action,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * AsyncFunction_BeginInvoke_m787555913 (AsyncFunction_t2308364364 * __this, Action_t3226471752 * ___doneAction0, AsyncCallback_t163412349 * ___callback1, Il2CppObject * ___object2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Utils.AsyncFunctionCaller/AsyncFunction::EndInvoke(System.IAsyncResult)
extern "C"  void AsyncFunction_EndInvoke_m1983385293 (AsyncFunction_t2308364364 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
