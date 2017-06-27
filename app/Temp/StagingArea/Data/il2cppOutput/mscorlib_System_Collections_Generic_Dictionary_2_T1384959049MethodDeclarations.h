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

// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,Stm.V1_0.DynamicDispatcher/CallbackAndCallee,Stm.V1_0.DynamicDispatcher/CallbackAndCallee>
struct Transform_1_t1384959049;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "AssemblyU2DCSharp_Stm_V1_0_DynamicDispatcher_Callb2231576673.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,Stm.V1_0.DynamicDispatcher/CallbackAndCallee,Stm.V1_0.DynamicDispatcher/CallbackAndCallee>::.ctor(System.Object,System.IntPtr)
extern "C"  void Transform_1__ctor_m2376408403_gshared (Transform_1_t1384959049 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method);
#define Transform_1__ctor_m2376408403(__this, ___object0, ___method1, method) ((  void (*) (Transform_1_t1384959049 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m2376408403_gshared)(__this, ___object0, ___method1, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,Stm.V1_0.DynamicDispatcher/CallbackAndCallee,Stm.V1_0.DynamicDispatcher/CallbackAndCallee>::Invoke(TKey,TValue)
extern "C"  CallbackAndCallee_t2231576673  Transform_1_Invoke_m2609665223_gshared (Transform_1_t1384959049 * __this, Il2CppObject * ___key0, CallbackAndCallee_t2231576673  ___value1, const MethodInfo* method);
#define Transform_1_Invoke_m2609665223(__this, ___key0, ___value1, method) ((  CallbackAndCallee_t2231576673  (*) (Transform_1_t1384959049 *, Il2CppObject *, CallbackAndCallee_t2231576673 , const MethodInfo*))Transform_1_Invoke_m2609665223_gshared)(__this, ___key0, ___value1, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,Stm.V1_0.DynamicDispatcher/CallbackAndCallee,Stm.V1_0.DynamicDispatcher/CallbackAndCallee>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Transform_1_BeginInvoke_m1934790096_gshared (Transform_1_t1384959049 * __this, Il2CppObject * ___key0, CallbackAndCallee_t2231576673  ___value1, AsyncCallback_t163412349 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method);
#define Transform_1_BeginInvoke_m1934790096(__this, ___key0, ___value1, ___callback2, ___object3, method) ((  Il2CppObject * (*) (Transform_1_t1384959049 *, Il2CppObject *, CallbackAndCallee_t2231576673 , AsyncCallback_t163412349 *, Il2CppObject *, const MethodInfo*))Transform_1_BeginInvoke_m1934790096_gshared)(__this, ___key0, ___value1, ___callback2, ___object3, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,Stm.V1_0.DynamicDispatcher/CallbackAndCallee,Stm.V1_0.DynamicDispatcher/CallbackAndCallee>::EndInvoke(System.IAsyncResult)
extern "C"  CallbackAndCallee_t2231576673  Transform_1_EndInvoke_m1645078793_gshared (Transform_1_t1384959049 * __this, Il2CppObject * ___result0, const MethodInfo* method);
#define Transform_1_EndInvoke_m1645078793(__this, ___result0, method) ((  CallbackAndCallee_t2231576673  (*) (Transform_1_t1384959049 *, Il2CppObject *, const MethodInfo*))Transform_1_EndInvoke_m1645078793_gshared)(__this, ___result0, method)
