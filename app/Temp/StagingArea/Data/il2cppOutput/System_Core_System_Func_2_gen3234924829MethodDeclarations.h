﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.Func`2<System.Int32,System.Byte>
struct Func_2_t3234924829;
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

// System.Void System.Func`2<System.Int32,System.Byte>::.ctor(System.Object,System.IntPtr)
extern "C"  void Func_2__ctor_m426714418_gshared (Func_2_t3234924829 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method);
#define Func_2__ctor_m426714418(__this, ___object0, ___method1, method) ((  void (*) (Func_2_t3234924829 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Func_2__ctor_m426714418_gshared)(__this, ___object0, ___method1, method)
// TResult System.Func`2<System.Int32,System.Byte>::Invoke(T)
extern "C"  uint8_t Func_2_Invoke_m2899555310_gshared (Func_2_t3234924829 * __this, int32_t ___arg10, const MethodInfo* method);
#define Func_2_Invoke_m2899555310(__this, ___arg10, method) ((  uint8_t (*) (Func_2_t3234924829 *, int32_t, const MethodInfo*))Func_2_Invoke_m2899555310_gshared)(__this, ___arg10, method)
// System.IAsyncResult System.Func`2<System.Int32,System.Byte>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Func_2_BeginInvoke_m4287714309_gshared (Func_2_t3234924829 * __this, int32_t ___arg10, AsyncCallback_t163412349 * ___callback1, Il2CppObject * ___object2, const MethodInfo* method);
#define Func_2_BeginInvoke_m4287714309(__this, ___arg10, ___callback1, ___object2, method) ((  Il2CppObject * (*) (Func_2_t3234924829 *, int32_t, AsyncCallback_t163412349 *, Il2CppObject *, const MethodInfo*))Func_2_BeginInvoke_m4287714309_gshared)(__this, ___arg10, ___callback1, ___object2, method)
// TResult System.Func`2<System.Int32,System.Byte>::EndInvoke(System.IAsyncResult)
extern "C"  uint8_t Func_2_EndInvoke_m3499335016_gshared (Func_2_t3234924829 * __this, Il2CppObject * ___result0, const MethodInfo* method);
#define Func_2_EndInvoke_m3499335016(__this, ___result0, method) ((  uint8_t (*) (Func_2_t3234924829 *, Il2CppObject *, const MethodInfo*))Func_2_EndInvoke_m3499335016_gshared)(__this, ___result0, method)