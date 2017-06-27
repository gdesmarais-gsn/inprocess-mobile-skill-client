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

// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>,System.Boolean>
struct Func_2_t3155315995;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_21174980068.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>,System.Boolean>::.ctor(System.Object,System.IntPtr)
extern "C"  void Func_2__ctor_m3625226049_gshared (Func_2_t3155315995 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method);
#define Func_2__ctor_m3625226049(__this, ___object0, ___method1, method) ((  void (*) (Func_2_t3155315995 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Func_2__ctor_m3625226049_gshared)(__this, ___object0, ___method1, method)
// TResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>,System.Boolean>::Invoke(T)
extern "C"  bool Func_2_Invoke_m2007717759_gshared (Func_2_t3155315995 * __this, KeyValuePair_2_t1174980068  ___arg10, const MethodInfo* method);
#define Func_2_Invoke_m2007717759(__this, ___arg10, method) ((  bool (*) (Func_2_t3155315995 *, KeyValuePair_2_t1174980068 , const MethodInfo*))Func_2_Invoke_m2007717759_gshared)(__this, ___arg10, method)
// System.IAsyncResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>,System.Boolean>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Func_2_BeginInvoke_m4076199064_gshared (Func_2_t3155315995 * __this, KeyValuePair_2_t1174980068  ___arg10, AsyncCallback_t163412349 * ___callback1, Il2CppObject * ___object2, const MethodInfo* method);
#define Func_2_BeginInvoke_m4076199064(__this, ___arg10, ___callback1, ___object2, method) ((  Il2CppObject * (*) (Func_2_t3155315995 *, KeyValuePair_2_t1174980068 , AsyncCallback_t163412349 *, Il2CppObject *, const MethodInfo*))Func_2_BeginInvoke_m4076199064_gshared)(__this, ___arg10, ___callback1, ___object2, method)
// TResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>,System.Boolean>::EndInvoke(System.IAsyncResult)
extern "C"  bool Func_2_EndInvoke_m1410626241_gshared (Func_2_t3155315995 * __this, Il2CppObject * ___result0, const MethodInfo* method);
#define Func_2_EndInvoke_m1410626241(__this, ___result0, method) ((  bool (*) (Func_2_t3155315995 *, Il2CppObject *, const MethodInfo*))Func_2_EndInvoke_m1410626241_gshared)(__this, ___result0, method)
