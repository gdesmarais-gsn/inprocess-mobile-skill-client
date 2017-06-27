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

// Delegates/Action`5<System.Object,System.Object,System.Object,System.Object,System.Object>
struct Action_5_t2829984600;
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

// System.Void Delegates/Action`5<System.Object,System.Object,System.Object,System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C"  void Action_5__ctor_m2759347327_gshared (Action_5_t2829984600 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method);
#define Action_5__ctor_m2759347327(__this, ___object0, ___method1, method) ((  void (*) (Action_5_t2829984600 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Action_5__ctor_m2759347327_gshared)(__this, ___object0, ___method1, method)
// System.Void Delegates/Action`5<System.Object,System.Object,System.Object,System.Object,System.Object>::Invoke(T,T2,T3,T4,T5)
extern "C"  void Action_5_Invoke_m3000154595_gshared (Action_5_t2829984600 * __this, Il2CppObject * ___obj10, Il2CppObject * ___obj21, Il2CppObject * ___obj32, Il2CppObject * ___obj43, Il2CppObject * ___obj54, const MethodInfo* method);
#define Action_5_Invoke_m3000154595(__this, ___obj10, ___obj21, ___obj32, ___obj43, ___obj54, method) ((  void (*) (Action_5_t2829984600 *, Il2CppObject *, Il2CppObject *, Il2CppObject *, Il2CppObject *, Il2CppObject *, const MethodInfo*))Action_5_Invoke_m3000154595_gshared)(__this, ___obj10, ___obj21, ___obj32, ___obj43, ___obj54, method)
// System.IAsyncResult Delegates/Action`5<System.Object,System.Object,System.Object,System.Object,System.Object>::BeginInvoke(T,T2,T3,T4,T5,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Action_5_BeginInvoke_m450117806_gshared (Action_5_t2829984600 * __this, Il2CppObject * ___obj10, Il2CppObject * ___obj21, Il2CppObject * ___obj32, Il2CppObject * ___obj43, Il2CppObject * ___obj54, AsyncCallback_t163412349 * ___callback5, Il2CppObject * ___object6, const MethodInfo* method);
#define Action_5_BeginInvoke_m450117806(__this, ___obj10, ___obj21, ___obj32, ___obj43, ___obj54, ___callback5, ___object6, method) ((  Il2CppObject * (*) (Action_5_t2829984600 *, Il2CppObject *, Il2CppObject *, Il2CppObject *, Il2CppObject *, Il2CppObject *, AsyncCallback_t163412349 *, Il2CppObject *, const MethodInfo*))Action_5_BeginInvoke_m450117806_gshared)(__this, ___obj10, ___obj21, ___obj32, ___obj43, ___obj54, ___callback5, ___object6, method)
// System.Void Delegates/Action`5<System.Object,System.Object,System.Object,System.Object,System.Object>::EndInvoke(System.IAsyncResult)
extern "C"  void Action_5_EndInvoke_m983854945_gshared (Action_5_t2829984600 * __this, Il2CppObject * ___result0, const MethodInfo* method);
#define Action_5_EndInvoke_m983854945(__this, ___result0, method) ((  void (*) (Action_5_t2829984600 *, Il2CppObject *, const MethodInfo*))Action_5_EndInvoke_m983854945_gshared)(__this, ___result0, method)
