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

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.Reflection.BindingFlags>>
struct DefaultComparer_t53686409;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_22726723544.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.Reflection.BindingFlags>>::.ctor()
extern "C"  void DefaultComparer__ctor_m1001625263_gshared (DefaultComparer_t53686409 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m1001625263(__this, method) ((  void (*) (DefaultComparer_t53686409 *, const MethodInfo*))DefaultComparer__ctor_m1001625263_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.Reflection.BindingFlags>>::GetHashCode(T)
extern "C"  int32_t DefaultComparer_GetHashCode_m4049291528_gshared (DefaultComparer_t53686409 * __this, KeyValuePair_2_t2726723544  ___obj0, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m4049291528(__this, ___obj0, method) ((  int32_t (*) (DefaultComparer_t53686409 *, KeyValuePair_2_t2726723544 , const MethodInfo*))DefaultComparer_GetHashCode_m4049291528_gshared)(__this, ___obj0, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.Reflection.BindingFlags>>::Equals(T,T)
extern "C"  bool DefaultComparer_Equals_m1852391960_gshared (DefaultComparer_t53686409 * __this, KeyValuePair_2_t2726723544  ___x0, KeyValuePair_2_t2726723544  ___y1, const MethodInfo* method);
#define DefaultComparer_Equals_m1852391960(__this, ___x0, ___y1, method) ((  bool (*) (DefaultComparer_t53686409 *, KeyValuePair_2_t2726723544 , KeyValuePair_2_t2726723544 , const MethodInfo*))DefaultComparer_Equals_m1852391960_gshared)(__this, ___x0, ___y1, method)
