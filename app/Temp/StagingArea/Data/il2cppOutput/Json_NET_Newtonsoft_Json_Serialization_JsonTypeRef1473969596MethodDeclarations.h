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

// Newtonsoft.Json.JsonContainerAttribute
struct JsonContainerAttribute_t47210975;
// System.Type
struct Type_t;
// Newtonsoft.Json.JsonObjectAttribute
struct JsonObjectAttribute_t162755825;
// Newtonsoft.Json.JsonArrayAttribute
struct JsonArrayAttribute_t3639750789;
// System.Runtime.Serialization.DataContractAttribute
struct DataContractAttribute_t3332255060;
// System.Runtime.Serialization.DataMemberAttribute
struct DataMemberAttribute_t2677019114;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.Reflection.ICustomAttributeProvider
struct ICustomAttributeProvider_t502202687;
// Newtonsoft.Json.JsonConverter
struct JsonConverter_t1964060750;
// System.ComponentModel.TypeConverter
struct TypeConverter_t745995970;
// Newtonsoft.Json.Utilities.ReflectionDelegateFactory
struct ReflectionDelegateFactory_t2294713146;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Type1303803226.h"
#include "mscorlib_System_Reflection_MemberInfo4043097260.h"
#include "Json_NET_Newtonsoft_Json_MemberSerialization687984360.h"

// Newtonsoft.Json.JsonContainerAttribute Newtonsoft.Json.Serialization.JsonTypeReflector::GetJsonContainerAttribute(System.Type)
extern "C"  JsonContainerAttribute_t47210975 * JsonTypeReflector_GetJsonContainerAttribute_m1094759448 (Il2CppObject * __this /* static, unused */, Type_t * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.JsonObjectAttribute Newtonsoft.Json.Serialization.JsonTypeReflector::GetJsonObjectAttribute(System.Type)
extern "C"  JsonObjectAttribute_t162755825 * JsonTypeReflector_GetJsonObjectAttribute_m513225400 (Il2CppObject * __this /* static, unused */, Type_t * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.JsonArrayAttribute Newtonsoft.Json.Serialization.JsonTypeReflector::GetJsonArrayAttribute(System.Type)
extern "C"  JsonArrayAttribute_t3639750789 * JsonTypeReflector_GetJsonArrayAttribute_m3195532456 (Il2CppObject * __this /* static, unused */, Type_t * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Serialization.DataContractAttribute Newtonsoft.Json.Serialization.JsonTypeReflector::GetDataContractAttribute(System.Type)
extern "C"  DataContractAttribute_t3332255060 * JsonTypeReflector_GetDataContractAttribute_m3352004860 (Il2CppObject * __this /* static, unused */, Type_t * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Serialization.DataMemberAttribute Newtonsoft.Json.Serialization.JsonTypeReflector::GetDataMemberAttribute(System.Reflection.MemberInfo)
extern "C"  DataMemberAttribute_t2677019114 * JsonTypeReflector_GetDataMemberAttribute_m3952600087 (Il2CppObject * __this /* static, unused */, MemberInfo_t * ___memberInfo0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.MemberSerialization Newtonsoft.Json.Serialization.JsonTypeReflector::GetObjectMemberSerialization(System.Type)
extern "C"  int32_t JsonTypeReflector_GetObjectMemberSerialization_m2563388787 (Il2CppObject * __this /* static, unused */, Type_t * ___objectType0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type Newtonsoft.Json.Serialization.JsonTypeReflector::GetJsonConverterType(System.Reflection.ICustomAttributeProvider)
extern "C"  Type_t * JsonTypeReflector_GetJsonConverterType_m680690446 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___attributeProvider0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type Newtonsoft.Json.Serialization.JsonTypeReflector::GetJsonConverterTypeFromAttribute(System.Reflection.ICustomAttributeProvider)
extern "C"  Type_t * JsonTypeReflector_GetJsonConverterTypeFromAttribute_m2740374906 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___attributeProvider0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.JsonConverter Newtonsoft.Json.Serialization.JsonTypeReflector::GetJsonConverter(System.Reflection.ICustomAttributeProvider,System.Type)
extern "C"  JsonConverter_t1964060750 * JsonTypeReflector_GetJsonConverter_m825864143 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___attributeProvider0, Type_t * ___targetConvertedType1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.TypeConverter Newtonsoft.Json.Serialization.JsonTypeReflector::GetTypeConverter(System.Type)
extern "C"  TypeConverter_t745995970 * JsonTypeReflector_GetTypeConverter_m15773196 (Il2CppObject * __this /* static, unused */, Type_t * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type Newtonsoft.Json.Serialization.JsonTypeReflector::GetAssociatedMetadataType(System.Type)
extern "C"  Type_t * JsonTypeReflector_GetAssociatedMetadataType_m35133027 (Il2CppObject * __this /* static, unused */, Type_t * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type Newtonsoft.Json.Serialization.JsonTypeReflector::GetAssociateMetadataTypeFromAttribute(System.Type)
extern "C"  Type_t * JsonTypeReflector_GetAssociateMetadataTypeFromAttribute_m3933513725 (Il2CppObject * __this /* static, unused */, Type_t * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type Newtonsoft.Json.Serialization.JsonTypeReflector::GetMetadataTypeAttributeType()
extern "C"  Type_t * JsonTypeReflector_GetMetadataTypeAttributeType_m3588209558 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Serialization.JsonTypeReflector::get_DynamicCodeGeneration()
extern "C"  bool JsonTypeReflector_get_DynamicCodeGeneration_m3532668946 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Utilities.ReflectionDelegateFactory Newtonsoft.Json.Serialization.JsonTypeReflector::get_ReflectionDelegateFactory()
extern "C"  ReflectionDelegateFactory_t2294713146 * JsonTypeReflector_get_ReflectionDelegateFactory_m603031886 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.JsonTypeReflector::.cctor()
extern "C"  void JsonTypeReflector__cctor_m1556651398 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
