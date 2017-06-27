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

// System.Converter`2<System.Int32,System.Object>
struct Converter_2_t3817105742;
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

// System.Void System.Converter`2<System.Int32,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C"  void Converter_2__ctor_m3060339876_gshared (Converter_2_t3817105742 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method);
#define Converter_2__ctor_m3060339876(__this, ___object0, ___method1, method) ((  void (*) (Converter_2_t3817105742 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Converter_2__ctor_m3060339876_gshared)(__this, ___object0, ___method1, method)
// TOutput System.Converter`2<System.Int32,System.Object>::Invoke(TInput)
extern "C"  Il2CppObject * Converter_2_Invoke_m1165799584_gshared (Converter_2_t3817105742 * __this, int32_t ___input0, const MethodInfo* method);
#define Converter_2_Invoke_m1165799584(__this, ___input0, method) ((  Il2CppObject * (*) (Converter_2_t3817105742 *, int32_t, const MethodInfo*))Converter_2_Invoke_m1165799584_gshared)(__this, ___input0, method)
// System.IAsyncResult System.Converter`2<System.Int32,System.Object>::BeginInvoke(TInput,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Converter_2_BeginInvoke_m598095881_gshared (Converter_2_t3817105742 * __this, int32_t ___input0, AsyncCallback_t163412349 * ___callback1, Il2CppObject * ___object2, const MethodInfo* method);
#define Converter_2_BeginInvoke_m598095881(__this, ___input0, ___callback1, ___object2, method) ((  Il2CppObject * (*) (Converter_2_t3817105742 *, int32_t, AsyncCallback_t163412349 *, Il2CppObject *, const MethodInfo*))Converter_2_BeginInvoke_m598095881_gshared)(__this, ___input0, ___callback1, ___object2, method)
// TOutput System.Converter`2<System.Int32,System.Object>::EndInvoke(System.IAsyncResult)
extern "C"  Il2CppObject * Converter_2_EndInvoke_m577842016_gshared (Converter_2_t3817105742 * __this, Il2CppObject * ___result0, const MethodInfo* method);
#define Converter_2_EndInvoke_m577842016(__this, ___result0, method) ((  Il2CppObject * (*) (Converter_2_t3817105742 *, Il2CppObject *, const MethodInfo*))Converter_2_EndInvoke_m577842016_gshared)(__this, ___result0, method)
