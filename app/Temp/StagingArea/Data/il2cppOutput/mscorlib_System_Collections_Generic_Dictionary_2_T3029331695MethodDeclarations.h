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

// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,Stm.V1_0.DynamicDispatcher/CallbackAndCallee,System.Collections.Generic.KeyValuePair`2<System.Object,Stm.V1_0.DynamicDispatcher/CallbackAndCallee>>
struct Transform_1_t3029331695;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_23875949319.h"
#include "AssemblyU2DCSharp_Stm_V1_0_DynamicDispatcher_Callb2231576673.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,Stm.V1_0.DynamicDispatcher/CallbackAndCallee,System.Collections.Generic.KeyValuePair`2<System.Object,Stm.V1_0.DynamicDispatcher/CallbackAndCallee>>::.ctor(System.Object,System.IntPtr)
extern "C"  void Transform_1__ctor_m2128085658_gshared (Transform_1_t3029331695 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method);
#define Transform_1__ctor_m2128085658(__this, ___object0, ___method1, method) ((  void (*) (Transform_1_t3029331695 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m2128085658_gshared)(__this, ___object0, ___method1, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,Stm.V1_0.DynamicDispatcher/CallbackAndCallee,System.Collections.Generic.KeyValuePair`2<System.Object,Stm.V1_0.DynamicDispatcher/CallbackAndCallee>>::Invoke(TKey,TValue)
extern "C"  KeyValuePair_2_t3875949319  Transform_1_Invoke_m836214042_gshared (Transform_1_t3029331695 * __this, Il2CppObject * ___key0, CallbackAndCallee_t2231576673  ___value1, const MethodInfo* method);
#define Transform_1_Invoke_m836214042(__this, ___key0, ___value1, method) ((  KeyValuePair_2_t3875949319  (*) (Transform_1_t3029331695 *, Il2CppObject *, CallbackAndCallee_t2231576673 , const MethodInfo*))Transform_1_Invoke_m836214042_gshared)(__this, ___key0, ___value1, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,Stm.V1_0.DynamicDispatcher/CallbackAndCallee,System.Collections.Generic.KeyValuePair`2<System.Object,Stm.V1_0.DynamicDispatcher/CallbackAndCallee>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Transform_1_BeginInvoke_m1817905551_gshared (Transform_1_t3029331695 * __this, Il2CppObject * ___key0, CallbackAndCallee_t2231576673  ___value1, AsyncCallback_t163412349 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method);
#define Transform_1_BeginInvoke_m1817905551(__this, ___key0, ___value1, ___callback2, ___object3, method) ((  Il2CppObject * (*) (Transform_1_t3029331695 *, Il2CppObject *, CallbackAndCallee_t2231576673 , AsyncCallback_t163412349 *, Il2CppObject *, const MethodInfo*))Transform_1_BeginInvoke_m1817905551_gshared)(__this, ___key0, ___value1, ___callback2, ___object3, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,Stm.V1_0.DynamicDispatcher/CallbackAndCallee,System.Collections.Generic.KeyValuePair`2<System.Object,Stm.V1_0.DynamicDispatcher/CallbackAndCallee>>::EndInvoke(System.IAsyncResult)
extern "C"  KeyValuePair_2_t3875949319  Transform_1_EndInvoke_m890740708_gshared (Transform_1_t3029331695 * __this, Il2CppObject * ___result0, const MethodInfo* method);
#define Transform_1_EndInvoke_m890740708(__this, ___result0, method) ((  KeyValuePair_2_t3875949319  (*) (Transform_1_t3029331695 *, Il2CppObject *, const MethodInfo*))Transform_1_EndInvoke_m890740708_gshared)(__this, ___result0, method)
