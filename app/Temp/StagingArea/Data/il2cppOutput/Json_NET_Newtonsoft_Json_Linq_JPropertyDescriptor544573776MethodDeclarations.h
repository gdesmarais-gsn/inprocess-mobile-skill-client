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

// Newtonsoft.Json.Linq.JPropertyDescriptor
struct JPropertyDescriptor_t544573776;
// System.String
struct String_t;
// System.Type
struct Type_t;
// Newtonsoft.Json.Linq.JObject
struct JObject_t278519297;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Type1303803226.h"
#include "mscorlib_System_Object2689449295.h"

// System.Void Newtonsoft.Json.Linq.JPropertyDescriptor::.ctor(System.String,System.Type)
extern "C"  void JPropertyDescriptor__ctor_m2160287794 (JPropertyDescriptor_t544573776 * __this, String_t* ___name0, Type_t * ___propertyType1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Linq.JObject Newtonsoft.Json.Linq.JPropertyDescriptor::CastInstance(System.Object)
extern "C"  JObject_t278519297 * JPropertyDescriptor_CastInstance_m2196694812 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___instance0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Linq.JPropertyDescriptor::CanResetValue(System.Object)
extern "C"  bool JPropertyDescriptor_CanResetValue_m1772873783 (JPropertyDescriptor_t544573776 * __this, Il2CppObject * ___component0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Newtonsoft.Json.Linq.JPropertyDescriptor::GetValue(System.Object)
extern "C"  Il2CppObject * JPropertyDescriptor_GetValue_m337496565 (JPropertyDescriptor_t544573776 * __this, Il2CppObject * ___component0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JPropertyDescriptor::ResetValue(System.Object)
extern "C"  void JPropertyDescriptor_ResetValue_m3783409119 (JPropertyDescriptor_t544573776 * __this, Il2CppObject * ___component0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JPropertyDescriptor::SetValue(System.Object,System.Object)
extern "C"  void JPropertyDescriptor_SetValue_m1012995378 (JPropertyDescriptor_t544573776 * __this, Il2CppObject * ___component0, Il2CppObject * ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Linq.JPropertyDescriptor::ShouldSerializeValue(System.Object)
extern "C"  bool JPropertyDescriptor_ShouldSerializeValue_m2290718125 (JPropertyDescriptor_t544573776 * __this, Il2CppObject * ___component0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type Newtonsoft.Json.Linq.JPropertyDescriptor::get_ComponentType()
extern "C"  Type_t * JPropertyDescriptor_get_ComponentType_m603387321 (JPropertyDescriptor_t544573776 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Linq.JPropertyDescriptor::get_IsReadOnly()
extern "C"  bool JPropertyDescriptor_get_IsReadOnly_m1066594298 (JPropertyDescriptor_t544573776 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type Newtonsoft.Json.Linq.JPropertyDescriptor::get_PropertyType()
extern "C"  Type_t * JPropertyDescriptor_get_PropertyType_m618354697 (JPropertyDescriptor_t544573776 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Newtonsoft.Json.Linq.JPropertyDescriptor::get_NameHashCode()
extern "C"  int32_t JPropertyDescriptor_get_NameHashCode_m3964116058 (JPropertyDescriptor_t544573776 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
