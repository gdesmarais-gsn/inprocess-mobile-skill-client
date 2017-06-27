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
// System.String
struct String_t;
// System.Reflection.MethodInfo[]
struct MethodInfoU5BU5D_t152480188;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// Stm.V1_1.SerializablePrimitive[]
struct SerializablePrimitiveU5BU5D_t100057387;
// System.Type[]
struct TypeU5BU5D_t1664964607;
// System.Object
struct Il2CppObject;
// System.Delegate
struct Delegate_t3022476291;
// System.Reflection.MemberInfo[]
struct MemberInfoU5BU5D_t4238939941;
// UnityEngine.Object
struct Object_t1021602117;
// System.Reflection.Assembly
struct Assembly_t4268412390;
// System.Reflection.MethodBase
struct MethodBase_t904190842;
// System.Reflection.Assembly[]
struct AssemblyU5BU5D_t1984278467;
// System.Object[]
struct ObjectU5BU5D_t3614634134;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;
// System.Reflection.ParameterInfo[]
struct ParameterInfoU5BU5D_t2275869610;
// Stm.V1_1.ReflectionUtil/TargetAndMemberInfo[]
struct TargetAndMemberInfoU5BU5D_t4241498584;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Type1303803226.h"
#include "mscorlib_System_Reflection_BindingFlags1082350898.h"
#include "mscorlib_System_Reflection_MethodInfo3330546337.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_Reflection_Assembly4268412390.h"
#include "mscorlib_System_Reflection_MethodBase904190842.h"

// System.Type Stm.V1_1.ReflectionUtil::GetType(System.String)
extern "C"  Type_t * ReflectionUtil_GetType_m2734580095 (Il2CppObject * __this /* static, unused */, String_t* ___typeName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Stm.V1_1.ReflectionUtil::GetTypeName(System.Type)
extern "C"  String_t* ReflectionUtil_GetTypeName_m2800248894 (Il2CppObject * __this /* static, unused */, Type_t * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo[] Stm.V1_1.ReflectionUtil::GetMethods(System.Type,System.Reflection.BindingFlags)
extern "C"  MethodInfoU5BU5D_t152480188* ReflectionUtil_GetMethods_m2659667756 (Il2CppObject * __this /* static, unused */, Type_t * ___type0, int32_t ___bindingFlags1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo[] Stm.V1_1.ReflectionUtil::GetMethodsMatchingName(System.Type,System.String,System.Reflection.BindingFlags)
extern "C"  MethodInfoU5BU5D_t152480188* ReflectionUtil_GetMethodsMatchingName_m3208908420 (Il2CppObject * __this /* static, unused */, Type_t * ___type0, String_t* ___name1, int32_t ___bindingFlags2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo Stm.V1_1.ReflectionUtil::GetMethodMatchingNameAndArgs(System.Type,System.String,Stm.V1_1.SerializablePrimitive[],System.Reflection.BindingFlags)
extern "C"  MethodInfo_t * ReflectionUtil_GetMethodMatchingNameAndArgs_m1712427158 (Il2CppObject * __this /* static, unused */, Type_t * ___type0, String_t* ___name1, SerializablePrimitiveU5BU5D_t100057387* ___args2, int32_t ___bindingFlags3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Stm.V1_1.ReflectionUtil::DoesMethodMatchArgs(System.Reflection.MethodInfo,Stm.V1_1.SerializablePrimitive[])
extern "C"  bool ReflectionUtil_DoesMethodMatchArgs_m324343663 (Il2CppObject * __this /* static, unused */, MethodInfo_t * ___method0, SerializablePrimitiveU5BU5D_t100057387* ___args1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo Stm.V1_1.ReflectionUtil::GetMethodMatchingNameAndArgs(System.Type,System.String,System.Type,System.Boolean,Stm.V1_1.SerializablePrimitive[],System.Reflection.BindingFlags)
extern "C"  MethodInfo_t * ReflectionUtil_GetMethodMatchingNameAndArgs_m937634754 (Il2CppObject * __this /* static, unused */, Type_t * ___type0, String_t* ___name1, Type_t * ___firstArgType2, bool ___allowUpcast3, SerializablePrimitiveU5BU5D_t100057387* ___otherArgs4, int32_t ___bindingFlags5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Stm.V1_1.ReflectionUtil::DoesMethodMatchArgs(System.Reflection.MethodInfo,System.Type,System.Boolean,Stm.V1_1.SerializablePrimitive[])
extern "C"  bool ReflectionUtil_DoesMethodMatchArgs_m1710786323 (Il2CppObject * __this /* static, unused */, MethodInfo_t * ___method0, Type_t * ___firstArgType1, bool ___allowUpcast2, SerializablePrimitiveU5BU5D_t100057387* ___otherArgs3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo Stm.V1_1.ReflectionUtil::GetMethodMatchingNameAndArgsOfType(System.Type,System.String,System.Type[],System.Reflection.BindingFlags)
extern "C"  MethodInfo_t * ReflectionUtil_GetMethodMatchingNameAndArgsOfType_m2985507627 (Il2CppObject * __this /* static, unused */, Type_t * ___type0, String_t* ___name1, TypeU5BU5D_t1664964607* ___args2, int32_t ___bindingFlags3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Stm.V1_1.ReflectionUtil::DoesMethodMatchArgsOfType(System.Reflection.MethodInfo,System.Type[])
extern "C"  bool ReflectionUtil_DoesMethodMatchArgsOfType_m229808094 (Il2CppObject * __this /* static, unused */, MethodInfo_t * ___method0, TypeU5BU5D_t1664964607* ___args1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Stm.V1_1.ReflectionUtil::ConvertToType(System.Object&,System.Type)
extern "C"  bool ReflectionUtil_ConvertToType_m4171400880 (Il2CppObject * __this /* static, unused */, Il2CppObject ** ___value0, Type_t * ___destinationType1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Stm.V1_1.ReflectionUtil::ConvertComponentOrGameObject(System.Object&,System.Type)
extern "C"  bool ReflectionUtil_ConvertComponentOrGameObject_m2977974392 (Il2CppObject * __this /* static, unused */, Il2CppObject ** ___value0, Type_t * ___destinationType1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate Stm.V1_1.ReflectionUtil::CreateDelegate(System.Type,System.Object,System.Reflection.MethodInfo,System.Object)
extern "C"  Delegate_t3022476291 * ReflectionUtil_CreateDelegate_m2667731351 (Il2CppObject * __this /* static, unused */, Type_t * ___delegateType0, Il2CppObject * ___target1, MethodInfo_t * ___method2, Il2CppObject * ___delObj3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Stm.V1_1.ReflectionUtil::ConvertToBoxingDelegate(System.Object&,System.Reflection.MethodInfo)
extern "C"  bool ReflectionUtil_ConvertToBoxingDelegate_m628903802 (Il2CppObject * __this /* static, unused */, Il2CppObject ** ___delObj0, MethodInfo_t * ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Stm.V1_1.ReflectionUtil::CanConvertToType(System.Type,System.Type,System.Boolean)
extern "C"  bool ReflectionUtil_CanConvertToType_m1435333584 (Il2CppObject * __this /* static, unused */, Type_t * ___sourceType0, Type_t * ___destinationType1, bool ___allowUpcast2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Stm.V1_1.ReflectionUtil::CanInvokeCastType(System.Type,System.Type,System.Boolean,System.Boolean)
extern "C"  bool ReflectionUtil_CanInvokeCastType_m1964169996 (Il2CppObject * __this /* static, unused */, Type_t * ___from0, Type_t * ___to1, bool ___allowBoxing2, bool ___requireExactTypeMatch3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo Stm.V1_1.ReflectionUtil::SignatureMatchingCast(System.Type,System.Type,System.Reflection.MemberInfo[],System.Boolean)
extern "C"  MethodInfo_t * ReflectionUtil_SignatureMatchingCast_m3497427466 (Il2CppObject * __this /* static, unused */, Type_t * ___from0, Type_t * ___to1, MemberInfoU5BU5D_t4238939941* ___methods2, bool ___allowBoxing3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Stm.V1_1.ReflectionUtil::IsIntegerType(System.Type)
extern "C"  bool ReflectionUtil_IsIntegerType_m1539066180 (Il2CppObject * __this /* static, unused */, Type_t * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Stm.V1_1.ReflectionUtil::IsNumericType(System.Type)
extern "C"  bool ReflectionUtil_IsNumericType_m1611716945 (Il2CppObject * __this /* static, unused */, Type_t * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Object Stm.V1_1.ReflectionUtil::InstanceIDToObject(System.Int32,System.Type)
extern "C"  Object_t1021602117 * ReflectionUtil_InstanceIDToObject_m2404092704 (Il2CppObject * __this /* static, unused */, int32_t ___instanceID0, Type_t * ___type1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type Stm.V1_1.ReflectionUtil::FindType(System.String)
extern "C"  Type_t * ReflectionUtil_FindType_m3176624092 (Il2CppObject * __this /* static, unused */, String_t* ___typeName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type[] Stm.V1_1.ReflectionUtil::GetTypesInAssembly(System.Reflection.Assembly)
extern "C"  TypeU5BU5D_t1664964607* ReflectionUtil_GetTypesInAssembly_m3934039317 (Il2CppObject * __this /* static, unused */, Assembly_t4268412390 * ___assembly0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type Stm.V1_1.ReflectionUtil::FindTypeInAssembly(System.Reflection.Assembly,System.String,System.Boolean,System.Boolean,System.String,System.Boolean)
extern "C"  Type_t * ReflectionUtil_FindTypeInAssembly_m2764961328 (Il2CppObject * __this /* static, unused */, Assembly_t4268412390 * ___assembly0, String_t* ___typeName1, bool ___allowNestedTypes2, bool ___caseInsensitive3, String_t* ___namespaceName4, bool ___allowPartialNamespaceMatch5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Stm.V1_1.ReflectionUtil::RegisterGenericTypeUnsafe(System.Type)
extern "C"  void ReflectionUtil_RegisterGenericTypeUnsafe_m4182412224 (Il2CppObject * __this /* static, unused */, Type_t * ___closedGenericType0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type Stm.V1_1.ReflectionUtil::MakeGenericType(System.Type,System.Type[])
extern "C"  Type_t * ReflectionUtil_MakeGenericType_m4231223092 (Il2CppObject * __this /* static, unused */, Type_t * ___openGenericType0, TypeU5BU5D_t1664964607* ___typesArgs1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type Stm.V1_1.ReflectionUtil::MakeDelegateType(System.Reflection.MethodBase)
extern "C"  Type_t * ReflectionUtil_MakeDelegateType_m1474796162 (Il2CppObject * __this /* static, unused */, MethodBase_t904190842 * ___method0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Stm.V1_1.ReflectionUtil::CalculateTypesHash(System.Type,System.Type[])
extern "C"  int32_t ReflectionUtil_CalculateTypesHash_m3705842362 (Il2CppObject * __this /* static, unused */, Type_t * ___baseType0, TypeU5BU5D_t1664964607* ___types1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Stm.V1_1.ReflectionUtil::InitGenericTypeCache()
extern "C"  void ReflectionUtil_InitGenericTypeCache_m754776636 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Stm.V1_1.ReflectionUtil::CacheAllAssemblies()
extern "C"  void ReflectionUtil_CacheAllAssemblies_m1438230782 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly[] Stm.V1_1.ReflectionUtil::get_AllAssemblies()
extern "C"  AssemblyU5BU5D_t1984278467* ReflectionUtil_get_AllAssemblies_m2727186862 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type[] Stm.V1_1.ReflectionUtil::FindTypesImplementing(System.Type)
extern "C"  TypeU5BU5D_t1664964607* ReflectionUtil_FindTypesImplementing_m725993471 (Il2CppObject * __this /* static, unused */, Type_t * ___interfaceType0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type[] Stm.V1_1.ReflectionUtil::FindTypesInheriting(System.Type)
extern "C"  TypeU5BU5D_t1664964607* ReflectionUtil_FindTypesInheriting_m4169799573 (Il2CppObject * __this /* static, unused */, Type_t * ___baseType0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Stm.V1_1.ReflectionUtil::StaticCleanup()
extern "C"  void ReflectionUtil_StaticCleanup_m1886633631 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Stm.V1_1.ReflectionUtil::Eval(System.String,System.Object,System.Type,System.Int32,System.Int32)
extern "C"  Il2CppObject * ReflectionUtil_Eval_m2727810867 (Il2CppObject * __this /* static, unused */, String_t* ___command0, Il2CppObject * ___target1, Type_t * ___expectedType2, int32_t ___startIndex3, int32_t ___endIndex4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Stm.V1_1.ReflectionUtil::ToCommaSeparatedCommandString(System.Object[])
extern "C"  String_t* ReflectionUtil_ToCommaSeparatedCommandString_m2634022375 (Il2CppObject * __this /* static, unused */, ObjectU5BU5D_t3614634134* ___objects0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Stm.V1_1.ReflectionUtil::ToSeparatedCommandString(System.String,System.Object[])
extern "C"  String_t* ReflectionUtil_ToSeparatedCommandString_m11021704 (Il2CppObject * __this /* static, unused */, String_t* ___separator0, ObjectU5BU5D_t3614634134* ___objects1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Stm.V1_1.ReflectionUtil::ToCommandString(System.Object)
extern "C"  String_t* ReflectionUtil_ToCommandString_m2596924805 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___o0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Stm.V1_1.ReflectionUtil::EvalIfStatement(System.String,System.Object,System.Int32&,System.Int32)
extern "C"  Il2CppObject * ReflectionUtil_EvalIfStatement_m4055954978 (Il2CppObject * __this /* static, unused */, String_t* ___command0, Il2CppObject * ___target1, int32_t* ___startIndex2, int32_t ___endIndex3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Stm.V1_1.ReflectionUtil::EvalWhileStatement(System.String,System.Object,System.Int32&,System.Int32)
extern "C"  Il2CppObject * ReflectionUtil_EvalWhileStatement_m2661982562 (Il2CppObject * __this /* static, unused */, String_t* ___command0, Il2CppObject * ___target1, int32_t* ___startIndex2, int32_t ___endIndex3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Stm.V1_1.ReflectionUtil::EvalAfter(System.Object,System.String,System.Object,System.Type,System.Int32,System.Int32,System.Boolean)
extern "C"  Il2CppObject * ReflectionUtil_EvalAfter_m3038816505 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___yieldInstruction0, String_t* ___command1, Il2CppObject * ___target2, Type_t * ___expectedType3, int32_t ___startIndex4, int32_t ___endIndex5, bool ___waitForChain6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Stm.V1_1.ReflectionUtil::WrappedConvertToType(System.Object&,System.Type)
extern "C"  bool ReflectionUtil_WrappedConvertToType_m1953518729 (Il2CppObject * __this /* static, unused */, Il2CppObject ** ___target0, Type_t * ___expectedType1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Stm.V1_1.ReflectionUtil::CountUnassignedGenericArguments(System.Reflection.MethodBase)
extern "C"  int32_t ReflectionUtil_CountUnassignedGenericArguments_m934908624 (Il2CppObject * __this /* static, unused */, MethodBase_t904190842 * ___member0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Stm.V1_1.ReflectionUtil::CountUnassignedGenericArguments(System.Type)
extern "C"  int32_t ReflectionUtil_CountUnassignedGenericArguments_m2060543399 (Il2CppObject * __this /* static, unused */, Type_t * ___member0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type Stm.V1_1.ReflectionUtil::ChooseClosestTypeMatch(System.Reflection.MemberInfo[],System.String)
extern "C"  Type_t * ReflectionUtil_ChooseClosestTypeMatch_m4196866404 (Il2CppObject * __this /* static, unused */, MemberInfoU5BU5D_t4238939941* ___members0, String_t* ___requestedName1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] Stm.V1_1.ReflectionUtil::EvalArgs(System.Object,System.String,System.Int32,System.Int32,System.Object,System.Boolean,System.Char,System.Type,System.Boolean,System.Boolean)
extern "C"  ObjectU5BU5D_t3614634134* ReflectionUtil_EvalArgs_m3901204176 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___target0, String_t* ___command1, int32_t ___startIndex2, int32_t ___endIndex3, Il2CppObject * ___firstArg4, bool ___useFirstArg5, Il2CppChar ___commaChar6, Type_t * ___expectedType7, bool ___assumeMatchingAngledBrackets8, bool ___set_last_EvalArgs_targetAndMemberInfos9, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Stm.V1_1.ReflectionUtil::DoesMethodMatchArgsDirect(System.Reflection.MethodBase,System.Object[],System.Boolean)
extern "C"  bool ReflectionUtil_DoesMethodMatchArgsDirect_m1975819959 (Il2CppObject * __this /* static, unused */, MethodBase_t904190842 * ___method0, ObjectU5BU5D_t3614634134* ___args1, bool ___allowImplicitConversions2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Stm.V1_1.ReflectionUtil::DoesMethodMatchArgsDirect(System.Reflection.ParameterInfo[],System.Object[],System.Boolean)
extern "C"  bool ReflectionUtil_DoesMethodMatchArgsDirect_m615382574 (Il2CppObject * __this /* static, unused */, ParameterInfoU5BU5D_t2275869610* ___paramInfos0, ObjectU5BU5D_t3614634134* ___args1, bool ___allowImplicitConversions2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Stm.V1_1.ReflectionUtil::DoesMethodMatchArgsWithDefaults(System.Reflection.MethodBase,System.Object[],System.Boolean)
extern "C"  bool ReflectionUtil_DoesMethodMatchArgsWithDefaults_m267528854 (Il2CppObject * __this /* static, unused */, MethodBase_t904190842 * ___method0, ObjectU5BU5D_t3614634134* ___args1, bool ___allowImplicitConversions2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Stm.V1_1.ReflectionUtil::DoesMethodMatchArgsWithDefaults(System.Reflection.ParameterInfo[],System.Object[],System.Boolean)
extern "C"  bool ReflectionUtil_DoesMethodMatchArgsWithDefaults_m2072728555 (Il2CppObject * __this /* static, unused */, ParameterInfoU5BU5D_t2275869610* ___paramInfos0, ObjectU5BU5D_t3614634134* ___args1, bool ___allowImplicitConversions2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] Stm.V1_1.ReflectionUtil::ExtendArgs(System.Object[],System.Reflection.MethodBase)
extern "C"  ObjectU5BU5D_t3614634134* ReflectionUtil_ExtendArgs_m2468365405 (Il2CppObject * __this /* static, unused */, ObjectU5BU5D_t3614634134* ___args0, MethodBase_t904190842 * ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] Stm.V1_1.ReflectionUtil::ExtendArgs(System.Object[],System.Reflection.ParameterInfo[])
extern "C"  ObjectU5BU5D_t3614634134* ReflectionUtil_ExtendArgs_m2039540066 (Il2CppObject * __this /* static, unused */, ObjectU5BU5D_t3614634134* ___args0, ParameterInfoU5BU5D_t2275869610* ___paramInfos1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Stm.V1_1.ReflectionUtil::DoesMethodMatchSignature(System.Reflection.MethodInfo,System.Reflection.MethodInfo)
extern "C"  bool ReflectionUtil_DoesMethodMatchSignature_m426598832 (Il2CppObject * __this /* static, unused */, MethodInfo_t * ___method0, MethodInfo_t * ___signature1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Stm.V1_1.ReflectionUtil::ApplyByRefArgChanges(System.Reflection.MethodBase,System.Object[],Stm.V1_1.ReflectionUtil/TargetAndMemberInfo[])
extern "C"  bool ReflectionUtil_ApplyByRefArgChanges_m1718776837 (Il2CppObject * __this /* static, unused */, MethodBase_t904190842 * ___method0, ObjectU5BU5D_t3614634134* ___values1, TargetAndMemberInfoU5BU5D_t4241498584* ___targetAndMemberInfos2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MemberInfo[] Stm.V1_1.ReflectionUtil::GetTypeMember(System.Type,System.String,System.Reflection.BindingFlags)
extern "C"  MemberInfoU5BU5D_t4238939941* ReflectionUtil_GetTypeMember_m1530338265 (Il2CppObject * __this /* static, unused */, Type_t * ___type0, String_t* ___identifier1, int32_t ___bindingFlags2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MemberInfo[] Stm.V1_1.ReflectionUtil::GetTypeMember(System.Type,System.String,System.Reflection.BindingFlags,System.Boolean&)
extern "C"  MemberInfoU5BU5D_t4238939941* ReflectionUtil_GetTypeMember_m3328327996 (Il2CppObject * __this /* static, unused */, Type_t * ___type0, String_t* ___identifier1, int32_t ___bindingFlags2, bool* ___imperfectMatch3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MemberInfo[] Stm.V1_1.ReflectionUtil::GetBuiltinMembers(System.Type,System.String,System.Reflection.BindingFlags)
extern "C"  MemberInfoU5BU5D_t4238939941* ReflectionUtil_GetBuiltinMembers_m862900579 (Il2CppObject * __this /* static, unused */, Type_t * ___type0, String_t* ___identifier1, int32_t ___bindingFlags2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MemberInfo[] Stm.V1_1.ReflectionUtil::GetTypeConstructors(System.Type,System.Object[]&)
extern "C"  MemberInfoU5BU5D_t4238939941* ReflectionUtil_GetTypeConstructors_m2894835128 (Il2CppObject * __this /* static, unused */, Type_t * ___type0, ObjectU5BU5D_t3614634134** ___args1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Stm.V1_1.ReflectionUtil::GetOperandEndIndex(System.String,System.Int32,System.Int32,System.String)
extern "C"  int32_t ReflectionUtil_GetOperandEndIndex_m4276316177 (Il2CppObject * __this /* static, unused */, String_t* ___command0, int32_t ___startIndex1, int32_t ___endIndex2, String_t* ___op3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Stm.V1_1.ReflectionUtil::GetOpPrecedenceFromMethodName(System.String)
extern "C"  int32_t ReflectionUtil_GetOpPrecedenceFromMethodName_m2932128246 (Il2CppObject * __this /* static, unused */, String_t* ___op0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Stm.V1_1.ReflectionUtil::OperatorSymbolToMethodName(System.String,System.Int32,System.Int32,System.Boolean,System.Boolean,System.String&)
extern "C"  int32_t ReflectionUtil_OperatorSymbolToMethodName_m4009691640 (Il2CppObject * __this /* static, unused */, String_t* ___command0, int32_t ___startIndex1, int32_t ___endIndex2, bool ___binary3, bool ___unary4, String_t** ___identifier5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Stm.V1_1.ReflectionUtil::StaticCleanupPart2()
extern "C"  void ReflectionUtil_StaticCleanupPart2_m2262423436 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
