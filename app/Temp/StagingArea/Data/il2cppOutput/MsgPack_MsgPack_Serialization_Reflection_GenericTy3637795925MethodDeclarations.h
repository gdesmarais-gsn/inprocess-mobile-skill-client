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

// System.Type
struct Type_t;
// System.Collections.Generic.IEnumerable`1<System.Type>
struct IEnumerable_1_t1595930271;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Type1303803226.h"

// System.Boolean MsgPack.Serialization.Reflection.GenericTypeExtensions::Implements(System.Type,System.Type)
extern "C"  bool GenericTypeExtensions_Implements_m508390455 (Il2CppObject * __this /* static, unused */, Type_t * ___source0, Type_t * ___genericType1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<System.Type> MsgPack.Serialization.Reflection.GenericTypeExtensions::EnumerateGenericIntefaces(System.Type,System.Type,System.Boolean)
extern "C"  Il2CppObject* GenericTypeExtensions_EnumerateGenericIntefaces_m1866106084 (Il2CppObject * __this /* static, unused */, Type_t * ___source0, Type_t * ___genericType1, bool ___includesOwn2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String MsgPack.Serialization.Reflection.GenericTypeExtensions::GetFullName(System.Type)
extern "C"  String_t* GenericTypeExtensions_GetFullName_m1668722007 (Il2CppObject * __this /* static, unused */, Type_t * ___source0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String MsgPack.Serialization.Reflection.GenericTypeExtensions::<GetFullName>b__6(System.Type)
extern "C"  String_t* GenericTypeExtensions_U3CGetFullNameU3Eb__6_m2670000653 (Il2CppObject * __this /* static, unused */, Type_t * ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
