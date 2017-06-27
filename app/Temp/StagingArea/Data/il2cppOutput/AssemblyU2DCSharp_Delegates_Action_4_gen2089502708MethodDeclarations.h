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

// Delegates/Action`4<System.Object,System.Object,System.Object,System.Object>
struct Action_4_t2089502708;
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

// System.Void Delegates/Action`4<System.Object,System.Object,System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C"  void Action_4__ctor_m334229746_gshared (Action_4_t2089502708 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method);
#define Action_4__ctor_m334229746(__this, ___object0, ___method1, method) ((  void (*) (Action_4_t2089502708 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Action_4__ctor_m334229746_gshared)(__this, ___object0, ___method1, method)
// System.Void Delegates/Action`4<System.Object,System.Object,System.Object,System.Object>::Invoke(T,T2,T3,T4)
extern "C"  void Action_4_Invoke_m2699519357_gshared (Action_4_t2089502708 * __this, Il2CppObject * ___obj10, Il2CppObject * ___obj21, Il2CppObject * ___obj32, Il2CppObject * ___obj43, const MethodInfo* method);
#define Action_4_Invoke_m2699519357(__this, ___obj10, ___obj21, ___obj32, ___obj43, method) ((  void (*) (Action_4_t2089502708 *, Il2CppObject *, Il2CppObject *, Il2CppObject *, Il2CppObject *, const MethodInfo*))Action_4_Invoke_m2699519357_gshared)(__this, ___obj10, ___obj21, ___obj32, ___obj43, method)
// System.IAsyncResult Delegates/Action`4<System.Object,System.Object,System.Object,System.Object>::BeginInvoke(T,T2,T3,T4,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Action_4_BeginInvoke_m3448473394_gshared (Action_4_t2089502708 * __this, Il2CppObject * ___obj10, Il2CppObject * ___obj21, Il2CppObject * ___obj32, Il2CppObject * ___obj43, AsyncCallback_t163412349 * ___callback4, Il2CppObject * ___object5, const MethodInfo* method);
#define Action_4_BeginInvoke_m3448473394(__this, ___obj10, ___obj21, ___obj32, ___obj43, ___callback4, ___object5, method) ((  Il2CppObject * (*) (Action_4_t2089502708 *, Il2CppObject *, Il2CppObject *, Il2CppObject *, Il2CppObject *, AsyncCallback_t163412349 *, Il2CppObject *, const MethodInfo*))Action_4_BeginInvoke_m3448473394_gshared)(__this, ___obj10, ___obj21, ___obj32, ___obj43, ___callback4, ___object5, method)
// System.Void Delegates/Action`4<System.Object,System.Object,System.Object,System.Object>::EndInvoke(System.IAsyncResult)
extern "C"  void Action_4_EndInvoke_m3949640516_gshared (Action_4_t2089502708 * __this, Il2CppObject * ___result0, const MethodInfo* method);
#define Action_4_EndInvoke_m3949640516(__this, ___result0, method) ((  void (*) (Action_4_t2089502708 *, Il2CppObject *, const MethodInfo*))Action_4_EndInvoke_m3949640516_gshared)(__this, ___result0, method)
