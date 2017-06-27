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

// Newtonsoft.Json.Serialization.JsonDictionaryContract
struct JsonDictionaryContract_t3573211912;
// System.Type
struct Type_t;
// System.Func`2<System.String,System.String>
struct Func_2_t193026957;
// Newtonsoft.Json.Utilities.IWrappedDictionary
struct IWrappedDictionary_t1593229298;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Type1303803226.h"
#include "mscorlib_System_Object2689449295.h"

// System.Void Newtonsoft.Json.Serialization.JsonDictionaryContract::.ctor(System.Type)
extern "C"  void JsonDictionaryContract__ctor_m187805866 (JsonDictionaryContract_t3573211912 * __this, Type_t * ___underlyingType0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Func`2<System.String,System.String> Newtonsoft.Json.Serialization.JsonDictionaryContract::get_PropertyNameResolver()
extern "C"  Func_2_t193026957 * JsonDictionaryContract_get_PropertyNameResolver_m2380060846 (JsonDictionaryContract_t3573211912 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.JsonDictionaryContract::set_PropertyNameResolver(System.Func`2<System.String,System.String>)
extern "C"  void JsonDictionaryContract_set_PropertyNameResolver_m2552247613 (JsonDictionaryContract_t3573211912 * __this, Func_2_t193026957 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type Newtonsoft.Json.Serialization.JsonDictionaryContract::get_DictionaryKeyType()
extern "C"  Type_t * JsonDictionaryContract_get_DictionaryKeyType_m2730404625 (JsonDictionaryContract_t3573211912 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.JsonDictionaryContract::set_DictionaryKeyType(System.Type)
extern "C"  void JsonDictionaryContract_set_DictionaryKeyType_m3217007526 (JsonDictionaryContract_t3573211912 * __this, Type_t * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type Newtonsoft.Json.Serialization.JsonDictionaryContract::get_DictionaryValueType()
extern "C"  Type_t * JsonDictionaryContract_get_DictionaryValueType_m923238705 (JsonDictionaryContract_t3573211912 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.JsonDictionaryContract::set_DictionaryValueType(System.Type)
extern "C"  void JsonDictionaryContract_set_DictionaryValueType_m838109352 (JsonDictionaryContract_t3573211912 * __this, Type_t * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Utilities.IWrappedDictionary Newtonsoft.Json.Serialization.JsonDictionaryContract::CreateWrapper(System.Object)
extern "C"  Il2CppObject * JsonDictionaryContract_CreateWrapper_m3379401042 (JsonDictionaryContract_t3573211912 * __this, Il2CppObject * ___dictionary0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Serialization.JsonDictionaryContract::IsTypeGenericDictionaryInterface(System.Type)
extern "C"  bool JsonDictionaryContract_IsTypeGenericDictionaryInterface_m2938506802 (JsonDictionaryContract_t3573211912 * __this, Type_t * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
