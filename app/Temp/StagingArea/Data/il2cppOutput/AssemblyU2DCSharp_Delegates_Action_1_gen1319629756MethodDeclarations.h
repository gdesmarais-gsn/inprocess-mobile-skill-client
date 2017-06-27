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

// Delegates/Action`1<System.Object>
struct Action_1_t1319629756;
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

// System.Void Delegates/Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
extern "C"  void Action_1__ctor_m2256791275_gshared (Action_1_t1319629756 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method);
#define Action_1__ctor_m2256791275(__this, ___object0, ___method1, method) ((  void (*) (Action_1_t1319629756 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Action_1__ctor_m2256791275_gshared)(__this, ___object0, ___method1, method)
// System.Void Delegates/Action`1<System.Object>::Invoke(T)
extern "C"  void Action_1_Invoke_m162788943_gshared (Action_1_t1319629756 * __this, Il2CppObject * ___obj0, const MethodInfo* method);
#define Action_1_Invoke_m162788943(__this, ___obj0, method) ((  void (*) (Action_1_t1319629756 *, Il2CppObject *, const MethodInfo*))Action_1_Invoke_m162788943_gshared)(__this, ___obj0, method)
// System.IAsyncResult Delegates/Action`1<System.Object>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Action_1_BeginInvoke_m983950462_gshared (Action_1_t1319629756 * __this, Il2CppObject * ___obj0, AsyncCallback_t163412349 * ___callback1, Il2CppObject * ___object2, const MethodInfo* method);
#define Action_1_BeginInvoke_m983950462(__this, ___obj0, ___callback1, ___object2, method) ((  Il2CppObject * (*) (Action_1_t1319629756 *, Il2CppObject *, AsyncCallback_t163412349 *, Il2CppObject *, const MethodInfo*))Action_1_BeginInvoke_m983950462_gshared)(__this, ___obj0, ___callback1, ___object2, method)
// System.Void Delegates/Action`1<System.Object>::EndInvoke(System.IAsyncResult)
extern "C"  void Action_1_EndInvoke_m2626460661_gshared (Action_1_t1319629756 * __this, Il2CppObject * ___result0, const MethodInfo* method);
#define Action_1_EndInvoke_m2626460661(__this, ___result0, method) ((  void (*) (Action_1_t1319629756 *, Il2CppObject *, const MethodInfo*))Action_1_EndInvoke_m2626460661_gshared)(__this, ___result0, method)
