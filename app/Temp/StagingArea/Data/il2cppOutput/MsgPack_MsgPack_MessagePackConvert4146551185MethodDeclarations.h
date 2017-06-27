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

// System.Text.Encoding
struct Encoding_t663144255;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t3397334013;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_DateTimeOffset1362988906.h"
#include "mscorlib_System_DateTime693205669.h"

// System.Text.Encoding MsgPack.MessagePackConvert::get_Utf8NonBom()
extern "C"  Encoding_t663144255 * MessagePackConvert_get_Utf8NonBom_m749440813 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Encoding MsgPack.MessagePackConvert::get_Utf8NonBomStrict()
extern "C"  Encoding_t663144255 * MessagePackConvert_get_Utf8NonBomStrict_m1822629564 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String MsgPack.MessagePackConvert::DecodeStringStrict(System.Byte[])
extern "C"  String_t* MessagePackConvert_DecodeStringStrict_m2523094070 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTimeOffset MsgPack.MessagePackConvert::ToDateTimeOffset(System.Int64)
extern "C"  DateTimeOffset_t1362988906  MessagePackConvert_ToDateTimeOffset_m1080289141 (Il2CppObject * __this /* static, unused */, int64_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime MsgPack.MessagePackConvert::ToDateTime(System.Int64)
extern "C"  DateTime_t693205669  MessagePackConvert_ToDateTime_m2949523089 (Il2CppObject * __this /* static, unused */, int64_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 MsgPack.MessagePackConvert::FromDateTimeOffset(System.DateTimeOffset)
extern "C"  int64_t MessagePackConvert_FromDateTimeOffset_m1647084952 (Il2CppObject * __this /* static, unused */, DateTimeOffset_t1362988906  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 MsgPack.MessagePackConvert::FromDateTime(System.DateTime)
extern "C"  int64_t MessagePackConvert_FromDateTime_m132386872 (Il2CppObject * __this /* static, unused */, DateTime_t693205669  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MsgPack.MessagePackConvert::.cctor()
extern "C"  void MessagePackConvert__cctor_m1158548555 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
