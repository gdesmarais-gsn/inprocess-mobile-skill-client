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

// System.Collections.Generic.Dictionary`2<System.Int16,System.Object>
struct Dictionary_2_t1771158552;
// System.Collections.Generic.IEqualityComparer`1<System.Int16>
struct IEqualityComparer_1_t3253878692;
// System.Collections.Generic.IDictionary`2<System.Int16,System.Object>
struct IDictionary_2_t4065209269;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t228987430;
// System.Collections.Generic.ICollection`1<System.Int16>
struct ICollection_1_t698353923;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t3641524600;
// System.Collections.ICollection
struct ICollection_t91669223;
// System.Object
struct Il2CppObject;
// System.Collections.Generic.KeyValuePair`2<System.Int16,System.Object>[]
struct KeyValuePair_2U5BU5D_t560426219;
// System.Array
struct Il2CppArray;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int16,System.Object>>
struct IEnumerator_1_t1298994897;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t259680273;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int16,System.Object>
struct KeyCollection_t4254656323;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int16,System.Object>
struct ValueCollection_t474218395;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_Serialization228987430.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCon1417235061.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_23823471070.h"
#include "mscorlib_System_Array3829468939.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_E3091183254.h"
#include "mscorlib_System_Collections_DictionaryEntry3048875398.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Int16,System.Object>::.ctor()
extern "C"  void Dictionary_2__ctor_m1632299130_gshared (Dictionary_2_t1771158552 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m1632299130(__this, method) ((  void (*) (Dictionary_2_t1771158552 *, const MethodInfo*))Dictionary_2__ctor_m1632299130_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int16,System.Object>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C"  void Dictionary_2__ctor_m2092092269_gshared (Dictionary_2_t1771158552 * __this, Il2CppObject* ___comparer0, const MethodInfo* method);
#define Dictionary_2__ctor_m2092092269(__this, ___comparer0, method) ((  void (*) (Dictionary_2_t1771158552 *, Il2CppObject*, const MethodInfo*))Dictionary_2__ctor_m2092092269_gshared)(__this, ___comparer0, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int16,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C"  void Dictionary_2__ctor_m3459224940_gshared (Dictionary_2_t1771158552 * __this, Il2CppObject* ___dictionary0, const MethodInfo* method);
#define Dictionary_2__ctor_m3459224940(__this, ___dictionary0, method) ((  void (*) (Dictionary_2_t1771158552 *, Il2CppObject*, const MethodInfo*))Dictionary_2__ctor_m3459224940_gshared)(__this, ___dictionary0, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int16,System.Object>::.ctor(System.Int32)
extern "C"  void Dictionary_2__ctor_m2512854583_gshared (Dictionary_2_t1771158552 * __this, int32_t ___capacity0, const MethodInfo* method);
#define Dictionary_2__ctor_m2512854583(__this, ___capacity0, method) ((  void (*) (Dictionary_2_t1771158552 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m2512854583_gshared)(__this, ___capacity0, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int16,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C"  void Dictionary_2__ctor_m3823629975_gshared (Dictionary_2_t1771158552 * __this, Il2CppObject* ___dictionary0, Il2CppObject* ___comparer1, const MethodInfo* method);
#define Dictionary_2__ctor_m3823629975(__this, ___dictionary0, ___comparer1, method) ((  void (*) (Dictionary_2_t1771158552 *, Il2CppObject*, Il2CppObject*, const MethodInfo*))Dictionary_2__ctor_m3823629975_gshared)(__this, ___dictionary0, ___comparer1, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int16,System.Object>::.ctor(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C"  void Dictionary_2__ctor_m1209231086_gshared (Dictionary_2_t1771158552 * __this, int32_t ___capacity0, Il2CppObject* ___comparer1, const MethodInfo* method);
#define Dictionary_2__ctor_m1209231086(__this, ___capacity0, ___comparer1, method) ((  void (*) (Dictionary_2_t1771158552 *, int32_t, Il2CppObject*, const MethodInfo*))Dictionary_2__ctor_m1209231086_gshared)(__this, ___capacity0, ___comparer1, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int16,System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void Dictionary_2__ctor_m2474723441_gshared (Dictionary_2_t1771158552 * __this, SerializationInfo_t228987430 * ___info0, StreamingContext_t1417235061  ___context1, const MethodInfo* method);
#define Dictionary_2__ctor_m2474723441(__this, ___info0, ___context1, method) ((  void (*) (Dictionary_2_t1771158552 *, SerializationInfo_t228987430 *, StreamingContext_t1417235061 , const MethodInfo*))Dictionary_2__ctor_m2474723441_gshared)(__this, ___info0, ___context1, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Int16,System.Object>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C"  Il2CppObject* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m2441845118_gshared (Dictionary_2_t1771158552 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m2441845118(__this, method) ((  Il2CppObject* (*) (Dictionary_2_t1771158552 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m2441845118_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Int16,System.Object>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C"  Il2CppObject* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m4108326590_gshared (Dictionary_2_t1771158552 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m4108326590(__this, method) ((  Il2CppObject* (*) (Dictionary_2_t1771158552 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m4108326590_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Int16,System.Object>::System.Collections.IDictionary.get_Keys()
extern "C"  Il2CppObject * Dictionary_2_System_Collections_IDictionary_get_Keys_m929568096_gshared (Dictionary_2_t1771158552 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m929568096(__this, method) ((  Il2CppObject * (*) (Dictionary_2_t1771158552 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m929568096_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Int16,System.Object>::System.Collections.IDictionary.get_Values()
extern "C"  Il2CppObject * Dictionary_2_System_Collections_IDictionary_get_Values_m4200257866_gshared (Dictionary_2_t1771158552 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Values_m4200257866(__this, method) ((  Il2CppObject * (*) (Dictionary_2_t1771158552 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Values_m4200257866_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int16,System.Object>::System.Collections.IDictionary.get_IsFixedSize()
extern "C"  bool Dictionary_2_System_Collections_IDictionary_get_IsFixedSize_m2655102813_gshared (Dictionary_2_t1771158552 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_IsFixedSize_m2655102813(__this, method) ((  bool (*) (Dictionary_2_t1771158552 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_IsFixedSize_m2655102813_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int16,System.Object>::System.Collections.IDictionary.get_IsReadOnly()
extern "C"  bool Dictionary_2_System_Collections_IDictionary_get_IsReadOnly_m745908510_gshared (Dictionary_2_t1771158552 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_IsReadOnly_m745908510(__this, method) ((  bool (*) (Dictionary_2_t1771158552 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_IsReadOnly_m745908510_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int16,System.Object>::System.Collections.IDictionary.get_Item(System.Object)
extern "C"  Il2CppObject * Dictionary_2_System_Collections_IDictionary_get_Item_m3378293648_gshared (Dictionary_2_t1771158552 * __this, Il2CppObject * ___key0, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m3378293648(__this, ___key0, method) ((  Il2CppObject * (*) (Dictionary_2_t1771158552 *, Il2CppObject *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m3378293648_gshared)(__this, ___key0, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int16,System.Object>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C"  void Dictionary_2_System_Collections_IDictionary_set_Item_m3106726989_gshared (Dictionary_2_t1771158552 * __this, Il2CppObject * ___key0, Il2CppObject * ___value1, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m3106726989(__this, ___key0, ___value1, method) ((  void (*) (Dictionary_2_t1771158552 *, Il2CppObject *, Il2CppObject *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m3106726989_gshared)(__this, ___key0, ___value1, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int16,System.Object>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C"  void Dictionary_2_System_Collections_IDictionary_Add_m3989463908_gshared (Dictionary_2_t1771158552 * __this, Il2CppObject * ___key0, Il2CppObject * ___value1, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m3989463908(__this, ___key0, ___value1, method) ((  void (*) (Dictionary_2_t1771158552 *, Il2CppObject *, Il2CppObject *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m3989463908_gshared)(__this, ___key0, ___value1, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int16,System.Object>::System.Collections.IDictionary.Contains(System.Object)
extern "C"  bool Dictionary_2_System_Collections_IDictionary_Contains_m3511511332_gshared (Dictionary_2_t1771158552 * __this, Il2CppObject * ___key0, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m3511511332(__this, ___key0, method) ((  bool (*) (Dictionary_2_t1771158552 *, Il2CppObject *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m3511511332_gshared)(__this, ___key0, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int16,System.Object>::System.Collections.IDictionary.Remove(System.Object)
extern "C"  void Dictionary_2_System_Collections_IDictionary_Remove_m473160473_gshared (Dictionary_2_t1771158552 * __this, Il2CppObject * ___key0, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m473160473(__this, ___key0, method) ((  void (*) (Dictionary_2_t1771158552 *, Il2CppObject *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m473160473_gshared)(__this, ___key0, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int16,System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C"  bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m3693639210_gshared (Dictionary_2_t1771158552 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m3693639210(__this, method) ((  bool (*) (Dictionary_2_t1771158552 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m3693639210_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int16,System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C"  Il2CppObject * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m2413416332_gshared (Dictionary_2_t1771158552 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m2413416332(__this, method) ((  Il2CppObject * (*) (Dictionary_2_t1771158552 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m2413416332_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int16,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C"  bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m87927056_gshared (Dictionary_2_t1771158552 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m87927056(__this, method) ((  bool (*) (Dictionary_2_t1771158552 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m87927056_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int16,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C"  void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m2631323265_gshared (Dictionary_2_t1771158552 * __this, KeyValuePair_2_t3823471070  ___keyValuePair0, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m2631323265(__this, ___keyValuePair0, method) ((  void (*) (Dictionary_2_t1771158552 *, KeyValuePair_2_t3823471070 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m2631323265_gshared)(__this, ___keyValuePair0, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int16,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C"  bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m262694195_gshared (Dictionary_2_t1771158552 * __this, KeyValuePair_2_t3823471070  ___keyValuePair0, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m262694195(__this, ___keyValuePair0, method) ((  bool (*) (Dictionary_2_t1771158552 *, KeyValuePair_2_t3823471070 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m262694195_gshared)(__this, ___keyValuePair0, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int16,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C"  void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m744068501_gshared (Dictionary_2_t1771158552 * __this, KeyValuePair_2U5BU5D_t560426219* ___array0, int32_t ___index1, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m744068501(__this, ___array0, ___index1, method) ((  void (*) (Dictionary_2_t1771158552 *, KeyValuePair_2U5BU5D_t560426219*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m744068501_gshared)(__this, ___array0, ___index1, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int16,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C"  bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m3142849670_gshared (Dictionary_2_t1771158552 * __this, KeyValuePair_2_t3823471070  ___keyValuePair0, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m3142849670(__this, ___keyValuePair0, method) ((  bool (*) (Dictionary_2_t1771158552 *, KeyValuePair_2_t3823471070 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m3142849670_gshared)(__this, ___keyValuePair0, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int16,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C"  void Dictionary_2_System_Collections_ICollection_CopyTo_m134957430_gshared (Dictionary_2_t1771158552 * __this, Il2CppArray * ___array0, int32_t ___index1, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m134957430(__this, ___array0, ___index1, method) ((  void (*) (Dictionary_2_t1771158552 *, Il2CppArray *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m134957430_gshared)(__this, ___array0, ___index1, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Int16,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Il2CppObject * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m51460675_gshared (Dictionary_2_t1771158552 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m51460675(__this, method) ((  Il2CppObject * (*) (Dictionary_2_t1771158552 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m51460675_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Int16,System.Object>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C"  Il2CppObject* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m4158811682_gshared (Dictionary_2_t1771158552 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m4158811682(__this, method) ((  Il2CppObject* (*) (Dictionary_2_t1771158552 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m4158811682_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Int16,System.Object>::System.Collections.IDictionary.GetEnumerator()
extern "C"  Il2CppObject * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m3446741685_gshared (Dictionary_2_t1771158552 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m3446741685(__this, method) ((  Il2CppObject * (*) (Dictionary_2_t1771158552 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m3446741685_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int16,System.Object>::get_Count()
extern "C"  int32_t Dictionary_2_get_Count_m703292146_gshared (Dictionary_2_t1771158552 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m703292146(__this, method) ((  int32_t (*) (Dictionary_2_t1771158552 *, const MethodInfo*))Dictionary_2_get_Count_m703292146_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int16,System.Object>::get_Item(TKey)
extern "C"  Il2CppObject * Dictionary_2_get_Item_m135101425_gshared (Dictionary_2_t1771158552 * __this, int16_t ___key0, const MethodInfo* method);
#define Dictionary_2_get_Item_m135101425(__this, ___key0, method) ((  Il2CppObject * (*) (Dictionary_2_t1771158552 *, int16_t, const MethodInfo*))Dictionary_2_get_Item_m135101425_gshared)(__this, ___key0, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int16,System.Object>::set_Item(TKey,TValue)
extern "C"  void Dictionary_2_set_Item_m33029332_gshared (Dictionary_2_t1771158552 * __this, int16_t ___key0, Il2CppObject * ___value1, const MethodInfo* method);
#define Dictionary_2_set_Item_m33029332(__this, ___key0, ___value1, method) ((  void (*) (Dictionary_2_t1771158552 *, int16_t, Il2CppObject *, const MethodInfo*))Dictionary_2_set_Item_m33029332_gshared)(__this, ___key0, ___value1, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int16,System.Object>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C"  void Dictionary_2_Init_m3531467418_gshared (Dictionary_2_t1771158552 * __this, int32_t ___capacity0, Il2CppObject* ___hcp1, const MethodInfo* method);
#define Dictionary_2_Init_m3531467418(__this, ___capacity0, ___hcp1, method) ((  void (*) (Dictionary_2_t1771158552 *, int32_t, Il2CppObject*, const MethodInfo*))Dictionary_2_Init_m3531467418_gshared)(__this, ___capacity0, ___hcp1, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int16,System.Object>::InitArrays(System.Int32)
extern "C"  void Dictionary_2_InitArrays_m2310568403_gshared (Dictionary_2_t1771158552 * __this, int32_t ___size0, const MethodInfo* method);
#define Dictionary_2_InitArrays_m2310568403(__this, ___size0, method) ((  void (*) (Dictionary_2_t1771158552 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m2310568403_gshared)(__this, ___size0, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int16,System.Object>::CopyToCheck(System.Array,System.Int32)
extern "C"  void Dictionary_2_CopyToCheck_m806935793_gshared (Dictionary_2_t1771158552 * __this, Il2CppArray * ___array0, int32_t ___index1, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m806935793(__this, ___array0, ___index1, method) ((  void (*) (Dictionary_2_t1771158552 *, Il2CppArray *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m806935793_gshared)(__this, ___array0, ___index1, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int16,System.Object>::make_pair(TKey,TValue)
extern "C"  KeyValuePair_2_t3823471070  Dictionary_2_make_pair_m841102783_gshared (Il2CppObject * __this /* static, unused */, int16_t ___key0, Il2CppObject * ___value1, const MethodInfo* method);
#define Dictionary_2_make_pair_m841102783(__this /* static, unused */, ___key0, ___value1, method) ((  KeyValuePair_2_t3823471070  (*) (Il2CppObject * /* static, unused */, int16_t, Il2CppObject *, const MethodInfo*))Dictionary_2_make_pair_m841102783_gshared)(__this /* static, unused */, ___key0, ___value1, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int16,System.Object>::pick_key(TKey,TValue)
extern "C"  int16_t Dictionary_2_pick_key_m998014423_gshared (Il2CppObject * __this /* static, unused */, int16_t ___key0, Il2CppObject * ___value1, const MethodInfo* method);
#define Dictionary_2_pick_key_m998014423(__this /* static, unused */, ___key0, ___value1, method) ((  int16_t (*) (Il2CppObject * /* static, unused */, int16_t, Il2CppObject *, const MethodInfo*))Dictionary_2_pick_key_m998014423_gshared)(__this /* static, unused */, ___key0, ___value1, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int16,System.Object>::pick_value(TKey,TValue)
extern "C"  Il2CppObject * Dictionary_2_pick_value_m641029111_gshared (Il2CppObject * __this /* static, unused */, int16_t ___key0, Il2CppObject * ___value1, const MethodInfo* method);
#define Dictionary_2_pick_value_m641029111(__this /* static, unused */, ___key0, ___value1, method) ((  Il2CppObject * (*) (Il2CppObject * /* static, unused */, int16_t, Il2CppObject *, const MethodInfo*))Dictionary_2_pick_value_m641029111_gshared)(__this /* static, unused */, ___key0, ___value1, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int16,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C"  void Dictionary_2_CopyTo_m120548656_gshared (Dictionary_2_t1771158552 * __this, KeyValuePair_2U5BU5D_t560426219* ___array0, int32_t ___index1, const MethodInfo* method);
#define Dictionary_2_CopyTo_m120548656(__this, ___array0, ___index1, method) ((  void (*) (Dictionary_2_t1771158552 *, KeyValuePair_2U5BU5D_t560426219*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m120548656_gshared)(__this, ___array0, ___index1, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int16,System.Object>::Resize()
extern "C"  void Dictionary_2_Resize_m3437713620_gshared (Dictionary_2_t1771158552 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m3437713620(__this, method) ((  void (*) (Dictionary_2_t1771158552 *, const MethodInfo*))Dictionary_2_Resize_m3437713620_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int16,System.Object>::Add(TKey,TValue)
extern "C"  void Dictionary_2_Add_m4276855891_gshared (Dictionary_2_t1771158552 * __this, int16_t ___key0, Il2CppObject * ___value1, const MethodInfo* method);
#define Dictionary_2_Add_m4276855891(__this, ___key0, ___value1, method) ((  void (*) (Dictionary_2_t1771158552 *, int16_t, Il2CppObject *, const MethodInfo*))Dictionary_2_Add_m4276855891_gshared)(__this, ___key0, ___value1, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int16,System.Object>::Clear()
extern "C"  void Dictionary_2_Clear_m4069855587_gshared (Dictionary_2_t1771158552 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m4069855587(__this, method) ((  void (*) (Dictionary_2_t1771158552 *, const MethodInfo*))Dictionary_2_Clear_m4069855587_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int16,System.Object>::ContainsKey(TKey)
extern "C"  bool Dictionary_2_ContainsKey_m1275455617_gshared (Dictionary_2_t1771158552 * __this, int16_t ___key0, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m1275455617(__this, ___key0, method) ((  bool (*) (Dictionary_2_t1771158552 *, int16_t, const MethodInfo*))Dictionary_2_ContainsKey_m1275455617_gshared)(__this, ___key0, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int16,System.Object>::ContainsValue(TValue)
extern "C"  bool Dictionary_2_ContainsValue_m3817644873_gshared (Dictionary_2_t1771158552 * __this, Il2CppObject * ___value0, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m3817644873(__this, ___value0, method) ((  bool (*) (Dictionary_2_t1771158552 *, Il2CppObject *, const MethodInfo*))Dictionary_2_ContainsValue_m3817644873_gshared)(__this, ___value0, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int16,System.Object>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void Dictionary_2_GetObjectData_m1612856370_gshared (Dictionary_2_t1771158552 * __this, SerializationInfo_t228987430 * ___info0, StreamingContext_t1417235061  ___context1, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m1612856370(__this, ___info0, ___context1, method) ((  void (*) (Dictionary_2_t1771158552 *, SerializationInfo_t228987430 *, StreamingContext_t1417235061 , const MethodInfo*))Dictionary_2_GetObjectData_m1612856370_gshared)(__this, ___info0, ___context1, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int16,System.Object>::OnDeserialization(System.Object)
extern "C"  void Dictionary_2_OnDeserialization_m3569280860_gshared (Dictionary_2_t1771158552 * __this, Il2CppObject * ___sender0, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m3569280860(__this, ___sender0, method) ((  void (*) (Dictionary_2_t1771158552 *, Il2CppObject *, const MethodInfo*))Dictionary_2_OnDeserialization_m3569280860_gshared)(__this, ___sender0, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int16,System.Object>::Remove(TKey)
extern "C"  bool Dictionary_2_Remove_m2759144563_gshared (Dictionary_2_t1771158552 * __this, int16_t ___key0, const MethodInfo* method);
#define Dictionary_2_Remove_m2759144563(__this, ___key0, method) ((  bool (*) (Dictionary_2_t1771158552 *, int16_t, const MethodInfo*))Dictionary_2_Remove_m2759144563_gshared)(__this, ___key0, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int16,System.Object>::TryGetValue(TKey,TValue&)
extern "C"  bool Dictionary_2_TryGetValue_m295682072_gshared (Dictionary_2_t1771158552 * __this, int16_t ___key0, Il2CppObject ** ___value1, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m295682072(__this, ___key0, ___value1, method) ((  bool (*) (Dictionary_2_t1771158552 *, int16_t, Il2CppObject **, const MethodInfo*))Dictionary_2_TryGetValue_m295682072_gshared)(__this, ___key0, ___value1, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int16,System.Object>::get_Keys()
extern "C"  KeyCollection_t4254656323 * Dictionary_2_get_Keys_m2136445777_gshared (Dictionary_2_t1771158552 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m2136445777(__this, method) ((  KeyCollection_t4254656323 * (*) (Dictionary_2_t1771158552 *, const MethodInfo*))Dictionary_2_get_Keys_m2136445777_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int16,System.Object>::get_Values()
extern "C"  ValueCollection_t474218395 * Dictionary_2_get_Values_m1152014737_gshared (Dictionary_2_t1771158552 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m1152014737(__this, method) ((  ValueCollection_t474218395 * (*) (Dictionary_2_t1771158552 *, const MethodInfo*))Dictionary_2_get_Values_m1152014737_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int16,System.Object>::ToTKey(System.Object)
extern "C"  int16_t Dictionary_2_ToTKey_m2273353874_gshared (Dictionary_2_t1771158552 * __this, Il2CppObject * ___key0, const MethodInfo* method);
#define Dictionary_2_ToTKey_m2273353874(__this, ___key0, method) ((  int16_t (*) (Dictionary_2_t1771158552 *, Il2CppObject *, const MethodInfo*))Dictionary_2_ToTKey_m2273353874_gshared)(__this, ___key0, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int16,System.Object>::ToTValue(System.Object)
extern "C"  Il2CppObject * Dictionary_2_ToTValue_m1546650898_gshared (Dictionary_2_t1771158552 * __this, Il2CppObject * ___value0, const MethodInfo* method);
#define Dictionary_2_ToTValue_m1546650898(__this, ___value0, method) ((  Il2CppObject * (*) (Dictionary_2_t1771158552 *, Il2CppObject *, const MethodInfo*))Dictionary_2_ToTValue_m1546650898_gshared)(__this, ___value0, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int16,System.Object>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C"  bool Dictionary_2_ContainsKeyValuePair_m524923944_gshared (Dictionary_2_t1771158552 * __this, KeyValuePair_2_t3823471070  ___pair0, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m524923944(__this, ___pair0, method) ((  bool (*) (Dictionary_2_t1771158552 *, KeyValuePair_2_t3823471070 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m524923944_gshared)(__this, ___pair0, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int16,System.Object>::GetEnumerator()
extern "C"  Enumerator_t3091183254  Dictionary_2_GetEnumerator_m512438279_gshared (Dictionary_2_t1771158552 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m512438279(__this, method) ((  Enumerator_t3091183254  (*) (Dictionary_2_t1771158552 *, const MethodInfo*))Dictionary_2_GetEnumerator_m512438279_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Int16,System.Object>::<CopyTo>m__0(TKey,TValue)
extern "C"  DictionaryEntry_t3048875398  Dictionary_2_U3CCopyToU3Em__0_m4051804576_gshared (Il2CppObject * __this /* static, unused */, int16_t ___key0, Il2CppObject * ___value1, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m4051804576(__this /* static, unused */, ___key0, ___value1, method) ((  DictionaryEntry_t3048875398  (*) (Il2CppObject * /* static, unused */, int16_t, Il2CppObject *, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m4051804576_gshared)(__this /* static, unused */, ___key0, ___value1, method)
