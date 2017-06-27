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

// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,Stm.V1_0.DynamicDispatcher/CallbackAndCallee,System.Collections.DictionaryEntry>
struct Transform_1_t2202257774;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "mscorlib_System_Collections_DictionaryEntry3048875398.h"
#include "AssemblyU2DCSharp_Stm_V1_0_DynamicDispatcher_Callb2231576673.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,Stm.V1_0.DynamicDispatcher/CallbackAndCallee,System.Collections.DictionaryEntry>::.ctor(System.Object,System.IntPtr)
extern "C"  void Transform_1__ctor_m1620573352_gshared (Transform_1_t2202257774 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method);
#define Transform_1__ctor_m1620573352(__this, ___object0, ___method1, method) ((  void (*) (Transform_1_t2202257774 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m1620573352_gshared)(__this, ___object0, ___method1, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,Stm.V1_0.DynamicDispatcher/CallbackAndCallee,System.Collections.DictionaryEntry>::Invoke(TKey,TValue)
extern "C"  DictionaryEntry_t3048875398  Transform_1_Invoke_m2478361752_gshared (Transform_1_t2202257774 * __this, Il2CppObject * ___key0, CallbackAndCallee_t2231576673  ___value1, const MethodInfo* method);
#define Transform_1_Invoke_m2478361752(__this, ___key0, ___value1, method) ((  DictionaryEntry_t3048875398  (*) (Transform_1_t2202257774 *, Il2CppObject *, CallbackAndCallee_t2231576673 , const MethodInfo*))Transform_1_Invoke_m2478361752_gshared)(__this, ___key0, ___value1, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,Stm.V1_0.DynamicDispatcher/CallbackAndCallee,System.Collections.DictionaryEntry>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Transform_1_BeginInvoke_m2002614063_gshared (Transform_1_t2202257774 * __this, Il2CppObject * ___key0, CallbackAndCallee_t2231576673  ___value1, AsyncCallback_t163412349 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method);
#define Transform_1_BeginInvoke_m2002614063(__this, ___key0, ___value1, ___callback2, ___object3, method) ((  Il2CppObject * (*) (Transform_1_t2202257774 *, Il2CppObject *, CallbackAndCallee_t2231576673 , AsyncCallback_t163412349 *, Il2CppObject *, const MethodInfo*))Transform_1_BeginInvoke_m2002614063_gshared)(__this, ___key0, ___value1, ___callback2, ___object3, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,Stm.V1_0.DynamicDispatcher/CallbackAndCallee,System.Collections.DictionaryEntry>::EndInvoke(System.IAsyncResult)
extern "C"  DictionaryEntry_t3048875398  Transform_1_EndInvoke_m2114596566_gshared (Transform_1_t2202257774 * __this, Il2CppObject * ___result0, const MethodInfo* method);
#define Transform_1_EndInvoke_m2114596566(__this, ___result0, method) ((  DictionaryEntry_t3048875398  (*) (Transform_1_t2202257774 *, Il2CppObject *, const MethodInfo*))Transform_1_EndInvoke_m2114596566_gshared)(__this, ___result0, method)
