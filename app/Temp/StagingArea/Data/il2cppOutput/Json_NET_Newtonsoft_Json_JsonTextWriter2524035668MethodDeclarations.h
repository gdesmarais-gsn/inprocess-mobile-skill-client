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

// Newtonsoft.Json.JsonTextWriter
struct JsonTextWriter_t2524035668;
// System.IO.TextWriter
struct TextWriter_t4027217640;
// Newtonsoft.Json.Utilities.Base64Encoder
struct Base64Encoder_t2682770749;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.Uri
struct Uri_t19570940;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IO_TextWriter4027217640.h"
#include "mscorlib_System_String2029220233.h"
#include "Json_NET_Newtonsoft_Json_JsonToken620654565.h"
#include "mscorlib_System_Nullable_1_gen339576247.h"
#include "mscorlib_System_Nullable_1_gen2341081996.h"
#include "mscorlib_System_Decimal724701077.h"
#include "mscorlib_System_DateTime693205669.h"
#include "mscorlib_System_DateTimeOffset1362988906.h"
#include "mscorlib_System_Guid2533601593.h"
#include "mscorlib_System_TimeSpan3430258949.h"
#include "System_System_Uri19570940.h"

// System.Void Newtonsoft.Json.JsonTextWriter::.ctor(System.IO.TextWriter)
extern "C"  void JsonTextWriter__ctor_m1334748130 (JsonTextWriter_t2524035668 * __this, TextWriter_t4027217640 * ___textWriter0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Utilities.Base64Encoder Newtonsoft.Json.JsonTextWriter::get_Base64Encoder()
extern "C"  Base64Encoder_t2682770749 * JsonTextWriter_get_Base64Encoder_m463464180 (JsonTextWriter_t2524035668 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Newtonsoft.Json.JsonTextWriter::get_Indentation()
extern "C"  int32_t JsonTextWriter_get_Indentation_m3968214913 (JsonTextWriter_t2524035668 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonTextWriter::set_Indentation(System.Int32)
extern "C"  void JsonTextWriter_set_Indentation_m4203640808 (JsonTextWriter_t2524035668 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char Newtonsoft.Json.JsonTextWriter::get_QuoteChar()
extern "C"  Il2CppChar JsonTextWriter_get_QuoteChar_m2840932736 (JsonTextWriter_t2524035668 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonTextWriter::set_QuoteChar(System.Char)
extern "C"  void JsonTextWriter_set_QuoteChar_m3677516439 (JsonTextWriter_t2524035668 * __this, Il2CppChar ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char Newtonsoft.Json.JsonTextWriter::get_IndentChar()
extern "C"  Il2CppChar JsonTextWriter_get_IndentChar_m3889521036 (JsonTextWriter_t2524035668 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonTextWriter::set_IndentChar(System.Char)
extern "C"  void JsonTextWriter_set_IndentChar_m1938629117 (JsonTextWriter_t2524035668 * __this, Il2CppChar ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.JsonTextWriter::get_QuoteName()
extern "C"  bool JsonTextWriter_get_QuoteName_m3429009603 (JsonTextWriter_t2524035668 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonTextWriter::set_QuoteName(System.Boolean)
extern "C"  void JsonTextWriter_set_QuoteName_m2617659012 (JsonTextWriter_t2524035668 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonTextWriter::Flush()
extern "C"  void JsonTextWriter_Flush_m161395795 (JsonTextWriter_t2524035668 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonTextWriter::Close()
extern "C"  void JsonTextWriter_Close_m2543439789 (JsonTextWriter_t2524035668 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonTextWriter::WriteStartObject()
extern "C"  void JsonTextWriter_WriteStartObject_m2861570243 (JsonTextWriter_t2524035668 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonTextWriter::WriteStartArray()
extern "C"  void JsonTextWriter_WriteStartArray_m787801947 (JsonTextWriter_t2524035668 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonTextWriter::WriteStartConstructor(System.String)
extern "C"  void JsonTextWriter_WriteStartConstructor_m1812031948 (JsonTextWriter_t2524035668 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonTextWriter::WriteEnd(Newtonsoft.Json.JsonToken)
extern "C"  void JsonTextWriter_WriteEnd_m1399943709 (JsonTextWriter_t2524035668 * __this, int32_t ___token0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonTextWriter::WritePropertyName(System.String)
extern "C"  void JsonTextWriter_WritePropertyName_m55676234 (JsonTextWriter_t2524035668 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonTextWriter::WritePropertyName(System.String,System.Boolean)
extern "C"  void JsonTextWriter_WritePropertyName_m2962550859 (JsonTextWriter_t2524035668 * __this, String_t* ___name0, bool ___escape1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonTextWriter::WriteIndent()
extern "C"  void JsonTextWriter_WriteIndent_m2517730884 (JsonTextWriter_t2524035668 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonTextWriter::WriteValueDelimiter()
extern "C"  void JsonTextWriter_WriteValueDelimiter_m4020004808 (JsonTextWriter_t2524035668 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonTextWriter::WriteIndentSpace()
extern "C"  void JsonTextWriter_WriteIndentSpace_m1044777344 (JsonTextWriter_t2524035668 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonTextWriter::WriteValueInternal(System.String,Newtonsoft.Json.JsonToken)
extern "C"  void JsonTextWriter_WriteValueInternal_m2609855118 (JsonTextWriter_t2524035668 * __this, String_t* ___value0, int32_t ___token1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonTextWriter::WriteNull()
extern "C"  void JsonTextWriter_WriteNull_m1808881701 (JsonTextWriter_t2524035668 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonTextWriter::WriteUndefined()
extern "C"  void JsonTextWriter_WriteUndefined_m2226449460 (JsonTextWriter_t2524035668 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonTextWriter::WriteRaw(System.String)
extern "C"  void JsonTextWriter_WriteRaw_m3627293364 (JsonTextWriter_t2524035668 * __this, String_t* ___json0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonTextWriter::WriteValue(System.String)
extern "C"  void JsonTextWriter_WriteValue_m1616805195 (JsonTextWriter_t2524035668 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonTextWriter::WriteValue(System.Int32)
extern "C"  void JsonTextWriter_WriteValue_m2560463460 (JsonTextWriter_t2524035668 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonTextWriter::WriteValue(System.UInt32)
extern "C"  void JsonTextWriter_WriteValue_m2492675741 (JsonTextWriter_t2524035668 * __this, uint32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonTextWriter::WriteValue(System.Int64)
extern "C"  void JsonTextWriter_WriteValue_m1397664083 (JsonTextWriter_t2524035668 * __this, int64_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonTextWriter::WriteValue(System.UInt64)
extern "C"  void JsonTextWriter_WriteValue_m2069188244 (JsonTextWriter_t2524035668 * __this, uint64_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonTextWriter::WriteValue(System.Single)
extern "C"  void JsonTextWriter_WriteValue_m3721940158 (JsonTextWriter_t2524035668 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonTextWriter::WriteValue(System.Nullable`1<System.Single>)
extern "C"  void JsonTextWriter_WriteValue_m2124982365 (JsonTextWriter_t2524035668 * __this, Nullable_1_t339576247  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonTextWriter::WriteValue(System.Double)
extern "C"  void JsonTextWriter_WriteValue_m3069082755 (JsonTextWriter_t2524035668 * __this, double ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonTextWriter::WriteValue(System.Nullable`1<System.Double>)
extern "C"  void JsonTextWriter_WriteValue_m3197898284 (JsonTextWriter_t2524035668 * __this, Nullable_1_t2341081996  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonTextWriter::WriteValue(System.Boolean)
extern "C"  void JsonTextWriter_WriteValue_m1642158044 (JsonTextWriter_t2524035668 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonTextWriter::WriteValue(System.Int16)
extern "C"  void JsonTextWriter_WriteValue_m234864566 (JsonTextWriter_t2524035668 * __this, int16_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonTextWriter::WriteValue(System.UInt16)
extern "C"  void JsonTextWriter_WriteValue_m2775000747 (JsonTextWriter_t2524035668 * __this, uint16_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonTextWriter::WriteValue(System.Char)
extern "C"  void JsonTextWriter_WriteValue_m3626959842 (JsonTextWriter_t2524035668 * __this, Il2CppChar ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonTextWriter::WriteValue(System.Byte)
extern "C"  void JsonTextWriter_WriteValue_m3431319420 (JsonTextWriter_t2524035668 * __this, uint8_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonTextWriter::WriteValue(System.SByte)
extern "C"  void JsonTextWriter_WriteValue_m1259232459 (JsonTextWriter_t2524035668 * __this, int8_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonTextWriter::WriteValue(System.Decimal)
extern "C"  void JsonTextWriter_WriteValue_m1376083729 (JsonTextWriter_t2524035668 * __this, Decimal_t724701077  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonTextWriter::WriteValue(System.DateTime)
extern "C"  void JsonTextWriter_WriteValue_m3064332807 (JsonTextWriter_t2524035668 * __this, DateTime_t693205669  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonTextWriter::WriteValue(System.Byte[])
extern "C"  void JsonTextWriter_WriteValue_m2370701964 (JsonTextWriter_t2524035668 * __this, ByteU5BU5D_t3397334013* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonTextWriter::WriteValue(System.DateTimeOffset)
extern "C"  void JsonTextWriter_WriteValue_m1331908252 (JsonTextWriter_t2524035668 * __this, DateTimeOffset_t1362988906  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonTextWriter::WriteValue(System.Guid)
extern "C"  void JsonTextWriter_WriteValue_m4015138689 (JsonTextWriter_t2524035668 * __this, Guid_t2533601593  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonTextWriter::WriteValue(System.TimeSpan)
extern "C"  void JsonTextWriter_WriteValue_m542390583 (JsonTextWriter_t2524035668 * __this, TimeSpan_t3430258949  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonTextWriter::WriteValue(System.Uri)
extern "C"  void JsonTextWriter_WriteValue_m1598909146 (JsonTextWriter_t2524035668 * __this, Uri_t19570940 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonTextWriter::WriteComment(System.String)
extern "C"  void JsonTextWriter_WriteComment_m1461460547 (JsonTextWriter_t2524035668 * __this, String_t* ___text0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonTextWriter::WriteWhitespace(System.String)
extern "C"  void JsonTextWriter_WriteWhitespace_m4854659 (JsonTextWriter_t2524035668 * __this, String_t* ___ws0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
