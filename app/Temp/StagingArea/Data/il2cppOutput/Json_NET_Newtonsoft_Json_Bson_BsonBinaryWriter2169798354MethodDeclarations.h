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

// Newtonsoft.Json.Bson.BsonBinaryWriter
struct BsonBinaryWriter_t2169798354;
// System.IO.Stream
struct Stream_t3255436806;
// Newtonsoft.Json.Bson.BsonToken
struct BsonToken_t3582361217;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IO_Stream3255436806.h"
#include "mscorlib_System_DateTimeKind2186819611.h"
#include "Json_NET_Newtonsoft_Json_Bson_BsonToken3582361217.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Nullable_1_gen334943763.h"

// System.Void Newtonsoft.Json.Bson.BsonBinaryWriter::.ctor(System.IO.Stream)
extern "C"  void BsonBinaryWriter__ctor_m64768352 (BsonBinaryWriter_t2169798354 * __this, Stream_t3255436806 * ___stream0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTimeKind Newtonsoft.Json.Bson.BsonBinaryWriter::get_DateTimeKindHandling()
extern "C"  int32_t BsonBinaryWriter_get_DateTimeKindHandling_m1007620625 (BsonBinaryWriter_t2169798354 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Bson.BsonBinaryWriter::set_DateTimeKindHandling(System.DateTimeKind)
extern "C"  void BsonBinaryWriter_set_DateTimeKindHandling_m2002729104 (BsonBinaryWriter_t2169798354 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Bson.BsonBinaryWriter::Flush()
extern "C"  void BsonBinaryWriter_Flush_m3551850423 (BsonBinaryWriter_t2169798354 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Bson.BsonBinaryWriter::Close()
extern "C"  void BsonBinaryWriter_Close_m3551723109 (BsonBinaryWriter_t2169798354 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Bson.BsonBinaryWriter::WriteToken(Newtonsoft.Json.Bson.BsonToken)
extern "C"  void BsonBinaryWriter_WriteToken_m3692380579 (BsonBinaryWriter_t2169798354 * __this, BsonToken_t3582361217 * ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Bson.BsonBinaryWriter::WriteTokenInternal(Newtonsoft.Json.Bson.BsonToken)
extern "C"  void BsonBinaryWriter_WriteTokenInternal_m1442221016 (BsonBinaryWriter_t2169798354 * __this, BsonToken_t3582361217 * ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Bson.BsonBinaryWriter::WriteString(System.String,System.Int32,System.Nullable`1<System.Int32>)
extern "C"  void BsonBinaryWriter_WriteString_m956711608 (BsonBinaryWriter_t2169798354 * __this, String_t* ___s0, int32_t ___byteCount1, Nullable_1_t334943763  ___calculatedlengthPrefix2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Newtonsoft.Json.Bson.BsonBinaryWriter::CalculateSize(System.Int32)
extern "C"  int32_t BsonBinaryWriter_CalculateSize_m41607857 (BsonBinaryWriter_t2169798354 * __this, int32_t ___stringByteCount0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Newtonsoft.Json.Bson.BsonBinaryWriter::CalculateSizeWithLength(System.Int32,System.Boolean)
extern "C"  int32_t BsonBinaryWriter_CalculateSizeWithLength_m370767142 (BsonBinaryWriter_t2169798354 * __this, int32_t ___stringByteCount0, bool ___includeSize1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Newtonsoft.Json.Bson.BsonBinaryWriter::CalculateSize(Newtonsoft.Json.Bson.BsonToken)
extern "C"  int32_t BsonBinaryWriter_CalculateSize_m3594199660 (BsonBinaryWriter_t2169798354 * __this, BsonToken_t3582361217 * ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Bson.BsonBinaryWriter::.cctor()
extern "C"  void BsonBinaryWriter__cctor_m947702646 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
