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

// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>,System.Object>
struct Func_2_t1481555898;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_23716250094.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C"  void Func_2__ctor_m2209915982_gshared (Func_2_t1481555898 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method);
#define Func_2__ctor_m2209915982(__this, ___object0, ___method1, method) ((  void (*) (Func_2_t1481555898 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Func_2__ctor_m2209915982_gshared)(__this, ___object0, ___method1, method)
// TResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>,System.Object>::Invoke(T)
extern "C"  Il2CppObject * Func_2_Invoke_m3675117988_gshared (Func_2_t1481555898 * __this, KeyValuePair_2_t3716250094  ___arg10, const MethodInfo* method);
#define Func_2_Invoke_m3675117988(__this, ___arg10, method) ((  Il2CppObject * (*) (Func_2_t1481555898 *, KeyValuePair_2_t3716250094 , const MethodInfo*))Func_2_Invoke_m3675117988_gshared)(__this, ___arg10, method)
// System.IAsyncResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>,System.Object>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Func_2_BeginInvoke_m1615001313_gshared (Func_2_t1481555898 * __this, KeyValuePair_2_t3716250094  ___arg10, AsyncCallback_t163412349 * ___callback1, Il2CppObject * ___object2, const MethodInfo* method);
#define Func_2_BeginInvoke_m1615001313(__this, ___arg10, ___callback1, ___object2, method) ((  Il2CppObject * (*) (Func_2_t1481555898 *, KeyValuePair_2_t3716250094 , AsyncCallback_t163412349 *, Il2CppObject *, const MethodInfo*))Func_2_BeginInvoke_m1615001313_gshared)(__this, ___arg10, ___callback1, ___object2, method)
// TResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>,System.Object>::EndInvoke(System.IAsyncResult)
extern "C"  Il2CppObject * Func_2_EndInvoke_m2423756014_gshared (Func_2_t1481555898 * __this, Il2CppObject * ___result0, const MethodInfo* method);
#define Func_2_EndInvoke_m2423756014(__this, ___result0, method) ((  Il2CppObject * (*) (Func_2_t1481555898 *, Il2CppObject *, const MethodInfo*))Func_2_EndInvoke_m2423756014_gshared)(__this, ___result0, method)
