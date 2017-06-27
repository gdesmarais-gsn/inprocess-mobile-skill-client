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

// System.Func`3<System.Object,System.Int32,System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>
struct Func_3_t3811912889;
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

// System.Void System.Func`3<System.Object,System.Int32,System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::.ctor(System.Object,System.IntPtr)
extern "C"  void Func_3__ctor_m119210186_gshared (Func_3_t3811912889 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method);
#define Func_3__ctor_m119210186(__this, ___object0, ___method1, method) ((  void (*) (Func_3_t3811912889 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Func_3__ctor_m119210186_gshared)(__this, ___object0, ___method1, method)
// TResult System.Func`3<System.Object,System.Int32,System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::Invoke(T1,T2)
extern "C"  KeyValuePair_2_t3716250094  Func_3_Invoke_m201329371_gshared (Func_3_t3811912889 * __this, Il2CppObject * ___arg10, int32_t ___arg21, const MethodInfo* method);
#define Func_3_Invoke_m201329371(__this, ___arg10, ___arg21, method) ((  KeyValuePair_2_t3716250094  (*) (Func_3_t3811912889 *, Il2CppObject *, int32_t, const MethodInfo*))Func_3_Invoke_m201329371_gshared)(__this, ___arg10, ___arg21, method)
// System.IAsyncResult System.Func`3<System.Object,System.Int32,System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::BeginInvoke(T1,T2,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Func_3_BeginInvoke_m1706110952_gshared (Func_3_t3811912889 * __this, Il2CppObject * ___arg10, int32_t ___arg21, AsyncCallback_t163412349 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method);
#define Func_3_BeginInvoke_m1706110952(__this, ___arg10, ___arg21, ___callback2, ___object3, method) ((  Il2CppObject * (*) (Func_3_t3811912889 *, Il2CppObject *, int32_t, AsyncCallback_t163412349 *, Il2CppObject *, const MethodInfo*))Func_3_BeginInvoke_m1706110952_gshared)(__this, ___arg10, ___arg21, ___callback2, ___object3, method)
// TResult System.Func`3<System.Object,System.Int32,System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::EndInvoke(System.IAsyncResult)
extern "C"  KeyValuePair_2_t3716250094  Func_3_EndInvoke_m1537721274_gshared (Func_3_t3811912889 * __this, Il2CppObject * ___result0, const MethodInfo* method);
#define Func_3_EndInvoke_m1537721274(__this, ___result0, method) ((  KeyValuePair_2_t3716250094  (*) (Func_3_t3811912889 *, Il2CppObject *, const MethodInfo*))Func_3_EndInvoke_m1537721274_gshared)(__this, ___result0, method)
