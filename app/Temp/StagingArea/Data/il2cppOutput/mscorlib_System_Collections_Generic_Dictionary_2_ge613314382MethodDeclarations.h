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

// System.Collections.Generic.Dictionary`2<System.RuntimeTypeHandle,System.Object>
struct Dictionary_2_t613314382;
// System.Collections.Generic.IEqualityComparer`1<System.RuntimeTypeHandle>
struct IEqualityComparer_1_t1542733862;
// System.Collections.Generic.IDictionary`2<System.RuntimeTypeHandle,System.Object>
struct IDictionary_2_t2907365099;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t228987430;
// System.Collections.Generic.ICollection`1<System.RuntimeTypeHandle>
struct ICollection_1_t3282176389;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t3641524600;
// System.Collections.ICollection
struct ICollection_t91669223;
// System.Object
struct Il2CppObject;
// System.Collections.Generic.KeyValuePair`2<System.RuntimeTypeHandle,System.Object>[]
struct KeyValuePair_2U5BU5D_t3954763805;
// System.Array
struct Il2CppArray;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.RuntimeTypeHandle,System.Object>>
struct IEnumerator_1_t141150727;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t259680273;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.RuntimeTypeHandle,System.Object>
struct KeyCollection_t3096812153;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.RuntimeTypeHandle,System.Object>
struct ValueCollection_t3611341521;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_Serialization228987430.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCon1417235061.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_22665626900.h"
#include "mscorlib_System_Array3829468939.h"
#include "mscorlib_System_RuntimeTypeHandle2330101084.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_E1933339084.h"
#include "mscorlib_System_Collections_DictionaryEntry3048875398.h"

// System.Void System.Collections.Generic.Dictionary`2<System.RuntimeTypeHandle,System.Object>::.ctor()
extern "C"  void Dictionary_2__ctor_m1186370399_gshared (Dictionary_2_t613314382 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m1186370399(__this, method) ((  void (*) (Dictionary_2_t613314382 *, const MethodInfo*))Dictionary_2__ctor_m1186370399_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.RuntimeTypeHandle,System.Object>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C"  void Dictionary_2__ctor_m1364896031_gshared (Dictionary_2_t613314382 * __this, Il2CppObject* ___comparer0, const MethodInfo* method);
#define Dictionary_2__ctor_m1364896031(__this, ___comparer0, method) ((  void (*) (Dictionary_2_t613314382 *, Il2CppObject*, const MethodInfo*))Dictionary_2__ctor_m1364896031_gshared)(__this, ___comparer0, method)
// System.Void System.Collections.Generic.Dictionary`2<System.RuntimeTypeHandle,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C"  void Dictionary_2__ctor_m3748684482_gshared (Dictionary_2_t613314382 * __this, Il2CppObject* ___dictionary0, const MethodInfo* method);
#define Dictionary_2__ctor_m3748684482(__this, ___dictionary0, method) ((  void (*) (Dictionary_2_t613314382 *, Il2CppObject*, const MethodInfo*))Dictionary_2__ctor_m3748684482_gshared)(__this, ___dictionary0, method)
// System.Void System.Collections.Generic.Dictionary`2<System.RuntimeTypeHandle,System.Object>::.ctor(System.Int32)
extern "C"  void Dictionary_2__ctor_m3411193934_gshared (Dictionary_2_t613314382 * __this, int32_t ___capacity0, const MethodInfo* method);
#define Dictionary_2__ctor_m3411193934(__this, ___capacity0, method) ((  void (*) (Dictionary_2_t613314382 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m3411193934_gshared)(__this, ___capacity0, method)
// System.Void System.Collections.Generic.Dictionary`2<System.RuntimeTypeHandle,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C"  void Dictionary_2__ctor_m1803068277_gshared (Dictionary_2_t613314382 * __this, Il2CppObject* ___dictionary0, Il2CppObject* ___comparer1, const MethodInfo* method);
#define Dictionary_2__ctor_m1803068277(__this, ___dictionary0, ___comparer1, method) ((  void (*) (Dictionary_2_t613314382 *, Il2CppObject*, Il2CppObject*, const MethodInfo*))Dictionary_2__ctor_m1803068277_gshared)(__this, ___dictionary0, ___comparer1, method)
// System.Void System.Collections.Generic.Dictionary`2<System.RuntimeTypeHandle,System.Object>::.ctor(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C"  void Dictionary_2__ctor_m1869317326_gshared (Dictionary_2_t613314382 * __this, int32_t ___capacity0, Il2CppObject* ___comparer1, const MethodInfo* method);
#define Dictionary_2__ctor_m1869317326(__this, ___capacity0, ___comparer1, method) ((  void (*) (Dictionary_2_t613314382 *, int32_t, Il2CppObject*, const MethodInfo*))Dictionary_2__ctor_m1869317326_gshared)(__this, ___capacity0, ___comparer1, method)
// System.Void System.Collections.Generic.Dictionary`2<System.RuntimeTypeHandle,System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void Dictionary_2__ctor_m768089975_gshared (Dictionary_2_t613314382 * __this, SerializationInfo_t228987430 * ___info0, StreamingContext_t1417235061  ___context1, const MethodInfo* method);
#define Dictionary_2__ctor_m768089975(__this, ___info0, ___context1, method) ((  void (*) (Dictionary_2_t613314382 *, SerializationInfo_t228987430 *, StreamingContext_t1417235061 , const MethodInfo*))Dictionary_2__ctor_m768089975_gshared)(__this, ___info0, ___context1, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.RuntimeTypeHandle,System.Object>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C"  Il2CppObject* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m1522802018_gshared (Dictionary_2_t613314382 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m1522802018(__this, method) ((  Il2CppObject* (*) (Dictionary_2_t613314382 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m1522802018_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.RuntimeTypeHandle,System.Object>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C"  Il2CppObject* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m3674614434_gshared (Dictionary_2_t613314382 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m3674614434(__this, method) ((  Il2CppObject* (*) (Dictionary_2_t613314382 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m3674614434_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.RuntimeTypeHandle,System.Object>::System.Collections.IDictionary.get_Keys()
extern "C"  Il2CppObject * Dictionary_2_System_Collections_IDictionary_get_Keys_m3076228756_gshared (Dictionary_2_t613314382 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m3076228756(__this, method) ((  Il2CppObject * (*) (Dictionary_2_t613314382 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m3076228756_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.RuntimeTypeHandle,System.Object>::System.Collections.IDictionary.get_Values()
extern "C"  Il2CppObject * Dictionary_2_System_Collections_IDictionary_get_Values_m1244626634_gshared (Dictionary_2_t613314382 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Values_m1244626634(__this, method) ((  Il2CppObject * (*) (Dictionary_2_t613314382 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Values_m1244626634_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.RuntimeTypeHandle,System.Object>::System.Collections.IDictionary.get_IsFixedSize()
extern "C"  bool Dictionary_2_System_Collections_IDictionary_get_IsFixedSize_m2329806787_gshared (Dictionary_2_t613314382 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_IsFixedSize_m2329806787(__this, method) ((  bool (*) (Dictionary_2_t613314382 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_IsFixedSize_m2329806787_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.RuntimeTypeHandle,System.Object>::System.Collections.IDictionary.get_IsReadOnly()
extern "C"  bool Dictionary_2_System_Collections_IDictionary_get_IsReadOnly_m3845678022_gshared (Dictionary_2_t613314382 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_IsReadOnly_m3845678022(__this, method) ((  bool (*) (Dictionary_2_t613314382 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_IsReadOnly_m3845678022_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.RuntimeTypeHandle,System.Object>::System.Collections.IDictionary.get_Item(System.Object)
extern "C"  Il2CppObject * Dictionary_2_System_Collections_IDictionary_get_Item_m2092581288_gshared (Dictionary_2_t613314382 * __this, Il2CppObject * ___key0, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m2092581288(__this, ___key0, method) ((  Il2CppObject * (*) (Dictionary_2_t613314382 *, Il2CppObject *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m2092581288_gshared)(__this, ___key0, method)
// System.Void System.Collections.Generic.Dictionary`2<System.RuntimeTypeHandle,System.Object>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C"  void Dictionary_2_System_Collections_IDictionary_set_Item_m2226293951_gshared (Dictionary_2_t613314382 * __this, Il2CppObject * ___key0, Il2CppObject * ___value1, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m2226293951(__this, ___key0, ___value1, method) ((  void (*) (Dictionary_2_t613314382 *, Il2CppObject *, Il2CppObject *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m2226293951_gshared)(__this, ___key0, ___value1, method)
// System.Void System.Collections.Generic.Dictionary`2<System.RuntimeTypeHandle,System.Object>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C"  void Dictionary_2_System_Collections_IDictionary_Add_m3697137092_gshared (Dictionary_2_t613314382 * __this, Il2CppObject * ___key0, Il2CppObject * ___value1, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m3697137092(__this, ___key0, ___value1, method) ((  void (*) (Dictionary_2_t613314382 *, Il2CppObject *, Il2CppObject *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m3697137092_gshared)(__this, ___key0, ___value1, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.RuntimeTypeHandle,System.Object>::System.Collections.IDictionary.Contains(System.Object)
extern "C"  bool Dictionary_2_System_Collections_IDictionary_Contains_m2151112620_gshared (Dictionary_2_t613314382 * __this, Il2CppObject * ___key0, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m2151112620(__this, ___key0, method) ((  bool (*) (Dictionary_2_t613314382 *, Il2CppObject *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m2151112620_gshared)(__this, ___key0, method)
// System.Void System.Collections.Generic.Dictionary`2<System.RuntimeTypeHandle,System.Object>::System.Collections.IDictionary.Remove(System.Object)
extern "C"  void Dictionary_2_System_Collections_IDictionary_Remove_m4197284243_gshared (Dictionary_2_t613314382 * __this, Il2CppObject * ___key0, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m4197284243(__this, ___key0, method) ((  void (*) (Dictionary_2_t613314382 *, Il2CppObject *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m4197284243_gshared)(__this, ___key0, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.RuntimeTypeHandle,System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C"  bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m312698054_gshared (Dictionary_2_t613314382 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m312698054(__this, method) ((  bool (*) (Dictionary_2_t613314382 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m312698054_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.RuntimeTypeHandle,System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C"  Il2CppObject * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m1399737840_gshared (Dictionary_2_t613314382 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m1399737840(__this, method) ((  Il2CppObject * (*) (Dictionary_2_t613314382 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m1399737840_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.RuntimeTypeHandle,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C"  bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m2982169380_gshared (Dictionary_2_t613314382 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m2982169380(__this, method) ((  bool (*) (Dictionary_2_t613314382 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m2982169380_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.RuntimeTypeHandle,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C"  void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m749039063_gshared (Dictionary_2_t613314382 * __this, KeyValuePair_2_t2665626900  ___keyValuePair0, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m749039063(__this, ___keyValuePair0, method) ((  void (*) (Dictionary_2_t613314382 *, KeyValuePair_2_t2665626900 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m749039063_gshared)(__this, ___keyValuePair0, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.RuntimeTypeHandle,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C"  bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m1684398593_gshared (Dictionary_2_t613314382 * __this, KeyValuePair_2_t2665626900  ___keyValuePair0, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m1684398593(__this, ___keyValuePair0, method) ((  bool (*) (Dictionary_2_t613314382 *, KeyValuePair_2_t2665626900 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m1684398593_gshared)(__this, ___keyValuePair0, method)
// System.Void System.Collections.Generic.Dictionary`2<System.RuntimeTypeHandle,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C"  void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m1544857155_gshared (Dictionary_2_t613314382 * __this, KeyValuePair_2U5BU5D_t3954763805* ___array0, int32_t ___index1, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m1544857155(__this, ___array0, ___index1, method) ((  void (*) (Dictionary_2_t613314382 *, KeyValuePair_2U5BU5D_t3954763805*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m1544857155_gshared)(__this, ___array0, ___index1, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.RuntimeTypeHandle,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C"  bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m3965707738_gshared (Dictionary_2_t613314382 * __this, KeyValuePair_2_t2665626900  ___keyValuePair0, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m3965707738(__this, ___keyValuePair0, method) ((  bool (*) (Dictionary_2_t613314382 *, KeyValuePair_2_t2665626900 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m3965707738_gshared)(__this, ___keyValuePair0, method)
// System.Void System.Collections.Generic.Dictionary`2<System.RuntimeTypeHandle,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C"  void Dictionary_2_System_Collections_ICollection_CopyTo_m806341782_gshared (Dictionary_2_t613314382 * __this, Il2CppArray * ___array0, int32_t ___index1, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m806341782(__this, ___array0, ___index1, method) ((  void (*) (Dictionary_2_t613314382 *, Il2CppArray *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m806341782_gshared)(__this, ___array0, ___index1, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.RuntimeTypeHandle,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Il2CppObject * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m697813297_gshared (Dictionary_2_t613314382 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m697813297(__this, method) ((  Il2CppObject * (*) (Dictionary_2_t613314382 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m697813297_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.RuntimeTypeHandle,System.Object>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C"  Il2CppObject* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m2056363086_gshared (Dictionary_2_t613314382 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m2056363086(__this, method) ((  Il2CppObject* (*) (Dictionary_2_t613314382 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m2056363086_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.RuntimeTypeHandle,System.Object>::System.Collections.IDictionary.GetEnumerator()
extern "C"  Il2CppObject * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m230946251_gshared (Dictionary_2_t613314382 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m230946251(__this, method) ((  Il2CppObject * (*) (Dictionary_2_t613314382 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m230946251_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.RuntimeTypeHandle,System.Object>::get_Count()
extern "C"  int32_t Dictionary_2_get_Count_m86841410_gshared (Dictionary_2_t613314382 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m86841410(__this, method) ((  int32_t (*) (Dictionary_2_t613314382 *, const MethodInfo*))Dictionary_2_get_Count_m86841410_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.RuntimeTypeHandle,System.Object>::get_Item(TKey)
extern "C"  Il2CppObject * Dictionary_2_get_Item_m4274035347_gshared (Dictionary_2_t613314382 * __this, RuntimeTypeHandle_t2330101084  ___key0, const MethodInfo* method);
#define Dictionary_2_get_Item_m4274035347(__this, ___key0, method) ((  Il2CppObject * (*) (Dictionary_2_t613314382 *, RuntimeTypeHandle_t2330101084 , const MethodInfo*))Dictionary_2_get_Item_m4274035347_gshared)(__this, ___key0, method)
// System.Void System.Collections.Generic.Dictionary`2<System.RuntimeTypeHandle,System.Object>::set_Item(TKey,TValue)
extern "C"  void Dictionary_2_set_Item_m3658141734_gshared (Dictionary_2_t613314382 * __this, RuntimeTypeHandle_t2330101084  ___key0, Il2CppObject * ___value1, const MethodInfo* method);
#define Dictionary_2_set_Item_m3658141734(__this, ___key0, ___value1, method) ((  void (*) (Dictionary_2_t613314382 *, RuntimeTypeHandle_t2330101084 , Il2CppObject *, const MethodInfo*))Dictionary_2_set_Item_m3658141734_gshared)(__this, ___key0, ___value1, method)
// System.Void System.Collections.Generic.Dictionary`2<System.RuntimeTypeHandle,System.Object>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C"  void Dictionary_2_Init_m132476610_gshared (Dictionary_2_t613314382 * __this, int32_t ___capacity0, Il2CppObject* ___hcp1, const MethodInfo* method);
#define Dictionary_2_Init_m132476610(__this, ___capacity0, ___hcp1, method) ((  void (*) (Dictionary_2_t613314382 *, int32_t, Il2CppObject*, const MethodInfo*))Dictionary_2_Init_m132476610_gshared)(__this, ___capacity0, ___hcp1, method)
// System.Void System.Collections.Generic.Dictionary`2<System.RuntimeTypeHandle,System.Object>::InitArrays(System.Int32)
extern "C"  void Dictionary_2_InitArrays_m3566702085_gshared (Dictionary_2_t613314382 * __this, int32_t ___size0, const MethodInfo* method);
#define Dictionary_2_InitArrays_m3566702085(__this, ___size0, method) ((  void (*) (Dictionary_2_t613314382 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m3566702085_gshared)(__this, ___size0, method)
// System.Void System.Collections.Generic.Dictionary`2<System.RuntimeTypeHandle,System.Object>::CopyToCheck(System.Array,System.Int32)
extern "C"  void Dictionary_2_CopyToCheck_m4105473067_gshared (Dictionary_2_t613314382 * __this, Il2CppArray * ___array0, int32_t ___index1, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m4105473067(__this, ___array0, ___index1, method) ((  void (*) (Dictionary_2_t613314382 *, Il2CppArray *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m4105473067_gshared)(__this, ___array0, ___index1, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.RuntimeTypeHandle,System.Object>::make_pair(TKey,TValue)
extern "C"  KeyValuePair_2_t2665626900  Dictionary_2_make_pair_m2974460897_gshared (Il2CppObject * __this /* static, unused */, RuntimeTypeHandle_t2330101084  ___key0, Il2CppObject * ___value1, const MethodInfo* method);
#define Dictionary_2_make_pair_m2974460897(__this /* static, unused */, ___key0, ___value1, method) ((  KeyValuePair_2_t2665626900  (*) (Il2CppObject * /* static, unused */, RuntimeTypeHandle_t2330101084 , Il2CppObject *, const MethodInfo*))Dictionary_2_make_pair_m2974460897_gshared)(__this /* static, unused */, ___key0, ___value1, method)
// TKey System.Collections.Generic.Dictionary`2<System.RuntimeTypeHandle,System.Object>::pick_key(TKey,TValue)
extern "C"  RuntimeTypeHandle_t2330101084  Dictionary_2_pick_key_m2310811933_gshared (Il2CppObject * __this /* static, unused */, RuntimeTypeHandle_t2330101084  ___key0, Il2CppObject * ___value1, const MethodInfo* method);
#define Dictionary_2_pick_key_m2310811933(__this /* static, unused */, ___key0, ___value1, method) ((  RuntimeTypeHandle_t2330101084  (*) (Il2CppObject * /* static, unused */, RuntimeTypeHandle_t2330101084 , Il2CppObject *, const MethodInfo*))Dictionary_2_pick_key_m2310811933_gshared)(__this /* static, unused */, ___key0, ___value1, method)
// TValue System.Collections.Generic.Dictionary`2<System.RuntimeTypeHandle,System.Object>::pick_value(TKey,TValue)
extern "C"  Il2CppObject * Dictionary_2_pick_value_m3616902973_gshared (Il2CppObject * __this /* static, unused */, RuntimeTypeHandle_t2330101084  ___key0, Il2CppObject * ___value1, const MethodInfo* method);
#define Dictionary_2_pick_value_m3616902973(__this /* static, unused */, ___key0, ___value1, method) ((  Il2CppObject * (*) (Il2CppObject * /* static, unused */, RuntimeTypeHandle_t2330101084 , Il2CppObject *, const MethodInfo*))Dictionary_2_pick_value_m3616902973_gshared)(__this /* static, unused */, ___key0, ___value1, method)
// System.Void System.Collections.Generic.Dictionary`2<System.RuntimeTypeHandle,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C"  void Dictionary_2_CopyTo_m3281116136_gshared (Dictionary_2_t613314382 * __this, KeyValuePair_2U5BU5D_t3954763805* ___array0, int32_t ___index1, const MethodInfo* method);
#define Dictionary_2_CopyTo_m3281116136(__this, ___array0, ___index1, method) ((  void (*) (Dictionary_2_t613314382 *, KeyValuePair_2U5BU5D_t3954763805*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m3281116136_gshared)(__this, ___array0, ___index1, method)
// System.Void System.Collections.Generic.Dictionary`2<System.RuntimeTypeHandle,System.Object>::Resize()
extern "C"  void Dictionary_2_Resize_m3210308852_gshared (Dictionary_2_t613314382 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m3210308852(__this, method) ((  void (*) (Dictionary_2_t613314382 *, const MethodInfo*))Dictionary_2_Resize_m3210308852_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.RuntimeTypeHandle,System.Object>::Add(TKey,TValue)
extern "C"  void Dictionary_2_Add_m3095230263_gshared (Dictionary_2_t613314382 * __this, RuntimeTypeHandle_t2330101084  ___key0, Il2CppObject * ___value1, const MethodInfo* method);
#define Dictionary_2_Add_m3095230263(__this, ___key0, ___value1, method) ((  void (*) (Dictionary_2_t613314382 *, RuntimeTypeHandle_t2330101084 , Il2CppObject *, const MethodInfo*))Dictionary_2_Add_m3095230263_gshared)(__this, ___key0, ___value1, method)
// System.Void System.Collections.Generic.Dictionary`2<System.RuntimeTypeHandle,System.Object>::Clear()
extern "C"  void Dictionary_2_Clear_m3353623733_gshared (Dictionary_2_t613314382 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m3353623733(__this, method) ((  void (*) (Dictionary_2_t613314382 *, const MethodInfo*))Dictionary_2_Clear_m3353623733_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.RuntimeTypeHandle,System.Object>::ContainsKey(TKey)
extern "C"  bool Dictionary_2_ContainsKey_m3061150590_gshared (Dictionary_2_t613314382 * __this, RuntimeTypeHandle_t2330101084  ___key0, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m3061150590(__this, ___key0, method) ((  bool (*) (Dictionary_2_t613314382 *, RuntimeTypeHandle_t2330101084 , const MethodInfo*))Dictionary_2_ContainsKey_m3061150590_gshared)(__this, ___key0, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.RuntimeTypeHandle,System.Object>::ContainsValue(TValue)
extern "C"  bool Dictionary_2_ContainsValue_m3488326027_gshared (Dictionary_2_t613314382 * __this, Il2CppObject * ___value0, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m3488326027(__this, ___value0, method) ((  bool (*) (Dictionary_2_t613314382 *, Il2CppObject *, const MethodInfo*))Dictionary_2_ContainsValue_m3488326027_gshared)(__this, ___value0, method)
// System.Void System.Collections.Generic.Dictionary`2<System.RuntimeTypeHandle,System.Object>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void Dictionary_2_GetObjectData_m538284538_gshared (Dictionary_2_t613314382 * __this, SerializationInfo_t228987430 * ___info0, StreamingContext_t1417235061  ___context1, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m538284538(__this, ___info0, ___context1, method) ((  void (*) (Dictionary_2_t613314382 *, SerializationInfo_t228987430 *, StreamingContext_t1417235061 , const MethodInfo*))Dictionary_2_GetObjectData_m538284538_gshared)(__this, ___info0, ___context1, method)
// System.Void System.Collections.Generic.Dictionary`2<System.RuntimeTypeHandle,System.Object>::OnDeserialization(System.Object)
extern "C"  void Dictionary_2_OnDeserialization_m3522497052_gshared (Dictionary_2_t613314382 * __this, Il2CppObject * ___sender0, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m3522497052(__this, ___sender0, method) ((  void (*) (Dictionary_2_t613314382 *, Il2CppObject *, const MethodInfo*))Dictionary_2_OnDeserialization_m3522497052_gshared)(__this, ___sender0, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.RuntimeTypeHandle,System.Object>::Remove(TKey)
extern "C"  bool Dictionary_2_Remove_m422697025_gshared (Dictionary_2_t613314382 * __this, RuntimeTypeHandle_t2330101084  ___key0, const MethodInfo* method);
#define Dictionary_2_Remove_m422697025(__this, ___key0, method) ((  bool (*) (Dictionary_2_t613314382 *, RuntimeTypeHandle_t2330101084 , const MethodInfo*))Dictionary_2_Remove_m422697025_gshared)(__this, ___key0, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.RuntimeTypeHandle,System.Object>::TryGetValue(TKey,TValue&)
extern "C"  bool Dictionary_2_TryGetValue_m1598577250_gshared (Dictionary_2_t613314382 * __this, RuntimeTypeHandle_t2330101084  ___key0, Il2CppObject ** ___value1, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m1598577250(__this, ___key0, ___value1, method) ((  bool (*) (Dictionary_2_t613314382 *, RuntimeTypeHandle_t2330101084 , Il2CppObject **, const MethodInfo*))Dictionary_2_TryGetValue_m1598577250_gshared)(__this, ___key0, ___value1, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.RuntimeTypeHandle,System.Object>::get_Keys()
extern "C"  KeyCollection_t3096812153 * Dictionary_2_get_Keys_m2925762607_gshared (Dictionary_2_t613314382 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m2925762607(__this, method) ((  KeyCollection_t3096812153 * (*) (Dictionary_2_t613314382 *, const MethodInfo*))Dictionary_2_get_Keys_m2925762607_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.RuntimeTypeHandle,System.Object>::get_Values()
extern "C"  ValueCollection_t3611341521 * Dictionary_2_get_Values_m2835530031_gshared (Dictionary_2_t613314382 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m2835530031(__this, method) ((  ValueCollection_t3611341521 * (*) (Dictionary_2_t613314382 *, const MethodInfo*))Dictionary_2_get_Values_m2835530031_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.RuntimeTypeHandle,System.Object>::ToTKey(System.Object)
extern "C"  RuntimeTypeHandle_t2330101084  Dictionary_2_ToTKey_m29136238_gshared (Dictionary_2_t613314382 * __this, Il2CppObject * ___key0, const MethodInfo* method);
#define Dictionary_2_ToTKey_m29136238(__this, ___key0, method) ((  RuntimeTypeHandle_t2330101084  (*) (Dictionary_2_t613314382 *, Il2CppObject *, const MethodInfo*))Dictionary_2_ToTKey_m29136238_gshared)(__this, ___key0, method)
// TValue System.Collections.Generic.Dictionary`2<System.RuntimeTypeHandle,System.Object>::ToTValue(System.Object)
extern "C"  Il2CppObject * Dictionary_2_ToTValue_m1058439726_gshared (Dictionary_2_t613314382 * __this, Il2CppObject * ___value0, const MethodInfo* method);
#define Dictionary_2_ToTValue_m1058439726(__this, ___value0, method) ((  Il2CppObject * (*) (Dictionary_2_t613314382 *, Il2CppObject *, const MethodInfo*))Dictionary_2_ToTValue_m1058439726_gshared)(__this, ___value0, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.RuntimeTypeHandle,System.Object>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C"  bool Dictionary_2_ContainsKeyValuePair_m2895320808_gshared (Dictionary_2_t613314382 * __this, KeyValuePair_2_t2665626900  ___pair0, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m2895320808(__this, ___pair0, method) ((  bool (*) (Dictionary_2_t613314382 *, KeyValuePair_2_t2665626900 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m2895320808_gshared)(__this, ___pair0, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.RuntimeTypeHandle,System.Object>::GetEnumerator()
extern "C"  Enumerator_t1933339084  Dictionary_2_GetEnumerator_m2272437377_gshared (Dictionary_2_t613314382 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m2272437377(__this, method) ((  Enumerator_t1933339084  (*) (Dictionary_2_t613314382 *, const MethodInfo*))Dictionary_2_GetEnumerator_m2272437377_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.RuntimeTypeHandle,System.Object>::<CopyTo>m__0(TKey,TValue)
extern "C"  DictionaryEntry_t3048875398  Dictionary_2_U3CCopyToU3Em__0_m984508132_gshared (Il2CppObject * __this /* static, unused */, RuntimeTypeHandle_t2330101084  ___key0, Il2CppObject * ___value1, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m984508132(__this /* static, unused */, ___key0, ___value1, method) ((  DictionaryEntry_t3048875398  (*) (Il2CppObject * /* static, unused */, RuntimeTypeHandle_t2330101084 , Il2CppObject *, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m984508132_gshared)(__this /* static, unused */, ___key0, ___value1, method)
