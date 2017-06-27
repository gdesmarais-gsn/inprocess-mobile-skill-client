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

// System.Collections.Generic.Dictionary`2<System.Object,System.Byte>
struct Dictionary_2_t3275164564;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1902082073;
// System.Collections.Generic.IDictionary`2<System.Object,System.Byte>
struct IDictionary_2_t1274247985;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t228987430;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t3641524600;
// System.Collections.Generic.ICollection`1<System.Byte>
struct ICollection_1_t340212445;
// System.Collections.ICollection
struct ICollection_t91669223;
// System.Object
struct Il2CppObject;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>[]
struct KeyValuePair_2U5BU5D_t2637620223;
// System.Array
struct Il2CppArray;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>
struct IEnumerator_1_t2803000909;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t259680273;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Byte>
struct KeyCollection_t1463695039;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Byte>
struct ValueCollection_t1978224407;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_Serialization228987430.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCon1417235061.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_21032509786.h"
#include "mscorlib_System_Array3829468939.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_En300221970.h"
#include "mscorlib_System_Collections_DictionaryEntry3048875398.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::.ctor()
extern "C"  void Dictionary_2__ctor_m1360209160_gshared (Dictionary_2_t3275164564 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m1360209160(__this, method) ((  void (*) (Dictionary_2_t3275164564 *, const MethodInfo*))Dictionary_2__ctor_m1360209160_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C"  void Dictionary_2__ctor_m3187260291_gshared (Dictionary_2_t3275164564 * __this, Il2CppObject* ___comparer0, const MethodInfo* method);
#define Dictionary_2__ctor_m3187260291(__this, ___comparer0, method) ((  void (*) (Dictionary_2_t3275164564 *, Il2CppObject*, const MethodInfo*))Dictionary_2__ctor_m3187260291_gshared)(__this, ___comparer0, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C"  void Dictionary_2__ctor_m1727169298_gshared (Dictionary_2_t3275164564 * __this, Il2CppObject* ___dictionary0, const MethodInfo* method);
#define Dictionary_2__ctor_m1727169298(__this, ___dictionary0, method) ((  void (*) (Dictionary_2_t3275164564 *, Il2CppObject*, const MethodInfo*))Dictionary_2__ctor_m1727169298_gshared)(__this, ___dictionary0, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::.ctor(System.Int32)
extern "C"  void Dictionary_2__ctor_m1967763029_gshared (Dictionary_2_t3275164564 * __this, int32_t ___capacity0, const MethodInfo* method);
#define Dictionary_2__ctor_m1967763029(__this, ___capacity0, method) ((  void (*) (Dictionary_2_t3275164564 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m1967763029_gshared)(__this, ___capacity0, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C"  void Dictionary_2__ctor_m1017621605_gshared (Dictionary_2_t3275164564 * __this, Il2CppObject* ___dictionary0, Il2CppObject* ___comparer1, const MethodInfo* method);
#define Dictionary_2__ctor_m1017621605(__this, ___dictionary0, ___comparer1, method) ((  void (*) (Dictionary_2_t3275164564 *, Il2CppObject*, Il2CppObject*, const MethodInfo*))Dictionary_2__ctor_m1017621605_gshared)(__this, ___dictionary0, ___comparer1, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::.ctor(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C"  void Dictionary_2__ctor_m4280219560_gshared (Dictionary_2_t3275164564 * __this, int32_t ___capacity0, Il2CppObject* ___comparer1, const MethodInfo* method);
#define Dictionary_2__ctor_m4280219560(__this, ___capacity0, ___comparer1, method) ((  void (*) (Dictionary_2_t3275164564 *, int32_t, Il2CppObject*, const MethodInfo*))Dictionary_2__ctor_m4280219560_gshared)(__this, ___capacity0, ___comparer1, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void Dictionary_2__ctor_m3277839491_gshared (Dictionary_2_t3275164564 * __this, SerializationInfo_t228987430 * ___info0, StreamingContext_t1417235061  ___context1, const MethodInfo* method);
#define Dictionary_2__ctor_m3277839491(__this, ___info0, ___context1, method) ((  void (*) (Dictionary_2_t3275164564 *, SerializationInfo_t228987430 *, StreamingContext_t1417235061 , const MethodInfo*))Dictionary_2__ctor_m3277839491_gshared)(__this, ___info0, ___context1, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C"  Il2CppObject* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m753601726_gshared (Dictionary_2_t3275164564 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m753601726(__this, method) ((  Il2CppObject* (*) (Dictionary_2_t3275164564 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m753601726_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C"  Il2CppObject* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m2338431958_gshared (Dictionary_2_t3275164564 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m2338431958(__this, method) ((  Il2CppObject* (*) (Dictionary_2_t3275164564 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m2338431958_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.IDictionary.get_Keys()
extern "C"  Il2CppObject * Dictionary_2_System_Collections_IDictionary_get_Keys_m443941306_gshared (Dictionary_2_t3275164564 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m443941306(__this, method) ((  Il2CppObject * (*) (Dictionary_2_t3275164564 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m443941306_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.IDictionary.get_Values()
extern "C"  Il2CppObject * Dictionary_2_System_Collections_IDictionary_get_Values_m3628342460_gshared (Dictionary_2_t3275164564 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Values_m3628342460(__this, method) ((  Il2CppObject * (*) (Dictionary_2_t3275164564 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Values_m3628342460_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.IDictionary.get_IsFixedSize()
extern "C"  bool Dictionary_2_System_Collections_IDictionary_get_IsFixedSize_m2766692847_gshared (Dictionary_2_t3275164564 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_IsFixedSize_m2766692847(__this, method) ((  bool (*) (Dictionary_2_t3275164564 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_IsFixedSize_m2766692847_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.IDictionary.get_IsReadOnly()
extern "C"  bool Dictionary_2_System_Collections_IDictionary_get_IsReadOnly_m2700561192_gshared (Dictionary_2_t3275164564 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_IsReadOnly_m2700561192(__this, method) ((  bool (*) (Dictionary_2_t3275164564 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_IsReadOnly_m2700561192_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.IDictionary.get_Item(System.Object)
extern "C"  Il2CppObject * Dictionary_2_System_Collections_IDictionary_get_Item_m1437028688_gshared (Dictionary_2_t3275164564 * __this, Il2CppObject * ___key0, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m1437028688(__this, ___key0, method) ((  Il2CppObject * (*) (Dictionary_2_t3275164564 *, Il2CppObject *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m1437028688_gshared)(__this, ___key0, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C"  void Dictionary_2_System_Collections_IDictionary_set_Item_m1652558891_gshared (Dictionary_2_t3275164564 * __this, Il2CppObject * ___key0, Il2CppObject * ___value1, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m1652558891(__this, ___key0, ___value1, method) ((  void (*) (Dictionary_2_t3275164564 *, Il2CppObject *, Il2CppObject *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m1652558891_gshared)(__this, ___key0, ___value1, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C"  void Dictionary_2_System_Collections_IDictionary_Add_m2947341434_gshared (Dictionary_2_t3275164564 * __this, Il2CppObject * ___key0, Il2CppObject * ___value1, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m2947341434(__this, ___key0, ___value1, method) ((  void (*) (Dictionary_2_t3275164564 *, Il2CppObject *, Il2CppObject *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m2947341434_gshared)(__this, ___key0, ___value1, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.IDictionary.Contains(System.Object)
extern "C"  bool Dictionary_2_System_Collections_IDictionary_Contains_m1321205594_gshared (Dictionary_2_t3275164564 * __this, Il2CppObject * ___key0, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m1321205594(__this, ___key0, method) ((  bool (*) (Dictionary_2_t3275164564 *, Il2CppObject *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m1321205594_gshared)(__this, ___key0, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.IDictionary.Remove(System.Object)
extern "C"  void Dictionary_2_System_Collections_IDictionary_Remove_m1624644679_gshared (Dictionary_2_t3275164564 * __this, Il2CppObject * ___key0, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m1624644679(__this, ___key0, method) ((  void (*) (Dictionary_2_t3275164564 *, Il2CppObject *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m1624644679_gshared)(__this, ___key0, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.ICollection.get_IsSynchronized()
extern "C"  bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m2500584736_gshared (Dictionary_2_t3275164564 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m2500584736(__this, method) ((  bool (*) (Dictionary_2_t3275164564 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m2500584736_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.ICollection.get_SyncRoot()
extern "C"  Il2CppObject * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m404084464_gshared (Dictionary_2_t3275164564 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m404084464(__this, method) ((  Il2CppObject * (*) (Dictionary_2_t3275164564 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m404084464_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C"  bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m2403724658_gshared (Dictionary_2_t3275164564 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m2403724658(__this, method) ((  bool (*) (Dictionary_2_t3275164564 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m2403724658_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C"  void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m3302413211_gshared (Dictionary_2_t3275164564 * __this, KeyValuePair_2_t1032509786  ___keyValuePair0, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m3302413211(__this, ___keyValuePair0, method) ((  void (*) (Dictionary_2_t3275164564 *, KeyValuePair_2_t1032509786 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m3302413211_gshared)(__this, ___keyValuePair0, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C"  bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m351083753_gshared (Dictionary_2_t3275164564 * __this, KeyValuePair_2_t1032509786  ___keyValuePair0, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m351083753(__this, ___keyValuePair0, method) ((  bool (*) (Dictionary_2_t3275164564 *, KeyValuePair_2_t1032509786 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m351083753_gshared)(__this, ___keyValuePair0, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C"  void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m3413278591_gshared (Dictionary_2_t3275164564 * __this, KeyValuePair_2U5BU5D_t2637620223* ___array0, int32_t ___index1, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m3413278591(__this, ___array0, ___index1, method) ((  void (*) (Dictionary_2_t3275164564 *, KeyValuePair_2U5BU5D_t2637620223*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m3413278591_gshared)(__this, ___array0, ___index1, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C"  bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m637589180_gshared (Dictionary_2_t3275164564 * __this, KeyValuePair_2_t1032509786  ___keyValuePair0, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m637589180(__this, ___keyValuePair0, method) ((  bool (*) (Dictionary_2_t3275164564 *, KeyValuePair_2_t1032509786 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m637589180_gshared)(__this, ___keyValuePair0, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C"  void Dictionary_2_System_Collections_ICollection_CopyTo_m185751792_gshared (Dictionary_2_t3275164564 * __this, Il2CppArray * ___array0, int32_t ___index1, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m185751792(__this, ___array0, ___index1, method) ((  void (*) (Dictionary_2_t3275164564 *, Il2CppArray *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m185751792_gshared)(__this, ___array0, ___index1, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Il2CppObject * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m2391679197_gshared (Dictionary_2_t3275164564 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m2391679197(__this, method) ((  Il2CppObject * (*) (Dictionary_2_t3275164564 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m2391679197_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C"  Il2CppObject* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m2638957866_gshared (Dictionary_2_t3275164564 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m2638957866(__this, method) ((  Il2CppObject* (*) (Dictionary_2_t3275164564 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m2638957866_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.IDictionary.GetEnumerator()
extern "C"  Il2CppObject * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m712208287_gshared (Dictionary_2_t3275164564 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m712208287(__this, method) ((  Il2CppObject * (*) (Dictionary_2_t3275164564 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m712208287_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::get_Count()
extern "C"  int32_t Dictionary_2_get_Count_m3732804960_gshared (Dictionary_2_t3275164564 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m3732804960(__this, method) ((  int32_t (*) (Dictionary_2_t3275164564 *, const MethodInfo*))Dictionary_2_get_Count_m3732804960_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::get_Item(TKey)
extern "C"  uint8_t Dictionary_2_get_Item_m3260955047_gshared (Dictionary_2_t3275164564 * __this, Il2CppObject * ___key0, const MethodInfo* method);
#define Dictionary_2_get_Item_m3260955047(__this, ___key0, method) ((  uint8_t (*) (Dictionary_2_t3275164564 *, Il2CppObject *, const MethodInfo*))Dictionary_2_get_Item_m3260955047_gshared)(__this, ___key0, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::set_Item(TKey,TValue)
extern "C"  void Dictionary_2_set_Item_m2645265034_gshared (Dictionary_2_t3275164564 * __this, Il2CppObject * ___key0, uint8_t ___value1, const MethodInfo* method);
#define Dictionary_2_set_Item_m2645265034(__this, ___key0, ___value1, method) ((  void (*) (Dictionary_2_t3275164564 *, Il2CppObject *, uint8_t, const MethodInfo*))Dictionary_2_set_Item_m2645265034_gshared)(__this, ___key0, ___value1, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C"  void Dictionary_2_Init_m2022508444_gshared (Dictionary_2_t3275164564 * __this, int32_t ___capacity0, Il2CppObject* ___hcp1, const MethodInfo* method);
#define Dictionary_2_Init_m2022508444(__this, ___capacity0, ___hcp1, method) ((  void (*) (Dictionary_2_t3275164564 *, int32_t, Il2CppObject*, const MethodInfo*))Dictionary_2_Init_m2022508444_gshared)(__this, ___capacity0, ___hcp1, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::InitArrays(System.Int32)
extern "C"  void Dictionary_2_InitArrays_m2750662621_gshared (Dictionary_2_t3275164564 * __this, int32_t ___size0, const MethodInfo* method);
#define Dictionary_2_InitArrays_m2750662621(__this, ___size0, method) ((  void (*) (Dictionary_2_t3275164564 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m2750662621_gshared)(__this, ___size0, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::CopyToCheck(System.Array,System.Int32)
extern "C"  void Dictionary_2_CopyToCheck_m2668380943_gshared (Dictionary_2_t3275164564 * __this, Il2CppArray * ___array0, int32_t ___index1, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m2668380943(__this, ___array0, ___index1, method) ((  void (*) (Dictionary_2_t3275164564 *, Il2CppArray *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m2668380943_gshared)(__this, ___array0, ___index1, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::make_pair(TKey,TValue)
extern "C"  KeyValuePair_2_t1032509786  Dictionary_2_make_pair_m2675442365_gshared (Il2CppObject * __this /* static, unused */, Il2CppObject * ___key0, uint8_t ___value1, const MethodInfo* method);
#define Dictionary_2_make_pair_m2675442365(__this /* static, unused */, ___key0, ___value1, method) ((  KeyValuePair_2_t1032509786  (*) (Il2CppObject * /* static, unused */, Il2CppObject *, uint8_t, const MethodInfo*))Dictionary_2_make_pair_m2675442365_gshared)(__this /* static, unused */, ___key0, ___value1, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::pick_key(TKey,TValue)
extern "C"  Il2CppObject * Dictionary_2_pick_key_m2989196413_gshared (Il2CppObject * __this /* static, unused */, Il2CppObject * ___key0, uint8_t ___value1, const MethodInfo* method);
#define Dictionary_2_pick_key_m2989196413(__this /* static, unused */, ___key0, ___value1, method) ((  Il2CppObject * (*) (Il2CppObject * /* static, unused */, Il2CppObject *, uint8_t, const MethodInfo*))Dictionary_2_pick_key_m2989196413_gshared)(__this /* static, unused */, ___key0, ___value1, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::pick_value(TKey,TValue)
extern "C"  uint8_t Dictionary_2_pick_value_m3255677421_gshared (Il2CppObject * __this /* static, unused */, Il2CppObject * ___key0, uint8_t ___value1, const MethodInfo* method);
#define Dictionary_2_pick_value_m3255677421(__this /* static, unused */, ___key0, ___value1, method) ((  uint8_t (*) (Il2CppObject * /* static, unused */, Il2CppObject *, uint8_t, const MethodInfo*))Dictionary_2_pick_value_m3255677421_gshared)(__this /* static, unused */, ___key0, ___value1, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C"  void Dictionary_2_CopyTo_m730380142_gshared (Dictionary_2_t3275164564 * __this, KeyValuePair_2U5BU5D_t2637620223* ___array0, int32_t ___index1, const MethodInfo* method);
#define Dictionary_2_CopyTo_m730380142(__this, ___array0, ___index1, method) ((  void (*) (Dictionary_2_t3275164564 *, KeyValuePair_2U5BU5D_t2637620223*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m730380142_gshared)(__this, ___array0, ___index1, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::Resize()
extern "C"  void Dictionary_2_Resize_m1524268114_gshared (Dictionary_2_t3275164564 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m1524268114(__this, method) ((  void (*) (Dictionary_2_t3275164564 *, const MethodInfo*))Dictionary_2_Resize_m1524268114_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::Add(TKey,TValue)
extern "C"  void Dictionary_2_Add_m2021912729_gshared (Dictionary_2_t3275164564 * __this, Il2CppObject * ___key0, uint8_t ___value1, const MethodInfo* method);
#define Dictionary_2_Add_m2021912729(__this, ___key0, ___value1, method) ((  void (*) (Dictionary_2_t3275164564 *, Il2CppObject *, uint8_t, const MethodInfo*))Dictionary_2_Add_m2021912729_gshared)(__this, ___key0, ___value1, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::Clear()
extern "C"  void Dictionary_2_Clear_m3680520141_gshared (Dictionary_2_t3275164564 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m3680520141(__this, method) ((  void (*) (Dictionary_2_t3275164564 *, const MethodInfo*))Dictionary_2_Clear_m3680520141_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::ContainsKey(TKey)
extern "C"  bool Dictionary_2_ContainsKey_m2942816063_gshared (Dictionary_2_t3275164564 * __this, Il2CppObject * ___key0, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m2942816063(__this, ___key0, method) ((  bool (*) (Dictionary_2_t3275164564 *, Il2CppObject *, const MethodInfo*))Dictionary_2_ContainsKey_m2942816063_gshared)(__this, ___key0, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::ContainsValue(TValue)
extern "C"  bool Dictionary_2_ContainsValue_m3185509359_gshared (Dictionary_2_t3275164564 * __this, uint8_t ___value0, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m3185509359(__this, ___value0, method) ((  bool (*) (Dictionary_2_t3275164564 *, uint8_t, const MethodInfo*))Dictionary_2_ContainsValue_m3185509359_gshared)(__this, ___value0, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void Dictionary_2_GetObjectData_m1648906052_gshared (Dictionary_2_t3275164564 * __this, SerializationInfo_t228987430 * ___info0, StreamingContext_t1417235061  ___context1, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m1648906052(__this, ___info0, ___context1, method) ((  void (*) (Dictionary_2_t3275164564 *, SerializationInfo_t228987430 *, StreamingContext_t1417235061 , const MethodInfo*))Dictionary_2_GetObjectData_m1648906052_gshared)(__this, ___info0, ___context1, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::OnDeserialization(System.Object)
extern "C"  void Dictionary_2_OnDeserialization_m2098858762_gshared (Dictionary_2_t3275164564 * __this, Il2CppObject * ___sender0, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m2098858762(__this, ___sender0, method) ((  void (*) (Dictionary_2_t3275164564 *, Il2CppObject *, const MethodInfo*))Dictionary_2_OnDeserialization_m2098858762_gshared)(__this, ___sender0, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::Remove(TKey)
extern "C"  bool Dictionary_2_Remove_m550603505_gshared (Dictionary_2_t3275164564 * __this, Il2CppObject * ___key0, const MethodInfo* method);
#define Dictionary_2_Remove_m550603505(__this, ___key0, method) ((  bool (*) (Dictionary_2_t3275164564 *, Il2CppObject *, const MethodInfo*))Dictionary_2_Remove_m550603505_gshared)(__this, ___key0, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::TryGetValue(TKey,TValue&)
extern "C"  bool Dictionary_2_TryGetValue_m3519663934_gshared (Dictionary_2_t3275164564 * __this, Il2CppObject * ___key0, uint8_t* ___value1, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m3519663934(__this, ___key0, ___value1, method) ((  bool (*) (Dictionary_2_t3275164564 *, Il2CppObject *, uint8_t*, const MethodInfo*))Dictionary_2_TryGetValue_m3519663934_gshared)(__this, ___key0, ___value1, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::get_Keys()
extern "C"  KeyCollection_t1463695039 * Dictionary_2_get_Keys_m3388299707_gshared (Dictionary_2_t3275164564 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m3388299707(__this, method) ((  KeyCollection_t1463695039 * (*) (Dictionary_2_t3275164564 *, const MethodInfo*))Dictionary_2_get_Keys_m3388299707_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::get_Values()
extern "C"  ValueCollection_t1978224407 * Dictionary_2_get_Values_m1357340819_gshared (Dictionary_2_t3275164564 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m1357340819(__this, method) ((  ValueCollection_t1978224407 * (*) (Dictionary_2_t3275164564 *, const MethodInfo*))Dictionary_2_get_Values_m1357340819_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::ToTKey(System.Object)
extern "C"  Il2CppObject * Dictionary_2_ToTKey_m3742740728_gshared (Dictionary_2_t3275164564 * __this, Il2CppObject * ___key0, const MethodInfo* method);
#define Dictionary_2_ToTKey_m3742740728(__this, ___key0, method) ((  Il2CppObject * (*) (Dictionary_2_t3275164564 *, Il2CppObject *, const MethodInfo*))Dictionary_2_ToTKey_m3742740728_gshared)(__this, ___key0, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::ToTValue(System.Object)
extern "C"  uint8_t Dictionary_2_ToTValue_m3285789232_gshared (Dictionary_2_t3275164564 * __this, Il2CppObject * ___value0, const MethodInfo* method);
#define Dictionary_2_ToTValue_m3285789232(__this, ___value0, method) ((  uint8_t (*) (Dictionary_2_t3275164564 *, Il2CppObject *, const MethodInfo*))Dictionary_2_ToTValue_m3285789232_gshared)(__this, ___value0, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C"  bool Dictionary_2_ContainsKeyValuePair_m358409766_gshared (Dictionary_2_t3275164564 * __this, KeyValuePair_2_t1032509786  ___pair0, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m358409766(__this, ___pair0, method) ((  bool (*) (Dictionary_2_t3275164564 *, KeyValuePair_2_t1032509786 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m358409766_gshared)(__this, ___pair0, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::GetEnumerator()
extern "C"  Enumerator_t300221970  Dictionary_2_GetEnumerator_m1409804545_gshared (Dictionary_2_t3275164564 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m1409804545(__this, method) ((  Enumerator_t300221970  (*) (Dictionary_2_t3275164564 *, const MethodInfo*))Dictionary_2_GetEnumerator_m1409804545_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::<CopyTo>m__0(TKey,TValue)
extern "C"  DictionaryEntry_t3048875398  Dictionary_2_U3CCopyToU3Em__0_m2110567640_gshared (Il2CppObject * __this /* static, unused */, Il2CppObject * ___key0, uint8_t ___value1, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m2110567640(__this /* static, unused */, ___key0, ___value1, method) ((  DictionaryEntry_t3048875398  (*) (Il2CppObject * /* static, unused */, Il2CppObject *, uint8_t, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m2110567640_gshared)(__this /* static, unused */, ___key0, ___value1, method)
