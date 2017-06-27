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

// Newtonsoft.Json.Serialization.JsonSerializerProxy
struct JsonSerializerProxy_t27144642;
// Newtonsoft.Json.Serialization.JsonSerializerInternalReader
struct JsonSerializerInternalReader_t3254279720;
// Newtonsoft.Json.Serialization.JsonSerializerInternalWriter
struct JsonSerializerInternalWriter_t3234521618;
// System.EventHandler`1<Newtonsoft.Json.Serialization.ErrorEventArgs>
struct EventHandler_1_t1956922769;
// Newtonsoft.Json.Serialization.IReferenceResolver
struct IReferenceResolver_t2044502214;
// Newtonsoft.Json.JsonConverterCollection
struct JsonConverterCollection_t3315164788;
// Newtonsoft.Json.Serialization.IContractResolver
struct IContractResolver_t614887283;
// System.Runtime.Serialization.SerializationBinder
struct SerializationBinder_t3985864818;
// Newtonsoft.Json.Serialization.JsonSerializerInternalBase
struct JsonSerializerInternalBase_t795582376;
// System.Object
struct Il2CppObject;
// Newtonsoft.Json.JsonReader
struct JsonReader_t3154730733;
// System.Type
struct Type_t;
// Newtonsoft.Json.JsonWriter
struct JsonWriter_t1973729997;

#include "codegen/il2cpp-codegen.h"
#include "Json_NET_Newtonsoft_Json_Serialization_JsonSeriali3254279720.h"
#include "Json_NET_Newtonsoft_Json_Serialization_JsonSeriali3234521618.h"
#include "Json_NET_Newtonsoft_Json_DefaultValueHandling3457895463.h"
#include "Json_NET_Newtonsoft_Json_MissingMemberHandling367517353.h"
#include "Json_NET_Newtonsoft_Json_NullValueHandling3618095365.h"
#include "Json_NET_Newtonsoft_Json_ObjectCreationHandling3720134651.h"
#include "Json_NET_Newtonsoft_Json_ReferenceLoopHandling1017855894.h"
#include "Json_NET_Newtonsoft_Json_PreserveReferencesHandlin3019117943.h"
#include "Json_NET_Newtonsoft_Json_TypeNameHandling1331513094.h"
#include "mscorlib_System_Runtime_Serialization_Formatters_Fo999493661.h"
#include "Json_NET_Newtonsoft_Json_ConstructorHandling4150360451.h"
#include "mscorlib_System_Runtime_Serialization_Serializatio3985864818.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCon1417235061.h"
#include "Json_NET_Newtonsoft_Json_JsonReader3154730733.h"
#include "mscorlib_System_Type1303803226.h"
#include "mscorlib_System_Object2689449295.h"
#include "Json_NET_Newtonsoft_Json_JsonWriter1973729997.h"

// System.Void Newtonsoft.Json.Serialization.JsonSerializerProxy::.ctor(Newtonsoft.Json.Serialization.JsonSerializerInternalReader)
extern "C"  void JsonSerializerProxy__ctor_m4153584186 (JsonSerializerProxy_t27144642 * __this, JsonSerializerInternalReader_t3254279720 * ___serializerReader0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.JsonSerializerProxy::.ctor(Newtonsoft.Json.Serialization.JsonSerializerInternalWriter)
extern "C"  void JsonSerializerProxy__ctor_m2518202954 (JsonSerializerProxy_t27144642 * __this, JsonSerializerInternalWriter_t3234521618 * ___serializerWriter0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.JsonSerializerProxy::add_Error(System.EventHandler`1<Newtonsoft.Json.Serialization.ErrorEventArgs>)
extern "C"  void JsonSerializerProxy_add_Error_m1715508975 (JsonSerializerProxy_t27144642 * __this, EventHandler_1_t1956922769 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.JsonSerializerProxy::remove_Error(System.EventHandler`1<Newtonsoft.Json.Serialization.ErrorEventArgs>)
extern "C"  void JsonSerializerProxy_remove_Error_m998879896 (JsonSerializerProxy_t27144642 * __this, EventHandler_1_t1956922769 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Serialization.IReferenceResolver Newtonsoft.Json.Serialization.JsonSerializerProxy::get_ReferenceResolver()
extern "C"  Il2CppObject * JsonSerializerProxy_get_ReferenceResolver_m2095497257 (JsonSerializerProxy_t27144642 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.JsonSerializerProxy::set_ReferenceResolver(Newtonsoft.Json.Serialization.IReferenceResolver)
extern "C"  void JsonSerializerProxy_set_ReferenceResolver_m2597241236 (JsonSerializerProxy_t27144642 * __this, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.JsonConverterCollection Newtonsoft.Json.Serialization.JsonSerializerProxy::get_Converters()
extern "C"  JsonConverterCollection_t3315164788 * JsonSerializerProxy_get_Converters_m4160632869 (JsonSerializerProxy_t27144642 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.DefaultValueHandling Newtonsoft.Json.Serialization.JsonSerializerProxy::get_DefaultValueHandling()
extern "C"  int32_t JsonSerializerProxy_get_DefaultValueHandling_m1425135220 (JsonSerializerProxy_t27144642 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.JsonSerializerProxy::set_DefaultValueHandling(Newtonsoft.Json.DefaultValueHandling)
extern "C"  void JsonSerializerProxy_set_DefaultValueHandling_m528938655 (JsonSerializerProxy_t27144642 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Serialization.IContractResolver Newtonsoft.Json.Serialization.JsonSerializerProxy::get_ContractResolver()
extern "C"  Il2CppObject * JsonSerializerProxy_get_ContractResolver_m1885170913 (JsonSerializerProxy_t27144642 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.JsonSerializerProxy::set_ContractResolver(Newtonsoft.Json.Serialization.IContractResolver)
extern "C"  void JsonSerializerProxy_set_ContractResolver_m2629129222 (JsonSerializerProxy_t27144642 * __this, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.MissingMemberHandling Newtonsoft.Json.Serialization.JsonSerializerProxy::get_MissingMemberHandling()
extern "C"  int32_t JsonSerializerProxy_get_MissingMemberHandling_m639921946 (JsonSerializerProxy_t27144642 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.JsonSerializerProxy::set_MissingMemberHandling(Newtonsoft.Json.MissingMemberHandling)
extern "C"  void JsonSerializerProxy_set_MissingMemberHandling_m1597948287 (JsonSerializerProxy_t27144642 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.NullValueHandling Newtonsoft.Json.Serialization.JsonSerializerProxy::get_NullValueHandling()
extern "C"  int32_t JsonSerializerProxy_get_NullValueHandling_m2569397610 (JsonSerializerProxy_t27144642 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.JsonSerializerProxy::set_NullValueHandling(Newtonsoft.Json.NullValueHandling)
extern "C"  void JsonSerializerProxy_set_NullValueHandling_m1135551999 (JsonSerializerProxy_t27144642 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.ObjectCreationHandling Newtonsoft.Json.Serialization.JsonSerializerProxy::get_ObjectCreationHandling()
extern "C"  int32_t JsonSerializerProxy_get_ObjectCreationHandling_m1165681556 (JsonSerializerProxy_t27144642 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.JsonSerializerProxy::set_ObjectCreationHandling(Newtonsoft.Json.ObjectCreationHandling)
extern "C"  void JsonSerializerProxy_set_ObjectCreationHandling_m2095530767 (JsonSerializerProxy_t27144642 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.ReferenceLoopHandling Newtonsoft.Json.Serialization.JsonSerializerProxy::get_ReferenceLoopHandling()
extern "C"  int32_t JsonSerializerProxy_get_ReferenceLoopHandling_m1354422144 (JsonSerializerProxy_t27144642 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.JsonSerializerProxy::set_ReferenceLoopHandling(Newtonsoft.Json.ReferenceLoopHandling)
extern "C"  void JsonSerializerProxy_set_ReferenceLoopHandling_m806731423 (JsonSerializerProxy_t27144642 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.PreserveReferencesHandling Newtonsoft.Json.Serialization.JsonSerializerProxy::get_PreserveReferencesHandling()
extern "C"  int32_t JsonSerializerProxy_get_PreserveReferencesHandling_m1754580052 (JsonSerializerProxy_t27144642 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.JsonSerializerProxy::set_PreserveReferencesHandling(Newtonsoft.Json.PreserveReferencesHandling)
extern "C"  void JsonSerializerProxy_set_PreserveReferencesHandling_m2329062143 (JsonSerializerProxy_t27144642 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.TypeNameHandling Newtonsoft.Json.Serialization.JsonSerializerProxy::get_TypeNameHandling()
extern "C"  int32_t JsonSerializerProxy_get_TypeNameHandling_m4133031924 (JsonSerializerProxy_t27144642 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.JsonSerializerProxy::set_TypeNameHandling(Newtonsoft.Json.TypeNameHandling)
extern "C"  void JsonSerializerProxy_set_TypeNameHandling_m1122530971 (JsonSerializerProxy_t27144642 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Serialization.Formatters.FormatterAssemblyStyle Newtonsoft.Json.Serialization.JsonSerializerProxy::get_TypeNameAssemblyFormat()
extern "C"  int32_t JsonSerializerProxy_get_TypeNameAssemblyFormat_m1527215562 (JsonSerializerProxy_t27144642 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.JsonSerializerProxy::set_TypeNameAssemblyFormat(System.Runtime.Serialization.Formatters.FormatterAssemblyStyle)
extern "C"  void JsonSerializerProxy_set_TypeNameAssemblyFormat_m224145727 (JsonSerializerProxy_t27144642 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.ConstructorHandling Newtonsoft.Json.Serialization.JsonSerializerProxy::get_ConstructorHandling()
extern "C"  int32_t JsonSerializerProxy_get_ConstructorHandling_m2847088218 (JsonSerializerProxy_t27144642 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.JsonSerializerProxy::set_ConstructorHandling(Newtonsoft.Json.ConstructorHandling)
extern "C"  void JsonSerializerProxy_set_ConstructorHandling_m3369894975 (JsonSerializerProxy_t27144642 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Serialization.SerializationBinder Newtonsoft.Json.Serialization.JsonSerializerProxy::get_Binder()
extern "C"  SerializationBinder_t3985864818 * JsonSerializerProxy_get_Binder_m4284692542 (JsonSerializerProxy_t27144642 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.JsonSerializerProxy::set_Binder(System.Runtime.Serialization.SerializationBinder)
extern "C"  void JsonSerializerProxy_set_Binder_m1975417583 (JsonSerializerProxy_t27144642 * __this, SerializationBinder_t3985864818 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Serialization.StreamingContext Newtonsoft.Json.Serialization.JsonSerializerProxy::get_Context()
extern "C"  StreamingContext_t1417235061  JsonSerializerProxy_get_Context_m4250092868 (JsonSerializerProxy_t27144642 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.JsonSerializerProxy::set_Context(System.Runtime.Serialization.StreamingContext)
extern "C"  void JsonSerializerProxy_set_Context_m1764595441 (JsonSerializerProxy_t27144642 * __this, StreamingContext_t1417235061  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Serialization.JsonSerializerInternalBase Newtonsoft.Json.Serialization.JsonSerializerProxy::GetInternalSerializer()
extern "C"  JsonSerializerInternalBase_t795582376 * JsonSerializerProxy_GetInternalSerializer_m1703918108 (JsonSerializerProxy_t27144642 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Newtonsoft.Json.Serialization.JsonSerializerProxy::DeserializeInternal(Newtonsoft.Json.JsonReader,System.Type)
extern "C"  Il2CppObject * JsonSerializerProxy_DeserializeInternal_m575477833 (JsonSerializerProxy_t27144642 * __this, JsonReader_t3154730733 * ___reader0, Type_t * ___objectType1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.JsonSerializerProxy::PopulateInternal(Newtonsoft.Json.JsonReader,System.Object)
extern "C"  void JsonSerializerProxy_PopulateInternal_m3408309886 (JsonSerializerProxy_t27144642 * __this, JsonReader_t3154730733 * ___reader0, Il2CppObject * ___target1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.JsonSerializerProxy::SerializeInternal(Newtonsoft.Json.JsonWriter,System.Object)
extern "C"  void JsonSerializerProxy_SerializeInternal_m1647925422 (JsonSerializerProxy_t27144642 * __this, JsonWriter_t1973729997 * ___jsonWriter0, Il2CppObject * ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
