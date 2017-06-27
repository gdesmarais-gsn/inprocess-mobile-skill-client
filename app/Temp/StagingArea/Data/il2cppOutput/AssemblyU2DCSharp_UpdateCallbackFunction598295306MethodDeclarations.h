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

// UpdateCallbackFunction
struct UpdateCallbackFunction_t598295306;
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

// System.Void UpdateCallbackFunction::.ctor(System.Object,System.IntPtr)
extern "C"  void UpdateCallbackFunction__ctor_m618769373 (UpdateCallbackFunction_t598295306 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UpdateCallbackFunction::Invoke()
extern "C"  void UpdateCallbackFunction_Invoke_m3117783629 (UpdateCallbackFunction_t598295306 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult UpdateCallbackFunction::BeginInvoke(System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * UpdateCallbackFunction_BeginInvoke_m2639165648 (UpdateCallbackFunction_t598295306 * __this, AsyncCallback_t163412349 * ___callback0, Il2CppObject * ___object1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UpdateCallbackFunction::EndInvoke(System.IAsyncResult)
extern "C"  void UpdateCallbackFunction_EndInvoke_m2675593103 (UpdateCallbackFunction_t598295306 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
