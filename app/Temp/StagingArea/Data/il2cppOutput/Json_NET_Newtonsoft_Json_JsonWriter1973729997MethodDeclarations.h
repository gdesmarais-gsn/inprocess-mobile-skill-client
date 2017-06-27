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

// Newtonsoft.Json.JsonWriter
struct JsonWriter_t1973729997;
// System.String
struct String_t;
// Newtonsoft.Json.JsonReader
struct JsonReader_t3154730733;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.Uri
struct Uri_t19570940;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "Json_NET_Newtonsoft_Json_WriteState1009238728.h"
#include "Json_NET_Newtonsoft_Json_Formatting4009318759.h"
#include "Json_NET_Newtonsoft_Json_FloatFormatHandling898035958.h"
#include "Json_NET_Newtonsoft_Json_Linq_JTokenType1307827213.h"
#include "mscorlib_System_String2029220233.h"
#include "Json_NET_Newtonsoft_Json_JsonReader3154730733.h"
#include "Json_NET_Newtonsoft_Json_JsonToken620654565.h"
#include "mscorlib_System_Decimal724701077.h"
#include "mscorlib_System_DateTime693205669.h"
#include "mscorlib_System_DateTimeOffset1362988906.h"
#include "mscorlib_System_Guid2533601593.h"
#include "mscorlib_System_TimeSpan3430258949.h"
#include "mscorlib_System_Nullable_1_gen334943763.h"
#include "mscorlib_System_Nullable_1_gen412748336.h"
#include "mscorlib_System_Nullable_1_gen3467111648.h"
#include "mscorlib_System_Nullable_1_gen1172263229.h"
#include "mscorlib_System_Nullable_1_gen339576247.h"
#include "mscorlib_System_Nullable_1_gen2341081996.h"
#include "mscorlib_System_Nullable_1_gen2088641033.h"
#include "mscorlib_System_Nullable_1_gen2304312229.h"
#include "mscorlib_System_Nullable_1_gen3544916222.h"
#include "mscorlib_System_Nullable_1_gen1717547653.h"
#include "mscorlib_System_Nullable_1_gen1946170751.h"
#include "mscorlib_System_Nullable_1_gen3012451160.h"
#include "mscorlib_System_Nullable_1_gen3282734688.h"
#include "mscorlib_System_Nullable_1_gen3251239280.h"
#include "mscorlib_System_Nullable_1_gen3921022517.h"
#include "mscorlib_System_Nullable_1_gen796667908.h"
#include "mscorlib_System_Nullable_1_gen1693325264.h"
#include "System_System_Uri19570940.h"
#include "mscorlib_System_Object2689449295.h"

// System.Void Newtonsoft.Json.JsonWriter::.ctor()
extern "C"  void JsonWriter__ctor_m2165582412 (JsonWriter_t1973729997 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.JsonWriter::get_CloseOutput()
extern "C"  bool JsonWriter_get_CloseOutput_m551762898 (JsonWriter_t1973729997 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonWriter::set_CloseOutput(System.Boolean)
extern "C"  void JsonWriter_set_CloseOutput_m1061483253 (JsonWriter_t1973729997 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Newtonsoft.Json.JsonWriter::get_Top()
extern "C"  int32_t JsonWriter_get_Top_m2589419716 (JsonWriter_t1973729997 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.WriteState Newtonsoft.Json.JsonWriter::get_WriteState()
extern "C"  int32_t JsonWriter_get_WriteState_m357838071 (JsonWriter_t1973729997 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Formatting Newtonsoft.Json.JsonWriter::get_Formatting()
extern "C"  int32_t JsonWriter_get_Formatting_m2913629963 (JsonWriter_t1973729997 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonWriter::set_Formatting(Newtonsoft.Json.Formatting)
extern "C"  void JsonWriter_set_Formatting_m2478024718 (JsonWriter_t1973729997 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.FloatFormatHandling Newtonsoft.Json.JsonWriter::get_FloatFormatHandling()
extern "C"  int32_t JsonWriter_get_FloatFormatHandling_m3480282619 (JsonWriter_t1973729997 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonWriter::set_FloatFormatHandling(Newtonsoft.Json.FloatFormatHandling)
extern "C"  void JsonWriter_set_FloatFormatHandling_m747602190 (JsonWriter_t1973729997 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonWriter::Push(Newtonsoft.Json.Linq.JTokenType)
extern "C"  void JsonWriter_Push_m3260454756 (JsonWriter_t1973729997 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Linq.JTokenType Newtonsoft.Json.JsonWriter::Pop()
extern "C"  int32_t JsonWriter_Pop_m3837768220 (JsonWriter_t1973729997 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Linq.JTokenType Newtonsoft.Json.JsonWriter::Peek()
extern "C"  int32_t JsonWriter_Peek_m1684831992 (JsonWriter_t1973729997 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonWriter::Close()
extern "C"  void JsonWriter_Close_m2507891320 (JsonWriter_t1973729997 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonWriter::WriteStartObject()
extern "C"  void JsonWriter_WriteStartObject_m2318550672 (JsonWriter_t1973729997 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonWriter::WriteEndObject()
extern "C"  void JsonWriter_WriteEndObject_m3406690849 (JsonWriter_t1973729997 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonWriter::WriteStartArray()
extern "C"  void JsonWriter_WriteStartArray_m4059921870 (JsonWriter_t1973729997 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonWriter::WriteEndArray()
extern "C"  void JsonWriter_WriteEndArray_m230435793 (JsonWriter_t1973729997 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonWriter::WriteStartConstructor(System.String)
extern "C"  void JsonWriter_WriteStartConstructor_m1993425841 (JsonWriter_t1973729997 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonWriter::WriteEndConstructor()
extern "C"  void JsonWriter_WriteEndConstructor_m2924685376 (JsonWriter_t1973729997 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonWriter::WritePropertyName(System.String)
extern "C"  void JsonWriter_WritePropertyName_m142611565 (JsonWriter_t1973729997 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonWriter::WriteEnd()
extern "C"  void JsonWriter_WriteEnd_m2726425386 (JsonWriter_t1973729997 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonWriter::WriteToken(Newtonsoft.Json.JsonReader)
extern "C"  void JsonWriter_WriteToken_m3896814982 (JsonWriter_t1973729997 * __this, JsonReader_t3154730733 * ___reader0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonWriter::WriteToken(Newtonsoft.Json.JsonReader,System.Int32)
extern "C"  void JsonWriter_WriteToken_m3534598111 (JsonWriter_t1973729997 * __this, JsonReader_t3154730733 * ___reader0, int32_t ___initialDepth1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonWriter::WriteConstructorDate(Newtonsoft.Json.JsonReader)
extern "C"  void JsonWriter_WriteConstructorDate_m255364141 (JsonWriter_t1973729997 * __this, JsonReader_t3154730733 * ___reader0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.JsonWriter::IsEndToken(Newtonsoft.Json.JsonToken)
extern "C"  bool JsonWriter_IsEndToken_m2374469938 (JsonWriter_t1973729997 * __this, int32_t ___token0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.JsonWriter::IsStartToken(Newtonsoft.Json.JsonToken)
extern "C"  bool JsonWriter_IsStartToken_m1157057779 (JsonWriter_t1973729997 * __this, int32_t ___token0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonWriter::WriteEnd(Newtonsoft.Json.Linq.JTokenType)
extern "C"  void JsonWriter_WriteEnd_m1156340000 (JsonWriter_t1973729997 * __this, int32_t ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonWriter::AutoCompleteAll()
extern "C"  void JsonWriter_AutoCompleteAll_m2232421009 (JsonWriter_t1973729997 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Linq.JTokenType Newtonsoft.Json.JsonWriter::GetTypeForCloseToken(Newtonsoft.Json.JsonToken)
extern "C"  int32_t JsonWriter_GetTypeForCloseToken_m1747250095 (JsonWriter_t1973729997 * __this, int32_t ___token0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.JsonToken Newtonsoft.Json.JsonWriter::GetCloseTokenForType(Newtonsoft.Json.Linq.JTokenType)
extern "C"  int32_t JsonWriter_GetCloseTokenForType_m786988323 (JsonWriter_t1973729997 * __this, int32_t ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonWriter::AutoCompleteClose(Newtonsoft.Json.JsonToken)
extern "C"  void JsonWriter_AutoCompleteClose_m2363834566 (JsonWriter_t1973729997 * __this, int32_t ___tokenBeingClosed0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonWriter::WriteEnd(Newtonsoft.Json.JsonToken)
extern "C"  void JsonWriter_WriteEnd_m2265582992 (JsonWriter_t1973729997 * __this, int32_t ___token0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonWriter::WriteIndent()
extern "C"  void JsonWriter_WriteIndent_m342089815 (JsonWriter_t1973729997 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonWriter::WriteValueDelimiter()
extern "C"  void JsonWriter_WriteValueDelimiter_m3395279435 (JsonWriter_t1973729997 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonWriter::WriteIndentSpace()
extern "C"  void JsonWriter_WriteIndentSpace_m2893373459 (JsonWriter_t1973729997 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonWriter::AutoComplete(Newtonsoft.Json.JsonToken)
extern "C"  void JsonWriter_AutoComplete_m1900881800 (JsonWriter_t1973729997 * __this, int32_t ___tokenBeingWritten0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonWriter::WriteNull()
extern "C"  void JsonWriter_WriteNull_m1672871682 (JsonWriter_t1973729997 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonWriter::WriteUndefined()
extern "C"  void JsonWriter_WriteUndefined_m279215161 (JsonWriter_t1973729997 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonWriter::WriteRaw(System.String)
extern "C"  void JsonWriter_WriteRaw_m87595673 (JsonWriter_t1973729997 * __this, String_t* ___json0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonWriter::WriteRawValue(System.String)
extern "C"  void JsonWriter_WriteRawValue_m3253547102 (JsonWriter_t1973729997 * __this, String_t* ___json0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.String)
extern "C"  void JsonWriter_WriteValue_m4218354008 (JsonWriter_t1973729997 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.Int32)
extern "C"  void JsonWriter_WriteValue_m2125684065 (JsonWriter_t1973729997 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.UInt32)
extern "C"  void JsonWriter_WriteValue_m1839252576 (JsonWriter_t1973729997 * __this, uint32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.Int64)
extern "C"  void JsonWriter_WriteValue_m1319115238 (JsonWriter_t1973729997 * __this, int64_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.UInt64)
extern "C"  void JsonWriter_WriteValue_m3949783551 (JsonWriter_t1973729997 * __this, uint64_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.Single)
extern "C"  void JsonWriter_WriteValue_m2804848561 (JsonWriter_t1973729997 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.Double)
extern "C"  void JsonWriter_WriteValue_m2805780656 (JsonWriter_t1973729997 * __this, double ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.Boolean)
extern "C"  void JsonWriter_WriteValue_m3262864551 (JsonWriter_t1973729997 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.Int16)
extern "C"  void JsonWriter_WriteValue_m156315531 (JsonWriter_t1973729997 * __this, int16_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.UInt16)
extern "C"  void JsonWriter_WriteValue_m2121577582 (JsonWriter_t1973729997 * __this, uint16_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.Char)
extern "C"  void JsonWriter_WriteValue_m2148210199 (JsonWriter_t1973729997 * __this, Il2CppChar ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.Byte)
extern "C"  void JsonWriter_WriteValue_m3455014297 (JsonWriter_t1973729997 * __this, uint8_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.SByte)
extern "C"  void JsonWriter_WriteValue_m1409046470 (JsonWriter_t1973729997 * __this, int8_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.Decimal)
extern "C"  void JsonWriter_WriteValue_m2257544542 (JsonWriter_t1973729997 * __this, Decimal_t724701077  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.DateTime)
extern "C"  void JsonWriter_WriteValue_m2083324844 (JsonWriter_t1973729997 * __this, DateTime_t693205669  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.DateTimeOffset)
extern "C"  void JsonWriter_WriteValue_m59414967 (JsonWriter_t1973729997 * __this, DateTimeOffset_t1362988906  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.Guid)
extern "C"  void JsonWriter_WriteValue_m1760030572 (JsonWriter_t1973729997 * __this, Guid_t2533601593  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.TimeSpan)
extern "C"  void JsonWriter_WriteValue_m2117633468 (JsonWriter_t1973729997 * __this, TimeSpan_t3430258949  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.Nullable`1<System.Int32>)
extern "C"  void JsonWriter_WriteValue_m1066611996 (JsonWriter_t1973729997 * __this, Nullable_1_t334943763  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.Nullable`1<System.UInt32>)
extern "C"  void JsonWriter_WriteValue_m2688313073 (JsonWriter_t1973729997 * __this, Nullable_1_t412748336  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.Nullable`1<System.Int64>)
extern "C"  void JsonWriter_WriteValue_m784286967 (JsonWriter_t1973729997 * __this, Nullable_1_t3467111648  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.Nullable`1<System.UInt64>)
extern "C"  void JsonWriter_WriteValue_m900512992 (JsonWriter_t1973729997 * __this, Nullable_1_t1172263229  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.Nullable`1<System.Single>)
extern "C"  void JsonWriter_WriteValue_m317484154 (JsonWriter_t1973729997 * __this, Nullable_1_t339576247  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.Nullable`1<System.Double>)
extern "C"  void JsonWriter_WriteValue_m2731492207 (JsonWriter_t1973729997 * __this, Nullable_1_t2341081996  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.Nullable`1<System.Boolean>)
extern "C"  void JsonWriter_WriteValue_m2614620920 (JsonWriter_t1973729997 * __this, Nullable_1_t2088641033  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.Nullable`1<System.Int16>)
extern "C"  void JsonWriter_WriteValue_m501961930 (JsonWriter_t1973729997 * __this, Nullable_1_t2304312229  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.Nullable`1<System.UInt16>)
extern "C"  void JsonWriter_WriteValue_m80389111 (JsonWriter_t1973729997 * __this, Nullable_1_t3544916222  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.Nullable`1<System.Char>)
extern "C"  void JsonWriter_WriteValue_m4186564254 (JsonWriter_t1973729997 * __this, Nullable_1_t1717547653  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.Nullable`1<System.Byte>)
extern "C"  void JsonWriter_WriteValue_m90536384 (JsonWriter_t1973729997 * __this, Nullable_1_t1946170751  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.Nullable`1<System.SByte>)
extern "C"  void JsonWriter_WriteValue_m3908216967 (JsonWriter_t1973729997 * __this, Nullable_1_t3012451160  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.Nullable`1<System.Decimal>)
extern "C"  void JsonWriter_WriteValue_m1864100905 (JsonWriter_t1973729997 * __this, Nullable_1_t3282734688  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.Nullable`1<System.DateTime>)
extern "C"  void JsonWriter_WriteValue_m2903762163 (JsonWriter_t1973729997 * __this, Nullable_1_t3251239280  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.Nullable`1<System.DateTimeOffset>)
extern "C"  void JsonWriter_WriteValue_m781687512 (JsonWriter_t1973729997 * __this, Nullable_1_t3921022517  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.Nullable`1<System.Guid>)
extern "C"  void JsonWriter_WriteValue_m4154619901 (JsonWriter_t1973729997 * __this, Nullable_1_t796667908  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.Nullable`1<System.TimeSpan>)
extern "C"  void JsonWriter_WriteValue_m1332025043 (JsonWriter_t1973729997 * __this, Nullable_1_t1693325264  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.Byte[])
extern "C"  void JsonWriter_WriteValue_m3440831095 (JsonWriter_t1973729997 * __this, ByteU5BU5D_t3397334013* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.Uri)
extern "C"  void JsonWriter_WriteValue_m922664053 (JsonWriter_t1973729997 * __this, Uri_t19570940 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.Object)
extern "C"  void JsonWriter_WriteValue_m3213003554 (JsonWriter_t1973729997 * __this, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonWriter::WriteComment(System.String)
extern "C"  void JsonWriter_WriteComment_m2249800224 (JsonWriter_t1973729997 * __this, String_t* ___text0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonWriter::WriteWhitespace(System.String)
extern "C"  void JsonWriter_WriteWhitespace_m1892004720 (JsonWriter_t1973729997 * __this, String_t* ___ws0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonWriter::System.IDisposable.Dispose()
extern "C"  void JsonWriter_System_IDisposable_Dispose_m227808993 (JsonWriter_t1973729997 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonWriter::Dispose(System.Boolean)
extern "C"  void JsonWriter_Dispose_m3589466240 (JsonWriter_t1973729997 * __this, bool ___disposing0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonWriter::.cctor()
extern "C"  void JsonWriter__cctor_m1776429085 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
