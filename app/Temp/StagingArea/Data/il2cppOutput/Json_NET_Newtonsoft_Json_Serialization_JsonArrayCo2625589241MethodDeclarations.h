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

// Newtonsoft.Json.Serialization.JsonArrayContract
struct JsonArrayContract_t2625589241;
// System.Type
struct Type_t;
// Newtonsoft.Json.Utilities.IWrappedCollection
struct IWrappedCollection_t1324248768;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Type1303803226.h"
#include "mscorlib_System_Object2689449295.h"

// System.Void Newtonsoft.Json.Serialization.JsonArrayContract::.ctor(System.Type)
extern "C"  void JsonArrayContract__ctor_m846854401 (JsonArrayContract_t2625589241 * __this, Type_t * ___underlyingType0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type Newtonsoft.Json.Serialization.JsonArrayContract::get_CollectionItemType()
extern "C"  Type_t * JsonArrayContract_get_CollectionItemType_m3834881344 (JsonArrayContract_t2625589241 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.JsonArrayContract::set_CollectionItemType(System.Type)
extern "C"  void JsonArrayContract_set_CollectionItemType_m1319184255 (JsonArrayContract_t2625589241 * __this, Type_t * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Utilities.IWrappedCollection Newtonsoft.Json.Serialization.JsonArrayContract::CreateWrapper(System.Object)
extern "C"  Il2CppObject * JsonArrayContract_CreateWrapper_m1336169653 (JsonArrayContract_t2625589241 * __this, Il2CppObject * ___list0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.JsonArrayContract::EnsureGenericWrapperCreator()
extern "C"  void JsonArrayContract_EnsureGenericWrapperCreator_m455442480 (JsonArrayContract_t2625589241 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Serialization.JsonArrayContract::IsTypeGenericCollectionInterface(System.Type)
extern "C"  bool JsonArrayContract_IsTypeGenericCollectionInterface_m3392941177 (JsonArrayContract_t2625589241 * __this, Type_t * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
