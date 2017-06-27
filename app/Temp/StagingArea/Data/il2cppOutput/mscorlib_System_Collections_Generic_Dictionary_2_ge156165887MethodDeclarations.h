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

// System.Collections.Generic.Dictionary`2<MsgPack.MessagePackObject,MsgPack.MessagePackObject>
struct Dictionary_2_t156165887;
// System.Collections.Generic.IEqualityComparer`1<MsgPack.MessagePackObject>
struct IEqualityComparer_1_t1250717829;
// System.Collections.Generic.IDictionary`2<MsgPack.MessagePackObject,MsgPack.MessagePackObject>
struct IDictionary_2_t2450216604;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t228987430;
// System.Collections.Generic.ICollection`1<MsgPack.MessagePackObject>
struct ICollection_1_t2990160356;
// System.Collections.ICollection
struct ICollection_t91669223;
// System.Object
struct Il2CppObject;
// System.Collections.Generic.KeyValuePair`2<MsgPack.MessagePackObject,MsgPack.MessagePackObject>[]
struct KeyValuePair_2U5BU5D_t2801225352;
// System.Array
struct Il2CppArray;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<MsgPack.MessagePackObject,MsgPack.MessagePackObject>>
struct IEnumerator_1_t3978969528;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t259680273;
// System.Collections.Generic.Dictionary`2/KeyCollection<MsgPack.MessagePackObject,MsgPack.MessagePackObject>
struct KeyCollection_t2639663658;
// System.Collections.Generic.Dictionary`2/ValueCollection<MsgPack.MessagePackObject,MsgPack.MessagePackObject>
struct ValueCollection_t3154193026;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_Serialization228987430.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCon1417235061.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_22208478405.h"
#include "mscorlib_System_Array3829468939.h"
#include "MsgPack_MsgPack_MessagePackObject2038085051.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_E1476190589.h"
#include "mscorlib_System_Collections_DictionaryEntry3048875398.h"

// System.Void System.Collections.Generic.Dictionary`2<MsgPack.MessagePackObject,MsgPack.MessagePackObject>::.ctor()
extern "C"  void Dictionary_2__ctor_m2367885127_gshared (Dictionary_2_t156165887 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m2367885127(__this, method) ((  void (*) (Dictionary_2_t156165887 *, const MethodInfo*))Dictionary_2__ctor_m2367885127_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<MsgPack.MessagePackObject,MsgPack.MessagePackObject>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C"  void Dictionary_2__ctor_m1494256008_gshared (Dictionary_2_t156165887 * __this, Il2CppObject* ___comparer0, const MethodInfo* method);
#define Dictionary_2__ctor_m1494256008(__this, ___comparer0, method) ((  void (*) (Dictionary_2_t156165887 *, Il2CppObject*, const MethodInfo*))Dictionary_2__ctor_m1494256008_gshared)(__this, ___comparer0, method)
// System.Void System.Collections.Generic.Dictionary`2<MsgPack.MessagePackObject,MsgPack.MessagePackObject>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C"  void Dictionary_2__ctor_m628031293_gshared (Dictionary_2_t156165887 * __this, Il2CppObject* ___dictionary0, const MethodInfo* method);
#define Dictionary_2__ctor_m628031293(__this, ___dictionary0, method) ((  void (*) (Dictionary_2_t156165887 *, Il2CppObject*, const MethodInfo*))Dictionary_2__ctor_m628031293_gshared)(__this, ___dictionary0, method)
// System.Void System.Collections.Generic.Dictionary`2<MsgPack.MessagePackObject,MsgPack.MessagePackObject>::.ctor(System.Int32)
extern "C"  void Dictionary_2__ctor_m1684113936_gshared (Dictionary_2_t156165887 * __this, int32_t ___capacity0, const MethodInfo* method);
#define Dictionary_2__ctor_m1684113936(__this, ___capacity0, method) ((  void (*) (Dictionary_2_t156165887 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m1684113936_gshared)(__this, ___capacity0, method)
// System.Void System.Collections.Generic.Dictionary`2<MsgPack.MessagePackObject,MsgPack.MessagePackObject>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C"  void Dictionary_2__ctor_m2574062736_gshared (Dictionary_2_t156165887 * __this, Il2CppObject* ___dictionary0, Il2CppObject* ___comparer1, const MethodInfo* method);
#define Dictionary_2__ctor_m2574062736(__this, ___dictionary0, ___comparer1, method) ((  void (*) (Dictionary_2_t156165887 *, Il2CppObject*, Il2CppObject*, const MethodInfo*))Dictionary_2__ctor_m2574062736_gshared)(__this, ___dictionary0, ___comparer1, method)
// System.Void System.Collections.Generic.Dictionary`2<MsgPack.MessagePackObject,MsgPack.MessagePackObject>::.ctor(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C"  void Dictionary_2__ctor_m383712436_gshared (Dictionary_2_t156165887 * __this, int32_t ___capacity0, Il2CppObject* ___comparer1, const MethodInfo* method);
#define Dictionary_2__ctor_m383712436(__this, ___capacity0, ___comparer1, method) ((  void (*) (Dictionary_2_t156165887 *, int32_t, Il2CppObject*, const MethodInfo*))Dictionary_2__ctor_m383712436_gshared)(__this, ___capacity0, ___comparer1, method)
// System.Void System.Collections.Generic.Dictionary`2<MsgPack.MessagePackObject,MsgPack.MessagePackObject>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void Dictionary_2__ctor_m1848535134_gshared (Dictionary_2_t156165887 * __this, SerializationInfo_t228987430 * ___info0, StreamingContext_t1417235061  ___context1, const MethodInfo* method);
#define Dictionary_2__ctor_m1848535134(__this, ___info0, ___context1, method) ((  void (*) (Dictionary_2_t156165887 *, SerializationInfo_t228987430 *, StreamingContext_t1417235061 , const MethodInfo*))Dictionary_2__ctor_m1848535134_gshared)(__this, ___info0, ___context1, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<MsgPack.MessagePackObject,MsgPack.MessagePackObject>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C"  Il2CppObject* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m3925361819_gshared (Dictionary_2_t156165887 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m3925361819(__this, method) ((  Il2CppObject* (*) (Dictionary_2_t156165887 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m3925361819_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<MsgPack.MessagePackObject,MsgPack.MessagePackObject>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C"  Il2CppObject* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m2847431771_gshared (Dictionary_2_t156165887 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m2847431771(__this, method) ((  Il2CppObject* (*) (Dictionary_2_t156165887 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m2847431771_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<MsgPack.MessagePackObject,MsgPack.MessagePackObject>::System.Collections.IDictionary.get_Keys()
extern "C"  Il2CppObject * Dictionary_2_System_Collections_IDictionary_get_Keys_m2269334613_gshared (Dictionary_2_t156165887 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m2269334613(__this, method) ((  Il2CppObject * (*) (Dictionary_2_t156165887 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m2269334613_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<MsgPack.MessagePackObject,MsgPack.MessagePackObject>::System.Collections.IDictionary.get_Values()
extern "C"  Il2CppObject * Dictionary_2_System_Collections_IDictionary_get_Values_m1802953461_gshared (Dictionary_2_t156165887 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Values_m1802953461(__this, method) ((  Il2CppObject * (*) (Dictionary_2_t156165887 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Values_m1802953461_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<MsgPack.MessagePackObject,MsgPack.MessagePackObject>::System.Collections.IDictionary.get_IsFixedSize()
extern "C"  bool Dictionary_2_System_Collections_IDictionary_get_IsFixedSize_m4220659772_gshared (Dictionary_2_t156165887 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_IsFixedSize_m4220659772(__this, method) ((  bool (*) (Dictionary_2_t156165887 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_IsFixedSize_m4220659772_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<MsgPack.MessagePackObject,MsgPack.MessagePackObject>::System.Collections.IDictionary.get_IsReadOnly()
extern "C"  bool Dictionary_2_System_Collections_IDictionary_get_IsReadOnly_m554577009_gshared (Dictionary_2_t156165887 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_IsReadOnly_m554577009(__this, method) ((  bool (*) (Dictionary_2_t156165887 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_IsReadOnly_m554577009_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<MsgPack.MessagePackObject,MsgPack.MessagePackObject>::System.Collections.IDictionary.get_Item(System.Object)
extern "C"  Il2CppObject * Dictionary_2_System_Collections_IDictionary_get_Item_m2657455591_gshared (Dictionary_2_t156165887 * __this, Il2CppObject * ___key0, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m2657455591(__this, ___key0, method) ((  Il2CppObject * (*) (Dictionary_2_t156165887 *, Il2CppObject *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m2657455591_gshared)(__this, ___key0, method)
// System.Void System.Collections.Generic.Dictionary`2<MsgPack.MessagePackObject,MsgPack.MessagePackObject>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C"  void Dictionary_2_System_Collections_IDictionary_set_Item_m4258827138_gshared (Dictionary_2_t156165887 * __this, Il2CppObject * ___key0, Il2CppObject * ___value1, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m4258827138(__this, ___key0, ___value1, method) ((  void (*) (Dictionary_2_t156165887 *, Il2CppObject *, Il2CppObject *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m4258827138_gshared)(__this, ___key0, ___value1, method)
// System.Void System.Collections.Generic.Dictionary`2<MsgPack.MessagePackObject,MsgPack.MessagePackObject>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C"  void Dictionary_2_System_Collections_IDictionary_Add_m2529093685_gshared (Dictionary_2_t156165887 * __this, Il2CppObject * ___key0, Il2CppObject * ___value1, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m2529093685(__this, ___key0, ___value1, method) ((  void (*) (Dictionary_2_t156165887 *, Il2CppObject *, Il2CppObject *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m2529093685_gshared)(__this, ___key0, ___value1, method)
// System.Boolean System.Collections.Generic.Dictionary`2<MsgPack.MessagePackObject,MsgPack.MessagePackObject>::System.Collections.IDictionary.Contains(System.Object)
extern "C"  bool Dictionary_2_System_Collections_IDictionary_Contains_m2389058705_gshared (Dictionary_2_t156165887 * __this, Il2CppObject * ___key0, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m2389058705(__this, ___key0, method) ((  bool (*) (Dictionary_2_t156165887 *, Il2CppObject *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m2389058705_gshared)(__this, ___key0, method)
// System.Void System.Collections.Generic.Dictionary`2<MsgPack.MessagePackObject,MsgPack.MessagePackObject>::System.Collections.IDictionary.Remove(System.Object)
extern "C"  void Dictionary_2_System_Collections_IDictionary_Remove_m3048582326_gshared (Dictionary_2_t156165887 * __this, Il2CppObject * ___key0, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m3048582326(__this, ___key0, method) ((  void (*) (Dictionary_2_t156165887 *, Il2CppObject *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m3048582326_gshared)(__this, ___key0, method)
// System.Boolean System.Collections.Generic.Dictionary`2<MsgPack.MessagePackObject,MsgPack.MessagePackObject>::System.Collections.ICollection.get_IsSynchronized()
extern "C"  bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m1584866227_gshared (Dictionary_2_t156165887 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m1584866227(__this, method) ((  bool (*) (Dictionary_2_t156165887 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m1584866227_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<MsgPack.MessagePackObject,MsgPack.MessagePackObject>::System.Collections.ICollection.get_SyncRoot()
extern "C"  Il2CppObject * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m2856023019_gshared (Dictionary_2_t156165887 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m2856023019(__this, method) ((  Il2CppObject * (*) (Dictionary_2_t156165887 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m2856023019_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<MsgPack.MessagePackObject,MsgPack.MessagePackObject>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C"  bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m3716187109_gshared (Dictionary_2_t156165887 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m3716187109(__this, method) ((  bool (*) (Dictionary_2_t156165887 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m3716187109_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<MsgPack.MessagePackObject,MsgPack.MessagePackObject>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C"  void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m3508224308_gshared (Dictionary_2_t156165887 * __this, KeyValuePair_2_t2208478405  ___keyValuePair0, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m3508224308(__this, ___keyValuePair0, method) ((  void (*) (Dictionary_2_t156165887 *, KeyValuePair_2_t2208478405 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m3508224308_gshared)(__this, ___keyValuePair0, method)
// System.Boolean System.Collections.Generic.Dictionary`2<MsgPack.MessagePackObject,MsgPack.MessagePackObject>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C"  bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m3859693568_gshared (Dictionary_2_t156165887 * __this, KeyValuePair_2_t2208478405  ___keyValuePair0, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m3859693568(__this, ___keyValuePair0, method) ((  bool (*) (Dictionary_2_t156165887 *, KeyValuePair_2_t2208478405 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m3859693568_gshared)(__this, ___keyValuePair0, method)
// System.Void System.Collections.Generic.Dictionary`2<MsgPack.MessagePackObject,MsgPack.MessagePackObject>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C"  void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m1827855584_gshared (Dictionary_2_t156165887 * __this, KeyValuePair_2U5BU5D_t2801225352* ___array0, int32_t ___index1, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m1827855584(__this, ___array0, ___index1, method) ((  void (*) (Dictionary_2_t156165887 *, KeyValuePair_2U5BU5D_t2801225352*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m1827855584_gshared)(__this, ___array0, ___index1, method)
// System.Boolean System.Collections.Generic.Dictionary`2<MsgPack.MessagePackObject,MsgPack.MessagePackObject>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C"  bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m1329756199_gshared (Dictionary_2_t156165887 * __this, KeyValuePair_2_t2208478405  ___keyValuePair0, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m1329756199(__this, ___keyValuePair0, method) ((  bool (*) (Dictionary_2_t156165887 *, KeyValuePair_2_t2208478405 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m1329756199_gshared)(__this, ___keyValuePair0, method)
// System.Void System.Collections.Generic.Dictionary`2<MsgPack.MessagePackObject,MsgPack.MessagePackObject>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C"  void Dictionary_2_System_Collections_ICollection_CopyTo_m401158843_gshared (Dictionary_2_t156165887 * __this, Il2CppArray * ___array0, int32_t ___index1, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m401158843(__this, ___array0, ___index1, method) ((  void (*) (Dictionary_2_t156165887 *, Il2CppArray *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m401158843_gshared)(__this, ___array0, ___index1, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<MsgPack.MessagePackObject,MsgPack.MessagePackObject>::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Il2CppObject * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m57063110_gshared (Dictionary_2_t156165887 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m57063110(__this, method) ((  Il2CppObject * (*) (Dictionary_2_t156165887 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m57063110_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<MsgPack.MessagePackObject,MsgPack.MessagePackObject>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C"  Il2CppObject* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m2622406157_gshared (Dictionary_2_t156165887 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m2622406157(__this, method) ((  Il2CppObject* (*) (Dictionary_2_t156165887 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m2622406157_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<MsgPack.MessagePackObject,MsgPack.MessagePackObject>::System.Collections.IDictionary.GetEnumerator()
extern "C"  Il2CppObject * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m2067757896_gshared (Dictionary_2_t156165887 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m2067757896(__this, method) ((  Il2CppObject * (*) (Dictionary_2_t156165887 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m2067757896_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<MsgPack.MessagePackObject,MsgPack.MessagePackObject>::get_Count()
extern "C"  int32_t Dictionary_2_get_Count_m226653628_gshared (Dictionary_2_t156165887 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m226653628(__this, method) ((  int32_t (*) (Dictionary_2_t156165887 *, const MethodInfo*))Dictionary_2_get_Count_m226653628_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<MsgPack.MessagePackObject,MsgPack.MessagePackObject>::get_Item(TKey)
extern "C"  MessagePackObject_t2038085051  Dictionary_2_get_Item_m3779782632_gshared (Dictionary_2_t156165887 * __this, MessagePackObject_t2038085051  ___key0, const MethodInfo* method);
#define Dictionary_2_get_Item_m3779782632(__this, ___key0, method) ((  MessagePackObject_t2038085051  (*) (Dictionary_2_t156165887 *, MessagePackObject_t2038085051 , const MethodInfo*))Dictionary_2_get_Item_m3779782632_gshared)(__this, ___key0, method)
// System.Void System.Collections.Generic.Dictionary`2<MsgPack.MessagePackObject,MsgPack.MessagePackObject>::set_Item(TKey,TValue)
extern "C"  void Dictionary_2_set_Item_m3232245413_gshared (Dictionary_2_t156165887 * __this, MessagePackObject_t2038085051  ___key0, MessagePackObject_t2038085051  ___value1, const MethodInfo* method);
#define Dictionary_2_set_Item_m3232245413(__this, ___key0, ___value1, method) ((  void (*) (Dictionary_2_t156165887 *, MessagePackObject_t2038085051 , MessagePackObject_t2038085051 , const MethodInfo*))Dictionary_2_set_Item_m3232245413_gshared)(__this, ___key0, ___value1, method)
// System.Void System.Collections.Generic.Dictionary`2<MsgPack.MessagePackObject,MsgPack.MessagePackObject>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C"  void Dictionary_2_Init_m3209471927_gshared (Dictionary_2_t156165887 * __this, int32_t ___capacity0, Il2CppObject* ___hcp1, const MethodInfo* method);
#define Dictionary_2_Init_m3209471927(__this, ___capacity0, ___hcp1, method) ((  void (*) (Dictionary_2_t156165887 *, int32_t, Il2CppObject*, const MethodInfo*))Dictionary_2_Init_m3209471927_gshared)(__this, ___capacity0, ___hcp1, method)
// System.Void System.Collections.Generic.Dictionary`2<MsgPack.MessagePackObject,MsgPack.MessagePackObject>::InitArrays(System.Int32)
extern "C"  void Dictionary_2_InitArrays_m2395880372_gshared (Dictionary_2_t156165887 * __this, int32_t ___size0, const MethodInfo* method);
#define Dictionary_2_InitArrays_m2395880372(__this, ___size0, method) ((  void (*) (Dictionary_2_t156165887 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m2395880372_gshared)(__this, ___size0, method)
// System.Void System.Collections.Generic.Dictionary`2<MsgPack.MessagePackObject,MsgPack.MessagePackObject>::CopyToCheck(System.Array,System.Int32)
extern "C"  void Dictionary_2_CopyToCheck_m2910289582_gshared (Dictionary_2_t156165887 * __this, Il2CppArray * ___array0, int32_t ___index1, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m2910289582(__this, ___array0, ___index1, method) ((  void (*) (Dictionary_2_t156165887 *, Il2CppArray *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m2910289582_gshared)(__this, ___array0, ___index1, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<MsgPack.MessagePackObject,MsgPack.MessagePackObject>::make_pair(TKey,TValue)
extern "C"  KeyValuePair_2_t2208478405  Dictionary_2_make_pair_m432890508_gshared (Il2CppObject * __this /* static, unused */, MessagePackObject_t2038085051  ___key0, MessagePackObject_t2038085051  ___value1, const MethodInfo* method);
#define Dictionary_2_make_pair_m432890508(__this /* static, unused */, ___key0, ___value1, method) ((  KeyValuePair_2_t2208478405  (*) (Il2CppObject * /* static, unused */, MessagePackObject_t2038085051 , MessagePackObject_t2038085051 , const MethodInfo*))Dictionary_2_make_pair_m432890508_gshared)(__this /* static, unused */, ___key0, ___value1, method)
// TKey System.Collections.Generic.Dictionary`2<MsgPack.MessagePackObject,MsgPack.MessagePackObject>::pick_key(TKey,TValue)
extern "C"  MessagePackObject_t2038085051  Dictionary_2_pick_key_m3622673826_gshared (Il2CppObject * __this /* static, unused */, MessagePackObject_t2038085051  ___key0, MessagePackObject_t2038085051  ___value1, const MethodInfo* method);
#define Dictionary_2_pick_key_m3622673826(__this /* static, unused */, ___key0, ___value1, method) ((  MessagePackObject_t2038085051  (*) (Il2CppObject * /* static, unused */, MessagePackObject_t2038085051 , MessagePackObject_t2038085051 , const MethodInfo*))Dictionary_2_pick_key_m3622673826_gshared)(__this /* static, unused */, ___key0, ___value1, method)
// TValue System.Collections.Generic.Dictionary`2<MsgPack.MessagePackObject,MsgPack.MessagePackObject>::pick_value(TKey,TValue)
extern "C"  MessagePackObject_t2038085051  Dictionary_2_pick_value_m2086468266_gshared (Il2CppObject * __this /* static, unused */, MessagePackObject_t2038085051  ___key0, MessagePackObject_t2038085051  ___value1, const MethodInfo* method);
#define Dictionary_2_pick_value_m2086468266(__this /* static, unused */, ___key0, ___value1, method) ((  MessagePackObject_t2038085051  (*) (Il2CppObject * /* static, unused */, MessagePackObject_t2038085051 , MessagePackObject_t2038085051 , const MethodInfo*))Dictionary_2_pick_value_m2086468266_gshared)(__this /* static, unused */, ___key0, ___value1, method)
// System.Void System.Collections.Generic.Dictionary`2<MsgPack.MessagePackObject,MsgPack.MessagePackObject>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C"  void Dictionary_2_CopyTo_m3855596883_gshared (Dictionary_2_t156165887 * __this, KeyValuePair_2U5BU5D_t2801225352* ___array0, int32_t ___index1, const MethodInfo* method);
#define Dictionary_2_CopyTo_m3855596883(__this, ___array0, ___index1, method) ((  void (*) (Dictionary_2_t156165887 *, KeyValuePair_2U5BU5D_t2801225352*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m3855596883_gshared)(__this, ___array0, ___index1, method)
// System.Void System.Collections.Generic.Dictionary`2<MsgPack.MessagePackObject,MsgPack.MessagePackObject>::Resize()
extern "C"  void Dictionary_2_Resize_m132353189_gshared (Dictionary_2_t156165887 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m132353189(__this, method) ((  void (*) (Dictionary_2_t156165887 *, const MethodInfo*))Dictionary_2_Resize_m132353189_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<MsgPack.MessagePackObject,MsgPack.MessagePackObject>::Add(TKey,TValue)
extern "C"  void Dictionary_2_Add_m1919608830_gshared (Dictionary_2_t156165887 * __this, MessagePackObject_t2038085051  ___key0, MessagePackObject_t2038085051  ___value1, const MethodInfo* method);
#define Dictionary_2_Add_m1919608830(__this, ___key0, ___value1, method) ((  void (*) (Dictionary_2_t156165887 *, MessagePackObject_t2038085051 , MessagePackObject_t2038085051 , const MethodInfo*))Dictionary_2_Add_m1919608830_gshared)(__this, ___key0, ___value1, method)
// System.Void System.Collections.Generic.Dictionary`2<MsgPack.MessagePackObject,MsgPack.MessagePackObject>::Clear()
extern "C"  void Dictionary_2_Clear_m2630171885_gshared (Dictionary_2_t156165887 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m2630171885(__this, method) ((  void (*) (Dictionary_2_t156165887 *, const MethodInfo*))Dictionary_2_Clear_m2630171885_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<MsgPack.MessagePackObject,MsgPack.MessagePackObject>::ContainsKey(TKey)
extern "C"  bool Dictionary_2_ContainsKey_m27412233_gshared (Dictionary_2_t156165887 * __this, MessagePackObject_t2038085051  ___key0, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m27412233(__this, ___key0, method) ((  bool (*) (Dictionary_2_t156165887 *, MessagePackObject_t2038085051 , const MethodInfo*))Dictionary_2_ContainsKey_m27412233_gshared)(__this, ___key0, method)
// System.Boolean System.Collections.Generic.Dictionary`2<MsgPack.MessagePackObject,MsgPack.MessagePackObject>::ContainsValue(TValue)
extern "C"  bool Dictionary_2_ContainsValue_m1719868704_gshared (Dictionary_2_t156165887 * __this, MessagePackObject_t2038085051  ___value0, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m1719868704(__this, ___value0, method) ((  bool (*) (Dictionary_2_t156165887 *, MessagePackObject_t2038085051 , const MethodInfo*))Dictionary_2_ContainsValue_m1719868704_gshared)(__this, ___value0, method)
// System.Void System.Collections.Generic.Dictionary`2<MsgPack.MessagePackObject,MsgPack.MessagePackObject>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void Dictionary_2_GetObjectData_m952897775_gshared (Dictionary_2_t156165887 * __this, SerializationInfo_t228987430 * ___info0, StreamingContext_t1417235061  ___context1, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m952897775(__this, ___info0, ___context1, method) ((  void (*) (Dictionary_2_t156165887 *, SerializationInfo_t228987430 *, StreamingContext_t1417235061 , const MethodInfo*))Dictionary_2_GetObjectData_m952897775_gshared)(__this, ___info0, ___context1, method)
// System.Void System.Collections.Generic.Dictionary`2<MsgPack.MessagePackObject,MsgPack.MessagePackObject>::OnDeserialization(System.Object)
extern "C"  void Dictionary_2_OnDeserialization_m1817088663_gshared (Dictionary_2_t156165887 * __this, Il2CppObject * ___sender0, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m1817088663(__this, ___sender0, method) ((  void (*) (Dictionary_2_t156165887 *, Il2CppObject *, const MethodInfo*))Dictionary_2_OnDeserialization_m1817088663_gshared)(__this, ___sender0, method)
// System.Boolean System.Collections.Generic.Dictionary`2<MsgPack.MessagePackObject,MsgPack.MessagePackObject>::Remove(TKey)
extern "C"  bool Dictionary_2_Remove_m3772973703_gshared (Dictionary_2_t156165887 * __this, MessagePackObject_t2038085051  ___key0, const MethodInfo* method);
#define Dictionary_2_Remove_m3772973703(__this, ___key0, method) ((  bool (*) (Dictionary_2_t156165887 *, MessagePackObject_t2038085051 , const MethodInfo*))Dictionary_2_Remove_m3772973703_gshared)(__this, ___key0, method)
// System.Boolean System.Collections.Generic.Dictionary`2<MsgPack.MessagePackObject,MsgPack.MessagePackObject>::TryGetValue(TKey,TValue&)
extern "C"  bool Dictionary_2_TryGetValue_m1580895705_gshared (Dictionary_2_t156165887 * __this, MessagePackObject_t2038085051  ___key0, MessagePackObject_t2038085051 * ___value1, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m1580895705(__this, ___key0, ___value1, method) ((  bool (*) (Dictionary_2_t156165887 *, MessagePackObject_t2038085051 , MessagePackObject_t2038085051 *, const MethodInfo*))Dictionary_2_TryGetValue_m1580895705_gshared)(__this, ___key0, ___value1, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<MsgPack.MessagePackObject,MsgPack.MessagePackObject>::get_Keys()
extern "C"  KeyCollection_t2639663658 * Dictionary_2_get_Keys_m2010929948_gshared (Dictionary_2_t156165887 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m2010929948(__this, method) ((  KeyCollection_t2639663658 * (*) (Dictionary_2_t156165887 *, const MethodInfo*))Dictionary_2_get_Keys_m2010929948_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<MsgPack.MessagePackObject,MsgPack.MessagePackObject>::get_Values()
extern "C"  ValueCollection_t3154193026 * Dictionary_2_get_Values_m3575226862_gshared (Dictionary_2_t156165887 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m3575226862(__this, method) ((  ValueCollection_t3154193026 * (*) (Dictionary_2_t156165887 *, const MethodInfo*))Dictionary_2_get_Values_m3575226862_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<MsgPack.MessagePackObject,MsgPack.MessagePackObject>::ToTKey(System.Object)
extern "C"  MessagePackObject_t2038085051  Dictionary_2_ToTKey_m3767334733_gshared (Dictionary_2_t156165887 * __this, Il2CppObject * ___key0, const MethodInfo* method);
#define Dictionary_2_ToTKey_m3767334733(__this, ___key0, method) ((  MessagePackObject_t2038085051  (*) (Dictionary_2_t156165887 *, Il2CppObject *, const MethodInfo*))Dictionary_2_ToTKey_m3767334733_gshared)(__this, ___key0, method)
// TValue System.Collections.Generic.Dictionary`2<MsgPack.MessagePackObject,MsgPack.MessagePackObject>::ToTValue(System.Object)
extern "C"  MessagePackObject_t2038085051  Dictionary_2_ToTValue_m3038072381_gshared (Dictionary_2_t156165887 * __this, Il2CppObject * ___value0, const MethodInfo* method);
#define Dictionary_2_ToTValue_m3038072381(__this, ___value0, method) ((  MessagePackObject_t2038085051  (*) (Dictionary_2_t156165887 *, Il2CppObject *, const MethodInfo*))Dictionary_2_ToTValue_m3038072381_gshared)(__this, ___value0, method)
// System.Boolean System.Collections.Generic.Dictionary`2<MsgPack.MessagePackObject,MsgPack.MessagePackObject>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C"  bool Dictionary_2_ContainsKeyValuePair_m1496601119_gshared (Dictionary_2_t156165887 * __this, KeyValuePair_2_t2208478405  ___pair0, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m1496601119(__this, ___pair0, method) ((  bool (*) (Dictionary_2_t156165887 *, KeyValuePair_2_t2208478405 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m1496601119_gshared)(__this, ___pair0, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<MsgPack.MessagePackObject,MsgPack.MessagePackObject>::GetEnumerator()
extern "C"  Enumerator_t1476190589  Dictionary_2_GetEnumerator_m565903080_gshared (Dictionary_2_t156165887 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m565903080(__this, method) ((  Enumerator_t1476190589  (*) (Dictionary_2_t156165887 *, const MethodInfo*))Dictionary_2_GetEnumerator_m565903080_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<MsgPack.MessagePackObject,MsgPack.MessagePackObject>::<CopyTo>m__0(TKey,TValue)
extern "C"  DictionaryEntry_t3048875398  Dictionary_2_U3CCopyToU3Em__0_m3211418725_gshared (Il2CppObject * __this /* static, unused */, MessagePackObject_t2038085051  ___key0, MessagePackObject_t2038085051  ___value1, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m3211418725(__this /* static, unused */, ___key0, ___value1, method) ((  DictionaryEntry_t3048875398  (*) (Il2CppObject * /* static, unused */, MessagePackObject_t2038085051 , MessagePackObject_t2038085051 , const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m3211418725_gshared)(__this /* static, unused */, ___key0, ___value1, method)
