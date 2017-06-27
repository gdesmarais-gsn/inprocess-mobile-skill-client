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

// Delegates/ActionWithReturn`2<System.Single,System.Single>
struct ActionWithReturn_2_t186059454;
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

// System.Void Delegates/ActionWithReturn`2<System.Single,System.Single>::.ctor(System.Object,System.IntPtr)
extern "C"  void ActionWithReturn_2__ctor_m1145657914_gshared (ActionWithReturn_2_t186059454 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method);
#define ActionWithReturn_2__ctor_m1145657914(__this, ___object0, ___method1, method) ((  void (*) (ActionWithReturn_2_t186059454 *, Il2CppObject *, IntPtr_t, const MethodInfo*))ActionWithReturn_2__ctor_m1145657914_gshared)(__this, ___object0, ___method1, method)
// R Delegates/ActionWithReturn`2<System.Single,System.Single>::Invoke(T)
extern "C"  float ActionWithReturn_2_Invoke_m1677596487_gshared (ActionWithReturn_2_t186059454 * __this, float ___obj0, const MethodInfo* method);
#define ActionWithReturn_2_Invoke_m1677596487(__this, ___obj0, method) ((  float (*) (ActionWithReturn_2_t186059454 *, float, const MethodInfo*))ActionWithReturn_2_Invoke_m1677596487_gshared)(__this, ___obj0, method)
// System.IAsyncResult Delegates/ActionWithReturn`2<System.Single,System.Single>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * ActionWithReturn_2_BeginInvoke_m2373033709_gshared (ActionWithReturn_2_t186059454 * __this, float ___obj0, AsyncCallback_t163412349 * ___callback1, Il2CppObject * ___object2, const MethodInfo* method);
#define ActionWithReturn_2_BeginInvoke_m2373033709(__this, ___obj0, ___callback1, ___object2, method) ((  Il2CppObject * (*) (ActionWithReturn_2_t186059454 *, float, AsyncCallback_t163412349 *, Il2CppObject *, const MethodInfo*))ActionWithReturn_2_BeginInvoke_m2373033709_gshared)(__this, ___obj0, ___callback1, ___object2, method)
// R Delegates/ActionWithReturn`2<System.Single,System.Single>::EndInvoke(System.IAsyncResult)
extern "C"  float ActionWithReturn_2_EndInvoke_m3357010313_gshared (ActionWithReturn_2_t186059454 * __this, Il2CppObject * ___result0, const MethodInfo* method);
#define ActionWithReturn_2_EndInvoke_m3357010313(__this, ___result0, method) ((  float (*) (ActionWithReturn_2_t186059454 *, Il2CppObject *, const MethodInfo*))ActionWithReturn_2_EndInvoke_m3357010313_gshared)(__this, ___result0, method)
