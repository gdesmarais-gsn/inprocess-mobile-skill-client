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

// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,Stm.V1_0.DynamicDispatcher/CallbackAndCallee,System.Object>
struct Transform_1_t1842831671;
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

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,Stm.V1_0.DynamicDispatcher/CallbackAndCallee,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C"  void Transform_1__ctor_m4121322940_gshared (Transform_1_t1842831671 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method);
#define Transform_1__ctor_m4121322940(__this, ___object0, ___method1, method) ((  void (*) (Transform_1_t1842831671 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m4121322940_gshared)(__this, ___object0, ___method1, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,Stm.V1_0.DynamicDispatcher/CallbackAndCallee,System.Object>::Invoke(TKey,TValue)
extern "C"  Il2CppObject * Transform_1_Invoke_m251994916_gshared (Transform_1_t1842831671 * __this, Il2CppObject * ___key0, CallbackAndCallee_t2231576673  ___value1, const MethodInfo* method);
#define Transform_1_Invoke_m251994916(__this, ___key0, ___value1, method) ((  Il2CppObject * (*) (Transform_1_t1842831671 *, Il2CppObject *, CallbackAndCallee_t2231576673 , const MethodInfo*))Transform_1_Invoke_m251994916_gshared)(__this, ___key0, ___value1, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,Stm.V1_0.DynamicDispatcher/CallbackAndCallee,System.Object>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Transform_1_BeginInvoke_m1769729545_gshared (Transform_1_t1842831671 * __this, Il2CppObject * ___key0, CallbackAndCallee_t2231576673  ___value1, AsyncCallback_t163412349 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method);
#define Transform_1_BeginInvoke_m1769729545(__this, ___key0, ___value1, ___callback2, ___object3, method) ((  Il2CppObject * (*) (Transform_1_t1842831671 *, Il2CppObject *, CallbackAndCallee_t2231576673 , AsyncCallback_t163412349 *, Il2CppObject *, const MethodInfo*))Transform_1_BeginInvoke_m1769729545_gshared)(__this, ___key0, ___value1, ___callback2, ___object3, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,Stm.V1_0.DynamicDispatcher/CallbackAndCallee,System.Object>::EndInvoke(System.IAsyncResult)
extern "C"  Il2CppObject * Transform_1_EndInvoke_m3210913198_gshared (Transform_1_t1842831671 * __this, Il2CppObject * ___result0, const MethodInfo* method);
#define Transform_1_EndInvoke_m3210913198(__this, ___result0, method) ((  Il2CppObject * (*) (Transform_1_t1842831671 *, Il2CppObject *, const MethodInfo*))Transform_1_EndInvoke_m3210913198_gshared)(__this, ___result0, method)
