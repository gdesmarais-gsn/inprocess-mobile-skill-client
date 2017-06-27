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

// GSN.Skill.Games.Common.Utils.PollJob/PollingFunction
struct PollingFunction_t2575115420;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void GSN.Skill.Games.Common.Utils.PollJob/PollingFunction::.ctor(System.Object,System.IntPtr)
extern "C"  void PollingFunction__ctor_m4190976479 (PollingFunction_t2575115420 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GSN.Skill.Games.Common.Utils.PollJob/PollingFunction::Invoke()
extern "C"  bool PollingFunction_Invoke_m3777039403 (PollingFunction_t2575115420 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult GSN.Skill.Games.Common.Utils.PollJob/PollingFunction::BeginInvoke(System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * PollingFunction_BeginInvoke_m974893150 (PollingFunction_t2575115420 * __this, AsyncCallback_t163412349 * ___callback0, Il2CppObject * ___object1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GSN.Skill.Games.Common.Utils.PollJob/PollingFunction::EndInvoke(System.IAsyncResult)
extern "C"  bool PollingFunction_EndInvoke_m2833420601 (PollingFunction_t2575115420 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
