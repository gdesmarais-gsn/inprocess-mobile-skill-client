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

// System.Func`2<System.Reflection.CustomAttributeNamedArgument,System.Boolean>
struct Func_2_t3651062956;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "mscorlib_System_Reflection_CustomAttributeNamedArgum94157543.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void System.Func`2<System.Reflection.CustomAttributeNamedArgument,System.Boolean>::.ctor(System.Object,System.IntPtr)
extern "C"  void Func_2__ctor_m717676814_gshared (Func_2_t3651062956 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method);
#define Func_2__ctor_m717676814(__this, ___object0, ___method1, method) ((  void (*) (Func_2_t3651062956 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Func_2__ctor_m717676814_gshared)(__this, ___object0, ___method1, method)
// TResult System.Func`2<System.Reflection.CustomAttributeNamedArgument,System.Boolean>::Invoke(T)
extern "C"  bool Func_2_Invoke_m24254326_gshared (Func_2_t3651062956 * __this, CustomAttributeNamedArgument_t94157543  ___arg10, const MethodInfo* method);
#define Func_2_Invoke_m24254326(__this, ___arg10, method) ((  bool (*) (Func_2_t3651062956 *, CustomAttributeNamedArgument_t94157543 , const MethodInfo*))Func_2_Invoke_m24254326_gshared)(__this, ___arg10, method)
// System.IAsyncResult System.Func`2<System.Reflection.CustomAttributeNamedArgument,System.Boolean>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Func_2_BeginInvoke_m399996139_gshared (Func_2_t3651062956 * __this, CustomAttributeNamedArgument_t94157543  ___arg10, AsyncCallback_t163412349 * ___callback1, Il2CppObject * ___object2, const MethodInfo* method);
#define Func_2_BeginInvoke_m399996139(__this, ___arg10, ___callback1, ___object2, method) ((  Il2CppObject * (*) (Func_2_t3651062956 *, CustomAttributeNamedArgument_t94157543 , AsyncCallback_t163412349 *, Il2CppObject *, const MethodInfo*))Func_2_BeginInvoke_m399996139_gshared)(__this, ___arg10, ___callback1, ___object2, method)
// TResult System.Func`2<System.Reflection.CustomAttributeNamedArgument,System.Boolean>::EndInvoke(System.IAsyncResult)
extern "C"  bool Func_2_EndInvoke_m2295666612_gshared (Func_2_t3651062956 * __this, Il2CppObject * ___result0, const MethodInfo* method);
#define Func_2_EndInvoke_m2295666612(__this, ___result0, method) ((  bool (*) (Func_2_t3651062956 *, Il2CppObject *, const MethodInfo*))Func_2_EndInvoke_m2295666612_gshared)(__this, ___result0, method)
