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

// Newtonsoft.Json.Bson.BsonWriter
struct BsonWriter_t101776461;
// System.IO.Stream
struct Stream_t3255436806;
// System.String
struct String_t;
// Newtonsoft.Json.Bson.BsonToken
struct BsonToken_t3582361217;
// System.Object
struct Il2CppObject;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.Uri
struct Uri_t19570940;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IO_Stream3255436806.h"
#include "mscorlib_System_DateTimeKind2186819611.h"
#include "Json_NET_Newtonsoft_Json_JsonToken620654565.h"
#include "mscorlib_System_String2029220233.h"
#include "Json_NET_Newtonsoft_Json_Bson_BsonToken3582361217.h"
#include "mscorlib_System_Object2689449295.h"
#include "Json_NET_Newtonsoft_Json_Bson_BsonType2055433366.h"
#include "mscorlib_System_Decimal724701077.h"
#include "mscorlib_System_DateTime693205669.h"
#include "mscorlib_System_DateTimeOffset1362988906.h"
#include "mscorlib_System_Guid2533601593.h"
#include "mscorlib_System_TimeSpan3430258949.h"
#include "System_System_Uri19570940.h"

// System.Void Newtonsoft.Json.Bson.BsonWriter::.ctor(System.IO.Stream)
extern "C"  void BsonWriter__ctor_m2576320955 (BsonWriter_t101776461 * __this, Stream_t3255436806 * ___stream0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTimeKind Newtonsoft.Json.Bson.BsonWriter::get_DateTimeKindHandling()
extern "C"  int32_t BsonWriter_get_DateTimeKindHandling_m3032690132 (BsonWriter_t101776461 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Bson.BsonWriter::set_DateTimeKindHandling(System.DateTimeKind)
extern "C"  void BsonWriter_set_DateTimeKindHandling_m1477408645 (BsonWriter_t101776461 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Bson.BsonWriter::Flush()
extern "C"  void BsonWriter_Flush_m4085234550 (BsonWriter_t101776461 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Bson.BsonWriter::WriteEnd(Newtonsoft.Json.JsonToken)
extern "C"  void BsonWriter_WriteEnd_m2692459240 (BsonWriter_t101776461 * __this, int32_t ___token0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Bson.BsonWriter::WriteComment(System.String)
extern "C"  void BsonWriter_WriteComment_m1497445048 (BsonWriter_t101776461 * __this, String_t* ___text0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Bson.BsonWriter::WriteStartConstructor(System.String)
extern "C"  void BsonWriter_WriteStartConstructor_m232935695 (BsonWriter_t101776461 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Bson.BsonWriter::WriteRaw(System.String)
extern "C"  void BsonWriter_WriteRaw_m882498683 (BsonWriter_t101776461 * __this, String_t* ___json0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Bson.BsonWriter::WriteRawValue(System.String)
extern "C"  void BsonWriter_WriteRawValue_m3610607650 (BsonWriter_t101776461 * __this, String_t* ___json0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Bson.BsonWriter::WriteStartArray()
extern "C"  void BsonWriter_WriteStartArray_m2686958430 (BsonWriter_t101776461 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Bson.BsonWriter::WriteStartObject()
extern "C"  void BsonWriter_WriteStartObject_m3474047988 (BsonWriter_t101776461 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Bson.BsonWriter::WritePropertyName(System.String)
extern "C"  void BsonWriter_WritePropertyName_m2947698683 (BsonWriter_t101776461 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Bson.BsonWriter::Close()
extern "C"  void BsonWriter_Close_m4085433672 (BsonWriter_t101776461 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Bson.BsonWriter::AddParent(Newtonsoft.Json.Bson.BsonToken)
extern "C"  void BsonWriter_AddParent_m227662211 (BsonWriter_t101776461 * __this, BsonToken_t3582361217 * ___container0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Bson.BsonWriter::RemoveParent()
extern "C"  void BsonWriter_RemoveParent_m1183405830 (BsonWriter_t101776461 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Bson.BsonWriter::AddValue(System.Object,Newtonsoft.Json.Bson.BsonType)
extern "C"  void BsonWriter_AddValue_m89066493 (BsonWriter_t101776461 * __this, Il2CppObject * ___value0, int8_t ___type1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Bson.BsonWriter::AddToken(Newtonsoft.Json.Bson.BsonToken)
extern "C"  void BsonWriter_AddToken_m2249540120 (BsonWriter_t101776461 * __this, BsonToken_t3582361217 * ___token0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Bson.BsonWriter::WriteNull()
extern "C"  void BsonWriter_WriteNull_m3171549818 (BsonWriter_t101776461 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Bson.BsonWriter::WriteUndefined()
extern "C"  void BsonWriter_WriteUndefined_m153770171 (BsonWriter_t101776461 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Bson.BsonWriter::WriteValue(System.String)
extern "C"  void BsonWriter_WriteValue_m3038879808 (BsonWriter_t101776461 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Bson.BsonWriter::WriteValue(System.Int32)
extern "C"  void BsonWriter_WriteValue_m986106171 (BsonWriter_t101776461 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Bson.BsonWriter::WriteValue(System.UInt32)
extern "C"  void BsonWriter_WriteValue_m3755794852 (BsonWriter_t101776461 * __this, uint32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Bson.BsonWriter::WriteValue(System.Int64)
extern "C"  void BsonWriter_WriteValue_m1967337126 (BsonWriter_t101776461 * __this, int64_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Bson.BsonWriter::WriteValue(System.UInt64)
extern "C"  void BsonWriter_WriteValue_m2949225897 (BsonWriter_t101776461 * __this, uint64_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Bson.BsonWriter::WriteValue(System.Single)
extern "C"  void BsonWriter_WriteValue_m1810368039 (BsonWriter_t101776461 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Bson.BsonWriter::WriteValue(System.Double)
extern "C"  void BsonWriter_WriteValue_m3609720500 (BsonWriter_t101776461 * __this, double ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Bson.BsonWriter::WriteValue(System.Boolean)
extern "C"  void BsonWriter_WriteValue_m4288284981 (BsonWriter_t101776461 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Bson.BsonWriter::WriteValue(System.Int16)
extern "C"  void BsonWriter_WriteValue_m1268431169 (BsonWriter_t101776461 * __this, int16_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Bson.BsonWriter::WriteValue(System.UInt16)
extern "C"  void BsonWriter_WriteValue_m1786426450 (BsonWriter_t101776461 * __this, uint16_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Bson.BsonWriter::WriteValue(System.Char)
extern "C"  void BsonWriter_WriteValue_m595852069 (BsonWriter_t101776461 * __this, Il2CppChar ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Bson.BsonWriter::WriteValue(System.Byte)
extern "C"  void BsonWriter_WriteValue_m2181881251 (BsonWriter_t101776461 * __this, uint8_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Bson.BsonWriter::WriteValue(System.SByte)
extern "C"  void BsonWriter_WriteValue_m1438888162 (BsonWriter_t101776461 * __this, int8_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Bson.BsonWriter::WriteValue(System.Decimal)
extern "C"  void BsonWriter_WriteValue_m409063042 (BsonWriter_t101776461 * __this, Decimal_t724701077  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Bson.BsonWriter::WriteValue(System.DateTime)
extern "C"  void BsonWriter_WriteValue_m1453862976 (BsonWriter_t101776461 * __this, DateTime_t693205669  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Bson.BsonWriter::WriteValue(System.DateTimeOffset)
extern "C"  void BsonWriter_WriteValue_m1270537041 (BsonWriter_t101776461 * __this, DateTimeOffset_t1362988906  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Bson.BsonWriter::WriteValue(System.Byte[])
extern "C"  void BsonWriter_WriteValue_m3255757009 (BsonWriter_t101776461 * __this, ByteU5BU5D_t3397334013* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Bson.BsonWriter::WriteValue(System.Guid)
extern "C"  void BsonWriter_WriteValue_m1503182276 (BsonWriter_t101776461 * __this, Guid_t2533601593  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Bson.BsonWriter::WriteValue(System.TimeSpan)
extern "C"  void BsonWriter_WriteValue_m3019736996 (BsonWriter_t101776461 * __this, TimeSpan_t3430258949  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Bson.BsonWriter::WriteValue(System.Uri)
extern "C"  void BsonWriter_WriteValue_m3686160219 (BsonWriter_t101776461 * __this, Uri_t19570940 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Bson.BsonWriter::WriteObjectId(System.Byte[])
extern "C"  void BsonWriter_WriteObjectId_m3021914876 (BsonWriter_t101776461 * __this, ByteU5BU5D_t3397334013* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Bson.BsonWriter::WriteRegex(System.String,System.String)
extern "C"  void BsonWriter_WriteRegex_m4124196774 (BsonWriter_t101776461 * __this, String_t* ___pattern0, String_t* ___options1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
