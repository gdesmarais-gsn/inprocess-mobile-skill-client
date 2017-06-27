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

// Newtonsoft.Json.JsonValidatingReader
struct JsonValidatingReader_t2264892260;
// Newtonsoft.Json.JsonReader
struct JsonReader_t3154730733;
// Newtonsoft.Json.Schema.ValidationEventHandler
struct ValidationEventHandler_t1731902491;
// System.Object
struct Il2CppObject;
// System.Type
struct Type_t;
// Newtonsoft.Json.JsonValidatingReader/SchemaScope
struct SchemaScope_t4218888543;
// System.Collections.Generic.IEnumerable`1<Newtonsoft.Json.Schema.JsonSchemaModel>
struct IEnumerable_1_t1001021621;
// System.String
struct String_t;
// Newtonsoft.Json.Schema.JsonSchemaModel
struct JsonSchemaModel_t708894576;
// Newtonsoft.Json.Schema.JsonSchemaException
struct JsonSchemaException_t3555037192;
// Newtonsoft.Json.Schema.JsonSchema
struct JsonSchema_t3772113849;
// System.Byte[]
struct ByteU5BU5D_t3397334013;

#include "codegen/il2cpp-codegen.h"
#include "Json_NET_Newtonsoft_Json_JsonReader3154730733.h"
#include "Json_NET_Newtonsoft_Json_Schema_ValidationEventHan1731902491.h"
#include "Json_NET_Newtonsoft_Json_JsonToken620654565.h"
#include "Json_NET_Newtonsoft_Json_JsonValidatingReader_Sche4218888543.h"
#include "mscorlib_System_String2029220233.h"
#include "Json_NET_Newtonsoft_Json_Schema_JsonSchemaModel708894576.h"
#include "Json_NET_Newtonsoft_Json_Schema_JsonSchemaExceptio3555037192.h"
#include "Json_NET_Newtonsoft_Json_Schema_JsonSchema3772113849.h"
#include "mscorlib_System_Nullable_1_gen5811492.h"
#include "mscorlib_System_Nullable_1_gen3282734688.h"
#include "mscorlib_System_Nullable_1_gen3921022517.h"
#include "Json_NET_Newtonsoft_Json_Schema_JsonSchemaType1742745177.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_23497699202.h"

// System.Void Newtonsoft.Json.JsonValidatingReader::.ctor(Newtonsoft.Json.JsonReader)
extern "C"  void JsonValidatingReader__ctor_m1808261241 (JsonValidatingReader_t2264892260 * __this, JsonReader_t3154730733 * ___reader0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonValidatingReader::add_ValidationEventHandler(Newtonsoft.Json.Schema.ValidationEventHandler)
extern "C"  void JsonValidatingReader_add_ValidationEventHandler_m2176019021 (JsonValidatingReader_t2264892260 * __this, ValidationEventHandler_t1731902491 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonValidatingReader::remove_ValidationEventHandler(Newtonsoft.Json.Schema.ValidationEventHandler)
extern "C"  void JsonValidatingReader_remove_ValidationEventHandler_m910320448 (JsonValidatingReader_t2264892260 * __this, ValidationEventHandler_t1731902491 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Newtonsoft.Json.JsonValidatingReader::get_Value()
extern "C"  Il2CppObject * JsonValidatingReader_get_Value_m3688967676 (JsonValidatingReader_t2264892260 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Newtonsoft.Json.JsonValidatingReader::get_Depth()
extern "C"  int32_t JsonValidatingReader_get_Depth_m1890192049 (JsonValidatingReader_t2264892260 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char Newtonsoft.Json.JsonValidatingReader::get_QuoteChar()
extern "C"  Il2CppChar JsonValidatingReader_get_QuoteChar_m4250265034 (JsonValidatingReader_t2264892260 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonValidatingReader::set_QuoteChar(System.Char)
extern "C"  void JsonValidatingReader_set_QuoteChar_m342086895 (JsonValidatingReader_t2264892260 * __this, Il2CppChar ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.JsonToken Newtonsoft.Json.JsonValidatingReader::get_TokenType()
extern "C"  int32_t JsonValidatingReader_get_TokenType_m752947714 (JsonValidatingReader_t2264892260 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type Newtonsoft.Json.JsonValidatingReader::get_ValueType()
extern "C"  Type_t * JsonValidatingReader_get_ValueType_m1016651305 (JsonValidatingReader_t2264892260 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonValidatingReader::Push(Newtonsoft.Json.JsonValidatingReader/SchemaScope)
extern "C"  void JsonValidatingReader_Push_m2608865126 (JsonValidatingReader_t2264892260 * __this, SchemaScope_t4218888543 * ___scope0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.JsonValidatingReader/SchemaScope Newtonsoft.Json.JsonValidatingReader::Pop()
extern "C"  SchemaScope_t4218888543 * JsonValidatingReader_Pop_m1634198764 (JsonValidatingReader_t2264892260 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<Newtonsoft.Json.Schema.JsonSchemaModel> Newtonsoft.Json.JsonValidatingReader::get_CurrentSchemas()
extern "C"  Il2CppObject* JsonValidatingReader_get_CurrentSchemas_m785706451 (JsonValidatingReader_t2264892260 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<Newtonsoft.Json.Schema.JsonSchemaModel> Newtonsoft.Json.JsonValidatingReader::get_CurrentMemberSchemas()
extern "C"  Il2CppObject* JsonValidatingReader_get_CurrentMemberSchemas_m4097593871 (JsonValidatingReader_t2264892260 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonValidatingReader::RaiseError(System.String,Newtonsoft.Json.Schema.JsonSchemaModel)
extern "C"  void JsonValidatingReader_RaiseError_m2549290599 (JsonValidatingReader_t2264892260 * __this, String_t* ___message0, JsonSchemaModel_t708894576 * ___schema1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonValidatingReader::OnValidationEvent(Newtonsoft.Json.Schema.JsonSchemaException)
extern "C"  void JsonValidatingReader_OnValidationEvent_m723549619 (JsonValidatingReader_t2264892260 * __this, JsonSchemaException_t3555037192 * ___exception0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Schema.JsonSchema Newtonsoft.Json.JsonValidatingReader::get_Schema()
extern "C"  JsonSchema_t3772113849 * JsonValidatingReader_get_Schema_m94870125 (JsonValidatingReader_t2264892260 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonValidatingReader::set_Schema(Newtonsoft.Json.Schema.JsonSchema)
extern "C"  void JsonValidatingReader_set_Schema_m2056648198 (JsonValidatingReader_t2264892260 * __this, JsonSchema_t3772113849 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.JsonReader Newtonsoft.Json.JsonValidatingReader::get_Reader()
extern "C"  JsonReader_t3154730733 * JsonValidatingReader_get_Reader_m1085481104 (JsonValidatingReader_t2264892260 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonValidatingReader::ValidateInEnumAndNotDisallowed(Newtonsoft.Json.Schema.JsonSchemaModel)
extern "C"  void JsonValidatingReader_ValidateInEnumAndNotDisallowed_m2535897075 (JsonValidatingReader_t2264892260 * __this, JsonSchemaModel_t708894576 * ___schema0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Nullable`1<Newtonsoft.Json.Schema.JsonSchemaType> Newtonsoft.Json.JsonValidatingReader::GetCurrentNodeSchemaType()
extern "C"  Nullable_1_t5811492  JsonValidatingReader_GetCurrentNodeSchemaType_m1699993208 (JsonValidatingReader_t2264892260 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Newtonsoft.Json.JsonValidatingReader::ReadAsBytes()
extern "C"  ByteU5BU5D_t3397334013* JsonValidatingReader_ReadAsBytes_m4181339216 (JsonValidatingReader_t2264892260 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Nullable`1<System.Decimal> Newtonsoft.Json.JsonValidatingReader::ReadAsDecimal()
extern "C"  Nullable_1_t3282734688  JsonValidatingReader_ReadAsDecimal_m2725154326 (JsonValidatingReader_t2264892260 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Nullable`1<System.DateTimeOffset> Newtonsoft.Json.JsonValidatingReader::ReadAsDateTimeOffset()
extern "C"  Nullable_1_t3921022517  JsonValidatingReader_ReadAsDateTimeOffset_m566872006 (JsonValidatingReader_t2264892260 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.JsonValidatingReader::Read()
extern "C"  bool JsonValidatingReader_Read_m3334470121 (JsonValidatingReader_t2264892260 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonValidatingReader::ValidateCurrentToken()
extern "C"  void JsonValidatingReader_ValidateCurrentToken_m1942895043 (JsonValidatingReader_t2264892260 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonValidatingReader::ValidateEndObject(Newtonsoft.Json.Schema.JsonSchemaModel)
extern "C"  void JsonValidatingReader_ValidateEndObject_m869349469 (JsonValidatingReader_t2264892260 * __this, JsonSchemaModel_t708894576 * ___schema0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonValidatingReader::ValidateEndArray(Newtonsoft.Json.Schema.JsonSchemaModel)
extern "C"  void JsonValidatingReader_ValidateEndArray_m3574413097 (JsonValidatingReader_t2264892260 * __this, JsonSchemaModel_t708894576 * ___schema0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonValidatingReader::ValidateNull(Newtonsoft.Json.Schema.JsonSchemaModel)
extern "C"  void JsonValidatingReader_ValidateNull_m1038103742 (JsonValidatingReader_t2264892260 * __this, JsonSchemaModel_t708894576 * ___schema0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonValidatingReader::ValidateBoolean(Newtonsoft.Json.Schema.JsonSchemaModel)
extern "C"  void JsonValidatingReader_ValidateBoolean_m3685445919 (JsonValidatingReader_t2264892260 * __this, JsonSchemaModel_t708894576 * ___schema0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonValidatingReader::ValidateString(Newtonsoft.Json.Schema.JsonSchemaModel)
extern "C"  void JsonValidatingReader_ValidateString_m3767343110 (JsonValidatingReader_t2264892260 * __this, JsonSchemaModel_t708894576 * ___schema0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonValidatingReader::ValidateInteger(Newtonsoft.Json.Schema.JsonSchemaModel)
extern "C"  void JsonValidatingReader_ValidateInteger_m4238700917 (JsonValidatingReader_t2264892260 * __this, JsonSchemaModel_t708894576 * ___schema0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonValidatingReader::ProcessValue()
extern "C"  void JsonValidatingReader_ProcessValue_m3071450795 (JsonValidatingReader_t2264892260 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonValidatingReader::ValidateFloat(Newtonsoft.Json.Schema.JsonSchemaModel)
extern "C"  void JsonValidatingReader_ValidateFloat_m3635353559 (JsonValidatingReader_t2264892260 * __this, JsonSchemaModel_t708894576 * ___schema0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.JsonValidatingReader::IsZero(System.Double)
extern "C"  bool JsonValidatingReader_IsZero_m2401498217 (Il2CppObject * __this /* static, unused */, double ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonValidatingReader::ValidatePropertyName(Newtonsoft.Json.Schema.JsonSchemaModel)
extern "C"  void JsonValidatingReader_ValidatePropertyName_m2804099075 (JsonValidatingReader_t2264892260 * __this, JsonSchemaModel_t708894576 * ___schema0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.JsonValidatingReader::IsPropertyDefinied(Newtonsoft.Json.Schema.JsonSchemaModel,System.String)
extern "C"  bool JsonValidatingReader_IsPropertyDefinied_m1697400946 (JsonValidatingReader_t2264892260 * __this, JsonSchemaModel_t708894576 * ___schema0, String_t* ___propertyName1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.JsonValidatingReader::ValidateArray(Newtonsoft.Json.Schema.JsonSchemaModel)
extern "C"  bool JsonValidatingReader_ValidateArray_m4271723082 (JsonValidatingReader_t2264892260 * __this, JsonSchemaModel_t708894576 * ___schema0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.JsonValidatingReader::ValidateObject(Newtonsoft.Json.Schema.JsonSchemaModel)
extern "C"  bool JsonValidatingReader_ValidateObject_m3428194860 (JsonValidatingReader_t2264892260 * __this, JsonSchemaModel_t708894576 * ___schema0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.JsonValidatingReader::TestType(Newtonsoft.Json.Schema.JsonSchemaModel,Newtonsoft.Json.Schema.JsonSchemaType)
extern "C"  bool JsonValidatingReader_TestType_m3293320870 (JsonValidatingReader_t2264892260 * __this, JsonSchemaModel_t708894576 * ___currentSchema0, int32_t ___currentType1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.JsonValidatingReader::Newtonsoft.Json.IJsonLineInfo.HasLineInfo()
extern "C"  bool JsonValidatingReader_Newtonsoft_Json_IJsonLineInfo_HasLineInfo_m2194429813 (JsonValidatingReader_t2264892260 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Newtonsoft.Json.JsonValidatingReader::Newtonsoft.Json.IJsonLineInfo.get_LineNumber()
extern "C"  int32_t JsonValidatingReader_Newtonsoft_Json_IJsonLineInfo_get_LineNumber_m1907445745 (JsonValidatingReader_t2264892260 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Newtonsoft.Json.JsonValidatingReader::Newtonsoft.Json.IJsonLineInfo.get_LinePosition()
extern "C"  int32_t JsonValidatingReader_Newtonsoft_Json_IJsonLineInfo_get_LinePosition_m1779802879 (JsonValidatingReader_t2264892260 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.JsonValidatingReader::<ValidateEndObject>m__0(System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>)
extern "C"  bool JsonValidatingReader_U3CValidateEndObjectU3Em__0_m4158742436 (Il2CppObject * __this /* static, unused */, KeyValuePair_2_t3497699202  ___kv0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Newtonsoft.Json.JsonValidatingReader::<ValidateEndObject>m__1(System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>)
extern "C"  String_t* JsonValidatingReader_U3CValidateEndObjectU3Em__1_m4080769376 (Il2CppObject * __this /* static, unused */, KeyValuePair_2_t3497699202  ___kv0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
