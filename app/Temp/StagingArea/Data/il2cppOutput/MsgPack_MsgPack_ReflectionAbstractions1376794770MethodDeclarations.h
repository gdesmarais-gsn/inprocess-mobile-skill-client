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
// System.Reflection.Assembly
struct Assembly_t4268412390;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.Reflection.CustomAttributeData
struct CustomAttributeData_t3093286891;
// System.String
struct String_t;
// System.Reflection.AssemblyName
struct AssemblyName_t894705941;
// System.Collections.Generic.IEnumerable`1<System.Reflection.CustomAttributeData>
struct IEnumerable_1_t3385413936;
// System.Collections.Generic.IEnumerable`1<System.Reflection.CustomAttributeNamedArgument>
struct IEnumerable_1_t386284588;
// System.Reflection.ParameterInfo
struct ParameterInfo_t2249040075;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Type1303803226.h"
#include "mscorlib_System_Reflection_MemberInfo4043097260.h"
#include "mscorlib_System_Reflection_CustomAttributeData3093286891.h"
#include "mscorlib_System_Reflection_CustomAttributeNamedArgum94157543.h"
#include "mscorlib_System_Reflection_AssemblyName894705941.h"
#include "mscorlib_System_Reflection_CustomAttributeTypedArg1498197914.h"
#include "mscorlib_System_Reflection_ParameterInfo2249040075.h"

// System.Boolean MsgPack.ReflectionAbstractions::GetIsValueType(System.Type)
extern "C"  bool ReflectionAbstractions_GetIsValueType_m907768885 (Il2CppObject * __this /* static, unused */, Type_t * ___source0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MsgPack.ReflectionAbstractions::GetIsEnum(System.Type)
extern "C"  bool ReflectionAbstractions_GetIsEnum_m3044856305 (Il2CppObject * __this /* static, unused */, Type_t * ___source0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MsgPack.ReflectionAbstractions::GetIsInterface(System.Type)
extern "C"  bool ReflectionAbstractions_GetIsInterface_m2648927319 (Il2CppObject * __this /* static, unused */, Type_t * ___source0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MsgPack.ReflectionAbstractions::GetIsAbstract(System.Type)
extern "C"  bool ReflectionAbstractions_GetIsAbstract_m693111454 (Il2CppObject * __this /* static, unused */, Type_t * ___source0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MsgPack.ReflectionAbstractions::GetIsGenericType(System.Type)
extern "C"  bool ReflectionAbstractions_GetIsGenericType_m4226608263 (Il2CppObject * __this /* static, unused */, Type_t * ___source0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MsgPack.ReflectionAbstractions::GetIsGenericTypeDefinition(System.Type)
extern "C"  bool ReflectionAbstractions_GetIsGenericTypeDefinition_m2130451688 (Il2CppObject * __this /* static, unused */, Type_t * ___source0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly MsgPack.ReflectionAbstractions::GetAssembly(System.Type)
extern "C"  Assembly_t4268412390 * ReflectionAbstractions_GetAssembly_m125655337 (Il2CppObject * __this /* static, unused */, Type_t * ___source0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MsgPack.ReflectionAbstractions::IsDefined(System.Reflection.MemberInfo,System.Type)
extern "C"  bool ReflectionAbstractions_IsDefined_m3785051349 (Il2CppObject * __this /* static, unused */, MemberInfo_t * ___source0, Type_t * ___attributeType1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type MsgPack.ReflectionAbstractions::GetAttributeType(System.Reflection.CustomAttributeData)
extern "C"  Type_t * ReflectionAbstractions_GetAttributeType_m2045590370 (Il2CppObject * __this /* static, unused */, CustomAttributeData_t3093286891 * ___source0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String MsgPack.ReflectionAbstractions::GetMemberName(System.Reflection.CustomAttributeNamedArgument)
extern "C"  String_t* ReflectionAbstractions_GetMemberName_m578009462 (Il2CppObject * __this /* static, unused */, CustomAttributeNamedArgument_t94157543  ___source0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String MsgPack.ReflectionAbstractions::GetCultureName(System.Reflection.AssemblyName)
extern "C"  String_t* ReflectionAbstractions_GetCultureName_m3200235070 (Il2CppObject * __this /* static, unused */, AssemblyName_t894705941 * ___source0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<System.Reflection.CustomAttributeData> MsgPack.ReflectionAbstractions::GetCustomAttributesData(System.Reflection.MemberInfo)
extern "C"  Il2CppObject* ReflectionAbstractions_GetCustomAttributesData_m2093782844 (Il2CppObject * __this /* static, unused */, MemberInfo_t * ___source0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<System.Reflection.CustomAttributeNamedArgument> MsgPack.ReflectionAbstractions::GetNamedArguments(System.Reflection.CustomAttributeData)
extern "C"  Il2CppObject* ReflectionAbstractions_GetNamedArguments_m3703241724 (Il2CppObject * __this /* static, unused */, CustomAttributeData_t3093286891 * ___source0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.CustomAttributeTypedArgument MsgPack.ReflectionAbstractions::GetTypedValue(System.Reflection.CustomAttributeNamedArgument)
extern "C"  CustomAttributeTypedArgument_t1498197914  ReflectionAbstractions_GetTypedValue_m2765090786 (Il2CppObject * __this /* static, unused */, CustomAttributeNamedArgument_t94157543  ___source0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MsgPack.ReflectionAbstractions::GetHasDefaultValue(System.Reflection.ParameterInfo)
extern "C"  bool ReflectionAbstractions_GetHasDefaultValue_m1458661790 (Il2CppObject * __this /* static, unused */, ParameterInfo_t2249040075 * ___source0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MsgPack.ReflectionAbstractions::.cctor()
extern "C"  void ReflectionAbstractions__cctor_m2449272436 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
