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

// Delegates/Action`2<System.Object,System.Object>
struct Action_2_t2507879862;
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

// System.Void Delegates/Action`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C"  void Action_2__ctor_m4144966696_gshared (Action_2_t2507879862 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method);
#define Action_2__ctor_m4144966696(__this, ___object0, ___method1, method) ((  void (*) (Action_2_t2507879862 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Action_2__ctor_m4144966696_gshared)(__this, ___object0, ___method1, method)
// System.Void Delegates/Action`2<System.Object,System.Object>::Invoke(T,T2)
extern "C"  void Action_2_Invoke_m1775954952_gshared (Action_2_t2507879862 * __this, Il2CppObject * ___obj10, Il2CppObject * ___obj21, const MethodInfo* method);
#define Action_2_Invoke_m1775954952(__this, ___obj10, ___obj21, method) ((  void (*) (Action_2_t2507879862 *, Il2CppObject *, Il2CppObject *, const MethodInfo*))Action_2_Invoke_m1775954952_gshared)(__this, ___obj10, ___obj21, method)
// System.IAsyncResult Delegates/Action`2<System.Object,System.Object>::BeginInvoke(T,T2,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Action_2_BeginInvoke_m668324575_gshared (Action_2_t2507879862 * __this, Il2CppObject * ___obj10, Il2CppObject * ___obj21, AsyncCallback_t163412349 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method);
#define Action_2_BeginInvoke_m668324575(__this, ___obj10, ___obj21, ___callback2, ___object3, method) ((  Il2CppObject * (*) (Action_2_t2507879862 *, Il2CppObject *, Il2CppObject *, AsyncCallback_t163412349 *, Il2CppObject *, const MethodInfo*))Action_2_BeginInvoke_m668324575_gshared)(__this, ___obj10, ___obj21, ___callback2, ___object3, method)
// System.Void Delegates/Action`2<System.Object,System.Object>::EndInvoke(System.IAsyncResult)
extern "C"  void Action_2_EndInvoke_m3074428686_gshared (Action_2_t2507879862 * __this, Il2CppObject * ___result0, const MethodInfo* method);
#define Action_2_EndInvoke_m3074428686(__this, ___result0, method) ((  void (*) (Action_2_t2507879862 *, Il2CppObject *, const MethodInfo*))Action_2_EndInvoke_m3074428686_gshared)(__this, ___result0, method)
