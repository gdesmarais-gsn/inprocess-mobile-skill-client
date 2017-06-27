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

// Newtonsoft.Json.Linq.JContainer
struct JContainer_t3538280255;
// Newtonsoft.Json.Linq.JToken
struct JToken_t2552644013;
// System.Collections.Generic.IEnumerable`1<Newtonsoft.Json.Linq.JToken>
struct IEnumerable_1_t2844771058;
// System.Object
struct Il2CppObject;
// System.Array
struct Il2CppArray;
// Newtonsoft.Json.JsonWriter
struct JsonWriter_t1973729997;
// Newtonsoft.Json.JsonReader
struct JsonReader_t3154730733;
// Newtonsoft.Json.Linq.JToken[]
struct JTokenU5BU5D_t1832626432;

#include "codegen/il2cpp-codegen.h"
#include "Json_NET_Newtonsoft_Json_Linq_JContainer3538280255.h"
#include "Json_NET_Newtonsoft_Json_Linq_JEnumerable_1_gen3820937473.h"
#include "mscorlib_System_Object2689449295.h"
#include "Json_NET_Newtonsoft_Json_Linq_JToken2552644013.h"
#include "mscorlib_System_Array3829468939.h"
#include "Json_NET_Newtonsoft_Json_JsonReader3154730733.h"

// System.Void Newtonsoft.Json.Linq.JContainer::.ctor()
extern "C"  void JContainer__ctor_m725156048 (JContainer_t3538280255 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JContainer::.ctor(Newtonsoft.Json.Linq.JContainer)
extern "C"  void JContainer__ctor_m725811364 (JContainer_t3538280255 * __this, JContainer_t3538280255 * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JContainer::CheckReentrancy()
extern "C"  void JContainer_CheckReentrancy_m811096233 (JContainer_t3538280255 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Linq.JContainer::get_HasValues()
extern "C"  bool JContainer_get_HasValues_m4156310771 (JContainer_t3538280255 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Linq.JContainer::ContentsEqual(Newtonsoft.Json.Linq.JContainer)
extern "C"  bool JContainer_ContentsEqual_m460230646 (JContainer_t3538280255 * __this, JContainer_t3538280255 * ___container0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JContainer::get_First()
extern "C"  JToken_t2552644013 * JContainer_get_First_m3611900264 (JContainer_t3538280255 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JContainer::get_Last()
extern "C"  JToken_t2552644013 * JContainer_get_Last_m9162056 (JContainer_t3538280255 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Linq.JEnumerable`1<Newtonsoft.Json.Linq.JToken> Newtonsoft.Json.Linq.JContainer::Children()
extern "C"  JEnumerable_1_t3820937473  JContainer_Children_m1428766526 (JContainer_t3538280255 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<Newtonsoft.Json.Linq.JToken> Newtonsoft.Json.Linq.JContainer::Descendants()
extern "C"  Il2CppObject* JContainer_Descendants_m3458173314 (JContainer_t3538280255 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Linq.JContainer::IsMultiContent(System.Object)
extern "C"  bool JContainer_IsMultiContent_m1318410512 (JContainer_t3538280255 * __this, Il2CppObject * ___content0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JContainer::EnsureParentToken(Newtonsoft.Json.Linq.JToken)
extern "C"  JToken_t2552644013 * JContainer_EnsureParentToken_m2544938260 (JContainer_t3538280255 * __this, JToken_t2552644013 * ___item0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Newtonsoft.Json.Linq.JContainer::IndexOfItem(Newtonsoft.Json.Linq.JToken)
extern "C"  int32_t JContainer_IndexOfItem_m2442745512 (JContainer_t3538280255 * __this, JToken_t2552644013 * ___item0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JContainer::InsertItem(System.Int32,Newtonsoft.Json.Linq.JToken)
extern "C"  void JContainer_InsertItem_m2669391437 (JContainer_t3538280255 * __this, int32_t ___index0, JToken_t2552644013 * ___item1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JContainer::RemoveItemAt(System.Int32)
extern "C"  void JContainer_RemoveItemAt_m1984944639 (JContainer_t3538280255 * __this, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Linq.JContainer::RemoveItem(Newtonsoft.Json.Linq.JToken)
extern "C"  bool JContainer_RemoveItem_m3212607485 (JContainer_t3538280255 * __this, JToken_t2552644013 * ___item0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JContainer::GetItem(System.Int32)
extern "C"  JToken_t2552644013 * JContainer_GetItem_m42597311 (JContainer_t3538280255 * __this, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JContainer::SetItem(System.Int32,Newtonsoft.Json.Linq.JToken)
extern "C"  void JContainer_SetItem_m2374013342 (JContainer_t3538280255 * __this, int32_t ___index0, JToken_t2552644013 * ___item1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JContainer::ClearItems()
extern "C"  void JContainer_ClearItems_m1424482271 (JContainer_t3538280255 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JContainer::ReplaceItem(Newtonsoft.Json.Linq.JToken,Newtonsoft.Json.Linq.JToken)
extern "C"  void JContainer_ReplaceItem_m832311833 (JContainer_t3538280255 * __this, JToken_t2552644013 * ___existing0, JToken_t2552644013 * ___replacement1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Linq.JContainer::ContainsItem(Newtonsoft.Json.Linq.JToken)
extern "C"  bool JContainer_ContainsItem_m1723322186 (JContainer_t3538280255 * __this, JToken_t2552644013 * ___item0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JContainer::CopyItemsTo(System.Array,System.Int32)
extern "C"  void JContainer_CopyItemsTo_m3665051331 (JContainer_t3538280255 * __this, Il2CppArray * ___array0, int32_t ___arrayIndex1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Linq.JContainer::IsTokenUnchanged(Newtonsoft.Json.Linq.JToken,Newtonsoft.Json.Linq.JToken)
extern "C"  bool JContainer_IsTokenUnchanged_m294682786 (Il2CppObject * __this /* static, unused */, JToken_t2552644013 * ___currentValue0, JToken_t2552644013 * ___newValue1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JContainer::ValidateToken(Newtonsoft.Json.Linq.JToken,Newtonsoft.Json.Linq.JToken)
extern "C"  void JContainer_ValidateToken_m1424100661 (JContainer_t3538280255 * __this, JToken_t2552644013 * ___o0, JToken_t2552644013 * ___existing1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JContainer::Add(System.Object)
extern "C"  void JContainer_Add_m1193344895 (JContainer_t3538280255 * __this, Il2CppObject * ___content0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JContainer::AddFirst(System.Object)
extern "C"  void JContainer_AddFirst_m2474653985 (JContainer_t3538280255 * __this, Il2CppObject * ___content0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JContainer::AddInternal(System.Int32,System.Object)
extern "C"  void JContainer_AddInternal_m1667903309 (JContainer_t3538280255 * __this, int32_t ___index0, Il2CppObject * ___content1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JContainer::CreateFromContent(System.Object)
extern "C"  JToken_t2552644013 * JContainer_CreateFromContent_m1177638592 (JContainer_t3538280255 * __this, Il2CppObject * ___content0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.JsonWriter Newtonsoft.Json.Linq.JContainer::CreateWriter()
extern "C"  JsonWriter_t1973729997 * JContainer_CreateWriter_m3752315350 (JContainer_t3538280255 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JContainer::ReplaceAll(System.Object)
extern "C"  void JContainer_ReplaceAll_m2931244003 (JContainer_t3538280255 * __this, Il2CppObject * ___content0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JContainer::RemoveAll()
extern "C"  void JContainer_RemoveAll_m2155799655 (JContainer_t3538280255 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JContainer::ReadTokenFrom(Newtonsoft.Json.JsonReader)
extern "C"  void JContainer_ReadTokenFrom_m706609089 (JContainer_t3538280255 * __this, JsonReader_t3154730733 * ___r0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JContainer::ReadContentFrom(Newtonsoft.Json.JsonReader)
extern "C"  void JContainer_ReadContentFrom_m408048939 (JContainer_t3538280255 * __this, JsonReader_t3154730733 * ___r0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Newtonsoft.Json.Linq.JContainer::ContentsHashCode()
extern "C"  int32_t JContainer_ContentsHashCode_m1672342583 (JContainer_t3538280255 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Newtonsoft.Json.Linq.JContainer::System.Collections.Generic.IList<Newtonsoft.Json.Linq.JToken>.IndexOf(Newtonsoft.Json.Linq.JToken)
extern "C"  int32_t JContainer_System_Collections_Generic_IListU3CNewtonsoft_Json_Linq_JTokenU3E_IndexOf_m3569929217 (JContainer_t3538280255 * __this, JToken_t2552644013 * ___item0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JContainer::System.Collections.Generic.IList<Newtonsoft.Json.Linq.JToken>.Insert(System.Int32,Newtonsoft.Json.Linq.JToken)
extern "C"  void JContainer_System_Collections_Generic_IListU3CNewtonsoft_Json_Linq_JTokenU3E_Insert_m2640343750 (JContainer_t3538280255 * __this, int32_t ___index0, JToken_t2552644013 * ___item1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JContainer::System.Collections.Generic.IList<Newtonsoft.Json.Linq.JToken>.RemoveAt(System.Int32)
extern "C"  void JContainer_System_Collections_Generic_IListU3CNewtonsoft_Json_Linq_JTokenU3E_RemoveAt_m3012439842 (JContainer_t3538280255 * __this, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JContainer::System.Collections.Generic.IList<Newtonsoft.Json.Linq.JToken>.get_Item(System.Int32)
extern "C"  JToken_t2552644013 * JContainer_System_Collections_Generic_IListU3CNewtonsoft_Json_Linq_JTokenU3E_get_Item_m2758614950 (JContainer_t3538280255 * __this, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JContainer::System.Collections.Generic.IList<Newtonsoft.Json.Linq.JToken>.set_Item(System.Int32,Newtonsoft.Json.Linq.JToken)
extern "C"  void JContainer_System_Collections_Generic_IListU3CNewtonsoft_Json_Linq_JTokenU3E_set_Item_m1803315909 (JContainer_t3538280255 * __this, int32_t ___index0, JToken_t2552644013 * ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JContainer::System.Collections.Generic.ICollection<Newtonsoft.Json.Linq.JToken>.Add(Newtonsoft.Json.Linq.JToken)
extern "C"  void JContainer_System_Collections_Generic_ICollectionU3CNewtonsoft_Json_Linq_JTokenU3E_Add_m799784141 (JContainer_t3538280255 * __this, JToken_t2552644013 * ___item0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JContainer::System.Collections.Generic.ICollection<Newtonsoft.Json.Linq.JToken>.Clear()
extern "C"  void JContainer_System_Collections_Generic_ICollectionU3CNewtonsoft_Json_Linq_JTokenU3E_Clear_m3290584971 (JContainer_t3538280255 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Linq.JContainer::System.Collections.Generic.ICollection<Newtonsoft.Json.Linq.JToken>.Contains(Newtonsoft.Json.Linq.JToken)
extern "C"  bool JContainer_System_Collections_Generic_ICollectionU3CNewtonsoft_Json_Linq_JTokenU3E_Contains_m171351387 (JContainer_t3538280255 * __this, JToken_t2552644013 * ___item0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JContainer::System.Collections.Generic.ICollection<Newtonsoft.Json.Linq.JToken>.CopyTo(Newtonsoft.Json.Linq.JToken[],System.Int32)
extern "C"  void JContainer_System_Collections_Generic_ICollectionU3CNewtonsoft_Json_Linq_JTokenU3E_CopyTo_m1515146377 (JContainer_t3538280255 * __this, JTokenU5BU5D_t1832626432* ___array0, int32_t ___arrayIndex1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Linq.JContainer::System.Collections.Generic.ICollection<Newtonsoft.Json.Linq.JToken>.get_IsReadOnly()
extern "C"  bool JContainer_System_Collections_Generic_ICollectionU3CNewtonsoft_Json_Linq_JTokenU3E_get_IsReadOnly_m910813943 (JContainer_t3538280255 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Linq.JContainer::System.Collections.Generic.ICollection<Newtonsoft.Json.Linq.JToken>.Remove(Newtonsoft.Json.Linq.JToken)
extern "C"  bool JContainer_System_Collections_Generic_ICollectionU3CNewtonsoft_Json_Linq_JTokenU3E_Remove_m1249798804 (JContainer_t3538280255 * __this, JToken_t2552644013 * ___item0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JContainer::EnsureValue(System.Object)
extern "C"  JToken_t2552644013 * JContainer_EnsureValue_m4126708222 (JContainer_t3538280255 * __this, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Newtonsoft.Json.Linq.JContainer::System.Collections.IList.Add(System.Object)
extern "C"  int32_t JContainer_System_Collections_IList_Add_m377591408 (JContainer_t3538280255 * __this, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JContainer::System.Collections.IList.Clear()
extern "C"  void JContainer_System_Collections_IList_Clear_m3407056066 (JContainer_t3538280255 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Linq.JContainer::System.Collections.IList.Contains(System.Object)
extern "C"  bool JContainer_System_Collections_IList_Contains_m2871025522 (JContainer_t3538280255 * __this, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Newtonsoft.Json.Linq.JContainer::System.Collections.IList.IndexOf(System.Object)
extern "C"  int32_t JContainer_System_Collections_IList_IndexOf_m2203968126 (JContainer_t3538280255 * __this, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JContainer::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C"  void JContainer_System_Collections_IList_Insert_m3157498833 (JContainer_t3538280255 * __this, int32_t ___index0, Il2CppObject * ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Linq.JContainer::System.Collections.IList.get_IsFixedSize()
extern "C"  bool JContainer_System_Collections_IList_get_IsFixedSize_m2331429289 (JContainer_t3538280255 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Linq.JContainer::System.Collections.IList.get_IsReadOnly()
extern "C"  bool JContainer_System_Collections_IList_get_IsReadOnly_m1136742112 (JContainer_t3538280255 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JContainer::System.Collections.IList.Remove(System.Object)
extern "C"  void JContainer_System_Collections_IList_Remove_m2138344113 (JContainer_t3538280255 * __this, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JContainer::System.Collections.IList.RemoveAt(System.Int32)
extern "C"  void JContainer_System_Collections_IList_RemoveAt_m767004359 (JContainer_t3538280255 * __this, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Newtonsoft.Json.Linq.JContainer::System.Collections.IList.get_Item(System.Int32)
extern "C"  Il2CppObject * JContainer_System_Collections_IList_get_Item_m538991233 (JContainer_t3538280255 * __this, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JContainer::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C"  void JContainer_System_Collections_IList_set_Item_m3748016210 (JContainer_t3538280255 * __this, int32_t ___index0, Il2CppObject * ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JContainer::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C"  void JContainer_System_Collections_ICollection_CopyTo_m4194840184 (JContainer_t3538280255 * __this, Il2CppArray * ___array0, int32_t ___index1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Newtonsoft.Json.Linq.JContainer::get_Count()
extern "C"  int32_t JContainer_get_Count_m608701216 (JContainer_t3538280255 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Linq.JContainer::System.Collections.ICollection.get_IsSynchronized()
extern "C"  bool JContainer_System_Collections_ICollection_get_IsSynchronized_m2869417308 (JContainer_t3538280255 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Newtonsoft.Json.Linq.JContainer::System.Collections.ICollection.get_SyncRoot()
extern "C"  Il2CppObject * JContainer_System_Collections_ICollection_get_SyncRoot_m461269326 (JContainer_t3538280255 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
