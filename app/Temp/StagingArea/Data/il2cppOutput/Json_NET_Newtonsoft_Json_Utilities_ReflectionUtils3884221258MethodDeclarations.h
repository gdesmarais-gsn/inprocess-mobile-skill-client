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

// System.Reflection.PropertyInfo
struct PropertyInfo_t;
// System.Type
struct Type_t;
// System.Object
struct Il2CppObject;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationBinder
struct SerializationBinder_t3985864818;
// System.Reflection.ConstructorInfo
struct ConstructorInfo_t2851816542;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.Collections.Generic.List`1<System.Reflection.MemberInfo>
struct List_1_t3412218392;
// System.Type[]
struct TypeU5BU5D_t1664964607;
// System.Object[]
struct ObjectU5BU5D_t3614634134;
// System.Collections.Generic.IList`1<System.Type>
struct IList_1_t1844743827;
// System.Func`3<System.Type,System.Collections.Generic.IList`1<System.Object>,System.Object>
struct Func_3_t2880746669;
// System.Collections.Generic.IEnumerable`1<System.Reflection.FieldInfo>
struct IEnumerable_1_t547167195;
// System.Collections.Generic.IList`1<System.Reflection.MemberInfo>
struct IList_1_t289070565;
// System.Collections.Generic.IEnumerable`1<System.Reflection.PropertyInfo>
struct IEnumerable_1_t2545856110;
// System.Collections.Generic.IList`1<System.Reflection.PropertyInfo>
struct IList_1_t2794669666;
// <>__AnonType0`2<System.Int32,System.Collections.Generic.IEnumerable`1<System.Reflection.MemberInfo>>
struct U3CU3E__AnonType0_2_t99735840;
// System.Linq.IGrouping`2<System.String,System.Reflection.MemberInfo>
struct IGrouping_2_t288337164;
// System.Collections.Generic.IList`1<System.Object>
struct IList_1_t3230389896;
// System.Reflection.ParameterInfo
struct ParameterInfo_t2249040075;
// System.Reflection.FieldInfo
struct FieldInfo_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Reflection_PropertyInfo2253729065.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_Type1303803226.h"
#include "mscorlib_System_Runtime_Serialization_Formatters_Fo999493661.h"
#include "mscorlib_System_Runtime_Serialization_Serializatio3985864818.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Reflection_MemberInfo4043097260.h"
#include "mscorlib_System_Reflection_BindingFlags1082350898.h"
#include "mscorlib_System_Nullable_1_gen334943763.h"
#include "mscorlib_System_Reflection_ParameterInfo2249040075.h"
#include "mscorlib_System_Reflection_FieldInfo255040150.h"

// System.Boolean Newtonsoft.Json.Utilities.ReflectionUtils::IsVirtual(System.Reflection.PropertyInfo)
extern "C"  bool ReflectionUtils_IsVirtual_m3026503921 (Il2CppObject * __this /* static, unused */, PropertyInfo_t * ___propertyInfo0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type Newtonsoft.Json.Utilities.ReflectionUtils::GetObjectType(System.Object)
extern "C"  Type_t * ReflectionUtils_GetObjectType_m3766971906 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___v0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Newtonsoft.Json.Utilities.ReflectionUtils::GetTypeName(System.Type,System.Runtime.Serialization.Formatters.FormatterAssemblyStyle)
extern "C"  String_t* ReflectionUtils_GetTypeName_m225195023 (Il2CppObject * __this /* static, unused */, Type_t * ___t0, int32_t ___assemblyFormat1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Newtonsoft.Json.Utilities.ReflectionUtils::GetTypeName(System.Type,System.Runtime.Serialization.Formatters.FormatterAssemblyStyle,System.Runtime.Serialization.SerializationBinder)
extern "C"  String_t* ReflectionUtils_GetTypeName_m3133489728 (Il2CppObject * __this /* static, unused */, Type_t * ___t0, int32_t ___assemblyFormat1, SerializationBinder_t3985864818 * ___binder2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Newtonsoft.Json.Utilities.ReflectionUtils::RemoveAssemblyDetails(System.String)
extern "C"  String_t* ReflectionUtils_RemoveAssemblyDetails_m1874215642 (Il2CppObject * __this /* static, unused */, String_t* ___fullyQualifiedTypeName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Utilities.ReflectionUtils::IsInstantiatableType(System.Type)
extern "C"  bool ReflectionUtils_IsInstantiatableType_m434616977 (Il2CppObject * __this /* static, unused */, Type_t * ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Utilities.ReflectionUtils::HasDefaultConstructor(System.Type)
extern "C"  bool ReflectionUtils_HasDefaultConstructor_m3247367303 (Il2CppObject * __this /* static, unused */, Type_t * ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Utilities.ReflectionUtils::HasDefaultConstructor(System.Type,System.Boolean)
extern "C"  bool ReflectionUtils_HasDefaultConstructor_m3411068616 (Il2CppObject * __this /* static, unused */, Type_t * ___t0, bool ___nonPublic1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ConstructorInfo Newtonsoft.Json.Utilities.ReflectionUtils::GetDefaultConstructor(System.Type)
extern "C"  ConstructorInfo_t2851816542 * ReflectionUtils_GetDefaultConstructor_m232432220 (Il2CppObject * __this /* static, unused */, Type_t * ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ConstructorInfo Newtonsoft.Json.Utilities.ReflectionUtils::GetDefaultConstructor(System.Type,System.Boolean)
extern "C"  ConstructorInfo_t2851816542 * ReflectionUtils_GetDefaultConstructor_m793877207 (Il2CppObject * __this /* static, unused */, Type_t * ___t0, bool ___nonPublic1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Utilities.ReflectionUtils::IsNullable(System.Type)
extern "C"  bool ReflectionUtils_IsNullable_m337426509 (Il2CppObject * __this /* static, unused */, Type_t * ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Utilities.ReflectionUtils::IsNullableType(System.Type)
extern "C"  bool ReflectionUtils_IsNullableType_m3274697093 (Il2CppObject * __this /* static, unused */, Type_t * ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type Newtonsoft.Json.Utilities.ReflectionUtils::EnsureNotNullableType(System.Type)
extern "C"  Type_t * ReflectionUtils_EnsureNotNullableType_m2168575144 (Il2CppObject * __this /* static, unused */, Type_t * ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Utilities.ReflectionUtils::IsUnitializedValue(System.Object)
extern "C"  bool ReflectionUtils_IsUnitializedValue_m575063792 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Newtonsoft.Json.Utilities.ReflectionUtils::CreateUnitializedValue(System.Type)
extern "C"  Il2CppObject * ReflectionUtils_CreateUnitializedValue_m3664341434 (Il2CppObject * __this /* static, unused */, Type_t * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Utilities.ReflectionUtils::IsPropertyIndexed(System.Reflection.PropertyInfo)
extern "C"  bool ReflectionUtils_IsPropertyIndexed_m1567272204 (Il2CppObject * __this /* static, unused */, PropertyInfo_t * ___property0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Utilities.ReflectionUtils::ImplementsGenericDefinition(System.Type,System.Type)
extern "C"  bool ReflectionUtils_ImplementsGenericDefinition_m973805745 (Il2CppObject * __this /* static, unused */, Type_t * ___type0, Type_t * ___genericInterfaceDefinition1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Utilities.ReflectionUtils::ImplementsGenericDefinition(System.Type,System.Type,System.Type&)
extern "C"  bool ReflectionUtils_ImplementsGenericDefinition_m2596527766 (Il2CppObject * __this /* static, unused */, Type_t * ___type0, Type_t * ___genericInterfaceDefinition1, Type_t ** ___implementingType2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Utilities.ReflectionUtils::AssignableToTypeName(System.Type,System.String,System.Type&)
extern "C"  bool ReflectionUtils_AssignableToTypeName_m2544980082 (Il2CppObject * __this /* static, unused */, Type_t * ___type0, String_t* ___fullTypeName1, Type_t ** ___match2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Utilities.ReflectionUtils::AssignableToTypeName(System.Type,System.String)
extern "C"  bool ReflectionUtils_AssignableToTypeName_m509994399 (Il2CppObject * __this /* static, unused */, Type_t * ___type0, String_t* ___fullTypeName1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Utilities.ReflectionUtils::InheritsGenericDefinition(System.Type,System.Type)
extern "C"  bool ReflectionUtils_InheritsGenericDefinition_m16539951 (Il2CppObject * __this /* static, unused */, Type_t * ___type0, Type_t * ___genericClassDefinition1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Utilities.ReflectionUtils::InheritsGenericDefinition(System.Type,System.Type,System.Type&)
extern "C"  bool ReflectionUtils_InheritsGenericDefinition_m4022060056 (Il2CppObject * __this /* static, unused */, Type_t * ___type0, Type_t * ___genericClassDefinition1, Type_t ** ___implementingType2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Utilities.ReflectionUtils::InheritsGenericDefinitionInternal(System.Type,System.Type,System.Type&)
extern "C"  bool ReflectionUtils_InheritsGenericDefinitionInternal_m3003957249 (Il2CppObject * __this /* static, unused */, Type_t * ___currentType0, Type_t * ___genericClassDefinition1, Type_t ** ___implementingType2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type Newtonsoft.Json.Utilities.ReflectionUtils::GetCollectionItemType(System.Type)
extern "C"  Type_t * ReflectionUtils_GetCollectionItemType_m3468641863 (Il2CppObject * __this /* static, unused */, Type_t * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Utilities.ReflectionUtils::GetDictionaryKeyValueTypes(System.Type,System.Type&,System.Type&)
extern "C"  void ReflectionUtils_GetDictionaryKeyValueTypes_m1544401431 (Il2CppObject * __this /* static, unused */, Type_t * ___dictionaryType0, Type_t ** ___keyType1, Type_t ** ___valueType2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type Newtonsoft.Json.Utilities.ReflectionUtils::GetDictionaryValueType(System.Type)
extern "C"  Type_t * ReflectionUtils_GetDictionaryValueType_m997748911 (Il2CppObject * __this /* static, unused */, Type_t * ___dictionaryType0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type Newtonsoft.Json.Utilities.ReflectionUtils::GetDictionaryKeyType(System.Type)
extern "C"  Type_t * ReflectionUtils_GetDictionaryKeyType_m1744122983 (Il2CppObject * __this /* static, unused */, Type_t * ___dictionaryType0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type Newtonsoft.Json.Utilities.ReflectionUtils::GetMemberUnderlyingType(System.Reflection.MemberInfo)
extern "C"  Type_t * ReflectionUtils_GetMemberUnderlyingType_m644237740 (Il2CppObject * __this /* static, unused */, MemberInfo_t * ___member0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Utilities.ReflectionUtils::IsIndexedProperty(System.Reflection.MemberInfo)
extern "C"  bool ReflectionUtils_IsIndexedProperty_m2075420715 (Il2CppObject * __this /* static, unused */, MemberInfo_t * ___member0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Utilities.ReflectionUtils::IsIndexedProperty(System.Reflection.PropertyInfo)
extern "C"  bool ReflectionUtils_IsIndexedProperty_m1270120910 (Il2CppObject * __this /* static, unused */, PropertyInfo_t * ___property0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Newtonsoft.Json.Utilities.ReflectionUtils::GetMemberValue(System.Reflection.MemberInfo,System.Object)
extern "C"  Il2CppObject * ReflectionUtils_GetMemberValue_m4134580751 (Il2CppObject * __this /* static, unused */, MemberInfo_t * ___member0, Il2CppObject * ___target1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Utilities.ReflectionUtils::SetMemberValue(System.Reflection.MemberInfo,System.Object,System.Object)
extern "C"  void ReflectionUtils_SetMemberValue_m2305915264 (Il2CppObject * __this /* static, unused */, MemberInfo_t * ___member0, Il2CppObject * ___target1, Il2CppObject * ___value2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Utilities.ReflectionUtils::CanReadMemberValue(System.Reflection.MemberInfo,System.Boolean)
extern "C"  bool ReflectionUtils_CanReadMemberValue_m1010928531 (Il2CppObject * __this /* static, unused */, MemberInfo_t * ___member0, bool ___nonPublic1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Utilities.ReflectionUtils::CanSetMemberValue(System.Reflection.MemberInfo,System.Boolean,System.Boolean)
extern "C"  bool ReflectionUtils_CanSetMemberValue_m3166651356 (Il2CppObject * __this /* static, unused */, MemberInfo_t * ___member0, bool ___nonPublic1, bool ___canSetReadOnly2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<System.Reflection.MemberInfo> Newtonsoft.Json.Utilities.ReflectionUtils::GetFieldsAndProperties(System.Type,System.Reflection.BindingFlags)
extern "C"  List_1_t3412218392 * ReflectionUtils_GetFieldsAndProperties_m4160029132 (Il2CppObject * __this /* static, unused */, Type_t * ___type0, int32_t ___bindingAttr1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Utilities.ReflectionUtils::IsOverridenGenericMember(System.Reflection.MemberInfo,System.Reflection.BindingFlags)
extern "C"  bool ReflectionUtils_IsOverridenGenericMember_m4084407990 (Il2CppObject * __this /* static, unused */, MemberInfo_t * ___memberInfo0, int32_t ___bindingAttr1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Newtonsoft.Json.Utilities.ReflectionUtils::GetNameAndAssessmblyName(System.Type)
extern "C"  String_t* ReflectionUtils_GetNameAndAssessmblyName_m2731657930 (Il2CppObject * __this /* static, unused */, Type_t * ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type Newtonsoft.Json.Utilities.ReflectionUtils::MakeGenericType(System.Type,System.Type[])
extern "C"  Type_t * ReflectionUtils_MakeGenericType_m1048596596 (Il2CppObject * __this /* static, unused */, Type_t * ___genericTypeDefinition0, TypeU5BU5D_t1664964607* ___innerTypes1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Newtonsoft.Json.Utilities.ReflectionUtils::CreateGeneric(System.Type,System.Type,System.Object[])
extern "C"  Il2CppObject * ReflectionUtils_CreateGeneric_m3143694861 (Il2CppObject * __this /* static, unused */, Type_t * ___genericTypeDefinition0, Type_t * ___innerType1, ObjectU5BU5D_t3614634134* ___args2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Newtonsoft.Json.Utilities.ReflectionUtils::CreateGeneric(System.Type,System.Collections.Generic.IList`1<System.Type>,System.Object[])
extern "C"  Il2CppObject * ReflectionUtils_CreateGeneric_m4159859460 (Il2CppObject * __this /* static, unused */, Type_t * ___genericTypeDefinition0, Il2CppObject* ___innerTypes1, ObjectU5BU5D_t3614634134* ___args2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Newtonsoft.Json.Utilities.ReflectionUtils::CreateGeneric(System.Type,System.Collections.Generic.IList`1<System.Type>,System.Func`3<System.Type,System.Collections.Generic.IList`1<System.Object>,System.Object>,System.Object[])
extern "C"  Il2CppObject * ReflectionUtils_CreateGeneric_m4114887904 (Il2CppObject * __this /* static, unused */, Type_t * ___genericTypeDefinition0, Il2CppObject* ___innerTypes1, Func_3_t2880746669 * ___instanceCreator2, ObjectU5BU5D_t3614634134* ___args3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Utilities.ReflectionUtils::IsCompatibleValue(System.Object,System.Type)
extern "C"  bool ReflectionUtils_IsCompatibleValue_m948239271 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___value0, Type_t * ___type1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Newtonsoft.Json.Utilities.ReflectionUtils::CreateInstance(System.Type,System.Object[])
extern "C"  Il2CppObject * ReflectionUtils_CreateInstance_m3373260492 (Il2CppObject * __this /* static, unused */, Type_t * ___type0, ObjectU5BU5D_t3614634134* ___args1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Utilities.ReflectionUtils::SplitFullyQualifiedTypeName(System.String,System.String&,System.String&)
extern "C"  void ReflectionUtils_SplitFullyQualifiedTypeName_m900912184 (Il2CppObject * __this /* static, unused */, String_t* ___fullyQualifiedTypeName0, String_t** ___typeName1, String_t** ___assemblyName2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Nullable`1<System.Int32> Newtonsoft.Json.Utilities.ReflectionUtils::GetAssemblyDelimiterIndex(System.String)
extern "C"  Nullable_1_t334943763  ReflectionUtils_GetAssemblyDelimiterIndex_m759200005 (Il2CppObject * __this /* static, unused */, String_t* ___fullyQualifiedTypeName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MemberInfo Newtonsoft.Json.Utilities.ReflectionUtils::GetMemberInfoFromType(System.Type,System.Reflection.MemberInfo)
extern "C"  MemberInfo_t * ReflectionUtils_GetMemberInfoFromType_m4207089895 (Il2CppObject * __this /* static, unused */, Type_t * ___targetType0, MemberInfo_t * ___memberInfo1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<System.Reflection.FieldInfo> Newtonsoft.Json.Utilities.ReflectionUtils::GetFields(System.Type,System.Reflection.BindingFlags)
extern "C"  Il2CppObject* ReflectionUtils_GetFields_m3374623363 (Il2CppObject * __this /* static, unused */, Type_t * ___targetType0, int32_t ___bindingAttr1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Utilities.ReflectionUtils::GetChildPrivateFields(System.Collections.Generic.IList`1<System.Reflection.MemberInfo>,System.Type,System.Reflection.BindingFlags)
extern "C"  void ReflectionUtils_GetChildPrivateFields_m3771866749 (Il2CppObject * __this /* static, unused */, Il2CppObject* ___initialFields0, Type_t * ___targetType1, int32_t ___bindingAttr2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<System.Reflection.PropertyInfo> Newtonsoft.Json.Utilities.ReflectionUtils::GetProperties(System.Type,System.Reflection.BindingFlags)
extern "C"  Il2CppObject* ReflectionUtils_GetProperties_m346449838 (Il2CppObject * __this /* static, unused */, Type_t * ___targetType0, int32_t ___bindingAttr1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.BindingFlags Newtonsoft.Json.Utilities.ReflectionUtils::RemoveFlag(System.Reflection.BindingFlags,System.Reflection.BindingFlags)
extern "C"  int32_t ReflectionUtils_RemoveFlag_m3870404006 (Il2CppObject * __this /* static, unused */, int32_t ___bindingAttr0, int32_t ___flag1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Utilities.ReflectionUtils::GetChildPrivateProperties(System.Collections.Generic.IList`1<System.Reflection.PropertyInfo>,System.Type,System.Reflection.BindingFlags)
extern "C"  void ReflectionUtils_GetChildPrivateProperties_m3953382156 (Il2CppObject * __this /* static, unused */, Il2CppObject* ___initialProperties0, Type_t * ___targetType1, int32_t ___bindingAttr2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Newtonsoft.Json.Utilities.ReflectionUtils::<GetFieldsAndProperties>m__0(System.Reflection.MemberInfo)
extern "C"  String_t* ReflectionUtils_U3CGetFieldsAndPropertiesU3Em__0_m2222250992 (Il2CppObject * __this /* static, unused */, MemberInfo_t * ___m0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// <>__AnonType0`2<System.Int32,System.Collections.Generic.IEnumerable`1<System.Reflection.MemberInfo>> Newtonsoft.Json.Utilities.ReflectionUtils::<GetFieldsAndProperties>m__1(System.Linq.IGrouping`2<System.String,System.Reflection.MemberInfo>)
extern "C"  U3CU3E__AnonType0_2_t99735840 * ReflectionUtils_U3CGetFieldsAndPropertiesU3Em__1_m1673389030 (Il2CppObject * __this /* static, unused */, Il2CppObject* ___g0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Newtonsoft.Json.Utilities.ReflectionUtils::<CreateGeneric>m__2(System.Type,System.Collections.Generic.IList`1<System.Object>)
extern "C"  Il2CppObject * ReflectionUtils_U3CCreateGenericU3Em__2_m4115422658 (Il2CppObject * __this /* static, unused */, Type_t * ___t0, Il2CppObject* ___a1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type Newtonsoft.Json.Utilities.ReflectionUtils::<GetMemberInfoFromType>m__3(System.Reflection.ParameterInfo)
extern "C"  Type_t * ReflectionUtils_U3CGetMemberInfoFromTypeU3Em__3_m4287998620 (Il2CppObject * __this /* static, unused */, ParameterInfo_t2249040075 * ___p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Utilities.ReflectionUtils::<GetChildPrivateFields>m__4(System.Reflection.FieldInfo)
extern "C"  bool ReflectionUtils_U3CGetChildPrivateFieldsU3Em__4_m3657345542 (Il2CppObject * __this /* static, unused */, FieldInfo_t * ___f0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
