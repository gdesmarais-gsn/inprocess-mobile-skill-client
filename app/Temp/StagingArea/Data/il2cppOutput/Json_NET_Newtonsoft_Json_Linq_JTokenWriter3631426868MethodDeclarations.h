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

// Newtonsoft.Json.Linq.JTokenWriter
struct JTokenWriter_t3631426868;
// Newtonsoft.Json.Linq.JContainer
struct JContainer_t3538280255;
// Newtonsoft.Json.Linq.JToken
struct JToken_t2552644013;
// System.String
struct String_t;
// System.Object
struct Il2CppObject;
// Newtonsoft.Json.Linq.JValue
struct JValue_t300956845;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.Uri
struct Uri_t19570940;

#include "codegen/il2cpp-codegen.h"
#include "Json_NET_Newtonsoft_Json_Linq_JContainer3538280255.h"
#include "mscorlib_System_String2029220233.h"
#include "Json_NET_Newtonsoft_Json_JsonToken620654565.h"
#include "mscorlib_System_Object2689449295.h"
#include "Json_NET_Newtonsoft_Json_Linq_JValue300956845.h"
#include "mscorlib_System_Decimal724701077.h"
#include "mscorlib_System_DateTime693205669.h"
#include "mscorlib_System_DateTimeOffset1362988906.h"
#include "mscorlib_System_TimeSpan3430258949.h"
#include "mscorlib_System_Guid2533601593.h"
#include "System_System_Uri19570940.h"

// System.Void Newtonsoft.Json.Linq.JTokenWriter::.ctor(Newtonsoft.Json.Linq.JContainer)
extern "C"  void JTokenWriter__ctor_m1411763681 (JTokenWriter_t3631426868 * __this, JContainer_t3538280255 * ___container0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JTokenWriter::.ctor()
extern "C"  void JTokenWriter__ctor_m2315447903 (JTokenWriter_t3631426868 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JTokenWriter::get_Token()
extern "C"  JToken_t2552644013 * JTokenWriter_get_Token_m532985768 (JTokenWriter_t3631426868 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JTokenWriter::Flush()
extern "C"  void JTokenWriter_Flush_m4045273827 (JTokenWriter_t3631426868 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JTokenWriter::Close()
extern "C"  void JTokenWriter_Close_m4045456053 (JTokenWriter_t3631426868 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JTokenWriter::WriteStartObject()
extern "C"  void JTokenWriter_WriteStartObject_m1254392747 (JTokenWriter_t3631426868 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JTokenWriter::AddParent(Newtonsoft.Json.Linq.JContainer)
extern "C"  void JTokenWriter_AddParent_m3827456568 (JTokenWriter_t3631426868 * __this, JContainer_t3538280255 * ___container0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JTokenWriter::RemoveParent()
extern "C"  void JTokenWriter_RemoveParent_m2038997229 (JTokenWriter_t3631426868 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JTokenWriter::WriteStartArray()
extern "C"  void JTokenWriter_WriteStartArray_m47860635 (JTokenWriter_t3631426868 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JTokenWriter::WriteStartConstructor(System.String)
extern "C"  void JTokenWriter_WriteStartConstructor_m2081876498 (JTokenWriter_t3631426868 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JTokenWriter::WriteEnd(Newtonsoft.Json.JsonToken)
extern "C"  void JTokenWriter_WriteEnd_m3248233093 (JTokenWriter_t3631426868 * __this, int32_t ___token0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JTokenWriter::WritePropertyName(System.String)
extern "C"  void JTokenWriter_WritePropertyName_m379200052 (JTokenWriter_t3631426868 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JTokenWriter::AddValue(System.Object,Newtonsoft.Json.JsonToken)
extern "C"  void JTokenWriter_AddValue_m551185795 (JTokenWriter_t3631426868 * __this, Il2CppObject * ___value0, int32_t ___token1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JTokenWriter::AddValue(Newtonsoft.Json.Linq.JValue,Newtonsoft.Json.JsonToken)
extern "C"  void JTokenWriter_AddValue_m2642402651 (JTokenWriter_t3631426868 * __this, JValue_t300956845 * ___value0, int32_t ___token1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JTokenWriter::WriteNull()
extern "C"  void JTokenWriter_WriteNull_m788575181 (JTokenWriter_t3631426868 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JTokenWriter::WriteUndefined()
extern "C"  void JTokenWriter_WriteUndefined_m2571132562 (JTokenWriter_t3631426868 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JTokenWriter::WriteRaw(System.String)
extern "C"  void JTokenWriter_WriteRaw_m1974074034 (JTokenWriter_t3631426868 * __this, String_t* ___json0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JTokenWriter::WriteComment(System.String)
extern "C"  void JTokenWriter_WriteComment_m3100773707 (JTokenWriter_t3631426868 * __this, String_t* ___text0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JTokenWriter::WriteValue(System.String)
extern "C"  void JTokenWriter_WriteValue_m3379172291 (JTokenWriter_t3631426868 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JTokenWriter::WriteValue(System.Int32)
extern "C"  void JTokenWriter_WriteValue_m709055682 (JTokenWriter_t3631426868 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JTokenWriter::WriteValue(System.UInt32)
extern "C"  void JTokenWriter_WriteValue_m3031945693 (JTokenWriter_t3631426868 * __this, uint32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JTokenWriter::WriteValue(System.Int64)
extern "C"  void JTokenWriter_WriteValue_m2893492003 (JTokenWriter_t3631426868 * __this, int64_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JTokenWriter::WriteValue(System.UInt64)
extern "C"  void JTokenWriter_WriteValue_m4194745206 (JTokenWriter_t3631426868 * __this, uint64_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JTokenWriter::WriteValue(System.Single)
extern "C"  void JTokenWriter_WriteValue_m2312784592 (JTokenWriter_t3631426868 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JTokenWriter::WriteValue(System.Double)
extern "C"  void JTokenWriter_WriteValue_m2292335627 (JTokenWriter_t3631426868 * __this, double ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JTokenWriter::WriteValue(System.Boolean)
extern "C"  void JTokenWriter_WriteValue_m3281851662 (JTokenWriter_t3631426868 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JTokenWriter::WriteValue(System.Int16)
extern "C"  void JTokenWriter_WriteValue_m426730676 (JTokenWriter_t3631426868 * __this, int16_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JTokenWriter::WriteValue(System.UInt16)
extern "C"  void JTokenWriter_WriteValue_m1062577291 (JTokenWriter_t3631426868 * __this, uint16_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JTokenWriter::WriteValue(System.Char)
extern "C"  void JTokenWriter_WriteValue_m2818722872 (JTokenWriter_t3631426868 * __this, Il2CppChar ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JTokenWriter::WriteValue(System.Byte)
extern "C"  void JTokenWriter_WriteValue_m3524277642 (JTokenWriter_t3631426868 * __this, uint8_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JTokenWriter::WriteValue(System.SByte)
extern "C"  void JTokenWriter_WriteValue_m533738763 (JTokenWriter_t3631426868 * __this, int8_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JTokenWriter::WriteValue(System.Decimal)
extern "C"  void JTokenWriter_WriteValue_m4203623097 (JTokenWriter_t3631426868 * __this, Decimal_t724701077  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JTokenWriter::WriteValue(System.DateTime)
extern "C"  void JTokenWriter_WriteValue_m1145079159 (JTokenWriter_t3631426868 * __this, DateTime_t693205669  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JTokenWriter::WriteValue(System.DateTimeOffset)
extern "C"  void JTokenWriter_WriteValue_m1868076686 (JTokenWriter_t3631426868 * __this, DateTimeOffset_t1362988906  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JTokenWriter::WriteValue(System.Byte[])
extern "C"  void JTokenWriter_WriteValue_m1472997086 (JTokenWriter_t3631426868 * __this, ByteU5BU5D_t3397334013* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JTokenWriter::WriteValue(System.TimeSpan)
extern "C"  void JTokenWriter_WriteValue_m781416199 (JTokenWriter_t3631426868 * __this, TimeSpan_t3430258949  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JTokenWriter::WriteValue(System.Guid)
extern "C"  void JTokenWriter_WriteValue_m4008377585 (JTokenWriter_t3631426868 * __this, Guid_t2533601593  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JTokenWriter::WriteValue(System.Uri)
extern "C"  void JTokenWriter_WriteValue_m1266822692 (JTokenWriter_t3631426868 * __this, Uri_t19570940 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
