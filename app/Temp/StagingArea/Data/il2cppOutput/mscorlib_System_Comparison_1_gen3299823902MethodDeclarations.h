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

// System.Comparison`1<MsgPack.MessagePackObject>
struct Comparison_1_t3299823902;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "MsgPack_MsgPack_MessagePackObject2038085051.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void System.Comparison`1<MsgPack.MessagePackObject>::.ctor(System.Object,System.IntPtr)
extern "C"  void Comparison_1__ctor_m348946318_gshared (Comparison_1_t3299823902 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method);
#define Comparison_1__ctor_m348946318(__this, ___object0, ___method1, method) ((  void (*) (Comparison_1_t3299823902 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Comparison_1__ctor_m348946318_gshared)(__this, ___object0, ___method1, method)
// System.Int32 System.Comparison`1<MsgPack.MessagePackObject>::Invoke(T,T)
extern "C"  int32_t Comparison_1_Invoke_m1052670230_gshared (Comparison_1_t3299823902 * __this, MessagePackObject_t2038085051  ___x0, MessagePackObject_t2038085051  ___y1, const MethodInfo* method);
#define Comparison_1_Invoke_m1052670230(__this, ___x0, ___y1, method) ((  int32_t (*) (Comparison_1_t3299823902 *, MessagePackObject_t2038085051 , MessagePackObject_t2038085051 , const MethodInfo*))Comparison_1_Invoke_m1052670230_gshared)(__this, ___x0, ___y1, method)
// System.IAsyncResult System.Comparison`1<MsgPack.MessagePackObject>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Comparison_1_BeginInvoke_m2784456151_gshared (Comparison_1_t3299823902 * __this, MessagePackObject_t2038085051  ___x0, MessagePackObject_t2038085051  ___y1, AsyncCallback_t163412349 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method);
#define Comparison_1_BeginInvoke_m2784456151(__this, ___x0, ___y1, ___callback2, ___object3, method) ((  Il2CppObject * (*) (Comparison_1_t3299823902 *, MessagePackObject_t2038085051 , MessagePackObject_t2038085051 , AsyncCallback_t163412349 *, Il2CppObject *, const MethodInfo*))Comparison_1_BeginInvoke_m2784456151_gshared)(__this, ___x0, ___y1, ___callback2, ___object3, method)
// System.Int32 System.Comparison`1<MsgPack.MessagePackObject>::EndInvoke(System.IAsyncResult)
extern "C"  int32_t Comparison_1_EndInvoke_m2758416336_gshared (Comparison_1_t3299823902 * __this, Il2CppObject * ___result0, const MethodInfo* method);
#define Comparison_1_EndInvoke_m2758416336(__this, ___result0, method) ((  int32_t (*) (Comparison_1_t3299823902 *, Il2CppObject *, const MethodInfo*))Comparison_1_EndInvoke_m2758416336_gshared)(__this, ___result0, method)
