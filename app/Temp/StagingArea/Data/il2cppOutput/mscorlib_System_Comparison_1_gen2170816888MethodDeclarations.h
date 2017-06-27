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

// System.Comparison`1<System.Int64>
struct Comparison_1_t2170816888;
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

// System.Void System.Comparison`1<System.Int64>::.ctor(System.Object,System.IntPtr)
extern "C"  void Comparison_1__ctor_m1592968383_gshared (Comparison_1_t2170816888 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method);
#define Comparison_1__ctor_m1592968383(__this, ___object0, ___method1, method) ((  void (*) (Comparison_1_t2170816888 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Comparison_1__ctor_m1592968383_gshared)(__this, ___object0, ___method1, method)
// System.Int32 System.Comparison`1<System.Int64>::Invoke(T,T)
extern "C"  int32_t Comparison_1_Invoke_m3731951657_gshared (Comparison_1_t2170816888 * __this, int64_t ___x0, int64_t ___y1, const MethodInfo* method);
#define Comparison_1_Invoke_m3731951657(__this, ___x0, ___y1, method) ((  int32_t (*) (Comparison_1_t2170816888 *, int64_t, int64_t, const MethodInfo*))Comparison_1_Invoke_m3731951657_gshared)(__this, ___x0, ___y1, method)
// System.IAsyncResult System.Comparison`1<System.Int64>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Comparison_1_BeginInvoke_m1053928624_gshared (Comparison_1_t2170816888 * __this, int64_t ___x0, int64_t ___y1, AsyncCallback_t163412349 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method);
#define Comparison_1_BeginInvoke_m1053928624(__this, ___x0, ___y1, ___callback2, ___object3, method) ((  Il2CppObject * (*) (Comparison_1_t2170816888 *, int64_t, int64_t, AsyncCallback_t163412349 *, Il2CppObject *, const MethodInfo*))Comparison_1_BeginInvoke_m1053928624_gshared)(__this, ___x0, ___y1, ___callback2, ___object3, method)
// System.Int32 System.Comparison`1<System.Int64>::EndInvoke(System.IAsyncResult)
extern "C"  int32_t Comparison_1_EndInvoke_m443154931_gshared (Comparison_1_t2170816888 * __this, Il2CppObject * ___result0, const MethodInfo* method);
#define Comparison_1_EndInvoke_m443154931(__this, ___result0, method) ((  int32_t (*) (Comparison_1_t2170816888 *, Il2CppObject *, const MethodInfo*))Comparison_1_EndInvoke_m443154931_gshared)(__this, ___result0, method)
