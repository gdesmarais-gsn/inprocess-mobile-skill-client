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

// System.Converter`2<System.Object,System.Int32>
struct Converter_2_t3783768388;
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

// System.Void System.Converter`2<System.Object,System.Int32>::.ctor(System.Object,System.IntPtr)
extern "C"  void Converter_2__ctor_m1339188400_gshared (Converter_2_t3783768388 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method);
#define Converter_2__ctor_m1339188400(__this, ___object0, ___method1, method) ((  void (*) (Converter_2_t3783768388 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Converter_2__ctor_m1339188400_gshared)(__this, ___object0, ___method1, method)
// TOutput System.Converter`2<System.Object,System.Int32>::Invoke(TInput)
extern "C"  int32_t Converter_2_Invoke_m3334360696_gshared (Converter_2_t3783768388 * __this, Il2CppObject * ___input0, const MethodInfo* method);
#define Converter_2_Invoke_m3334360696(__this, ___input0, method) ((  int32_t (*) (Converter_2_t3783768388 *, Il2CppObject *, const MethodInfo*))Converter_2_Invoke_m3334360696_gshared)(__this, ___input0, method)
// System.IAsyncResult System.Converter`2<System.Object,System.Int32>::BeginInvoke(TInput,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Converter_2_BeginInvoke_m3954723133_gshared (Converter_2_t3783768388 * __this, Il2CppObject * ___input0, AsyncCallback_t163412349 * ___callback1, Il2CppObject * ___object2, const MethodInfo* method);
#define Converter_2_BeginInvoke_m3954723133(__this, ___input0, ___callback1, ___object2, method) ((  Il2CppObject * (*) (Converter_2_t3783768388 *, Il2CppObject *, AsyncCallback_t163412349 *, Il2CppObject *, const MethodInfo*))Converter_2_BeginInvoke_m3954723133_gshared)(__this, ___input0, ___callback1, ___object2, method)
// TOutput System.Converter`2<System.Object,System.Int32>::EndInvoke(System.IAsyncResult)
extern "C"  int32_t Converter_2_EndInvoke_m1387948152_gshared (Converter_2_t3783768388 * __this, Il2CppObject * ___result0, const MethodInfo* method);
#define Converter_2_EndInvoke_m1387948152(__this, ___result0, method) ((  int32_t (*) (Converter_2_t3783768388 *, Il2CppObject *, const MethodInfo*))Converter_2_EndInvoke_m1387948152_gshared)(__this, ___result0, method)
