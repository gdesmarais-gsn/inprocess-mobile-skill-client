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

// Newtonsoft.Json.Bson.BsonReader
struct BsonReader_t2352164445;
// System.IO.Stream
struct Stream_t3255436806;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// Newtonsoft.Json.Bson.BsonReader/ContainerContext
struct ContainerContext_t2144264477;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IO_Stream3255436806.h"
#include "mscorlib_System_DateTimeKind2186819611.h"
#include "mscorlib_System_Nullable_1_gen3282734688.h"
#include "mscorlib_System_Nullable_1_gen3921022517.h"
#include "Json_NET_Newtonsoft_Json_Bson_BsonReader_Container2144264477.h"
#include "Json_NET_Newtonsoft_Json_Bson_BsonType2055433366.h"

// System.Void Newtonsoft.Json.Bson.BsonReader::.ctor(System.IO.Stream)
extern "C"  void BsonReader__ctor_m4166122297 (BsonReader_t2352164445 * __this, Stream_t3255436806 * ___stream0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Bson.BsonReader::.ctor(System.IO.Stream,System.Boolean,System.DateTimeKind)
extern "C"  void BsonReader__ctor_m302117676 (BsonReader_t2352164445 * __this, Stream_t3255436806 * ___stream0, bool ___readRootValueAsArray1, int32_t ___dateTimeKindHandling2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Bson.BsonReader::get_JsonNet35BinaryCompatibility()
extern "C"  bool BsonReader_get_JsonNet35BinaryCompatibility_m2052293683 (BsonReader_t2352164445 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Bson.BsonReader::set_JsonNet35BinaryCompatibility(System.Boolean)
extern "C"  void BsonReader_set_JsonNet35BinaryCompatibility_m2291247978 (BsonReader_t2352164445 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Bson.BsonReader::get_ReadRootValueAsArray()
extern "C"  bool BsonReader_get_ReadRootValueAsArray_m2371282947 (BsonReader_t2352164445 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Bson.BsonReader::set_ReadRootValueAsArray(System.Boolean)
extern "C"  void BsonReader_set_ReadRootValueAsArray_m1857618492 (BsonReader_t2352164445 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTimeKind Newtonsoft.Json.Bson.BsonReader::get_DateTimeKindHandling()
extern "C"  int32_t BsonReader_get_DateTimeKindHandling_m1466115856 (BsonReader_t2352164445 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Bson.BsonReader::set_DateTimeKindHandling(System.DateTimeKind)
extern "C"  void BsonReader_set_DateTimeKindHandling_m3466049963 (BsonReader_t2352164445 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Newtonsoft.Json.Bson.BsonReader::ReadElement()
extern "C"  String_t* BsonReader_ReadElement_m3636685603 (BsonReader_t2352164445 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Newtonsoft.Json.Bson.BsonReader::ReadAsBytes()
extern "C"  ByteU5BU5D_t3397334013* BsonReader_ReadAsBytes_m1139699483 (BsonReader_t2352164445 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Nullable`1<System.Decimal> Newtonsoft.Json.Bson.BsonReader::ReadAsDecimal()
extern "C"  Nullable_1_t3282734688  BsonReader_ReadAsDecimal_m1752416875 (BsonReader_t2352164445 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Nullable`1<System.DateTimeOffset> Newtonsoft.Json.Bson.BsonReader::ReadAsDateTimeOffset()
extern "C"  Nullable_1_t3921022517  BsonReader_ReadAsDateTimeOffset_m3753029067 (BsonReader_t2352164445 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Bson.BsonReader::Read()
extern "C"  bool BsonReader_Read_m3180462390 (BsonReader_t2352164445 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Bson.BsonReader::Close()
extern "C"  void BsonReader_Close_m3273626300 (BsonReader_t2352164445 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Bson.BsonReader::ReadCodeWScope()
extern "C"  bool BsonReader_ReadCodeWScope_m3057504980 (BsonReader_t2352164445 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Bson.BsonReader::ReadReference()
extern "C"  bool BsonReader_ReadReference_m77901467 (BsonReader_t2352164445 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Bson.BsonReader::ReadNormal()
extern "C"  bool BsonReader_ReadNormal_m1139295615 (BsonReader_t2352164445 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Bson.BsonReader::PopContext()
extern "C"  void BsonReader_PopContext_m2195087876 (BsonReader_t2352164445 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Bson.BsonReader::PushContext(Newtonsoft.Json.Bson.BsonReader/ContainerContext)
extern "C"  void BsonReader_PushContext_m2126411312 (BsonReader_t2352164445 * __this, ContainerContext_t2144264477 * ___newContext0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte Newtonsoft.Json.Bson.BsonReader::ReadByte()
extern "C"  uint8_t BsonReader_ReadByte_m307591972 (BsonReader_t2352164445 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Bson.BsonReader::ReadType(Newtonsoft.Json.Bson.BsonType)
extern "C"  void BsonReader_ReadType_m2227647585 (BsonReader_t2352164445 * __this, int8_t ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Newtonsoft.Json.Bson.BsonReader::ReadBinary()
extern "C"  ByteU5BU5D_t3397334013* BsonReader_ReadBinary_m3371948099 (BsonReader_t2352164445 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Newtonsoft.Json.Bson.BsonReader::ReadString()
extern "C"  String_t* BsonReader_ReadString_m3577977764 (BsonReader_t2352164445 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Newtonsoft.Json.Bson.BsonReader::ReadLengthString()
extern "C"  String_t* BsonReader_ReadLengthString_m1663144220 (BsonReader_t2352164445 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Newtonsoft.Json.Bson.BsonReader::GetString(System.Int32)
extern "C"  String_t* BsonReader_GetString_m2855667633 (BsonReader_t2352164445 * __this, int32_t ___length0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Newtonsoft.Json.Bson.BsonReader::GetLastFullCharStop(System.Int32)
extern "C"  int32_t BsonReader_GetLastFullCharStop_m1965495116 (BsonReader_t2352164445 * __this, int32_t ___start0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Newtonsoft.Json.Bson.BsonReader::BytesInSequence(System.Byte)
extern "C"  int32_t BsonReader_BytesInSequence_m619096928 (BsonReader_t2352164445 * __this, uint8_t ___b0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Bson.BsonReader::EnsureBuffers()
extern "C"  void BsonReader_EnsureBuffers_m1198618535 (BsonReader_t2352164445 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double Newtonsoft.Json.Bson.BsonReader::ReadDouble()
extern "C"  double BsonReader_ReadDouble_m2926210084 (BsonReader_t2352164445 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Newtonsoft.Json.Bson.BsonReader::ReadInt32()
extern "C"  int32_t BsonReader_ReadInt32_m3455694092 (BsonReader_t2352164445 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Newtonsoft.Json.Bson.BsonReader::ReadInt64()
extern "C"  int64_t BsonReader_ReadInt64_m2207609382 (BsonReader_t2352164445 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Bson.BsonType Newtonsoft.Json.Bson.BsonReader::ReadType()
extern "C"  int8_t BsonReader_ReadType_m2078815576 (BsonReader_t2352164445 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Bson.BsonReader::MovePosition(System.Int32)
extern "C"  void BsonReader_MovePosition_m1314760123 (BsonReader_t2352164445 * __this, int32_t ___count0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Newtonsoft.Json.Bson.BsonReader::ReadBytes(System.Int32)
extern "C"  ByteU5BU5D_t3397334013* BsonReader_ReadBytes_m741748146 (BsonReader_t2352164445 * __this, int32_t ___count0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Bson.BsonReader::.cctor()
extern "C"  void BsonReader__cctor_m3939305173 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
