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

// System.Predicate`1<System.UInt32>
struct Predicate_1_t592652136;
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

// System.Void System.Predicate`1<System.UInt32>::.ctor(System.Object,System.IntPtr)
extern "C"  void Predicate_1__ctor_m3732669481_gshared (Predicate_1_t592652136 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method);
#define Predicate_1__ctor_m3732669481(__this, ___object0, ___method1, method) ((  void (*) (Predicate_1_t592652136 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m3732669481_gshared)(__this, ___object0, ___method1, method)
// System.Boolean System.Predicate`1<System.UInt32>::Invoke(T)
extern "C"  bool Predicate_1_Invoke_m539473317_gshared (Predicate_1_t592652136 * __this, uint32_t ___obj0, const MethodInfo* method);
#define Predicate_1_Invoke_m539473317(__this, ___obj0, method) ((  bool (*) (Predicate_1_t592652136 *, uint32_t, const MethodInfo*))Predicate_1_Invoke_m539473317_gshared)(__this, ___obj0, method)
// System.IAsyncResult System.Predicate`1<System.UInt32>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Predicate_1_BeginInvoke_m739040720_gshared (Predicate_1_t592652136 * __this, uint32_t ___obj0, AsyncCallback_t163412349 * ___callback1, Il2CppObject * ___object2, const MethodInfo* method);
#define Predicate_1_BeginInvoke_m739040720(__this, ___obj0, ___callback1, ___object2, method) ((  Il2CppObject * (*) (Predicate_1_t592652136 *, uint32_t, AsyncCallback_t163412349 *, Il2CppObject *, const MethodInfo*))Predicate_1_BeginInvoke_m739040720_gshared)(__this, ___obj0, ___callback1, ___object2, method)
// System.Boolean System.Predicate`1<System.UInt32>::EndInvoke(System.IAsyncResult)
extern "C"  bool Predicate_1_EndInvoke_m3585710307_gshared (Predicate_1_t592652136 * __this, Il2CppObject * ___result0, const MethodInfo* method);
#define Predicate_1_EndInvoke_m3585710307(__this, ___result0, method) ((  bool (*) (Predicate_1_t592652136 *, Il2CppObject *, const MethodInfo*))Predicate_1_EndInvoke_m3585710307_gshared)(__this, ___result0, method)
