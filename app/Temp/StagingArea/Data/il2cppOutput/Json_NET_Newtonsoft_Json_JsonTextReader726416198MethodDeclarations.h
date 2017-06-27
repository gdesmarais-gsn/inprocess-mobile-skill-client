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

// Newtonsoft.Json.JsonTextReader
struct JsonTextReader_t726416198;
// System.IO.TextReader
struct TextReader_t1561828458;
// System.Globalization.CultureInfo
struct CultureInfo_t3500843524;
// Newtonsoft.Json.JsonReaderException
struct JsonReaderException_t2043888884;
// System.String
struct String_t;
// System.Object[]
struct ObjectU5BU5D_t3614634134;
// System.Byte[]
struct ByteU5BU5D_t3397334013;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IO_TextReader1561828458.h"
#include "mscorlib_System_Globalization_CultureInfo3500843524.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_TimeSpan3430258949.h"
#include "mscorlib_System_Nullable_1_gen3282734688.h"
#include "mscorlib_System_Nullable_1_gen3921022517.h"

// System.Void Newtonsoft.Json.JsonTextReader::.ctor(System.IO.TextReader)
extern "C"  void JsonTextReader__ctor_m1240061986 (JsonTextReader_t726416198 * __this, TextReader_t1561828458 * ___reader0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.CultureInfo Newtonsoft.Json.JsonTextReader::get_Culture()
extern "C"  CultureInfo_t3500843524 * JsonTextReader_get_Culture_m3238271141 (JsonTextReader_t726416198 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonTextReader::set_Culture(System.Globalization.CultureInfo)
extern "C"  void JsonTextReader_set_Culture_m1777594302 (JsonTextReader_t726416198 * __this, CultureInfo_t3500843524 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonTextReader::ParseString(System.Char)
extern "C"  void JsonTextReader_ParseString_m2558469724 (JsonTextReader_t726416198 * __this, Il2CppChar ___quote0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonTextReader::ReadStringIntoBuffer(System.Char)
extern "C"  void JsonTextReader_ReadStringIntoBuffer_m3373047125 (JsonTextReader_t726416198 * __this, Il2CppChar ___quote0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.JsonReaderException Newtonsoft.Json.JsonTextReader::CreateJsonReaderException(System.String,System.Object[])
extern "C"  JsonReaderException_t2043888884 * JsonTextReader_CreateJsonReaderException_m1942461607 (JsonTextReader_t726416198 * __this, String_t* ___format0, ObjectU5BU5D_t3614634134* ___args1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan Newtonsoft.Json.JsonTextReader::ReadOffset(System.String)
extern "C"  TimeSpan_t3430258949  JsonTextReader_ReadOffset_m3852070457 (JsonTextReader_t726416198 * __this, String_t* ___offsetText0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonTextReader::ParseDate(System.String)
extern "C"  void JsonTextReader_ParseDate_m4247584336 (JsonTextReader_t726416198 * __this, String_t* ___text0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char Newtonsoft.Json.JsonTextReader::MoveNext()
extern "C"  Il2CppChar JsonTextReader_MoveNext_m3151820611 (JsonTextReader_t726416198 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.JsonTextReader::HasNext()
extern "C"  bool JsonTextReader_HasNext_m950242452 (JsonTextReader_t726416198 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Newtonsoft.Json.JsonTextReader::PeekNext()
extern "C"  int32_t JsonTextReader_PeekNext_m835358791 (JsonTextReader_t726416198 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.JsonTextReader::Read()
extern "C"  bool JsonTextReader_Read_m3259846755 (JsonTextReader_t726416198 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Newtonsoft.Json.JsonTextReader::ReadAsBytes()
extern "C"  ByteU5BU5D_t3397334013* JsonTextReader_ReadAsBytes_m1625262702 (JsonTextReader_t726416198 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Nullable`1<System.Decimal> Newtonsoft.Json.JsonTextReader::ReadAsDecimal()
extern "C"  Nullable_1_t3282734688  JsonTextReader_ReadAsDecimal_m145666356 (JsonTextReader_t726416198 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Nullable`1<System.DateTimeOffset> Newtonsoft.Json.JsonTextReader::ReadAsDateTimeOffset()
extern "C"  Nullable_1_t3921022517  JsonTextReader_ReadAsDateTimeOffset_m1942380824 (JsonTextReader_t726416198 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.JsonTextReader::ReadInternal()
extern "C"  bool JsonTextReader_ReadInternal_m3425965176 (JsonTextReader_t726416198 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.JsonTextReader::ParsePostValue(System.Char)
extern "C"  bool JsonTextReader_ParsePostValue_m1438804508 (JsonTextReader_t726416198 * __this, Il2CppChar ___currentChar0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.JsonTextReader::ParseObject(System.Char)
extern "C"  bool JsonTextReader_ParseObject_m2348829814 (JsonTextReader_t726416198 * __this, Il2CppChar ___currentChar0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.JsonTextReader::ParseProperty(System.Char)
extern "C"  bool JsonTextReader_ParseProperty_m2688871560 (JsonTextReader_t726416198 * __this, Il2CppChar ___firstChar0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.JsonTextReader::ValidIdentifierChar(System.Char)
extern "C"  bool JsonTextReader_ValidIdentifierChar_m3690260911 (JsonTextReader_t726416198 * __this, Il2CppChar ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char Newtonsoft.Json.JsonTextReader::ParseUnquotedProperty(System.Char)
extern "C"  Il2CppChar JsonTextReader_ParseUnquotedProperty_m1826080977 (JsonTextReader_t726416198 * __this, Il2CppChar ___firstChar0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.JsonTextReader::ParseValue(System.Char)
extern "C"  bool JsonTextReader_ParseValue_m476497726 (JsonTextReader_t726416198 * __this, Il2CppChar ___currentChar0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.JsonTextReader::EatWhitespace(System.Char,System.Boolean,System.Char&)
extern "C"  bool JsonTextReader_EatWhitespace_m1982493287 (JsonTextReader_t726416198 * __this, Il2CppChar ___initialChar0, bool ___oneOrMore1, Il2CppChar* ___finalChar2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonTextReader::ParseConstructor()
extern "C"  void JsonTextReader_ParseConstructor_m4190633868 (JsonTextReader_t726416198 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonTextReader::ParseNumber(System.Char)
extern "C"  void JsonTextReader_ParseNumber_m3805558832 (JsonTextReader_t726416198 * __this, Il2CppChar ___firstChar0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonTextReader::ParseComment()
extern "C"  void JsonTextReader_ParseComment_m2640947987 (JsonTextReader_t726416198 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.JsonTextReader::MatchValue(System.Char,System.String)
extern "C"  bool JsonTextReader_MatchValue_m38368196 (JsonTextReader_t726416198 * __this, Il2CppChar ___firstChar0, String_t* ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.JsonTextReader::MatchValue(System.Char,System.String,System.Boolean)
extern "C"  bool JsonTextReader_MatchValue_m453639143 (JsonTextReader_t726416198 * __this, Il2CppChar ___firstChar0, String_t* ___value1, bool ___noTrailingNonSeperatorCharacters2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.JsonTextReader::IsSeperator(System.Char)
extern "C"  bool JsonTextReader_IsSeperator_m1992702301 (JsonTextReader_t726416198 * __this, Il2CppChar ___c0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonTextReader::ParseTrue()
extern "C"  void JsonTextReader_ParseTrue_m3071816150 (JsonTextReader_t726416198 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonTextReader::ParseNull()
extern "C"  void JsonTextReader_ParseNull_m2566256931 (JsonTextReader_t726416198 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonTextReader::ParseUndefined()
extern "C"  void JsonTextReader_ParseUndefined_m2064104088 (JsonTextReader_t726416198 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonTextReader::ParseFalse()
extern "C"  void JsonTextReader_ParseFalse_m1487752833 (JsonTextReader_t726416198 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonTextReader::ParseNumberNegativeInfinity()
extern "C"  void JsonTextReader_ParseNumberNegativeInfinity_m4021328760 (JsonTextReader_t726416198 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonTextReader::ParseNumberPositiveInfinity()
extern "C"  void JsonTextReader_ParseNumberPositiveInfinity_m65624504 (JsonTextReader_t726416198 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonTextReader::ParseNumberNaN()
extern "C"  void JsonTextReader_ParseNumberNaN_m3788902242 (JsonTextReader_t726416198 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonTextReader::Close()
extern "C"  void JsonTextReader_Close_m3566953263 (JsonTextReader_t726416198 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.JsonTextReader::HasLineInfo()
extern "C"  bool JsonTextReader_HasLineInfo_m817521275 (JsonTextReader_t726416198 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Newtonsoft.Json.JsonTextReader::get_LineNumber()
extern "C"  int32_t JsonTextReader_get_LineNumber_m1209693775 (JsonTextReader_t726416198 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Newtonsoft.Json.JsonTextReader::get_LinePosition()
extern "C"  int32_t JsonTextReader_get_LinePosition_m833107445 (JsonTextReader_t726416198 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
