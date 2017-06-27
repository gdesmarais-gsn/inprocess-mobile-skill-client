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

// Delegates/Action`6<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>
struct Action_6_t2402436602;
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

// System.Void Delegates/Action`6<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C"  void Action_6__ctor_m4023168188_gshared (Action_6_t2402436602 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method);
#define Action_6__ctor_m4023168188(__this, ___object0, ___method1, method) ((  void (*) (Action_6_t2402436602 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Action_6__ctor_m4023168188_gshared)(__this, ___object0, ___method1, method)
// System.Void Delegates/Action`6<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::Invoke(T,T2,T3,T4,T5,T6)
extern "C"  void Action_6_Invoke_m3834197196_gshared (Action_6_t2402436602 * __this, Il2CppObject * ___obj10, Il2CppObject * ___obj21, Il2CppObject * ___obj32, Il2CppObject * ___obj43, Il2CppObject * ___obj54, Il2CppObject * ___obj65, const MethodInfo* method);
#define Action_6_Invoke_m3834197196(__this, ___obj10, ___obj21, ___obj32, ___obj43, ___obj54, ___obj65, method) ((  void (*) (Action_6_t2402436602 *, Il2CppObject *, Il2CppObject *, Il2CppObject *, Il2CppObject *, Il2CppObject *, Il2CppObject *, const MethodInfo*))Action_6_Invoke_m3834197196_gshared)(__this, ___obj10, ___obj21, ___obj32, ___obj43, ___obj54, ___obj65, method)
// System.IAsyncResult Delegates/Action`6<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::BeginInvoke(T,T2,T3,T4,T5,T6,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Action_6_BeginInvoke_m1144215175_gshared (Action_6_t2402436602 * __this, Il2CppObject * ___obj10, Il2CppObject * ___obj21, Il2CppObject * ___obj32, Il2CppObject * ___obj43, Il2CppObject * ___obj54, Il2CppObject * ___obj65, AsyncCallback_t163412349 * ___callback6, Il2CppObject * ___object7, const MethodInfo* method);
#define Action_6_BeginInvoke_m1144215175(__this, ___obj10, ___obj21, ___obj32, ___obj43, ___obj54, ___obj65, ___callback6, ___object7, method) ((  Il2CppObject * (*) (Action_6_t2402436602 *, Il2CppObject *, Il2CppObject *, Il2CppObject *, Il2CppObject *, Il2CppObject *, Il2CppObject *, AsyncCallback_t163412349 *, Il2CppObject *, const MethodInfo*))Action_6_BeginInvoke_m1144215175_gshared)(__this, ___obj10, ___obj21, ___obj32, ___obj43, ___obj54, ___obj65, ___callback6, ___object7, method)
// System.Void Delegates/Action`6<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::EndInvoke(System.IAsyncResult)
extern "C"  void Action_6_EndInvoke_m622738810_gshared (Action_6_t2402436602 * __this, Il2CppObject * ___result0, const MethodInfo* method);
#define Action_6_EndInvoke_m622738810(__this, ___result0, method) ((  void (*) (Action_6_t2402436602 *, Il2CppObject *, const MethodInfo*))Action_6_EndInvoke_m622738810_gshared)(__this, ___result0, method)
