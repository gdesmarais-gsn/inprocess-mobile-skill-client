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

// Newtonsoft.Json.Serialization.DynamicValueProvider
struct DynamicValueProvider_t1562203361;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Reflection_MemberInfo4043097260.h"
#include "mscorlib_System_Object2689449295.h"

// System.Void Newtonsoft.Json.Serialization.DynamicValueProvider::.ctor(System.Reflection.MemberInfo)
extern "C"  void DynamicValueProvider__ctor_m578423968 (DynamicValueProvider_t1562203361 * __this, MemberInfo_t * ___memberInfo0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.DynamicValueProvider::SetValue(System.Object,System.Object)
extern "C"  void DynamicValueProvider_SetValue_m4034790223 (DynamicValueProvider_t1562203361 * __this, Il2CppObject * ___target0, Il2CppObject * ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Newtonsoft.Json.Serialization.DynamicValueProvider::GetValue(System.Object)
extern "C"  Il2CppObject * DynamicValueProvider_GetValue_m2489073720 (DynamicValueProvider_t1562203361 * __this, Il2CppObject * ___target0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
