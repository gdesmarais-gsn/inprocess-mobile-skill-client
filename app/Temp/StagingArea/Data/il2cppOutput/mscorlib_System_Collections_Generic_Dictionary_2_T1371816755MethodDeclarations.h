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

// System.Collections.Generic.Dictionary`2/Transform`1<System.Char,System.Object,System.Collections.Generic.KeyValuePair`2<System.Char,System.Object>>
struct Transform_1_t1371816755;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_22047271806.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Char,System.Object,System.Collections.Generic.KeyValuePair`2<System.Char,System.Object>>::.ctor(System.Object,System.IntPtr)
extern "C"  void Transform_1__ctor_m1740046902_gshared (Transform_1_t1371816755 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method);
#define Transform_1__ctor_m1740046902(__this, ___object0, ___method1, method) ((  void (*) (Transform_1_t1371816755 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m1740046902_gshared)(__this, ___object0, ___method1, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Char,System.Object,System.Collections.Generic.KeyValuePair`2<System.Char,System.Object>>::Invoke(TKey,TValue)
extern "C"  KeyValuePair_2_t2047271806  Transform_1_Invoke_m3965156022_gshared (Transform_1_t1371816755 * __this, Il2CppChar ___key0, Il2CppObject * ___value1, const MethodInfo* method);
#define Transform_1_Invoke_m3965156022(__this, ___key0, ___value1, method) ((  KeyValuePair_2_t2047271806  (*) (Transform_1_t1371816755 *, Il2CppChar, Il2CppObject *, const MethodInfo*))Transform_1_Invoke_m3965156022_gshared)(__this, ___key0, ___value1, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Char,System.Object,System.Collections.Generic.KeyValuePair`2<System.Char,System.Object>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Transform_1_BeginInvoke_m626096735_gshared (Transform_1_t1371816755 * __this, Il2CppChar ___key0, Il2CppObject * ___value1, AsyncCallback_t163412349 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method);
#define Transform_1_BeginInvoke_m626096735(__this, ___key0, ___value1, ___callback2, ___object3, method) ((  Il2CppObject * (*) (Transform_1_t1371816755 *, Il2CppChar, Il2CppObject *, AsyncCallback_t163412349 *, Il2CppObject *, const MethodInfo*))Transform_1_BeginInvoke_m626096735_gshared)(__this, ___key0, ___value1, ___callback2, ___object3, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Char,System.Object,System.Collections.Generic.KeyValuePair`2<System.Char,System.Object>>::EndInvoke(System.IAsyncResult)
extern "C"  KeyValuePair_2_t2047271806  Transform_1_EndInvoke_m2682642956_gshared (Transform_1_t1371816755 * __this, Il2CppObject * ___result0, const MethodInfo* method);
#define Transform_1_EndInvoke_m2682642956(__this, ___result0, method) ((  KeyValuePair_2_t2047271806  (*) (Transform_1_t1371816755 *, Il2CppObject *, const MethodInfo*))Transform_1_EndInvoke_m2682642956_gshared)(__this, ___result0, method)
