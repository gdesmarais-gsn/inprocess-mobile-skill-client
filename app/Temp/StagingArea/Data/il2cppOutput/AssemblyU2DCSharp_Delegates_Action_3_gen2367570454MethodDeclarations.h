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

// Delegates/Action`3<System.Object,System.Object,System.Object>
struct Action_3_t2367570454;
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

// System.Void Delegates/Action`3<System.Object,System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C"  void Action_3__ctor_m178943285_gshared (Action_3_t2367570454 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method);
#define Action_3__ctor_m178943285(__this, ___object0, ___method1, method) ((  void (*) (Action_3_t2367570454 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Action_3__ctor_m178943285_gshared)(__this, ___object0, ___method1, method)
// System.Void Delegates/Action`3<System.Object,System.Object,System.Object>::Invoke(T,T2,T3)
extern "C"  void Action_3_Invoke_m680480672_gshared (Action_3_t2367570454 * __this, Il2CppObject * ___obj10, Il2CppObject * ___obj21, Il2CppObject * ___obj32, const MethodInfo* method);
#define Action_3_Invoke_m680480672(__this, ___obj10, ___obj21, ___obj32, method) ((  void (*) (Action_3_t2367570454 *, Il2CppObject *, Il2CppObject *, Il2CppObject *, const MethodInfo*))Action_3_Invoke_m680480672_gshared)(__this, ___obj10, ___obj21, ___obj32, method)
// System.IAsyncResult Delegates/Action`3<System.Object,System.Object,System.Object>::BeginInvoke(T,T2,T3,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Action_3_BeginInvoke_m1141535003_gshared (Action_3_t2367570454 * __this, Il2CppObject * ___obj10, Il2CppObject * ___obj21, Il2CppObject * ___obj32, AsyncCallback_t163412349 * ___callback3, Il2CppObject * ___object4, const MethodInfo* method);
#define Action_3_BeginInvoke_m1141535003(__this, ___obj10, ___obj21, ___obj32, ___callback3, ___object4, method) ((  Il2CppObject * (*) (Action_3_t2367570454 *, Il2CppObject *, Il2CppObject *, Il2CppObject *, AsyncCallback_t163412349 *, Il2CppObject *, const MethodInfo*))Action_3_BeginInvoke_m1141535003_gshared)(__this, ___obj10, ___obj21, ___obj32, ___callback3, ___object4, method)
// System.Void Delegates/Action`3<System.Object,System.Object,System.Object>::EndInvoke(System.IAsyncResult)
extern "C"  void Action_3_EndInvoke_m934357419_gshared (Action_3_t2367570454 * __this, Il2CppObject * ___result0, const MethodInfo* method);
#define Action_3_EndInvoke_m934357419(__this, ___result0, method) ((  void (*) (Action_3_t2367570454 *, Il2CppObject *, const MethodInfo*))Action_3_EndInvoke_m934357419_gshared)(__this, ___result0, method)
