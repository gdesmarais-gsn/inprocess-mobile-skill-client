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

// Newtonsoft.Json.JsonReader
struct JsonReader_t3154730733;
// System.String
struct String_t;
// System.Object
struct Il2CppObject;
// System.Type
struct Type_t;

#include "codegen/il2cpp-codegen.h"
#include "Json_NET_Newtonsoft_Json_JsonReader_State2444238258.h"
#include "mscorlib_System_String2029220233.h"
#include "Json_NET_Newtonsoft_Json_JsonToken620654565.h"
#include "Json_NET_Newtonsoft_Json_FloatParseHandling1928971464.h"
#include "Json_NET_Newtonsoft_Json_Linq_JTokenType1307827213.h"
#include "mscorlib_System_Object2689449295.h"

// System.Void Newtonsoft.Json.JsonReader::.ctor()
extern "C"  void JsonReader__ctor_m3410645520 (JsonReader_t3154730733 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.JsonReader/State Newtonsoft.Json.JsonReader::get_CurrentState()
extern "C"  int32_t JsonReader_get_CurrentState_m3950758706 (JsonReader_t3154730733 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.JsonReader::get_CloseInput()
extern "C"  bool JsonReader_get_CloseInput_m2749245341 (JsonReader_t3154730733 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonReader::set_CloseInput(System.Boolean)
extern "C"  void JsonReader_set_CloseInput_m2199498274 (JsonReader_t3154730733 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Newtonsoft.Json.JsonReader::get_Path()
extern "C"  String_t* JsonReader_get_Path_m2065708329 (JsonReader_t3154730733 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonReader::set_Path(System.String)
extern "C"  void JsonReader_set_Path_m2454879558 (JsonReader_t3154730733 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char Newtonsoft.Json.JsonReader::get_QuoteChar()
extern "C"  Il2CppChar JsonReader_get_QuoteChar_m384527355 (JsonReader_t3154730733 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonReader::set_QuoteChar(System.Char)
extern "C"  void JsonReader_set_QuoteChar_m102668860 (JsonReader_t3154730733 * __this, Il2CppChar ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.JsonToken Newtonsoft.Json.JsonReader::get_TokenType()
extern "C"  int32_t JsonReader_get_TokenType_m2780888777 (JsonReader_t3154730733 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Newtonsoft.Json.JsonReader::get_Value()
extern "C"  Il2CppObject * JsonReader_get_Value_m399513139 (JsonReader_t3154730733 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type Newtonsoft.Json.JsonReader::get_ValueType()
extern "C"  Type_t * JsonReader_get_ValueType_m3106667324 (JsonReader_t3154730733 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Newtonsoft.Json.JsonReader::get_Depth()
extern "C"  int32_t JsonReader_get_Depth_m3623453658 (JsonReader_t3154730733 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.FloatParseHandling Newtonsoft.Json.JsonReader::get_FloatParseHandling()
extern "C"  int32_t JsonReader_get_FloatParseHandling_m1739027881 (JsonReader_t3154730733 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonReader::set_FloatParseHandling(Newtonsoft.Json.FloatParseHandling)
extern "C"  void JsonReader_set_FloatParseHandling_m3152443256 (JsonReader_t3154730733 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonReader::Push(Newtonsoft.Json.Linq.JTokenType)
extern "C"  void JsonReader_Push_m3684097384 (JsonReader_t3154730733 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Linq.JTokenType Newtonsoft.Json.JsonReader::Pop()
extern "C"  int32_t JsonReader_Pop_m3958244720 (JsonReader_t3154730733 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Linq.JTokenType Newtonsoft.Json.JsonReader::Peek()
extern "C"  int32_t JsonReader_Peek_m745582292 (JsonReader_t3154730733 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonReader::Skip()
extern "C"  void JsonReader_Skip_m772974629 (JsonReader_t3154730733 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonReader::SetToken(Newtonsoft.Json.JsonToken)
extern "C"  void JsonReader_SetToken_m2597105733 (JsonReader_t3154730733 * __this, int32_t ___newToken0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonReader::SetToken(Newtonsoft.Json.JsonToken,System.Object)
extern "C"  void JsonReader_SetToken_m1621069435 (JsonReader_t3154730733 * __this, int32_t ___newToken0, Il2CppObject * ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonReader::ValidateEnd(Newtonsoft.Json.JsonToken)
extern "C"  void JsonReader_ValidateEnd_m3132437781 (JsonReader_t3154730733 * __this, int32_t ___endToken0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonReader::SetStateBasedOnCurrent()
extern "C"  void JsonReader_SetStateBasedOnCurrent_m2428488776 (JsonReader_t3154730733 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.JsonReader::IsPrimitiveToken(Newtonsoft.Json.JsonToken)
extern "C"  bool JsonReader_IsPrimitiveToken_m3692135710 (Il2CppObject * __this /* static, unused */, int32_t ___token0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.JsonReader::IsStartToken(Newtonsoft.Json.JsonToken)
extern "C"  bool JsonReader_IsStartToken_m3922775565 (Il2CppObject * __this /* static, unused */, int32_t ___token0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Linq.JTokenType Newtonsoft.Json.JsonReader::GetTypeForCloseToken(Newtonsoft.Json.JsonToken)
extern "C"  int32_t JsonReader_GetTypeForCloseToken_m3835526009 (JsonReader_t3154730733 * __this, int32_t ___token0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonReader::System.IDisposable.Dispose()
extern "C"  void JsonReader_System_IDisposable_Dispose_m1628591495 (JsonReader_t3154730733 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonReader::Dispose(System.Boolean)
extern "C"  void JsonReader_Dispose_m2237690556 (JsonReader_t3154730733 * __this, bool ___disposing0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonReader::Close()
extern "C"  void JsonReader_Close_m3628320772 (JsonReader_t3154730733 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
