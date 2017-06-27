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

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>>
struct DefaultComparer_t2796910229;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_21174980068.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>>::.ctor()
extern "C"  void DefaultComparer__ctor_m1305609432_gshared (DefaultComparer_t2796910229 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m1305609432(__this, method) ((  void (*) (DefaultComparer_t2796910229 *, const MethodInfo*))DefaultComparer__ctor_m1305609432_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>>::GetHashCode(T)
extern "C"  int32_t DefaultComparer_GetHashCode_m1381362887_gshared (DefaultComparer_t2796910229 * __this, KeyValuePair_2_t1174980068  ___obj0, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m1381362887(__this, ___obj0, method) ((  int32_t (*) (DefaultComparer_t2796910229 *, KeyValuePair_2_t1174980068 , const MethodInfo*))DefaultComparer_GetHashCode_m1381362887_gshared)(__this, ___obj0, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>>::Equals(T,T)
extern "C"  bool DefaultComparer_Equals_m2626537735_gshared (DefaultComparer_t2796910229 * __this, KeyValuePair_2_t1174980068  ___x0, KeyValuePair_2_t1174980068  ___y1, const MethodInfo* method);
#define DefaultComparer_Equals_m2626537735(__this, ___x0, ___y1, method) ((  bool (*) (DefaultComparer_t2796910229 *, KeyValuePair_2_t1174980068 , KeyValuePair_2_t1174980068 , const MethodInfo*))DefaultComparer_Equals_m2626537735_gshared)(__this, ___x0, ___y1, method)
