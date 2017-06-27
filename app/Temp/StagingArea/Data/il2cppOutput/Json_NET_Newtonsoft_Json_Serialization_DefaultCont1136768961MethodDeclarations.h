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

// Newtonsoft.Json.Serialization.DefaultContractResolver
struct DefaultContractResolver_t1136768961;
// Newtonsoft.Json.Serialization.IContractResolver
struct IContractResolver_t614887283;
// Newtonsoft.Json.Serialization.JsonContract
struct JsonContract_t1566984540;
// System.Type
struct Type_t;
// System.Collections.Generic.List`1<System.Reflection.MemberInfo>
struct List_1_t3412218392;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// Newtonsoft.Json.Serialization.JsonObjectContract
struct JsonObjectContract_t2091736265;
// System.Reflection.ConstructorInfo
struct ConstructorInfo_t2851816542;
// System.Collections.Generic.IList`1<Newtonsoft.Json.Serialization.JsonProperty>
struct IList_1_t3253008426;
// Newtonsoft.Json.Serialization.JsonPropertyCollection
struct JsonPropertyCollection_t3302934105;
// Newtonsoft.Json.Serialization.JsonProperty
struct JsonProperty_t2712067825;
// System.Reflection.ParameterInfo
struct ParameterInfo_t2249040075;
// Newtonsoft.Json.JsonConverter
struct JsonConverter_t1964060750;
// System.Func`1<System.Object>
struct Func_1_t348874681;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// Newtonsoft.Json.Serialization.JsonDictionaryContract
struct JsonDictionaryContract_t3573211912;
// Newtonsoft.Json.Serialization.JsonArrayContract
struct JsonArrayContract_t2625589241;
// Newtonsoft.Json.Serialization.JsonPrimitiveContract
struct JsonPrimitiveContract_t2604782005;
// Newtonsoft.Json.Serialization.JsonLinqContract
struct JsonLinqContract_t3556659186;
// Newtonsoft.Json.Serialization.JsonISerializableContract
struct JsonISerializableContract_t122701872;
// Newtonsoft.Json.Serialization.JsonStringContract
struct JsonStringContract_t2979008531;
// System.Reflection.ParameterInfo[]
struct ParameterInfoU5BU5D_t2275869610;
// System.String
struct String_t;
// Newtonsoft.Json.Serialization.IValueProvider
struct IValueProvider_t561708391;
// System.Reflection.ICustomAttributeProvider
struct ICustomAttributeProvider_t502202687;
// System.Predicate`1<System.Object>
struct Predicate_1_t1132419410;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Reflection_BindingFlags1082350898.h"
#include "mscorlib_System_Type1303803226.h"
#include "mscorlib_System_Reflection_MemberInfo4043097260.h"
#include "mscorlib_System_Reflection_ConstructorInfo2851816542.h"
#include "Json_NET_Newtonsoft_Json_Serialization_JsonPropert3302934105.h"
#include "Json_NET_Newtonsoft_Json_Serialization_JsonPropert2712067825.h"
#include "mscorlib_System_Reflection_ParameterInfo2249040075.h"
#include "Json_NET_Newtonsoft_Json_Serialization_JsonContrac1566984540.h"
#include "mscorlib_System_Reflection_MethodInfo3330546337.h"
#include "Json_NET_Newtonsoft_Json_MemberSerialization687984360.h"
#include "mscorlib_System_String2029220233.h"

// System.Void Newtonsoft.Json.Serialization.DefaultContractResolver::.ctor()
extern "C"  void DefaultContractResolver__ctor_m1543930582 (DefaultContractResolver_t1136768961 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.DefaultContractResolver::.ctor(System.Boolean)
extern "C"  void DefaultContractResolver__ctor_m874701997 (DefaultContractResolver_t1136768961 * __this, bool ___shareCache0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Serialization.IContractResolver Newtonsoft.Json.Serialization.DefaultContractResolver::get_Instance()
extern "C"  Il2CppObject * DefaultContractResolver_get_Instance_m1206602687 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Serialization.DefaultContractResolver::get_DynamicCodeGeneration()
extern "C"  bool DefaultContractResolver_get_DynamicCodeGeneration_m2553941605 (DefaultContractResolver_t1136768961 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.BindingFlags Newtonsoft.Json.Serialization.DefaultContractResolver::get_DefaultMembersSearchFlags()
extern "C"  int32_t DefaultContractResolver_get_DefaultMembersSearchFlags_m833451789 (DefaultContractResolver_t1136768961 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.DefaultContractResolver::set_DefaultMembersSearchFlags(System.Reflection.BindingFlags)
extern "C"  void DefaultContractResolver_set_DefaultMembersSearchFlags_m573860416 (DefaultContractResolver_t1136768961 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Serialization.DefaultContractResolver::get_SerializeCompilerGeneratedMembers()
extern "C"  bool DefaultContractResolver_get_SerializeCompilerGeneratedMembers_m1052156674 (DefaultContractResolver_t1136768961 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.DefaultContractResolver::set_SerializeCompilerGeneratedMembers(System.Boolean)
extern "C"  void DefaultContractResolver_set_SerializeCompilerGeneratedMembers_m4036668973 (DefaultContractResolver_t1136768961 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Serialization.JsonContract Newtonsoft.Json.Serialization.DefaultContractResolver::ResolveContract(System.Type)
extern "C"  JsonContract_t1566984540 * DefaultContractResolver_ResolveContract_m1513604141 (DefaultContractResolver_t1136768961 * __this, Type_t * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<System.Reflection.MemberInfo> Newtonsoft.Json.Serialization.DefaultContractResolver::GetSerializableMembers(System.Type)
extern "C"  List_1_t3412218392 * DefaultContractResolver_GetSerializableMembers_m4262833306 (DefaultContractResolver_t1136768961 * __this, Type_t * ___objectType0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Serialization.DefaultContractResolver::ShouldSerializeEntityMember(System.Reflection.MemberInfo)
extern "C"  bool DefaultContractResolver_ShouldSerializeEntityMember_m212059552 (DefaultContractResolver_t1136768961 * __this, MemberInfo_t * ___memberInfo0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Serialization.JsonObjectContract Newtonsoft.Json.Serialization.DefaultContractResolver::CreateObjectContract(System.Type)
extern "C"  JsonObjectContract_t2091736265 * DefaultContractResolver_CreateObjectContract_m1195789393 (DefaultContractResolver_t1136768961 * __this, Type_t * ___objectType0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ConstructorInfo Newtonsoft.Json.Serialization.DefaultContractResolver::GetAttributeConstructor(System.Type)
extern "C"  ConstructorInfo_t2851816542 * DefaultContractResolver_GetAttributeConstructor_m255325874 (DefaultContractResolver_t1136768961 * __this, Type_t * ___objectType0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ConstructorInfo Newtonsoft.Json.Serialization.DefaultContractResolver::GetParametrizedConstructor(System.Type)
extern "C"  ConstructorInfo_t2851816542 * DefaultContractResolver_GetParametrizedConstructor_m2297615178 (DefaultContractResolver_t1136768961 * __this, Type_t * ___objectType0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<Newtonsoft.Json.Serialization.JsonProperty> Newtonsoft.Json.Serialization.DefaultContractResolver::CreateConstructorParameters(System.Reflection.ConstructorInfo,Newtonsoft.Json.Serialization.JsonPropertyCollection)
extern "C"  Il2CppObject* DefaultContractResolver_CreateConstructorParameters_m77056618 (DefaultContractResolver_t1136768961 * __this, ConstructorInfo_t2851816542 * ___constructor0, JsonPropertyCollection_t3302934105 * ___memberProperties1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Serialization.JsonProperty Newtonsoft.Json.Serialization.DefaultContractResolver::CreatePropertyFromConstructorParameter(Newtonsoft.Json.Serialization.JsonProperty,System.Reflection.ParameterInfo)
extern "C"  JsonProperty_t2712067825 * DefaultContractResolver_CreatePropertyFromConstructorParameter_m2937983326 (DefaultContractResolver_t1136768961 * __this, JsonProperty_t2712067825 * ___matchingMemberProperty0, ParameterInfo_t2249040075 * ___parameterInfo1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.JsonConverter Newtonsoft.Json.Serialization.DefaultContractResolver::ResolveContractConverter(System.Type)
extern "C"  JsonConverter_t1964060750 * DefaultContractResolver_ResolveContractConverter_m2648136487 (DefaultContractResolver_t1136768961 * __this, Type_t * ___objectType0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Func`1<System.Object> Newtonsoft.Json.Serialization.DefaultContractResolver::GetDefaultCreator(System.Type)
extern "C"  Func_1_t348874681 * DefaultContractResolver_GetDefaultCreator_m3315682055 (DefaultContractResolver_t1136768961 * __this, Type_t * ___createdType0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.DefaultContractResolver::InitializeContract(Newtonsoft.Json.Serialization.JsonContract)
extern "C"  void DefaultContractResolver_InitializeContract_m2474991481 (DefaultContractResolver_t1136768961 * __this, JsonContract_t1566984540 * ___contract0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.DefaultContractResolver::ResolveCallbackMethods(Newtonsoft.Json.Serialization.JsonContract,System.Type)
extern "C"  void DefaultContractResolver_ResolveCallbackMethods_m953418545 (DefaultContractResolver_t1136768961 * __this, JsonContract_t1566984540 * ___contract0, Type_t * ___t1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.DefaultContractResolver::GetCallbackMethodsForType(System.Type,System.Reflection.MethodInfo&,System.Reflection.MethodInfo&,System.Reflection.MethodInfo&,System.Reflection.MethodInfo&,System.Reflection.MethodInfo&)
extern "C"  void DefaultContractResolver_GetCallbackMethodsForType_m1716375312 (DefaultContractResolver_t1136768961 * __this, Type_t * ___type0, MethodInfo_t ** ___onSerializing1, MethodInfo_t ** ___onSerialized2, MethodInfo_t ** ___onDeserializing3, MethodInfo_t ** ___onDeserialized4, MethodInfo_t ** ___onError5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Serialization.JsonDictionaryContract Newtonsoft.Json.Serialization.DefaultContractResolver::CreateDictionaryContract(System.Type)
extern "C"  JsonDictionaryContract_t3573211912 * DefaultContractResolver_CreateDictionaryContract_m1388575889 (DefaultContractResolver_t1136768961 * __this, Type_t * ___objectType0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Serialization.JsonArrayContract Newtonsoft.Json.Serialization.DefaultContractResolver::CreateArrayContract(System.Type)
extern "C"  JsonArrayContract_t2625589241 * DefaultContractResolver_CreateArrayContract_m2151361833 (DefaultContractResolver_t1136768961 * __this, Type_t * ___objectType0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Serialization.JsonPrimitiveContract Newtonsoft.Json.Serialization.DefaultContractResolver::CreatePrimitiveContract(System.Type)
extern "C"  JsonPrimitiveContract_t2604782005 * DefaultContractResolver_CreatePrimitiveContract_m1588316073 (DefaultContractResolver_t1136768961 * __this, Type_t * ___objectType0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Serialization.JsonLinqContract Newtonsoft.Json.Serialization.DefaultContractResolver::CreateLinqContract(System.Type)
extern "C"  JsonLinqContract_t3556659186 * DefaultContractResolver_CreateLinqContract_m4274062545 (DefaultContractResolver_t1136768961 * __this, Type_t * ___objectType0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Serialization.JsonISerializableContract Newtonsoft.Json.Serialization.DefaultContractResolver::CreateISerializableContract(System.Type)
extern "C"  JsonISerializableContract_t122701872 * DefaultContractResolver_CreateISerializableContract_m3620287629 (DefaultContractResolver_t1136768961 * __this, Type_t * ___objectType0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Serialization.JsonStringContract Newtonsoft.Json.Serialization.DefaultContractResolver::CreateStringContract(System.Type)
extern "C"  JsonStringContract_t2979008531 * DefaultContractResolver_CreateStringContract_m2458101201 (DefaultContractResolver_t1136768961 * __this, Type_t * ___objectType0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Serialization.JsonContract Newtonsoft.Json.Serialization.DefaultContractResolver::CreateContract(System.Type)
extern "C"  JsonContract_t1566984540 * DefaultContractResolver_CreateContract_m984686865 (DefaultContractResolver_t1136768961 * __this, Type_t * ___objectType0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Serialization.DefaultContractResolver::CanConvertToString(System.Type)
extern "C"  bool DefaultContractResolver_CanConvertToString_m453178426 (Il2CppObject * __this /* static, unused */, Type_t * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Serialization.DefaultContractResolver::IsValidCallback(System.Reflection.MethodInfo,System.Reflection.ParameterInfo[],System.Type,System.Reflection.MethodInfo,System.Type&)
extern "C"  bool DefaultContractResolver_IsValidCallback_m2399566386 (Il2CppObject * __this /* static, unused */, MethodInfo_t * ___method0, ParameterInfoU5BU5D_t2275869610* ___parameters1, Type_t * ___attributeType2, MethodInfo_t * ___currentCallback3, Type_t ** ___prevAttributeType4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Newtonsoft.Json.Serialization.DefaultContractResolver::GetClrTypeFullName(System.Type)
extern "C"  String_t* DefaultContractResolver_GetClrTypeFullName_m4181506755 (Il2CppObject * __this /* static, unused */, Type_t * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<Newtonsoft.Json.Serialization.JsonProperty> Newtonsoft.Json.Serialization.DefaultContractResolver::CreateProperties(System.Type,Newtonsoft.Json.MemberSerialization)
extern "C"  Il2CppObject* DefaultContractResolver_CreateProperties_m3570548861 (DefaultContractResolver_t1136768961 * __this, Type_t * ___type0, int32_t ___memberSerialization1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Serialization.IValueProvider Newtonsoft.Json.Serialization.DefaultContractResolver::CreateMemberValueProvider(System.Reflection.MemberInfo)
extern "C"  Il2CppObject * DefaultContractResolver_CreateMemberValueProvider_m1103011499 (DefaultContractResolver_t1136768961 * __this, MemberInfo_t * ___member0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Serialization.JsonProperty Newtonsoft.Json.Serialization.DefaultContractResolver::CreateProperty(System.Reflection.MemberInfo,Newtonsoft.Json.MemberSerialization)
extern "C"  JsonProperty_t2712067825 * DefaultContractResolver_CreateProperty_m1866056743 (DefaultContractResolver_t1136768961 * __this, MemberInfo_t * ___member0, int32_t ___memberSerialization1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.DefaultContractResolver::SetPropertySettingsFromAttributes(Newtonsoft.Json.Serialization.JsonProperty,System.Reflection.ICustomAttributeProvider,System.String,System.Type,Newtonsoft.Json.MemberSerialization,System.Boolean&,System.Boolean&)
extern "C"  void DefaultContractResolver_SetPropertySettingsFromAttributes_m1117459258 (DefaultContractResolver_t1136768961 * __this, JsonProperty_t2712067825 * ___property0, Il2CppObject * ___attributeProvider1, String_t* ___name2, Type_t * ___declaringType3, int32_t ___memberSerialization4, bool* ___allowNonPublicAccess5, bool* ___hasExplicitAttribute6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Predicate`1<System.Object> Newtonsoft.Json.Serialization.DefaultContractResolver::CreateShouldSerializeTest(System.Reflection.MemberInfo)
extern "C"  Predicate_1_t1132419410 * DefaultContractResolver_CreateShouldSerializeTest_m2028103075 (DefaultContractResolver_t1136768961 * __this, MemberInfo_t * ___member0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.DefaultContractResolver::SetIsSpecifiedActions(Newtonsoft.Json.Serialization.JsonProperty,System.Reflection.MemberInfo,System.Boolean)
extern "C"  void DefaultContractResolver_SetIsSpecifiedActions_m240030534 (DefaultContractResolver_t1136768961 * __this, JsonProperty_t2712067825 * ___property0, MemberInfo_t * ___member1, bool ___allowNonPublicAccess2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Newtonsoft.Json.Serialization.DefaultContractResolver::ResolvePropertyName(System.String)
extern "C"  String_t* DefaultContractResolver_ResolvePropertyName_m1119838549 (DefaultContractResolver_t1136768961 * __this, String_t* ___propertyName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.DefaultContractResolver::.cctor()
extern "C"  void DefaultContractResolver__cctor_m190927653 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Serialization.DefaultContractResolver::<GetSerializableMembers>m__0(System.Reflection.MemberInfo)
extern "C"  bool DefaultContractResolver_U3CGetSerializableMembersU3Em__0_m2219175341 (Il2CppObject * __this /* static, unused */, MemberInfo_t * ___m0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Serialization.DefaultContractResolver::<GetSerializableMembers>m__1(System.Reflection.MemberInfo)
extern "C"  bool DefaultContractResolver_U3CGetSerializableMembersU3Em__1_m3908648076 (Il2CppObject * __this /* static, unused */, MemberInfo_t * ___m0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Serialization.DefaultContractResolver::<CreateObjectContract>m__2(System.Reflection.ConstructorInfo)
extern "C"  bool DefaultContractResolver_U3CCreateObjectContractU3Em__2_m3416546536 (Il2CppObject * __this /* static, unused */, ConstructorInfo_t2851816542 * ___c0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Serialization.DefaultContractResolver::<GetAttributeConstructor>m__3(System.Reflection.ConstructorInfo)
extern "C"  bool DefaultContractResolver_U3CGetAttributeConstructorU3Em__3_m3920826598 (Il2CppObject * __this /* static, unused */, ConstructorInfo_t2851816542 * ___c0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Newtonsoft.Json.Serialization.DefaultContractResolver::<CreateProperties>m__4(Newtonsoft.Json.Serialization.JsonProperty)
extern "C"  int32_t DefaultContractResolver_U3CCreatePropertiesU3Em__4_m3800950866 (Il2CppObject * __this /* static, unused */, JsonProperty_t2712067825 * ___p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
