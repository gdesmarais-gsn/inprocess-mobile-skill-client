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

// System.Collections.Generic.Dictionary`2/Transform`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>>,System.Object,System.Collections.Generic.KeyValuePair`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>>,System.Object>>
struct Transform_1_t3954253171;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_22767794542.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_22819352714.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>>,System.Object,System.Collections.Generic.KeyValuePair`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>>,System.Object>>::.ctor(System.Object,System.IntPtr)
extern "C"  void Transform_1__ctor_m2514790106_gshared (Transform_1_t3954253171 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method);
#define Transform_1__ctor_m2514790106(__this, ___object0, ___method1, method) ((  void (*) (Transform_1_t3954253171 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m2514790106_gshared)(__this, ___object0, ___method1, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>>,System.Object,System.Collections.Generic.KeyValuePair`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>>,System.Object>>::Invoke(TKey,TValue)
extern "C"  KeyValuePair_2_t2767794542  Transform_1_Invoke_m1370116282_gshared (Transform_1_t3954253171 * __this, KeyValuePair_2_t2819352714  ___key0, Il2CppObject * ___value1, const MethodInfo* method);
#define Transform_1_Invoke_m1370116282(__this, ___key0, ___value1, method) ((  KeyValuePair_2_t2767794542  (*) (Transform_1_t3954253171 *, KeyValuePair_2_t2819352714 , Il2CppObject *, const MethodInfo*))Transform_1_Invoke_m1370116282_gshared)(__this, ___key0, ___value1, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>>,System.Object,System.Collections.Generic.KeyValuePair`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>>,System.Object>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Transform_1_BeginInvoke_m1685752943_gshared (Transform_1_t3954253171 * __this, KeyValuePair_2_t2819352714  ___key0, Il2CppObject * ___value1, AsyncCallback_t163412349 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method);
#define Transform_1_BeginInvoke_m1685752943(__this, ___key0, ___value1, ___callback2, ___object3, method) ((  Il2CppObject * (*) (Transform_1_t3954253171 *, KeyValuePair_2_t2819352714 , Il2CppObject *, AsyncCallback_t163412349 *, Il2CppObject *, const MethodInfo*))Transform_1_BeginInvoke_m1685752943_gshared)(__this, ___key0, ___value1, ___callback2, ___object3, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>>,System.Object,System.Collections.Generic.KeyValuePair`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>>,System.Object>>::EndInvoke(System.IAsyncResult)
extern "C"  KeyValuePair_2_t2767794542  Transform_1_EndInvoke_m1826224804_gshared (Transform_1_t3954253171 * __this, Il2CppObject * ___result0, const MethodInfo* method);
#define Transform_1_EndInvoke_m1826224804(__this, ___result0, method) ((  KeyValuePair_2_t2767794542  (*) (Transform_1_t3954253171 *, Il2CppObject *, const MethodInfo*))Transform_1_EndInvoke_m1826224804_gshared)(__this, ___result0, method)
