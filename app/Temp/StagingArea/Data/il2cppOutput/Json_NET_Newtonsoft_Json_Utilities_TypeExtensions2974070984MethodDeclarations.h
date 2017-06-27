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

// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Type
struct Type_t;
// System.String
struct String_t;
// System.Type[]
struct TypeU5BU5D_t1664964607;
// System.Collections.Generic.IEnumerable`1<System.Type>
struct IEnumerable_1_t1595930271;
// System.Collections.Generic.IEnumerable`1<System.Reflection.MethodInfo>
struct IEnumerable_1_t3622673382;
// System.Reflection.ParameterInfo
struct ParameterInfo_t2249040075;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Type1303803226.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Reflection_MethodInfo3330546337.h"
#include "mscorlib_System_Reflection_ParameterInfo2249040075.h"

// System.Reflection.MethodInfo Newtonsoft.Json.Utilities.TypeExtensions::GetGenericMethod(System.Type,System.String,System.Type[])
extern "C"  MethodInfo_t * TypeExtensions_GetGenericMethod_m2895636495 (Il2CppObject * __this /* static, unused */, Type_t * ___type0, String_t* ___name1, TypeU5BU5D_t1664964607* ___parameterTypes2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Utilities.TypeExtensions::HasParameters(System.Reflection.MethodInfo,System.Type[])
extern "C"  bool TypeExtensions_HasParameters_m1158725089 (Il2CppObject * __this /* static, unused */, MethodInfo_t * ___method0, TypeU5BU5D_t1664964607* ___parameterTypes1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<System.Type> Newtonsoft.Json.Utilities.TypeExtensions::AllInterfaces(System.Type)
extern "C"  Il2CppObject* TypeExtensions_AllInterfaces_m2783326518 (Il2CppObject * __this /* static, unused */, Type_t * ___target0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<System.Reflection.MethodInfo> Newtonsoft.Json.Utilities.TypeExtensions::AllMethods(System.Type)
extern "C"  Il2CppObject* TypeExtensions_AllMethods_m589511092 (Il2CppObject * __this /* static, unused */, Type_t * ___target0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type Newtonsoft.Json.Utilities.TypeExtensions::<HasParameters>m__0(System.Reflection.ParameterInfo)
extern "C"  Type_t * TypeExtensions_U3CHasParametersU3Em__0_m2328256617 (Il2CppObject * __this /* static, unused */, ParameterInfo_t2249040075 * ___parameter0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<System.Reflection.MethodInfo> Newtonsoft.Json.Utilities.TypeExtensions::<AllMethods>m__1(System.Type)
extern "C"  Il2CppObject* TypeExtensions_U3CAllMethodsU3Em__1_m3568187568 (Il2CppObject * __this /* static, unused */, Type_t * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo Newtonsoft.Json.Utilities.TypeExtensions::<AllMethods>m__2(System.Type,System.Reflection.MethodInfo)
extern "C"  MethodInfo_t * TypeExtensions_U3CAllMethodsU3Em__2_m791920867 (Il2CppObject * __this /* static, unused */, Type_t * ___type0, MethodInfo_t * ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
