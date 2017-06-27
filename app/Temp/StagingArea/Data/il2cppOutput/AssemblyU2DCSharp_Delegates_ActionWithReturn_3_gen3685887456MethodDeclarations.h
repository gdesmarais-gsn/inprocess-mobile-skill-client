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

// Delegates/ActionWithReturn`3<System.Object,System.Object,System.Object>
struct ActionWithReturn_3_t3685887456;
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

// System.Void Delegates/ActionWithReturn`3<System.Object,System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C"  void ActionWithReturn_3__ctor_m4266399165_gshared (ActionWithReturn_3_t3685887456 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method);
#define ActionWithReturn_3__ctor_m4266399165(__this, ___object0, ___method1, method) ((  void (*) (ActionWithReturn_3_t3685887456 *, Il2CppObject *, IntPtr_t, const MethodInfo*))ActionWithReturn_3__ctor_m4266399165_gshared)(__this, ___object0, ___method1, method)
// R Delegates/ActionWithReturn`3<System.Object,System.Object,System.Object>::Invoke(T,T2)
extern "C"  Il2CppObject * ActionWithReturn_3_Invoke_m2755270272_gshared (ActionWithReturn_3_t3685887456 * __this, Il2CppObject * ___obj10, Il2CppObject * ___obj21, const MethodInfo* method);
#define ActionWithReturn_3_Invoke_m2755270272(__this, ___obj10, ___obj21, method) ((  Il2CppObject * (*) (ActionWithReturn_3_t3685887456 *, Il2CppObject *, Il2CppObject *, const MethodInfo*))ActionWithReturn_3_Invoke_m2755270272_gshared)(__this, ___obj10, ___obj21, method)
// System.IAsyncResult Delegates/ActionWithReturn`3<System.Object,System.Object,System.Object>::BeginInvoke(T,T2,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * ActionWithReturn_3_BeginInvoke_m3790011658_gshared (ActionWithReturn_3_t3685887456 * __this, Il2CppObject * ___obj10, Il2CppObject * ___obj21, AsyncCallback_t163412349 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method);
#define ActionWithReturn_3_BeginInvoke_m3790011658(__this, ___obj10, ___obj21, ___callback2, ___object3, method) ((  Il2CppObject * (*) (ActionWithReturn_3_t3685887456 *, Il2CppObject *, Il2CppObject *, AsyncCallback_t163412349 *, Il2CppObject *, const MethodInfo*))ActionWithReturn_3_BeginInvoke_m3790011658_gshared)(__this, ___obj10, ___obj21, ___callback2, ___object3, method)
// R Delegates/ActionWithReturn`3<System.Object,System.Object,System.Object>::EndInvoke(System.IAsyncResult)
extern "C"  Il2CppObject * ActionWithReturn_3_EndInvoke_m598673062_gshared (ActionWithReturn_3_t3685887456 * __this, Il2CppObject * ___result0, const MethodInfo* method);
#define ActionWithReturn_3_EndInvoke_m598673062(__this, ___result0, method) ((  Il2CppObject * (*) (ActionWithReturn_3_t3685887456 *, Il2CppObject *, const MethodInfo*))ActionWithReturn_3_EndInvoke_m598673062_gshared)(__this, ___result0, method)
