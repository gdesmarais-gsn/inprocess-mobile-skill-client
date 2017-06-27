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

// Newtonsoft.Json.Linq.JTokenReader
struct JTokenReader_t3330885370;
// Newtonsoft.Json.Linq.JToken
struct JToken_t2552644013;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// Newtonsoft.Json.Linq.JContainer
struct JContainer_t3538280255;
// System.String
struct String_t;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "Json_NET_Newtonsoft_Json_Linq_JToken2552644013.h"
#include "mscorlib_System_Nullable_1_gen3282734688.h"
#include "mscorlib_System_Nullable_1_gen3921022517.h"
#include "mscorlib_System_Nullable_1_gen3178688176.h"
#include "Json_NET_Newtonsoft_Json_Linq_JContainer3538280255.h"
#include "mscorlib_System_Object2689449295.h"

// System.Void Newtonsoft.Json.Linq.JTokenReader::.ctor(Newtonsoft.Json.Linq.JToken)
extern "C"  void JTokenReader__ctor_m3754438107 (JTokenReader_t3330885370 * __this, JToken_t2552644013 * ___token0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Newtonsoft.Json.Linq.JTokenReader::ReadAsBytes()
extern "C"  ByteU5BU5D_t3397334013* JTokenReader_ReadAsBytes_m3624303848 (JTokenReader_t3330885370 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Nullable`1<System.Decimal> Newtonsoft.Json.Linq.JTokenReader::ReadAsDecimal()
extern "C"  Nullable_1_t3282734688  JTokenReader_ReadAsDecimal_m356746302 (JTokenReader_t3330885370 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Nullable`1<System.DateTimeOffset> Newtonsoft.Json.Linq.JTokenReader::ReadAsDateTimeOffset()
extern "C"  Nullable_1_t3921022517  JTokenReader_ReadAsDateTimeOffset_m3262417616 (JTokenReader_t3330885370 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Linq.JTokenReader::Read()
extern "C"  bool JTokenReader_Read_m3605514379 (JTokenReader_t3330885370 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Linq.JTokenReader::ReadOver(Newtonsoft.Json.Linq.JToken)
extern "C"  bool JTokenReader_ReadOver_m2723431471 (JTokenReader_t3330885370 * __this, JToken_t2552644013 * ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Linq.JTokenReader::ReadToEnd()
extern "C"  bool JTokenReader_ReadToEnd_m1776332527 (JTokenReader_t3330885370 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Linq.JTokenReader::get_IsEndElement()
extern "C"  bool JTokenReader_get_IsEndElement_m2867016319 (JTokenReader_t3330885370 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Nullable`1<Newtonsoft.Json.JsonToken> Newtonsoft.Json.Linq.JTokenReader::GetEndToken(Newtonsoft.Json.Linq.JContainer)
extern "C"  Nullable_1_t3178688176  JTokenReader_GetEndToken_m3021158135 (JTokenReader_t3330885370 * __this, JContainer_t3538280255 * ___c0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Linq.JTokenReader::ReadInto(Newtonsoft.Json.Linq.JContainer)
extern "C"  bool JTokenReader_ReadInto_m31280329 (JTokenReader_t3330885370 * __this, JContainer_t3538280255 * ___c0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Linq.JTokenReader::SetEnd(Newtonsoft.Json.Linq.JContainer)
extern "C"  bool JTokenReader_SetEnd_m4132969694 (JTokenReader_t3330885370 * __this, JContainer_t3538280255 * ___c0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JTokenReader::SetToken(Newtonsoft.Json.Linq.JToken)
extern "C"  void JTokenReader_SetToken_m51629020 (JTokenReader_t3330885370 * __this, JToken_t2552644013 * ___token0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Newtonsoft.Json.Linq.JTokenReader::SafeToString(System.Object)
extern "C"  String_t* JTokenReader_SafeToString_m1517527705 (JTokenReader_t3330885370 * __this, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Linq.JTokenReader::Newtonsoft.Json.IJsonLineInfo.HasLineInfo()
extern "C"  bool JTokenReader_Newtonsoft_Json_IJsonLineInfo_HasLineInfo_m850228287 (JTokenReader_t3330885370 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Newtonsoft.Json.Linq.JTokenReader::Newtonsoft.Json.IJsonLineInfo.get_LineNumber()
extern "C"  int32_t JTokenReader_Newtonsoft_Json_IJsonLineInfo_get_LineNumber_m1733021379 (JTokenReader_t3330885370 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Newtonsoft.Json.Linq.JTokenReader::Newtonsoft.Json.IJsonLineInfo.get_LinePosition()
extern "C"  int32_t JTokenReader_Newtonsoft_Json_IJsonLineInfo_get_LinePosition_m3827886901 (JTokenReader_t3330885370 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
