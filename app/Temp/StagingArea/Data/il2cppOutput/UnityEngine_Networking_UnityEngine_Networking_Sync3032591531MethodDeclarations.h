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

// UnityEngine.Networking.SyncList`1<System.Single>
struct SyncList_1_t3032591531;
// UnityEngine.Networking.SyncList`1/SyncListChanged<System.Single>
struct SyncListChanged_t442780382;
// UnityEngine.Networking.NetworkBehaviour
struct NetworkBehaviour_t3873055601;
// UnityEngine.Networking.NetworkReader
struct NetworkReader_t3187690923;
// System.Single[]
struct SingleU5BU5D_t577127397;
// System.Collections.Generic.IEnumerator`1<System.Single>
struct IEnumerator_1_t3847001055;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netw3873055601.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Sync1810239276.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netw3187690923.h"

// System.Void UnityEngine.Networking.SyncList`1<System.Single>::.ctor()
extern "C"  void SyncList_1__ctor_m939798964_gshared (SyncList_1_t3032591531 * __this, const MethodInfo* method);
#define SyncList_1__ctor_m939798964(__this, method) ((  void (*) (SyncList_1_t3032591531 *, const MethodInfo*))SyncList_1__ctor_m939798964_gshared)(__this, method)
// System.Int32 UnityEngine.Networking.SyncList`1<System.Single>::get_Count()
extern "C"  int32_t SyncList_1_get_Count_m1737387036_gshared (SyncList_1_t3032591531 * __this, const MethodInfo* method);
#define SyncList_1_get_Count_m1737387036(__this, method) ((  int32_t (*) (SyncList_1_t3032591531 *, const MethodInfo*))SyncList_1_get_Count_m1737387036_gshared)(__this, method)
// System.Boolean UnityEngine.Networking.SyncList`1<System.Single>::get_IsReadOnly()
extern "C"  bool SyncList_1_get_IsReadOnly_m2226582971_gshared (SyncList_1_t3032591531 * __this, const MethodInfo* method);
#define SyncList_1_get_IsReadOnly_m2226582971(__this, method) ((  bool (*) (SyncList_1_t3032591531 *, const MethodInfo*))SyncList_1_get_IsReadOnly_m2226582971_gshared)(__this, method)
// UnityEngine.Networking.SyncList`1/SyncListChanged<T> UnityEngine.Networking.SyncList`1<System.Single>::get_Callback()
extern "C"  SyncListChanged_t442780382 * SyncList_1_get_Callback_m2721139684_gshared (SyncList_1_t3032591531 * __this, const MethodInfo* method);
#define SyncList_1_get_Callback_m2721139684(__this, method) ((  SyncListChanged_t442780382 * (*) (SyncList_1_t3032591531 *, const MethodInfo*))SyncList_1_get_Callback_m2721139684_gshared)(__this, method)
// System.Void UnityEngine.Networking.SyncList`1<System.Single>::set_Callback(UnityEngine.Networking.SyncList`1/SyncListChanged<T>)
extern "C"  void SyncList_1_set_Callback_m1813398075_gshared (SyncList_1_t3032591531 * __this, SyncListChanged_t442780382 * ___value0, const MethodInfo* method);
#define SyncList_1_set_Callback_m1813398075(__this, ___value0, method) ((  void (*) (SyncList_1_t3032591531 *, SyncListChanged_t442780382 *, const MethodInfo*))SyncList_1_set_Callback_m1813398075_gshared)(__this, ___value0, method)
// System.Void UnityEngine.Networking.SyncList`1<System.Single>::InitializeBehaviour(UnityEngine.Networking.NetworkBehaviour,System.Int32)
extern "C"  void SyncList_1_InitializeBehaviour_m1853065196_gshared (SyncList_1_t3032591531 * __this, NetworkBehaviour_t3873055601 * ___beh0, int32_t ___cmdHash1, const MethodInfo* method);
#define SyncList_1_InitializeBehaviour_m1853065196(__this, ___beh0, ___cmdHash1, method) ((  void (*) (SyncList_1_t3032591531 *, NetworkBehaviour_t3873055601 *, int32_t, const MethodInfo*))SyncList_1_InitializeBehaviour_m1853065196_gshared)(__this, ___beh0, ___cmdHash1, method)
// System.Void UnityEngine.Networking.SyncList`1<System.Single>::SendMsg(UnityEngine.Networking.SyncList`1/Operation<T>,System.Int32,T)
extern "C"  void SyncList_1_SendMsg_m1907044641_gshared (SyncList_1_t3032591531 * __this, int32_t ___op0, int32_t ___itemIndex1, float ___item2, const MethodInfo* method);
#define SyncList_1_SendMsg_m1907044641(__this, ___op0, ___itemIndex1, ___item2, method) ((  void (*) (SyncList_1_t3032591531 *, int32_t, int32_t, float, const MethodInfo*))SyncList_1_SendMsg_m1907044641_gshared)(__this, ___op0, ___itemIndex1, ___item2, method)
// System.Void UnityEngine.Networking.SyncList`1<System.Single>::SendMsg(UnityEngine.Networking.SyncList`1/Operation<T>,System.Int32)
extern "C"  void SyncList_1_SendMsg_m3349028233_gshared (SyncList_1_t3032591531 * __this, int32_t ___op0, int32_t ___itemIndex1, const MethodInfo* method);
#define SyncList_1_SendMsg_m3349028233(__this, ___op0, ___itemIndex1, method) ((  void (*) (SyncList_1_t3032591531 *, int32_t, int32_t, const MethodInfo*))SyncList_1_SendMsg_m3349028233_gshared)(__this, ___op0, ___itemIndex1, method)
// System.Void UnityEngine.Networking.SyncList`1<System.Single>::HandleMsg(UnityEngine.Networking.NetworkReader)
extern "C"  void SyncList_1_HandleMsg_m4174949781_gshared (SyncList_1_t3032591531 * __this, NetworkReader_t3187690923 * ___reader0, const MethodInfo* method);
#define SyncList_1_HandleMsg_m4174949781(__this, ___reader0, method) ((  void (*) (SyncList_1_t3032591531 *, NetworkReader_t3187690923 *, const MethodInfo*))SyncList_1_HandleMsg_m4174949781_gshared)(__this, ___reader0, method)
// System.Void UnityEngine.Networking.SyncList`1<System.Single>::AddInternal(T)
extern "C"  void SyncList_1_AddInternal_m673825172_gshared (SyncList_1_t3032591531 * __this, float ___item0, const MethodInfo* method);
#define SyncList_1_AddInternal_m673825172(__this, ___item0, method) ((  void (*) (SyncList_1_t3032591531 *, float, const MethodInfo*))SyncList_1_AddInternal_m673825172_gshared)(__this, ___item0, method)
// System.Void UnityEngine.Networking.SyncList`1<System.Single>::Add(T)
extern "C"  void SyncList_1_Add_m3093692931_gshared (SyncList_1_t3032591531 * __this, float ___item0, const MethodInfo* method);
#define SyncList_1_Add_m3093692931(__this, ___item0, method) ((  void (*) (SyncList_1_t3032591531 *, float, const MethodInfo*))SyncList_1_Add_m3093692931_gshared)(__this, ___item0, method)
// System.Void UnityEngine.Networking.SyncList`1<System.Single>::Clear()
extern "C"  void SyncList_1_Clear_m1163979079_gshared (SyncList_1_t3032591531 * __this, const MethodInfo* method);
#define SyncList_1_Clear_m1163979079(__this, method) ((  void (*) (SyncList_1_t3032591531 *, const MethodInfo*))SyncList_1_Clear_m1163979079_gshared)(__this, method)
// System.Boolean UnityEngine.Networking.SyncList`1<System.Single>::Contains(T)
extern "C"  bool SyncList_1_Contains_m2904753985_gshared (SyncList_1_t3032591531 * __this, float ___item0, const MethodInfo* method);
#define SyncList_1_Contains_m2904753985(__this, ___item0, method) ((  bool (*) (SyncList_1_t3032591531 *, float, const MethodInfo*))SyncList_1_Contains_m2904753985_gshared)(__this, ___item0, method)
// System.Void UnityEngine.Networking.SyncList`1<System.Single>::CopyTo(T[],System.Int32)
extern "C"  void SyncList_1_CopyTo_m3053896959_gshared (SyncList_1_t3032591531 * __this, SingleU5BU5D_t577127397* ___array0, int32_t ___index1, const MethodInfo* method);
#define SyncList_1_CopyTo_m3053896959(__this, ___array0, ___index1, method) ((  void (*) (SyncList_1_t3032591531 *, SingleU5BU5D_t577127397*, int32_t, const MethodInfo*))SyncList_1_CopyTo_m3053896959_gshared)(__this, ___array0, ___index1, method)
// System.Int32 UnityEngine.Networking.SyncList`1<System.Single>::IndexOf(T)
extern "C"  int32_t SyncList_1_IndexOf_m2442115867_gshared (SyncList_1_t3032591531 * __this, float ___item0, const MethodInfo* method);
#define SyncList_1_IndexOf_m2442115867(__this, ___item0, method) ((  int32_t (*) (SyncList_1_t3032591531 *, float, const MethodInfo*))SyncList_1_IndexOf_m2442115867_gshared)(__this, ___item0, method)
// System.Void UnityEngine.Networking.SyncList`1<System.Single>::Insert(System.Int32,T)
extern "C"  void SyncList_1_Insert_m1383230378_gshared (SyncList_1_t3032591531 * __this, int32_t ___index0, float ___item1, const MethodInfo* method);
#define SyncList_1_Insert_m1383230378(__this, ___index0, ___item1, method) ((  void (*) (SyncList_1_t3032591531 *, int32_t, float, const MethodInfo*))SyncList_1_Insert_m1383230378_gshared)(__this, ___index0, ___item1, method)
// System.Boolean UnityEngine.Networking.SyncList`1<System.Single>::Remove(T)
extern "C"  bool SyncList_1_Remove_m119719096_gshared (SyncList_1_t3032591531 * __this, float ___item0, const MethodInfo* method);
#define SyncList_1_Remove_m119719096(__this, ___item0, method) ((  bool (*) (SyncList_1_t3032591531 *, float, const MethodInfo*))SyncList_1_Remove_m119719096_gshared)(__this, ___item0, method)
// System.Void UnityEngine.Networking.SyncList`1<System.Single>::RemoveAt(System.Int32)
extern "C"  void SyncList_1_RemoveAt_m3226634894_gshared (SyncList_1_t3032591531 * __this, int32_t ___index0, const MethodInfo* method);
#define SyncList_1_RemoveAt_m3226634894(__this, ___index0, method) ((  void (*) (SyncList_1_t3032591531 *, int32_t, const MethodInfo*))SyncList_1_RemoveAt_m3226634894_gshared)(__this, ___index0, method)
// System.Void UnityEngine.Networking.SyncList`1<System.Single>::Dirty(System.Int32)
extern "C"  void SyncList_1_Dirty_m1289160653_gshared (SyncList_1_t3032591531 * __this, int32_t ___index0, const MethodInfo* method);
#define SyncList_1_Dirty_m1289160653(__this, ___index0, method) ((  void (*) (SyncList_1_t3032591531 *, int32_t, const MethodInfo*))SyncList_1_Dirty_m1289160653_gshared)(__this, ___index0, method)
// T UnityEngine.Networking.SyncList`1<System.Single>::get_Item(System.Int32)
extern "C"  float SyncList_1_get_Item_m3322709784_gshared (SyncList_1_t3032591531 * __this, int32_t ___i0, const MethodInfo* method);
#define SyncList_1_get_Item_m3322709784(__this, ___i0, method) ((  float (*) (SyncList_1_t3032591531 *, int32_t, const MethodInfo*))SyncList_1_get_Item_m3322709784_gshared)(__this, ___i0, method)
// System.Void UnityEngine.Networking.SyncList`1<System.Single>::set_Item(System.Int32,T)
extern "C"  void SyncList_1_set_Item_m1801038539_gshared (SyncList_1_t3032591531 * __this, int32_t ___i0, float ___value1, const MethodInfo* method);
#define SyncList_1_set_Item_m1801038539(__this, ___i0, ___value1, method) ((  void (*) (SyncList_1_t3032591531 *, int32_t, float, const MethodInfo*))SyncList_1_set_Item_m1801038539_gshared)(__this, ___i0, ___value1, method)
// System.Collections.Generic.IEnumerator`1<T> UnityEngine.Networking.SyncList`1<System.Single>::GetEnumerator()
extern "C"  Il2CppObject* SyncList_1_GetEnumerator_m4100478848_gshared (SyncList_1_t3032591531 * __this, const MethodInfo* method);
#define SyncList_1_GetEnumerator_m4100478848(__this, method) ((  Il2CppObject* (*) (SyncList_1_t3032591531 *, const MethodInfo*))SyncList_1_GetEnumerator_m4100478848_gshared)(__this, method)
// System.Collections.IEnumerator UnityEngine.Networking.SyncList`1<System.Single>::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Il2CppObject * SyncList_1_System_Collections_IEnumerable_GetEnumerator_m1520768143_gshared (SyncList_1_t3032591531 * __this, const MethodInfo* method);
#define SyncList_1_System_Collections_IEnumerable_GetEnumerator_m1520768143(__this, method) ((  Il2CppObject * (*) (SyncList_1_t3032591531 *, const MethodInfo*))SyncList_1_System_Collections_IEnumerable_GetEnumerator_m1520768143_gshared)(__this, method)
