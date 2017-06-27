﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// Newtonsoft.Json.Serialization.JsonSerializerInternalBase
struct JsonSerializerInternalBase_t795582376;
// Newtonsoft.Json.JsonSerializer
struct JsonSerializer_t1719617802;
// Newtonsoft.Json.Utilities.BidirectionalDictionary`2<System.String,System.Object>
struct BidirectionalDictionary_2_t3534731452;
// Newtonsoft.Json.Serialization.ErrorContext
struct ErrorContext_t615697659;
// System.Object
struct Il2CppObject;
// System.Exception
struct Exception_t1927440687;
// Newtonsoft.Json.Serialization.JsonContract
struct JsonContract_t1566984540;

#include "codegen/il2cpp-codegen.h"
#include "Json_NET_Newtonsoft_Json_JsonSerializer1719617802.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_Exception1927440687.h"
#include "Json_NET_Newtonsoft_Json_Serialization_JsonContrac1566984540.h"

// System.Void Newtonsoft.Json.Serialization.JsonSerializerInternalBase::.ctor(Newtonsoft.Json.JsonSerializer)
extern "C"  void JsonSerializerInternalBase__ctor_m3377332218 (JsonSerializerInternalBase_t795582376 * __this, JsonSerializer_t1719617802 * ___serializer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.JsonSerializer Newtonsoft.Json.Serialization.JsonSerializerInternalBase::get_Serializer()
extern "C"  JsonSerializer_t1719617802 * JsonSerializerInternalBase_get_Serializer_m1988508730 (JsonSerializerInternalBase_t795582376 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.JsonSerializerInternalBase::set_Serializer(Newtonsoft.Json.JsonSerializer)
extern "C"  void JsonSerializerInternalBase_set_Serializer_m2134860041 (JsonSerializerInternalBase_t795582376 * __this, JsonSerializer_t1719617802 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Utilities.BidirectionalDictionary`2<System.String,System.Object> Newtonsoft.Json.Serialization.JsonSerializerInternalBase::get_DefaultReferenceMappings()
extern "C"  BidirectionalDictionary_2_t3534731452 * JsonSerializerInternalBase_get_DefaultReferenceMappings_m698926218 (JsonSerializerInternalBase_t795582376 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Serialization.ErrorContext Newtonsoft.Json.Serialization.JsonSerializerInternalBase::GetErrorContext(System.Object,System.Object,System.Exception)
extern "C"  ErrorContext_t615697659 * JsonSerializerInternalBase_GetErrorContext_m2652799657 (JsonSerializerInternalBase_t795582376 * __this, Il2CppObject * ___currentObject0, Il2CppObject * ___member1, Exception_t1927440687 * ___error2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.JsonSerializerInternalBase::ClearErrorContext()
extern "C"  void JsonSerializerInternalBase_ClearErrorContext_m4120245665 (JsonSerializerInternalBase_t795582376 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Serialization.JsonSerializerInternalBase::IsErrorHandled(System.Object,Newtonsoft.Json.Serialization.JsonContract,System.Object,System.Exception)
extern "C"  bool JsonSerializerInternalBase_IsErrorHandled_m449308618 (JsonSerializerInternalBase_t795582376 * __this, Il2CppObject * ___currentObject0, JsonContract_t1566984540 * ___contract1, Il2CppObject * ___keyValue2, Exception_t1927440687 * ___ex3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
