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

// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.RuntimeTypeHandle>
struct Func_2_t1706442180;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "mscorlib_System_RuntimeTypeHandle2330101084.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_g38854645.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.RuntimeTypeHandle>::.ctor(System.Object,System.IntPtr)
extern "C"  void Func_2__ctor_m951608386_gshared (Func_2_t1706442180 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method);
#define Func_2__ctor_m951608386(__this, ___object0, ___method1, method) ((  void (*) (Func_2_t1706442180 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Func_2__ctor_m951608386_gshared)(__this, ___object0, ___method1, method)
// TResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.RuntimeTypeHandle>::Invoke(T)
extern "C"  RuntimeTypeHandle_t2330101084  Func_2_Invoke_m117372864_gshared (Func_2_t1706442180 * __this, KeyValuePair_2_t38854645  ___arg10, const MethodInfo* method);
#define Func_2_Invoke_m117372864(__this, ___arg10, method) ((  RuntimeTypeHandle_t2330101084  (*) (Func_2_t1706442180 *, KeyValuePair_2_t38854645 , const MethodInfo*))Func_2_Invoke_m117372864_gshared)(__this, ___arg10, method)
// System.IAsyncResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.RuntimeTypeHandle>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Func_2_BeginInvoke_m3991095029_gshared (Func_2_t1706442180 * __this, KeyValuePair_2_t38854645  ___arg10, AsyncCallback_t163412349 * ___callback1, Il2CppObject * ___object2, const MethodInfo* method);
#define Func_2_BeginInvoke_m3991095029(__this, ___arg10, ___callback1, ___object2, method) ((  Il2CppObject * (*) (Func_2_t1706442180 *, KeyValuePair_2_t38854645 , AsyncCallback_t163412349 *, Il2CppObject *, const MethodInfo*))Func_2_BeginInvoke_m3991095029_gshared)(__this, ___arg10, ___callback1, ___object2, method)
// TResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.RuntimeTypeHandle>::EndInvoke(System.IAsyncResult)
extern "C"  RuntimeTypeHandle_t2330101084  Func_2_EndInvoke_m778051562_gshared (Func_2_t1706442180 * __this, Il2CppObject * ___result0, const MethodInfo* method);
#define Func_2_EndInvoke_m778051562(__this, ___result0, method) ((  RuntimeTypeHandle_t2330101084  (*) (Func_2_t1706442180 *, Il2CppObject *, const MethodInfo*))Func_2_EndInvoke_m778051562_gshared)(__this, ___result0, method)
