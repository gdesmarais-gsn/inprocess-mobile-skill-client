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

// TMPro.TMP_ObjectPool`1<System.Object>
struct TMP_ObjectPool_1_t2377438538;
// UnityEngine.Events.UnityAction`1<System.Object>
struct UnityAction_1_t4056035046;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"

// System.Void TMPro.TMP_ObjectPool`1<System.Object>::.ctor(UnityEngine.Events.UnityAction`1<T>,UnityEngine.Events.UnityAction`1<T>)
extern "C"  void TMP_ObjectPool_1__ctor_m1543957183_gshared (TMP_ObjectPool_1_t2377438538 * __this, UnityAction_1_t4056035046 * ___actionOnGet0, UnityAction_1_t4056035046 * ___actionOnRelease1, const MethodInfo* method);
#define TMP_ObjectPool_1__ctor_m1543957183(__this, ___actionOnGet0, ___actionOnRelease1, method) ((  void (*) (TMP_ObjectPool_1_t2377438538 *, UnityAction_1_t4056035046 *, UnityAction_1_t4056035046 *, const MethodInfo*))TMP_ObjectPool_1__ctor_m1543957183_gshared)(__this, ___actionOnGet0, ___actionOnRelease1, method)
// System.Int32 TMPro.TMP_ObjectPool`1<System.Object>::get_countAll()
extern "C"  int32_t TMP_ObjectPool_1_get_countAll_m3520306838_gshared (TMP_ObjectPool_1_t2377438538 * __this, const MethodInfo* method);
#define TMP_ObjectPool_1_get_countAll_m3520306838(__this, method) ((  int32_t (*) (TMP_ObjectPool_1_t2377438538 *, const MethodInfo*))TMP_ObjectPool_1_get_countAll_m3520306838_gshared)(__this, method)
// System.Void TMPro.TMP_ObjectPool`1<System.Object>::set_countAll(System.Int32)
extern "C"  void TMP_ObjectPool_1_set_countAll_m1372258593_gshared (TMP_ObjectPool_1_t2377438538 * __this, int32_t ___value0, const MethodInfo* method);
#define TMP_ObjectPool_1_set_countAll_m1372258593(__this, ___value0, method) ((  void (*) (TMP_ObjectPool_1_t2377438538 *, int32_t, const MethodInfo*))TMP_ObjectPool_1_set_countAll_m1372258593_gshared)(__this, ___value0, method)
// System.Int32 TMPro.TMP_ObjectPool`1<System.Object>::get_countActive()
extern "C"  int32_t TMP_ObjectPool_1_get_countActive_m3743546199_gshared (TMP_ObjectPool_1_t2377438538 * __this, const MethodInfo* method);
#define TMP_ObjectPool_1_get_countActive_m3743546199(__this, method) ((  int32_t (*) (TMP_ObjectPool_1_t2377438538 *, const MethodInfo*))TMP_ObjectPool_1_get_countActive_m3743546199_gshared)(__this, method)
// System.Int32 TMPro.TMP_ObjectPool`1<System.Object>::get_countInactive()
extern "C"  int32_t TMP_ObjectPool_1_get_countInactive_m3707402904_gshared (TMP_ObjectPool_1_t2377438538 * __this, const MethodInfo* method);
#define TMP_ObjectPool_1_get_countInactive_m3707402904(__this, method) ((  int32_t (*) (TMP_ObjectPool_1_t2377438538 *, const MethodInfo*))TMP_ObjectPool_1_get_countInactive_m3707402904_gshared)(__this, method)
// T TMPro.TMP_ObjectPool`1<System.Object>::Get()
extern "C"  Il2CppObject * TMP_ObjectPool_1_Get_m3204750670_gshared (TMP_ObjectPool_1_t2377438538 * __this, const MethodInfo* method);
#define TMP_ObjectPool_1_Get_m3204750670(__this, method) ((  Il2CppObject * (*) (TMP_ObjectPool_1_t2377438538 *, const MethodInfo*))TMP_ObjectPool_1_Get_m3204750670_gshared)(__this, method)
// System.Void TMPro.TMP_ObjectPool`1<System.Object>::Release(T)
extern "C"  void TMP_ObjectPool_1_Release_m2806969756_gshared (TMP_ObjectPool_1_t2377438538 * __this, Il2CppObject * ___element0, const MethodInfo* method);
#define TMP_ObjectPool_1_Release_m2806969756(__this, ___element0, method) ((  void (*) (TMP_ObjectPool_1_t2377438538 *, Il2CppObject *, const MethodInfo*))TMP_ObjectPool_1_Release_m2806969756_gshared)(__this, ___element0, method)
