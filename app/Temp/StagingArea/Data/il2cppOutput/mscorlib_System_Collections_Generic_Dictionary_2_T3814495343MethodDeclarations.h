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

// System.Collections.Generic.Dictionary`2/Transform`1<Stm.V1_1.ReflectionUtil/TypeMemberCacheKey,System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>,System.Collections.Generic.KeyValuePair`2<Stm.V1_1.ReflectionUtil/TypeMemberCacheKey,System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>>>
struct Transform_1_t3814495343;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_21697467559.h"
#include "AssemblyU2DCSharp_Stm_V1_1_ReflectionUtil_TypeMembe940488630.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_21174980068.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<Stm.V1_1.ReflectionUtil/TypeMemberCacheKey,System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>,System.Collections.Generic.KeyValuePair`2<Stm.V1_1.ReflectionUtil/TypeMemberCacheKey,System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>>>::.ctor(System.Object,System.IntPtr)
extern "C"  void Transform_1__ctor_m2931821188_gshared (Transform_1_t3814495343 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method);
#define Transform_1__ctor_m2931821188(__this, ___object0, ___method1, method) ((  void (*) (Transform_1_t3814495343 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m2931821188_gshared)(__this, ___object0, ___method1, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<Stm.V1_1.ReflectionUtil/TypeMemberCacheKey,System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>,System.Collections.Generic.KeyValuePair`2<Stm.V1_1.ReflectionUtil/TypeMemberCacheKey,System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>>>::Invoke(TKey,TValue)
extern "C"  KeyValuePair_2_t1697467559  Transform_1_Invoke_m155970596_gshared (Transform_1_t3814495343 * __this, TypeMemberCacheKey_t940488630  ___key0, KeyValuePair_2_t1174980068  ___value1, const MethodInfo* method);
#define Transform_1_Invoke_m155970596(__this, ___key0, ___value1, method) ((  KeyValuePair_2_t1697467559  (*) (Transform_1_t3814495343 *, TypeMemberCacheKey_t940488630 , KeyValuePair_2_t1174980068 , const MethodInfo*))Transform_1_Invoke_m155970596_gshared)(__this, ___key0, ___value1, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<Stm.V1_1.ReflectionUtil/TypeMemberCacheKey,System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>,System.Collections.Generic.KeyValuePair`2<Stm.V1_1.ReflectionUtil/TypeMemberCacheKey,System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Transform_1_BeginInvoke_m2784466683_gshared (Transform_1_t3814495343 * __this, TypeMemberCacheKey_t940488630  ___key0, KeyValuePair_2_t1174980068  ___value1, AsyncCallback_t163412349 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method);
#define Transform_1_BeginInvoke_m2784466683(__this, ___key0, ___value1, ___callback2, ___object3, method) ((  Il2CppObject * (*) (Transform_1_t3814495343 *, TypeMemberCacheKey_t940488630 , KeyValuePair_2_t1174980068 , AsyncCallback_t163412349 *, Il2CppObject *, const MethodInfo*))Transform_1_BeginInvoke_m2784466683_gshared)(__this, ___key0, ___value1, ___callback2, ___object3, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<Stm.V1_1.ReflectionUtil/TypeMemberCacheKey,System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>,System.Collections.Generic.KeyValuePair`2<Stm.V1_1.ReflectionUtil/TypeMemberCacheKey,System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>>>::EndInvoke(System.IAsyncResult)
extern "C"  KeyValuePair_2_t1697467559  Transform_1_EndInvoke_m1259919150_gshared (Transform_1_t3814495343 * __this, Il2CppObject * ___result0, const MethodInfo* method);
#define Transform_1_EndInvoke_m1259919150(__this, ___result0, method) ((  KeyValuePair_2_t1697467559  (*) (Transform_1_t3814495343 *, Il2CppObject *, const MethodInfo*))Transform_1_EndInvoke_m1259919150_gshared)(__this, ___result0, method)
