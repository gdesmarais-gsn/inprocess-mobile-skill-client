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

// System.Collections.ICollection
struct ICollection_t91669223;
// System.Collections.IList
struct IList_t3321498491;
// System.Collections.IEnumerable
struct IEnumerable_t2911409499;
// System.Type
struct Type_t;
// System.Collections.IDictionary
struct IDictionary_t596158605;
// Newtonsoft.Json.Utilities.IWrappedCollection
struct IWrappedCollection_t1324248768;
// System.Object
struct Il2CppObject;
// Newtonsoft.Json.Utilities.IWrappedList
struct IWrappedList_t2685036120;
// Newtonsoft.Json.Utilities.IWrappedDictionary
struct IWrappedDictionary_t1593229298;
// System.Action`2<System.Collections.IList,System.Boolean>
struct Action_2_t1205666592;
// System.Array
struct Il2CppArray;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Type1303803226.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_Array3829468939.h"

// System.Boolean Newtonsoft.Json.Utilities.CollectionUtils::IsNullOrEmpty(System.Collections.ICollection)
extern "C"  bool CollectionUtils_IsNullOrEmpty_m2778750682 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___collection0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Utilities.CollectionUtils::AddRange(System.Collections.IList,System.Collections.IEnumerable)
extern "C"  void CollectionUtils_AddRange_m9615402 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___initial0, Il2CppObject * ___collection1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IList Newtonsoft.Json.Utilities.CollectionUtils::CreateGenericList(System.Type)
extern "C"  Il2CppObject * CollectionUtils_CreateGenericList_m1772841376 (Il2CppObject * __this /* static, unused */, Type_t * ___listType0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IDictionary Newtonsoft.Json.Utilities.CollectionUtils::CreateGenericDictionary(System.Type,System.Type)
extern "C"  Il2CppObject * CollectionUtils_CreateGenericDictionary_m3043242239 (Il2CppObject * __this /* static, unused */, Type_t * ___keyType0, Type_t * ___valueType1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Utilities.CollectionUtils::IsListType(System.Type)
extern "C"  bool CollectionUtils_IsListType_m3174458411 (Il2CppObject * __this /* static, unused */, Type_t * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Utilities.CollectionUtils::IsCollectionType(System.Type)
extern "C"  bool CollectionUtils_IsCollectionType_m1136804359 (Il2CppObject * __this /* static, unused */, Type_t * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Utilities.CollectionUtils::IsDictionaryType(System.Type)
extern "C"  bool CollectionUtils_IsDictionaryType_m1945436957 (Il2CppObject * __this /* static, unused */, Type_t * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Utilities.IWrappedCollection Newtonsoft.Json.Utilities.CollectionUtils::CreateCollectionWrapper(System.Object)
extern "C"  Il2CppObject * CollectionUtils_CreateCollectionWrapper_m3934214009 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___list0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Utilities.IWrappedList Newtonsoft.Json.Utilities.CollectionUtils::CreateListWrapper(System.Object)
extern "C"  Il2CppObject * CollectionUtils_CreateListWrapper_m3896985657 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___list0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Utilities.IWrappedDictionary Newtonsoft.Json.Utilities.CollectionUtils::CreateDictionaryWrapper(System.Object)
extern "C"  Il2CppObject * CollectionUtils_CreateDictionaryWrapper_m1908071161 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___dictionary0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Newtonsoft.Json.Utilities.CollectionUtils::CreateAndPopulateList(System.Type,System.Action`2<System.Collections.IList,System.Boolean>)
extern "C"  Il2CppObject * CollectionUtils_CreateAndPopulateList_m48673490 (Il2CppObject * __this /* static, unused */, Type_t * ___listType0, Action_2_t1205666592 * ___populateList1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Array Newtonsoft.Json.Utilities.CollectionUtils::ToArray(System.Array,System.Type)
extern "C"  Il2CppArray * CollectionUtils_ToArray_m529754214 (Il2CppObject * __this /* static, unused */, Il2CppArray * ___initial0, Type_t * ___type1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
