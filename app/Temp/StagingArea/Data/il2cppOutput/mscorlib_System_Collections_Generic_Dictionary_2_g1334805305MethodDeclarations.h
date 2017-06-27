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

// System.Collections.Generic.Dictionary`2<System.Object,Newtonsoft.Json.Schema.JsonSchemaType>
struct Dictionary_2_t1334805305;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1902082073;
// System.Collections.Generic.IDictionary`2<System.Object,Newtonsoft.Json.Schema.JsonSchemaType>
struct IDictionary_2_t3628856022;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t228987430;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t3641524600;
// System.Collections.Generic.ICollection`1<Newtonsoft.Json.Schema.JsonSchemaType>
struct ICollection_1_t2694820482;
// System.Collections.ICollection
struct ICollection_t91669223;
// System.Object
struct Il2CppObject;
// System.Collections.Generic.KeyValuePair`2<System.Object,Newtonsoft.Json.Schema.JsonSchemaType>[]
struct KeyValuePair_2U5BU5D_t2344462374;
// System.Array
struct Il2CppArray;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,Newtonsoft.Json.Schema.JsonSchemaType>>
struct IEnumerator_1_t862641650;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t259680273;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,Newtonsoft.Json.Schema.JsonSchemaType>
struct KeyCollection_t3818303076;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,Newtonsoft.Json.Schema.JsonSchemaType>
struct ValueCollection_t37865148;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_Serialization228987430.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCon1417235061.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_23387117823.h"
#include "mscorlib_System_Array3829468939.h"
#include "Json_NET_Newtonsoft_Json_Schema_JsonSchemaType1742745177.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_E2654830007.h"
#include "mscorlib_System_Collections_DictionaryEntry3048875398.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,Newtonsoft.Json.Schema.JsonSchemaType>::.ctor()
extern "C"  void Dictionary_2__ctor_m2836016318_gshared (Dictionary_2_t1334805305 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m2836016318(__this, method) ((  void (*) (Dictionary_2_t1334805305 *, const MethodInfo*))Dictionary_2__ctor_m2836016318_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Newtonsoft.Json.Schema.JsonSchemaType>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C"  void Dictionary_2__ctor_m1886025631_gshared (Dictionary_2_t1334805305 * __this, Il2CppObject* ___comparer0, const MethodInfo* method);
#define Dictionary_2__ctor_m1886025631(__this, ___comparer0, method) ((  void (*) (Dictionary_2_t1334805305 *, Il2CppObject*, const MethodInfo*))Dictionary_2__ctor_m1886025631_gshared)(__this, ___comparer0, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Newtonsoft.Json.Schema.JsonSchemaType>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C"  void Dictionary_2__ctor_m316258200_gshared (Dictionary_2_t1334805305 * __this, Il2CppObject* ___dictionary0, const MethodInfo* method);
#define Dictionary_2__ctor_m316258200(__this, ___dictionary0, method) ((  void (*) (Dictionary_2_t1334805305 *, Il2CppObject*, const MethodInfo*))Dictionary_2__ctor_m316258200_gshared)(__this, ___dictionary0, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Newtonsoft.Json.Schema.JsonSchemaType>::.ctor(System.Int32)
extern "C"  void Dictionary_2__ctor_m553319225_gshared (Dictionary_2_t1334805305 * __this, int32_t ___capacity0, const MethodInfo* method);
#define Dictionary_2__ctor_m553319225(__this, ___capacity0, method) ((  void (*) (Dictionary_2_t1334805305 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m553319225_gshared)(__this, ___capacity0, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Newtonsoft.Json.Schema.JsonSchemaType>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C"  void Dictionary_2__ctor_m1679806537_gshared (Dictionary_2_t1334805305 * __this, Il2CppObject* ___dictionary0, Il2CppObject* ___comparer1, const MethodInfo* method);
#define Dictionary_2__ctor_m1679806537(__this, ___dictionary0, ___comparer1, method) ((  void (*) (Dictionary_2_t1334805305 *, Il2CppObject*, Il2CppObject*, const MethodInfo*))Dictionary_2__ctor_m1679806537_gshared)(__this, ___dictionary0, ___comparer1, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Newtonsoft.Json.Schema.JsonSchemaType>::.ctor(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C"  void Dictionary_2__ctor_m2632888642_gshared (Dictionary_2_t1334805305 * __this, int32_t ___capacity0, Il2CppObject* ___comparer1, const MethodInfo* method);
#define Dictionary_2__ctor_m2632888642(__this, ___capacity0, ___comparer1, method) ((  void (*) (Dictionary_2_t1334805305 *, int32_t, Il2CppObject*, const MethodInfo*))Dictionary_2__ctor_m2632888642_gshared)(__this, ___capacity0, ___comparer1, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Newtonsoft.Json.Schema.JsonSchemaType>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void Dictionary_2__ctor_m3470823591_gshared (Dictionary_2_t1334805305 * __this, SerializationInfo_t228987430 * ___info0, StreamingContext_t1417235061  ___context1, const MethodInfo* method);
#define Dictionary_2__ctor_m3470823591(__this, ___info0, ___context1, method) ((  void (*) (Dictionary_2_t1334805305 *, SerializationInfo_t228987430 *, StreamingContext_t1417235061 , const MethodInfo*))Dictionary_2__ctor_m3470823591_gshared)(__this, ___info0, ___context1, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Object,Newtonsoft.Json.Schema.JsonSchemaType>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C"  Il2CppObject* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m2784388552_gshared (Dictionary_2_t1334805305 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m2784388552(__this, method) ((  Il2CppObject* (*) (Dictionary_2_t1334805305 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m2784388552_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Object,Newtonsoft.Json.Schema.JsonSchemaType>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C"  Il2CppObject* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m2859450176_gshared (Dictionary_2_t1334805305 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m2859450176(__this, method) ((  Il2CppObject* (*) (Dictionary_2_t1334805305 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m2859450176_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Object,Newtonsoft.Json.Schema.JsonSchemaType>::System.Collections.IDictionary.get_Keys()
extern "C"  Il2CppObject * Dictionary_2_System_Collections_IDictionary_get_Keys_m3611003760_gshared (Dictionary_2_t1334805305 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m3611003760(__this, method) ((  Il2CppObject * (*) (Dictionary_2_t1334805305 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m3611003760_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Object,Newtonsoft.Json.Schema.JsonSchemaType>::System.Collections.IDictionary.get_Values()
extern "C"  Il2CppObject * Dictionary_2_System_Collections_IDictionary_get_Values_m1160993878_gshared (Dictionary_2_t1334805305 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Values_m1160993878(__this, method) ((  Il2CppObject * (*) (Dictionary_2_t1334805305 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Values_m1160993878_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,Newtonsoft.Json.Schema.JsonSchemaType>::System.Collections.IDictionary.get_IsFixedSize()
extern "C"  bool Dictionary_2_System_Collections_IDictionary_get_IsFixedSize_m3256011059_gshared (Dictionary_2_t1334805305 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_IsFixedSize_m3256011059(__this, method) ((  bool (*) (Dictionary_2_t1334805305 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_IsFixedSize_m3256011059_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,Newtonsoft.Json.Schema.JsonSchemaType>::System.Collections.IDictionary.get_IsReadOnly()
extern "C"  bool Dictionary_2_System_Collections_IDictionary_get_IsReadOnly_m3135632802_gshared (Dictionary_2_t1334805305 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_IsReadOnly_m3135632802(__this, method) ((  bool (*) (Dictionary_2_t1334805305 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_IsReadOnly_m3135632802_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,Newtonsoft.Json.Schema.JsonSchemaType>::System.Collections.IDictionary.get_Item(System.Object)
extern "C"  Il2CppObject * Dictionary_2_System_Collections_IDictionary_get_Item_m470283286_gshared (Dictionary_2_t1334805305 * __this, Il2CppObject * ___key0, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m470283286(__this, ___key0, method) ((  Il2CppObject * (*) (Dictionary_2_t1334805305 *, Il2CppObject *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m470283286_gshared)(__this, ___key0, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Newtonsoft.Json.Schema.JsonSchemaType>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C"  void Dictionary_2_System_Collections_IDictionary_set_Item_m952915023_gshared (Dictionary_2_t1334805305 * __this, Il2CppObject * ___key0, Il2CppObject * ___value1, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m952915023(__this, ___key0, ___value1, method) ((  void (*) (Dictionary_2_t1334805305 *, Il2CppObject *, Il2CppObject *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m952915023_gshared)(__this, ___key0, ___value1, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Newtonsoft.Json.Schema.JsonSchemaType>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C"  void Dictionary_2_System_Collections_IDictionary_Add_m4025116688_gshared (Dictionary_2_t1334805305 * __this, Il2CppObject * ___key0, Il2CppObject * ___value1, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m4025116688(__this, ___key0, ___value1, method) ((  void (*) (Dictionary_2_t1334805305 *, Il2CppObject *, Il2CppObject *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m4025116688_gshared)(__this, ___key0, ___value1, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,Newtonsoft.Json.Schema.JsonSchemaType>::System.Collections.IDictionary.Contains(System.Object)
extern "C"  bool Dictionary_2_System_Collections_IDictionary_Contains_m4243953040_gshared (Dictionary_2_t1334805305 * __this, Il2CppObject * ___key0, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m4243953040(__this, ___key0, method) ((  bool (*) (Dictionary_2_t1334805305 *, Il2CppObject *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m4243953040_gshared)(__this, ___key0, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Newtonsoft.Json.Schema.JsonSchemaType>::System.Collections.IDictionary.Remove(System.Object)
extern "C"  void Dictionary_2_System_Collections_IDictionary_Remove_m2364651291_gshared (Dictionary_2_t1334805305 * __this, Il2CppObject * ___key0, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m2364651291(__this, ___key0, method) ((  void (*) (Dictionary_2_t1334805305 *, Il2CppObject *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m2364651291_gshared)(__this, ___key0, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,Newtonsoft.Json.Schema.JsonSchemaType>::System.Collections.ICollection.get_IsSynchronized()
extern "C"  bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m407061894_gshared (Dictionary_2_t1334805305 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m407061894(__this, method) ((  bool (*) (Dictionary_2_t1334805305 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m407061894_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,Newtonsoft.Json.Schema.JsonSchemaType>::System.Collections.ICollection.get_SyncRoot()
extern "C"  Il2CppObject * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m3190773558_gshared (Dictionary_2_t1334805305 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m3190773558(__this, method) ((  Il2CppObject * (*) (Dictionary_2_t1334805305 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m3190773558_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,Newtonsoft.Json.Schema.JsonSchemaType>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C"  bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m372383048_gshared (Dictionary_2_t1334805305 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m372383048(__this, method) ((  bool (*) (Dictionary_2_t1334805305 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m372383048_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Newtonsoft.Json.Schema.JsonSchemaType>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C"  void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m2516271191_gshared (Dictionary_2_t1334805305 * __this, KeyValuePair_2_t3387117823  ___keyValuePair0, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m2516271191(__this, ___keyValuePair0, method) ((  void (*) (Dictionary_2_t1334805305 *, KeyValuePair_2_t3387117823 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m2516271191_gshared)(__this, ___keyValuePair0, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,Newtonsoft.Json.Schema.JsonSchemaType>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C"  bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m120964101_gshared (Dictionary_2_t1334805305 * __this, KeyValuePair_2_t3387117823  ___keyValuePair0, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m120964101(__this, ___keyValuePair0, method) ((  bool (*) (Dictionary_2_t1334805305 *, KeyValuePair_2_t3387117823 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m120964101_gshared)(__this, ___keyValuePair0, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Newtonsoft.Json.Schema.JsonSchemaType>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C"  void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m3992195595_gshared (Dictionary_2_t1334805305 * __this, KeyValuePair_2U5BU5D_t2344462374* ___array0, int32_t ___index1, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m3992195595(__this, ___array0, ___index1, method) ((  void (*) (Dictionary_2_t1334805305 *, KeyValuePair_2U5BU5D_t2344462374*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m3992195595_gshared)(__this, ___array0, ___index1, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,Newtonsoft.Json.Schema.JsonSchemaType>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C"  bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m3493717890_gshared (Dictionary_2_t1334805305 * __this, KeyValuePair_2_t3387117823  ___keyValuePair0, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m3493717890(__this, ___keyValuePair0, method) ((  bool (*) (Dictionary_2_t1334805305 *, KeyValuePair_2_t3387117823 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m3493717890_gshared)(__this, ___keyValuePair0, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Newtonsoft.Json.Schema.JsonSchemaType>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C"  void Dictionary_2_System_Collections_ICollection_CopyTo_m211818838_gshared (Dictionary_2_t1334805305 * __this, Il2CppArray * ___array0, int32_t ___index1, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m211818838(__this, ___array0, ___index1, method) ((  void (*) (Dictionary_2_t1334805305 *, Il2CppArray *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m211818838_gshared)(__this, ___array0, ___index1, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,Newtonsoft.Json.Schema.JsonSchemaType>::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Il2CppObject * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m2575233185_gshared (Dictionary_2_t1334805305 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m2575233185(__this, method) ((  Il2CppObject * (*) (Dictionary_2_t1334805305 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m2575233185_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,Newtonsoft.Json.Schema.JsonSchemaType>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C"  Il2CppObject* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m998185808_gshared (Dictionary_2_t1334805305 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m998185808(__this, method) ((  Il2CppObject* (*) (Dictionary_2_t1334805305 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m998185808_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,Newtonsoft.Json.Schema.JsonSchemaType>::System.Collections.IDictionary.GetEnumerator()
extern "C"  Il2CppObject * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m3782673907_gshared (Dictionary_2_t1334805305 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m3782673907(__this, method) ((  Il2CppObject * (*) (Dictionary_2_t1334805305 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m3782673907_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,Newtonsoft.Json.Schema.JsonSchemaType>::get_Count()
extern "C"  int32_t Dictionary_2_get_Count_m2651810726_gshared (Dictionary_2_t1334805305 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m2651810726(__this, method) ((  int32_t (*) (Dictionary_2_t1334805305 *, const MethodInfo*))Dictionary_2_get_Count_m2651810726_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,Newtonsoft.Json.Schema.JsonSchemaType>::get_Item(TKey)
extern "C"  int32_t Dictionary_2_get_Item_m3264376043_gshared (Dictionary_2_t1334805305 * __this, Il2CppObject * ___key0, const MethodInfo* method);
#define Dictionary_2_get_Item_m3264376043(__this, ___key0, method) ((  int32_t (*) (Dictionary_2_t1334805305 *, Il2CppObject *, const MethodInfo*))Dictionary_2_get_Item_m3264376043_gshared)(__this, ___key0, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Newtonsoft.Json.Schema.JsonSchemaType>::set_Item(TKey,TValue)
extern "C"  void Dictionary_2_set_Item_m2024412100_gshared (Dictionary_2_t1334805305 * __this, Il2CppObject * ___key0, int32_t ___value1, const MethodInfo* method);
#define Dictionary_2_set_Item_m2024412100(__this, ___key0, ___value1, method) ((  void (*) (Dictionary_2_t1334805305 *, Il2CppObject *, int32_t, const MethodInfo*))Dictionary_2_set_Item_m2024412100_gshared)(__this, ___key0, ___value1, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Newtonsoft.Json.Schema.JsonSchemaType>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C"  void Dictionary_2_Init_m1989482002_gshared (Dictionary_2_t1334805305 * __this, int32_t ___capacity0, Il2CppObject* ___hcp1, const MethodInfo* method);
#define Dictionary_2_Init_m1989482002(__this, ___capacity0, ___hcp1, method) ((  void (*) (Dictionary_2_t1334805305 *, int32_t, Il2CppObject*, const MethodInfo*))Dictionary_2_Init_m1989482002_gshared)(__this, ___capacity0, ___hcp1, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Newtonsoft.Json.Schema.JsonSchemaType>::InitArrays(System.Int32)
extern "C"  void Dictionary_2_InitArrays_m2404839201_gshared (Dictionary_2_t1334805305 * __this, int32_t ___size0, const MethodInfo* method);
#define Dictionary_2_InitArrays_m2404839201(__this, ___size0, method) ((  void (*) (Dictionary_2_t1334805305 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m2404839201_gshared)(__this, ___size0, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Newtonsoft.Json.Schema.JsonSchemaType>::CopyToCheck(System.Array,System.Int32)
extern "C"  void Dictionary_2_CopyToCheck_m2383218387_gshared (Dictionary_2_t1334805305 * __this, Il2CppArray * ___array0, int32_t ___index1, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m2383218387(__this, ___array0, ___index1, method) ((  void (*) (Dictionary_2_t1334805305 *, Il2CppArray *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m2383218387_gshared)(__this, ___array0, ___index1, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,Newtonsoft.Json.Schema.JsonSchemaType>::make_pair(TKey,TValue)
extern "C"  KeyValuePair_2_t3387117823  Dictionary_2_make_pair_m2824014537_gshared (Il2CppObject * __this /* static, unused */, Il2CppObject * ___key0, int32_t ___value1, const MethodInfo* method);
#define Dictionary_2_make_pair_m2824014537(__this /* static, unused */, ___key0, ___value1, method) ((  KeyValuePair_2_t3387117823  (*) (Il2CppObject * /* static, unused */, Il2CppObject *, int32_t, const MethodInfo*))Dictionary_2_make_pair_m2824014537_gshared)(__this /* static, unused */, ___key0, ___value1, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,Newtonsoft.Json.Schema.JsonSchemaType>::pick_key(TKey,TValue)
extern "C"  Il2CppObject * Dictionary_2_pick_key_m1703565137_gshared (Il2CppObject * __this /* static, unused */, Il2CppObject * ___key0, int32_t ___value1, const MethodInfo* method);
#define Dictionary_2_pick_key_m1703565137(__this /* static, unused */, ___key0, ___value1, method) ((  Il2CppObject * (*) (Il2CppObject * /* static, unused */, Il2CppObject *, int32_t, const MethodInfo*))Dictionary_2_pick_key_m1703565137_gshared)(__this /* static, unused */, ___key0, ___value1, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,Newtonsoft.Json.Schema.JsonSchemaType>::pick_value(TKey,TValue)
extern "C"  int32_t Dictionary_2_pick_value_m1820997985_gshared (Il2CppObject * __this /* static, unused */, Il2CppObject * ___key0, int32_t ___value1, const MethodInfo* method);
#define Dictionary_2_pick_value_m1820997985(__this /* static, unused */, ___key0, ___value1, method) ((  int32_t (*) (Il2CppObject * /* static, unused */, Il2CppObject *, int32_t, const MethodInfo*))Dictionary_2_pick_value_m1820997985_gshared)(__this /* static, unused */, ___key0, ___value1, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Newtonsoft.Json.Schema.JsonSchemaType>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C"  void Dictionary_2_CopyTo_m3539403768_gshared (Dictionary_2_t1334805305 * __this, KeyValuePair_2U5BU5D_t2344462374* ___array0, int32_t ___index1, const MethodInfo* method);
#define Dictionary_2_CopyTo_m3539403768(__this, ___array0, ___index1, method) ((  void (*) (Dictionary_2_t1334805305 *, KeyValuePair_2U5BU5D_t2344462374*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m3539403768_gshared)(__this, ___array0, ___index1, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Newtonsoft.Json.Schema.JsonSchemaType>::Resize()
extern "C"  void Dictionary_2_Resize_m3513975816_gshared (Dictionary_2_t1334805305 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m3513975816(__this, method) ((  void (*) (Dictionary_2_t1334805305 *, const MethodInfo*))Dictionary_2_Resize_m3513975816_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Newtonsoft.Json.Schema.JsonSchemaType>::Add(TKey,TValue)
extern "C"  void Dictionary_2_Add_m1354283437_gshared (Dictionary_2_t1334805305 * __this, Il2CppObject * ___key0, int32_t ___value1, const MethodInfo* method);
#define Dictionary_2_Add_m1354283437(__this, ___key0, ___value1, method) ((  void (*) (Dictionary_2_t1334805305 *, Il2CppObject *, int32_t, const MethodInfo*))Dictionary_2_Add_m1354283437_gshared)(__this, ___key0, ___value1, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Newtonsoft.Json.Schema.JsonSchemaType>::Clear()
extern "C"  void Dictionary_2_Clear_m443406673_gshared (Dictionary_2_t1334805305 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m443406673(__this, method) ((  void (*) (Dictionary_2_t1334805305 *, const MethodInfo*))Dictionary_2_Clear_m443406673_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,Newtonsoft.Json.Schema.JsonSchemaType>::ContainsKey(TKey)
extern "C"  bool Dictionary_2_ContainsKey_m2393545939_gshared (Dictionary_2_t1334805305 * __this, Il2CppObject * ___key0, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m2393545939(__this, ___key0, method) ((  bool (*) (Dictionary_2_t1334805305 *, Il2CppObject *, const MethodInfo*))Dictionary_2_ContainsKey_m2393545939_gshared)(__this, ___key0, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,Newtonsoft.Json.Schema.JsonSchemaType>::ContainsValue(TValue)
extern "C"  bool Dictionary_2_ContainsValue_m3846688547_gshared (Dictionary_2_t1334805305 * __this, int32_t ___value0, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m3846688547(__this, ___value0, method) ((  bool (*) (Dictionary_2_t1334805305 *, int32_t, const MethodInfo*))Dictionary_2_ContainsValue_m3846688547_gshared)(__this, ___value0, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Newtonsoft.Json.Schema.JsonSchemaType>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void Dictionary_2_GetObjectData_m3862838986_gshared (Dictionary_2_t1334805305 * __this, SerializationInfo_t228987430 * ___info0, StreamingContext_t1417235061  ___context1, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m3862838986(__this, ___info0, ___context1, method) ((  void (*) (Dictionary_2_t1334805305 *, SerializationInfo_t228987430 *, StreamingContext_t1417235061 , const MethodInfo*))Dictionary_2_GetObjectData_m3862838986_gshared)(__this, ___info0, ___context1, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Newtonsoft.Json.Schema.JsonSchemaType>::OnDeserialization(System.Object)
extern "C"  void Dictionary_2_OnDeserialization_m3822893684_gshared (Dictionary_2_t1334805305 * __this, Il2CppObject * ___sender0, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m3822893684(__this, ___sender0, method) ((  void (*) (Dictionary_2_t1334805305 *, Il2CppObject *, const MethodInfo*))Dictionary_2_OnDeserialization_m3822893684_gshared)(__this, ___sender0, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,Newtonsoft.Json.Schema.JsonSchemaType>::Remove(TKey)
extern "C"  bool Dictionary_2_Remove_m3154834493_gshared (Dictionary_2_t1334805305 * __this, Il2CppObject * ___key0, const MethodInfo* method);
#define Dictionary_2_Remove_m3154834493(__this, ___key0, method) ((  bool (*) (Dictionary_2_t1334805305 *, Il2CppObject *, const MethodInfo*))Dictionary_2_Remove_m3154834493_gshared)(__this, ___key0, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,Newtonsoft.Json.Schema.JsonSchemaType>::TryGetValue(TKey,TValue&)
extern "C"  bool Dictionary_2_TryGetValue_m568772648_gshared (Dictionary_2_t1334805305 * __this, Il2CppObject * ___key0, int32_t* ___value1, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m568772648(__this, ___key0, ___value1, method) ((  bool (*) (Dictionary_2_t1334805305 *, Il2CppObject *, int32_t*, const MethodInfo*))Dictionary_2_TryGetValue_m568772648_gshared)(__this, ___key0, ___value1, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,Newtonsoft.Json.Schema.JsonSchemaType>::get_Keys()
extern "C"  KeyCollection_t3818303076 * Dictionary_2_get_Keys_m3168816223_gshared (Dictionary_2_t1334805305 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m3168816223(__this, method) ((  KeyCollection_t3818303076 * (*) (Dictionary_2_t1334805305 *, const MethodInfo*))Dictionary_2_get_Keys_m3168816223_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,Newtonsoft.Json.Schema.JsonSchemaType>::get_Values()
extern "C"  ValueCollection_t37865148 * Dictionary_2_get_Values_m2184765879_gshared (Dictionary_2_t1334805305 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m2184765879(__this, method) ((  ValueCollection_t37865148 * (*) (Dictionary_2_t1334805305 *, const MethodInfo*))Dictionary_2_get_Values_m2184765879_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,Newtonsoft.Json.Schema.JsonSchemaType>::ToTKey(System.Object)
extern "C"  Il2CppObject * Dictionary_2_ToTKey_m2107972530_gshared (Dictionary_2_t1334805305 * __this, Il2CppObject * ___key0, const MethodInfo* method);
#define Dictionary_2_ToTKey_m2107972530(__this, ___key0, method) ((  Il2CppObject * (*) (Dictionary_2_t1334805305 *, Il2CppObject *, const MethodInfo*))Dictionary_2_ToTKey_m2107972530_gshared)(__this, ___key0, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,Newtonsoft.Json.Schema.JsonSchemaType>::ToTValue(System.Object)
extern "C"  int32_t Dictionary_2_ToTValue_m1531438698_gshared (Dictionary_2_t1334805305 * __this, Il2CppObject * ___value0, const MethodInfo* method);
#define Dictionary_2_ToTValue_m1531438698(__this, ___value0, method) ((  int32_t (*) (Dictionary_2_t1334805305 *, Il2CppObject *, const MethodInfo*))Dictionary_2_ToTValue_m1531438698_gshared)(__this, ___value0, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,Newtonsoft.Json.Schema.JsonSchemaType>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C"  bool Dictionary_2_ContainsKeyValuePair_m3962305184_gshared (Dictionary_2_t1334805305 * __this, KeyValuePair_2_t3387117823  ___pair0, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m3962305184(__this, ___pair0, method) ((  bool (*) (Dictionary_2_t1334805305 *, KeyValuePair_2_t3387117823 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m3962305184_gshared)(__this, ___pair0, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,Newtonsoft.Json.Schema.JsonSchemaType>::GetEnumerator()
extern "C"  Enumerator_t2654830007  Dictionary_2_GetEnumerator_m3021808117_gshared (Dictionary_2_t1334805305 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m3021808117(__this, method) ((  Enumerator_t2654830007  (*) (Dictionary_2_t1334805305 *, const MethodInfo*))Dictionary_2_GetEnumerator_m3021808117_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,Newtonsoft.Json.Schema.JsonSchemaType>::<CopyTo>m__0(TKey,TValue)
extern "C"  DictionaryEntry_t3048875398  Dictionary_2_U3CCopyToU3Em__0_m3775762914_gshared (Il2CppObject * __this /* static, unused */, Il2CppObject * ___key0, int32_t ___value1, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m3775762914(__this /* static, unused */, ___key0, ___value1, method) ((  DictionaryEntry_t3048875398  (*) (Il2CppObject * /* static, unused */, Il2CppObject *, int32_t, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m3775762914_gshared)(__this /* static, unused */, ___key0, ___value1, method)
