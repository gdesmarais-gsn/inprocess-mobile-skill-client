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

// Newtonsoft.Json.Linq.JObject/JPropertKeyedCollection
struct JPropertKeyedCollection_t2398227289;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_t1241853011;
// System.String
struct String_t;
// Newtonsoft.Json.Linq.JToken
struct JToken_t2552644013;
// System.Collections.Generic.IDictionary`2<System.String,Newtonsoft.Json.Linq.JToken>
struct IDictionary_2_t2466506696;

#include "codegen/il2cpp-codegen.h"
#include "Json_NET_Newtonsoft_Json_Linq_JToken2552644013.h"

// System.Void Newtonsoft.Json.Linq.JObject/JPropertKeyedCollection::.ctor(System.Collections.Generic.IEqualityComparer`1<System.String>)
extern "C"  void JPropertKeyedCollection__ctor_m2724981199 (JPropertKeyedCollection_t2398227289 * __this, Il2CppObject* ___comparer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Newtonsoft.Json.Linq.JObject/JPropertKeyedCollection::GetKeyForItem(Newtonsoft.Json.Linq.JToken)
extern "C"  String_t* JPropertKeyedCollection_GetKeyForItem_m2955140085 (JPropertKeyedCollection_t2398227289 * __this, JToken_t2552644013 * ___item0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JObject/JPropertKeyedCollection::InsertItem(System.Int32,Newtonsoft.Json.Linq.JToken)
extern "C"  void JPropertKeyedCollection_InsertItem_m4269528536 (JPropertKeyedCollection_t2398227289 * __this, int32_t ___index0, JToken_t2552644013 * ___item1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IDictionary`2<System.String,Newtonsoft.Json.Linq.JToken> Newtonsoft.Json.Linq.JObject/JPropertKeyedCollection::get_Dictionary()
extern "C"  Il2CppObject* JPropertKeyedCollection_get_Dictionary_m735994561 (JPropertKeyedCollection_t2398227289 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
