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

// Newtonsoft.Json.Linq.JObject
struct JObject_t278519297;
// System.Object[]
struct ObjectU5BU5D_t3614634134;
// System.Object
struct Il2CppObject;
// System.Collections.Generic.IList`1<Newtonsoft.Json.Linq.JToken>
struct IList_1_t3093584614;
// System.ComponentModel.PropertyChangedEventHandler
struct PropertyChangedEventHandler_t3042952059;
// Newtonsoft.Json.Linq.JToken
struct JToken_t2552644013;
// Newtonsoft.Json.Linq.JProperty
struct JProperty_t2956441399;
// System.Collections.Generic.IEnumerable`1<Newtonsoft.Json.Linq.JProperty>
struct IEnumerable_1_t3248568444;
// System.String
struct String_t;
// Newtonsoft.Json.JsonReader
struct JsonReader_t3154730733;
// Newtonsoft.Json.JsonSerializer
struct JsonSerializer_t1719617802;
// Newtonsoft.Json.JsonWriter
struct JsonWriter_t1973729997;
// Newtonsoft.Json.JsonConverter[]
struct JsonConverterU5BU5D_t3128012475;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t2981295538;
// System.Collections.Generic.ICollection`1<Newtonsoft.Json.Linq.JToken>
struct ICollection_1_t3504719318;
// System.Collections.Generic.KeyValuePair`2<System.String,Newtonsoft.Json.Linq.JToken>[]
struct KeyValuePair_2U5BU5D_t1550931756;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,Newtonsoft.Json.Linq.JToken>>
struct IEnumerator_1_t3995259620;
// System.ComponentModel.PropertyDescriptorCollection
struct PropertyDescriptorCollection_t3166009492;
// System.Type
struct Type_t;
// System.Attribute[]
struct AttributeU5BU5D_t4255796347;
// System.ComponentModel.AttributeCollection
struct AttributeCollection_t1925812292;
// System.ComponentModel.TypeConverter
struct TypeConverter_t745995970;
// System.ComponentModel.EventDescriptor
struct EventDescriptor_t962731901;
// System.ComponentModel.PropertyDescriptor
struct PropertyDescriptor_t4250402154;
// System.ComponentModel.EventDescriptorCollection
struct EventDescriptorCollection_t3053042509;

#include "codegen/il2cpp-codegen.h"
#include "Json_NET_Newtonsoft_Json_Linq_JObject278519297.h"
#include "mscorlib_System_Object2689449295.h"
#include "System_System_ComponentModel_PropertyChangedEventH3042952059.h"
#include "Json_NET_Newtonsoft_Json_Linq_JToken2552644013.h"
#include "Json_NET_Newtonsoft_Json_Linq_JProperty2956441399.h"
#include "Json_NET_Newtonsoft_Json_Linq_JTokenType1307827213.h"
#include "mscorlib_System_String2029220233.h"
#include "Json_NET_Newtonsoft_Json_Linq_JEnumerable_1_gen3820937473.h"
#include "Json_NET_Newtonsoft_Json_JsonReader3154730733.h"
#include "Json_NET_Newtonsoft_Json_JsonSerializer1719617802.h"
#include "Json_NET_Newtonsoft_Json_JsonWriter1973729997.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_22224768497.h"
#include "mscorlib_System_Type1303803226.h"
#include "System_System_ComponentModel_PropertyDescriptor4250402154.h"

// System.Void Newtonsoft.Json.Linq.JObject::.ctor()
extern "C"  void JObject__ctor_m1374728592 (JObject_t278519297 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JObject::.ctor(Newtonsoft.Json.Linq.JObject)
extern "C"  void JObject__ctor_m2247479372 (JObject_t278519297 * __this, JObject_t278519297 * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JObject::.ctor(System.Object[])
extern "C"  void JObject__ctor_m3736009904 (JObject_t278519297 * __this, ObjectU5BU5D_t3614634134* ___content0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JObject::.ctor(System.Object)
extern "C"  void JObject__ctor_m668237176 (JObject_t278519297 * __this, Il2CppObject * ___content0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<Newtonsoft.Json.Linq.JToken> Newtonsoft.Json.Linq.JObject::get_ChildrenTokens()
extern "C"  Il2CppObject* JObject_get_ChildrenTokens_m670038294 (JObject_t278519297 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JObject::add_PropertyChanged(System.ComponentModel.PropertyChangedEventHandler)
extern "C"  void JObject_add_PropertyChanged_m3281091485 (JObject_t278519297 * __this, PropertyChangedEventHandler_t3042952059 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JObject::remove_PropertyChanged(System.ComponentModel.PropertyChangedEventHandler)
extern "C"  void JObject_remove_PropertyChanged_m3693464916 (JObject_t278519297 * __this, PropertyChangedEventHandler_t3042952059 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Linq.JObject::DeepEquals(Newtonsoft.Json.Linq.JToken)
extern "C"  bool JObject_DeepEquals_m3758615767 (JObject_t278519297 * __this, JToken_t2552644013 * ___node0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JObject::InsertItem(System.Int32,Newtonsoft.Json.Linq.JToken)
extern "C"  void JObject_InsertItem_m1125302867 (JObject_t278519297 * __this, int32_t ___index0, JToken_t2552644013 * ___item1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JObject::ValidateToken(Newtonsoft.Json.Linq.JToken,Newtonsoft.Json.Linq.JToken)
extern "C"  void JObject_ValidateToken_m515881579 (JObject_t278519297 * __this, JToken_t2552644013 * ___o0, JToken_t2552644013 * ___existing1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JObject::InternalPropertyChanged(Newtonsoft.Json.Linq.JProperty)
extern "C"  void JObject_InternalPropertyChanged_m1783318066 (JObject_t278519297 * __this, JProperty_t2956441399 * ___childProperty0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JObject::InternalPropertyChanging(Newtonsoft.Json.Linq.JProperty)
extern "C"  void JObject_InternalPropertyChanging_m586441215 (JObject_t278519297 * __this, JProperty_t2956441399 * ___childProperty0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JObject::CloneToken()
extern "C"  JToken_t2552644013 * JObject_CloneToken_m2546323211 (JObject_t278519297 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Linq.JTokenType Newtonsoft.Json.Linq.JObject::get_Type()
extern "C"  int32_t JObject_get_Type_m4201889746 (JObject_t278519297 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<Newtonsoft.Json.Linq.JProperty> Newtonsoft.Json.Linq.JObject::Properties()
extern "C"  Il2CppObject* JObject_Properties_m3112960181 (JObject_t278519297 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Linq.JProperty Newtonsoft.Json.Linq.JObject::Property(System.String)
extern "C"  JProperty_t2956441399 * JObject_Property_m1724655878 (JObject_t278519297 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Linq.JEnumerable`1<Newtonsoft.Json.Linq.JToken> Newtonsoft.Json.Linq.JObject::PropertyValues()
extern "C"  JEnumerable_1_t3820937473  JObject_PropertyValues_m3674261020 (JObject_t278519297 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JObject::get_Item(System.Object)
extern "C"  JToken_t2552644013 * JObject_get_Item_m740968041 (JObject_t278519297 * __this, Il2CppObject * ___key0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JObject::set_Item(System.Object,Newtonsoft.Json.Linq.JToken)
extern "C"  void JObject_set_Item_m4244675196 (JObject_t278519297 * __this, Il2CppObject * ___key0, JToken_t2552644013 * ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JObject::get_Item(System.String)
extern "C"  JToken_t2552644013 * JObject_get_Item_m963270709 (JObject_t278519297 * __this, String_t* ___propertyName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JObject::set_Item(System.String,Newtonsoft.Json.Linq.JToken)
extern "C"  void JObject_set_Item_m3914767494 (JObject_t278519297 * __this, String_t* ___propertyName0, JToken_t2552644013 * ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Linq.JObject Newtonsoft.Json.Linq.JObject::Load(Newtonsoft.Json.JsonReader)
extern "C"  JObject_t278519297 * JObject_Load_m2910505141 (Il2CppObject * __this /* static, unused */, JsonReader_t3154730733 * ___reader0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Linq.JObject Newtonsoft.Json.Linq.JObject::Parse(System.String)
extern "C"  JObject_t278519297 * JObject_Parse_m4022730790 (Il2CppObject * __this /* static, unused */, String_t* ___json0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Linq.JObject Newtonsoft.Json.Linq.JObject::FromObject(System.Object)
extern "C"  JObject_t278519297 * JObject_FromObject_m2367575360 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___o0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Linq.JObject Newtonsoft.Json.Linq.JObject::FromObject(System.Object,Newtonsoft.Json.JsonSerializer)
extern "C"  JObject_t278519297 * JObject_FromObject_m2494412751 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___o0, JsonSerializer_t1719617802 * ___jsonSerializer1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JObject::WriteTo(Newtonsoft.Json.JsonWriter,Newtonsoft.Json.JsonConverter[])
extern "C"  void JObject_WriteTo_m3694395553 (JObject_t278519297 * __this, JsonWriter_t1973729997 * ___writer0, JsonConverterU5BU5D_t3128012475* ___converters1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JObject::Add(System.String,Newtonsoft.Json.Linq.JToken)
extern "C"  void JObject_Add_m3379848299 (JObject_t278519297 * __this, String_t* ___propertyName0, JToken_t2552644013 * ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Linq.JObject::System.Collections.Generic.IDictionary<string,Newtonsoft.Json.Linq.JToken>.ContainsKey(System.String)
extern "C"  bool JObject_System_Collections_Generic_IDictionaryU3CstringU2CNewtonsoft_Json_Linq_JTokenU3E_ContainsKey_m4067275457 (JObject_t278519297 * __this, String_t* ___key0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.ICollection`1<System.String> Newtonsoft.Json.Linq.JObject::System.Collections.Generic.IDictionary<string,Newtonsoft.Json.Linq.JToken>.get_Keys()
extern "C"  Il2CppObject* JObject_System_Collections_Generic_IDictionaryU3CstringU2CNewtonsoft_Json_Linq_JTokenU3E_get_Keys_m2212576576 (JObject_t278519297 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Linq.JObject::Remove(System.String)
extern "C"  bool JObject_Remove_m1001753700 (JObject_t278519297 * __this, String_t* ___propertyName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Linq.JObject::TryGetValue(System.String,Newtonsoft.Json.Linq.JToken&)
extern "C"  bool JObject_TryGetValue_m8023402 (JObject_t278519297 * __this, String_t* ___propertyName0, JToken_t2552644013 ** ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.ICollection`1<Newtonsoft.Json.Linq.JToken> Newtonsoft.Json.Linq.JObject::System.Collections.Generic.IDictionary<string,Newtonsoft.Json.Linq.JToken>.get_Values()
extern "C"  Il2CppObject* JObject_System_Collections_Generic_IDictionaryU3CstringU2CNewtonsoft_Json_Linq_JTokenU3E_get_Values_m1075065438 (JObject_t278519297 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JObject::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<string,Newtonsoft.Json.Linq.JToken>>.Add(System.Collections.Generic.KeyValuePair`2<System.String,Newtonsoft.Json.Linq.JToken>)
extern "C"  void JObject_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CstringU2CNewtonsoft_Json_Linq_JTokenU3EU3E_Add_m3616493418 (JObject_t278519297 * __this, KeyValuePair_2_t2224768497  ___item0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JObject::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<string,Newtonsoft.Json.Linq.JToken>>.Clear()
extern "C"  void JObject_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CstringU2CNewtonsoft_Json_Linq_JTokenU3EU3E_Clear_m168077007 (JObject_t278519297 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Linq.JObject::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<string,Newtonsoft.Json.Linq.JToken>>.Contains(System.Collections.Generic.KeyValuePair`2<System.String,Newtonsoft.Json.Linq.JToken>)
extern "C"  bool JObject_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CstringU2CNewtonsoft_Json_Linq_JTokenU3EU3E_Contains_m2526666198 (JObject_t278519297 * __this, KeyValuePair_2_t2224768497  ___item0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JObject::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<string,Newtonsoft.Json.Linq.JToken>>.CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,Newtonsoft.Json.Linq.JToken>[],System.Int32)
extern "C"  void JObject_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CstringU2CNewtonsoft_Json_Linq_JTokenU3EU3E_CopyTo_m3361845310 (JObject_t278519297 * __this, KeyValuePair_2U5BU5D_t1550931756* ___array0, int32_t ___arrayIndex1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Linq.JObject::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<string,Newtonsoft.Json.Linq.JToken>>.get_IsReadOnly()
extern "C"  bool JObject_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CstringU2CNewtonsoft_Json_Linq_JTokenU3EU3E_get_IsReadOnly_m4181548731 (JObject_t278519297 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Linq.JObject::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<string,Newtonsoft.Json.Linq.JToken>>.Remove(System.Collections.Generic.KeyValuePair`2<System.String,Newtonsoft.Json.Linq.JToken>)
extern "C"  bool JObject_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CstringU2CNewtonsoft_Json_Linq_JTokenU3EU3E_Remove_m2920377317 (JObject_t278519297 * __this, KeyValuePair_2_t2224768497  ___item0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Newtonsoft.Json.Linq.JObject::GetDeepHashCode()
extern "C"  int32_t JObject_GetDeepHashCode_m807387373 (JObject_t278519297 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,Newtonsoft.Json.Linq.JToken>> Newtonsoft.Json.Linq.JObject::GetEnumerator()
extern "C"  Il2CppObject* JObject_GetEnumerator_m2665381551 (JObject_t278519297 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JObject::OnPropertyChanged(System.String)
extern "C"  void JObject_OnPropertyChanged_m337925758 (JObject_t278519297 * __this, String_t* ___propertyName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.PropertyDescriptorCollection Newtonsoft.Json.Linq.JObject::System.ComponentModel.ICustomTypeDescriptor.GetProperties()
extern "C"  PropertyDescriptorCollection_t3166009492 * JObject_System_ComponentModel_ICustomTypeDescriptor_GetProperties_m3090649191 (JObject_t278519297 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type Newtonsoft.Json.Linq.JObject::GetTokenPropertyType(Newtonsoft.Json.Linq.JToken)
extern "C"  Type_t * JObject_GetTokenPropertyType_m4033285058 (Il2CppObject * __this /* static, unused */, JToken_t2552644013 * ___token0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.PropertyDescriptorCollection Newtonsoft.Json.Linq.JObject::System.ComponentModel.ICustomTypeDescriptor.GetProperties(System.Attribute[])
extern "C"  PropertyDescriptorCollection_t3166009492 * JObject_System_ComponentModel_ICustomTypeDescriptor_GetProperties_m430638386 (JObject_t278519297 * __this, AttributeU5BU5D_t4255796347* ___attributes0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.AttributeCollection Newtonsoft.Json.Linq.JObject::System.ComponentModel.ICustomTypeDescriptor.GetAttributes()
extern "C"  AttributeCollection_t1925812292 * JObject_System_ComponentModel_ICustomTypeDescriptor_GetAttributes_m828543477 (JObject_t278519297 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Newtonsoft.Json.Linq.JObject::System.ComponentModel.ICustomTypeDescriptor.GetClassName()
extern "C"  String_t* JObject_System_ComponentModel_ICustomTypeDescriptor_GetClassName_m3233237888 (JObject_t278519297 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Newtonsoft.Json.Linq.JObject::System.ComponentModel.ICustomTypeDescriptor.GetComponentName()
extern "C"  String_t* JObject_System_ComponentModel_ICustomTypeDescriptor_GetComponentName_m2184423519 (JObject_t278519297 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.TypeConverter Newtonsoft.Json.Linq.JObject::System.ComponentModel.ICustomTypeDescriptor.GetConverter()
extern "C"  TypeConverter_t745995970 * JObject_System_ComponentModel_ICustomTypeDescriptor_GetConverter_m1503947606 (JObject_t278519297 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.EventDescriptor Newtonsoft.Json.Linq.JObject::System.ComponentModel.ICustomTypeDescriptor.GetDefaultEvent()
extern "C"  EventDescriptor_t962731901 * JObject_System_ComponentModel_ICustomTypeDescriptor_GetDefaultEvent_m3116038558 (JObject_t278519297 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.PropertyDescriptor Newtonsoft.Json.Linq.JObject::System.ComponentModel.ICustomTypeDescriptor.GetDefaultProperty()
extern "C"  PropertyDescriptor_t4250402154 * JObject_System_ComponentModel_ICustomTypeDescriptor_GetDefaultProperty_m3664380540 (JObject_t278519297 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Newtonsoft.Json.Linq.JObject::System.ComponentModel.ICustomTypeDescriptor.GetEditor(System.Type)
extern "C"  Il2CppObject * JObject_System_ComponentModel_ICustomTypeDescriptor_GetEditor_m1923232997 (JObject_t278519297 * __this, Type_t * ___editorBaseType0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.EventDescriptorCollection Newtonsoft.Json.Linq.JObject::System.ComponentModel.ICustomTypeDescriptor.GetEvents(System.Attribute[])
extern "C"  EventDescriptorCollection_t3053042509 * JObject_System_ComponentModel_ICustomTypeDescriptor_GetEvents_m4069310635 (JObject_t278519297 * __this, AttributeU5BU5D_t4255796347* ___attributes0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.EventDescriptorCollection Newtonsoft.Json.Linq.JObject::System.ComponentModel.ICustomTypeDescriptor.GetEvents()
extern "C"  EventDescriptorCollection_t3053042509 * JObject_System_ComponentModel_ICustomTypeDescriptor_GetEvents_m203669948 (JObject_t278519297 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Newtonsoft.Json.Linq.JObject::System.ComponentModel.ICustomTypeDescriptor.GetPropertyOwner(System.ComponentModel.PropertyDescriptor)
extern "C"  Il2CppObject * JObject_System_ComponentModel_ICustomTypeDescriptor_GetPropertyOwner_m308830638 (JObject_t278519297 * __this, PropertyDescriptor_t4250402154 * ___pd0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JObject::<PropertyValues>m__0(Newtonsoft.Json.Linq.JProperty)
extern "C"  JToken_t2552644013 * JObject_U3CPropertyValuesU3Em__0_m1806368597 (Il2CppObject * __this /* static, unused */, JProperty_t2956441399 * ___p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
