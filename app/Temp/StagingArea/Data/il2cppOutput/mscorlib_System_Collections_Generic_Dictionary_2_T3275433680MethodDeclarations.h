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

// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Boolean,System.Int32>
struct Transform_1_t3275433680;
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

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Boolean,System.Int32>::.ctor(System.Object,System.IntPtr)
extern "C"  void Transform_1__ctor_m3947186460_gshared (Transform_1_t3275433680 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method);
#define Transform_1__ctor_m3947186460(__this, ___object0, ___method1, method) ((  void (*) (Transform_1_t3275433680 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m3947186460_gshared)(__this, ___object0, ___method1, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Boolean,System.Int32>::Invoke(TKey,TValue)
extern "C"  int32_t Transform_1_Invoke_m1413628932_gshared (Transform_1_t3275433680 * __this, int32_t ___key0, bool ___value1, const MethodInfo* method);
#define Transform_1_Invoke_m1413628932(__this, ___key0, ___value1, method) ((  int32_t (*) (Transform_1_t3275433680 *, int32_t, bool, const MethodInfo*))Transform_1_Invoke_m1413628932_gshared)(__this, ___key0, ___value1, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Boolean,System.Int32>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Transform_1_BeginInvoke_m140441521_gshared (Transform_1_t3275433680 * __this, int32_t ___key0, bool ___value1, AsyncCallback_t163412349 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method);
#define Transform_1_BeginInvoke_m140441521(__this, ___key0, ___value1, ___callback2, ___object3, method) ((  Il2CppObject * (*) (Transform_1_t3275433680 *, int32_t, bool, AsyncCallback_t163412349 *, Il2CppObject *, const MethodInfo*))Transform_1_BeginInvoke_m140441521_gshared)(__this, ___key0, ___value1, ___callback2, ___object3, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Boolean,System.Int32>::EndInvoke(System.IAsyncResult)
extern "C"  int32_t Transform_1_EndInvoke_m1008531598_gshared (Transform_1_t3275433680 * __this, Il2CppObject * ___result0, const MethodInfo* method);
#define Transform_1_EndInvoke_m1008531598(__this, ___result0, method) ((  int32_t (*) (Transform_1_t3275433680 *, Il2CppObject *, const MethodInfo*))Transform_1_EndInvoke_m1008531598_gshared)(__this, ___result0, method)
