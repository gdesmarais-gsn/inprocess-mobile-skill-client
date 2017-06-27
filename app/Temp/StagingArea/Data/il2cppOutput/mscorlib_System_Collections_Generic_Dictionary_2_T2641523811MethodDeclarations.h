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

// System.Collections.Generic.Dictionary`2/Transform`1<System.RuntimeTypeHandle,System.Object,System.RuntimeTypeHandle>
struct Transform_1_t2641523811;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "mscorlib_System_RuntimeTypeHandle2330101084.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.RuntimeTypeHandle,System.Object,System.RuntimeTypeHandle>::.ctor(System.Object,System.IntPtr)
extern "C"  void Transform_1__ctor_m3153722931_gshared (Transform_1_t2641523811 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method);
#define Transform_1__ctor_m3153722931(__this, ___object0, ___method1, method) ((  void (*) (Transform_1_t2641523811 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m3153722931_gshared)(__this, ___object0, ___method1, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.RuntimeTypeHandle,System.Object,System.RuntimeTypeHandle>::Invoke(TKey,TValue)
extern "C"  RuntimeTypeHandle_t2330101084  Transform_1_Invoke_m1360134375_gshared (Transform_1_t2641523811 * __this, RuntimeTypeHandle_t2330101084  ___key0, Il2CppObject * ___value1, const MethodInfo* method);
#define Transform_1_Invoke_m1360134375(__this, ___key0, ___value1, method) ((  RuntimeTypeHandle_t2330101084  (*) (Transform_1_t2641523811 *, RuntimeTypeHandle_t2330101084 , Il2CppObject *, const MethodInfo*))Transform_1_Invoke_m1360134375_gshared)(__this, ___key0, ___value1, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.RuntimeTypeHandle,System.Object,System.RuntimeTypeHandle>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Transform_1_BeginInvoke_m3917975344_gshared (Transform_1_t2641523811 * __this, RuntimeTypeHandle_t2330101084  ___key0, Il2CppObject * ___value1, AsyncCallback_t163412349 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method);
#define Transform_1_BeginInvoke_m3917975344(__this, ___key0, ___value1, ___callback2, ___object3, method) ((  Il2CppObject * (*) (Transform_1_t2641523811 *, RuntimeTypeHandle_t2330101084 , Il2CppObject *, AsyncCallback_t163412349 *, Il2CppObject *, const MethodInfo*))Transform_1_BeginInvoke_m3917975344_gshared)(__this, ___key0, ___value1, ___callback2, ___object3, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.RuntimeTypeHandle,System.Object,System.RuntimeTypeHandle>::EndInvoke(System.IAsyncResult)
extern "C"  RuntimeTypeHandle_t2330101084  Transform_1_EndInvoke_m3732410921_gshared (Transform_1_t2641523811 * __this, Il2CppObject * ___result0, const MethodInfo* method);
#define Transform_1_EndInvoke_m3732410921(__this, ___result0, method) ((  RuntimeTypeHandle_t2330101084  (*) (Transform_1_t2641523811 *, Il2CppObject *, const MethodInfo*))Transform_1_EndInvoke_m3732410921_gshared)(__this, ___result0, method)
