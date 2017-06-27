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

// UnityEngine.Networking.SyncList`1<System.UInt32>
struct SyncList_1_t3105763620;
// UnityEngine.Networking.SyncList`1/SyncListChanged<System.UInt32>
struct SyncListChanged_t515952471;
// UnityEngine.Networking.NetworkBehaviour
struct NetworkBehaviour_t3873055601;
// UnityEngine.Networking.NetworkReader
struct NetworkReader_t3187690923;
// System.UInt32[]
struct UInt32U5BU5D_t59386216;
// System.Collections.Generic.IEnumerator`1<System.UInt32>
struct IEnumerator_1_t3920173144;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netw3873055601.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Sync1883411365.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netw3187690923.h"

// System.Void UnityEngine.Networking.SyncList`1<System.UInt32>::.ctor()
extern "C"  void SyncList_1__ctor_m1474722247_gshared (SyncList_1_t3105763620 * __this, const MethodInfo* method);
#define SyncList_1__ctor_m1474722247(__this, method) ((  void (*) (SyncList_1_t3105763620 *, const MethodInfo*))SyncList_1__ctor_m1474722247_gshared)(__this, method)
// System.Int32 UnityEngine.Networking.SyncList`1<System.UInt32>::get_Count()
extern "C"  int32_t SyncList_1_get_Count_m502901323_gshared (SyncList_1_t3105763620 * __this, const MethodInfo* method);
#define SyncList_1_get_Count_m502901323(__this, method) ((  int32_t (*) (SyncList_1_t3105763620 *, const MethodInfo*))SyncList_1_get_Count_m502901323_gshared)(__this, method)
// System.Boolean UnityEngine.Networking.SyncList`1<System.UInt32>::get_IsReadOnly()
extern "C"  bool SyncList_1_get_IsReadOnly_m3302912794_gshared (SyncList_1_t3105763620 * __this, const MethodInfo* method);
#define SyncList_1_get_IsReadOnly_m3302912794(__this, method) ((  bool (*) (SyncList_1_t3105763620 *, const MethodInfo*))SyncList_1_get_IsReadOnly_m3302912794_gshared)(__this, method)
// UnityEngine.Networking.SyncList`1/SyncListChanged<T> UnityEngine.Networking.SyncList`1<System.UInt32>::get_Callback()
extern "C"  SyncListChanged_t515952471 * SyncList_1_get_Callback_m1916564565_gshared (SyncList_1_t3105763620 * __this, const MethodInfo* method);
#define SyncList_1_get_Callback_m1916564565(__this, method) ((  SyncListChanged_t515952471 * (*) (SyncList_1_t3105763620 *, const MethodInfo*))SyncList_1_get_Callback_m1916564565_gshared)(__this, method)
// System.Void UnityEngine.Networking.SyncList`1<System.UInt32>::set_Callback(UnityEngine.Networking.SyncList`1/SyncListChanged<T>)
extern "C"  void SyncList_1_set_Callback_m1287183110_gshared (SyncList_1_t3105763620 * __this, SyncListChanged_t515952471 * ___value0, const MethodInfo* method);
#define SyncList_1_set_Callback_m1287183110(__this, ___value0, method) ((  void (*) (SyncList_1_t3105763620 *, SyncListChanged_t515952471 *, const MethodInfo*))SyncList_1_set_Callback_m1287183110_gshared)(__this, ___value0, method)
// System.Void UnityEngine.Networking.SyncList`1<System.UInt32>::InitializeBehaviour(UnityEngine.Networking.NetworkBehaviour,System.Int32)
extern "C"  void SyncList_1_InitializeBehaviour_m867652159_gshared (SyncList_1_t3105763620 * __this, NetworkBehaviour_t3873055601 * ___beh0, int32_t ___cmdHash1, const MethodInfo* method);
#define SyncList_1_InitializeBehaviour_m867652159(__this, ___beh0, ___cmdHash1, method) ((  void (*) (SyncList_1_t3105763620 *, NetworkBehaviour_t3873055601 *, int32_t, const MethodInfo*))SyncList_1_InitializeBehaviour_m867652159_gshared)(__this, ___beh0, ___cmdHash1, method)
// System.Void UnityEngine.Networking.SyncList`1<System.UInt32>::SendMsg(UnityEngine.Networking.SyncList`1/Operation<T>,System.Int32,T)
extern "C"  void SyncList_1_SendMsg_m957818222_gshared (SyncList_1_t3105763620 * __this, int32_t ___op0, int32_t ___itemIndex1, uint32_t ___item2, const MethodInfo* method);
#define SyncList_1_SendMsg_m957818222(__this, ___op0, ___itemIndex1, ___item2, method) ((  void (*) (SyncList_1_t3105763620 *, int32_t, int32_t, uint32_t, const MethodInfo*))SyncList_1_SendMsg_m957818222_gshared)(__this, ___op0, ___itemIndex1, ___item2, method)
// System.Void UnityEngine.Networking.SyncList`1<System.UInt32>::SendMsg(UnityEngine.Networking.SyncList`1/Operation<T>,System.Int32)
extern "C"  void SyncList_1_SendMsg_m2289854462_gshared (SyncList_1_t3105763620 * __this, int32_t ___op0, int32_t ___itemIndex1, const MethodInfo* method);
#define SyncList_1_SendMsg_m2289854462(__this, ___op0, ___itemIndex1, method) ((  void (*) (SyncList_1_t3105763620 *, int32_t, int32_t, const MethodInfo*))SyncList_1_SendMsg_m2289854462_gshared)(__this, ___op0, ___itemIndex1, method)
// System.Void UnityEngine.Networking.SyncList`1<System.UInt32>::HandleMsg(UnityEngine.Networking.NetworkReader)
extern "C"  void SyncList_1_HandleMsg_m4042333072_gshared (SyncList_1_t3105763620 * __this, NetworkReader_t3187690923 * ___reader0, const MethodInfo* method);
#define SyncList_1_HandleMsg_m4042333072(__this, ___reader0, method) ((  void (*) (SyncList_1_t3105763620 *, NetworkReader_t3187690923 *, const MethodInfo*))SyncList_1_HandleMsg_m4042333072_gshared)(__this, ___reader0, method)
// System.Void UnityEngine.Networking.SyncList`1<System.UInt32>::AddInternal(T)
extern "C"  void SyncList_1_AddInternal_m308919353_gshared (SyncList_1_t3105763620 * __this, uint32_t ___item0, const MethodInfo* method);
#define SyncList_1_AddInternal_m308919353(__this, ___item0, method) ((  void (*) (SyncList_1_t3105763620 *, uint32_t, const MethodInfo*))SyncList_1_AddInternal_m308919353_gshared)(__this, ___item0, method)
// System.Void UnityEngine.Networking.SyncList`1<System.UInt32>::Add(T)
extern "C"  void SyncList_1_Add_m2636178648_gshared (SyncList_1_t3105763620 * __this, uint32_t ___item0, const MethodInfo* method);
#define SyncList_1_Add_m2636178648(__this, ___item0, method) ((  void (*) (SyncList_1_t3105763620 *, uint32_t, const MethodInfo*))SyncList_1_Add_m2636178648_gshared)(__this, ___item0, method)
// System.Void UnityEngine.Networking.SyncList`1<System.UInt32>::Clear()
extern "C"  void SyncList_1_Clear_m1771215876_gshared (SyncList_1_t3105763620 * __this, const MethodInfo* method);
#define SyncList_1_Clear_m1771215876(__this, method) ((  void (*) (SyncList_1_t3105763620 *, const MethodInfo*))SyncList_1_Clear_m1771215876_gshared)(__this, method)
// System.Boolean UnityEngine.Networking.SyncList`1<System.UInt32>::Contains(T)
extern "C"  bool SyncList_1_Contains_m1235229642_gshared (SyncList_1_t3105763620 * __this, uint32_t ___item0, const MethodInfo* method);
#define SyncList_1_Contains_m1235229642(__this, ___item0, method) ((  bool (*) (SyncList_1_t3105763620 *, uint32_t, const MethodInfo*))SyncList_1_Contains_m1235229642_gshared)(__this, ___item0, method)
// System.Void UnityEngine.Networking.SyncList`1<System.UInt32>::CopyTo(T[],System.Int32)
extern "C"  void SyncList_1_CopyTo_m1942817004_gshared (SyncList_1_t3105763620 * __this, UInt32U5BU5D_t59386216* ___array0, int32_t ___index1, const MethodInfo* method);
#define SyncList_1_CopyTo_m1942817004(__this, ___array0, ___index1, method) ((  void (*) (SyncList_1_t3105763620 *, UInt32U5BU5D_t59386216*, int32_t, const MethodInfo*))SyncList_1_CopyTo_m1942817004_gshared)(__this, ___array0, ___index1, method)
// System.Int32 UnityEngine.Networking.SyncList`1<System.UInt32>::IndexOf(T)
extern "C"  int32_t SyncList_1_IndexOf_m1415762930_gshared (SyncList_1_t3105763620 * __this, uint32_t ___item0, const MethodInfo* method);
#define SyncList_1_IndexOf_m1415762930(__this, ___item0, method) ((  int32_t (*) (SyncList_1_t3105763620 *, uint32_t, const MethodInfo*))SyncList_1_IndexOf_m1415762930_gshared)(__this, ___item0, method)
// System.Void UnityEngine.Networking.SyncList`1<System.UInt32>::Insert(System.Int32,T)
extern "C"  void SyncList_1_Insert_m2365521229_gshared (SyncList_1_t3105763620 * __this, int32_t ___index0, uint32_t ___item1, const MethodInfo* method);
#define SyncList_1_Insert_m2365521229(__this, ___index0, ___item1, method) ((  void (*) (SyncList_1_t3105763620 *, int32_t, uint32_t, const MethodInfo*))SyncList_1_Insert_m2365521229_gshared)(__this, ___index0, ___item1, method)
// System.Boolean UnityEngine.Networking.SyncList`1<System.UInt32>::Remove(T)
extern "C"  bool SyncList_1_Remove_m1746606321_gshared (SyncList_1_t3105763620 * __this, uint32_t ___item0, const MethodInfo* method);
#define SyncList_1_Remove_m1746606321(__this, ___item0, method) ((  bool (*) (SyncList_1_t3105763620 *, uint32_t, const MethodInfo*))SyncList_1_Remove_m1746606321_gshared)(__this, ___item0, method)
// System.Void UnityEngine.Networking.SyncList`1<System.UInt32>::RemoveAt(System.Int32)
extern "C"  void SyncList_1_RemoveAt_m666144777_gshared (SyncList_1_t3105763620 * __this, int32_t ___index0, const MethodInfo* method);
#define SyncList_1_RemoveAt_m666144777(__this, ___index0, method) ((  void (*) (SyncList_1_t3105763620 *, int32_t, const MethodInfo*))SyncList_1_RemoveAt_m666144777_gshared)(__this, ___index0, method)
// System.Void UnityEngine.Networking.SyncList`1<System.UInt32>::Dirty(System.Int32)
extern "C"  void SyncList_1_Dirty_m2071038416_gshared (SyncList_1_t3105763620 * __this, int32_t ___index0, const MethodInfo* method);
#define SyncList_1_Dirty_m2071038416(__this, ___index0, method) ((  void (*) (SyncList_1_t3105763620 *, int32_t, const MethodInfo*))SyncList_1_Dirty_m2071038416_gshared)(__this, ___index0, method)
// T UnityEngine.Networking.SyncList`1<System.UInt32>::get_Item(System.Int32)
extern "C"  uint32_t SyncList_1_get_Item_m1123482453_gshared (SyncList_1_t3105763620 * __this, int32_t ___i0, const MethodInfo* method);
#define SyncList_1_get_Item_m1123482453(__this, ___i0, method) ((  uint32_t (*) (SyncList_1_t3105763620 *, int32_t, const MethodInfo*))SyncList_1_get_Item_m1123482453_gshared)(__this, ___i0, method)
// System.Void UnityEngine.Networking.SyncList`1<System.UInt32>::set_Item(System.Int32,T)
extern "C"  void SyncList_1_set_Item_m2428786142_gshared (SyncList_1_t3105763620 * __this, int32_t ___i0, uint32_t ___value1, const MethodInfo* method);
#define SyncList_1_set_Item_m2428786142(__this, ___i0, ___value1, method) ((  void (*) (SyncList_1_t3105763620 *, int32_t, uint32_t, const MethodInfo*))SyncList_1_set_Item_m2428786142_gshared)(__this, ___i0, ___value1, method)
// System.Collections.Generic.IEnumerator`1<T> UnityEngine.Networking.SyncList`1<System.UInt32>::GetEnumerator()
extern "C"  Il2CppObject* SyncList_1_GetEnumerator_m1643433315_gshared (SyncList_1_t3105763620 * __this, const MethodInfo* method);
#define SyncList_1_GetEnumerator_m1643433315(__this, method) ((  Il2CppObject* (*) (SyncList_1_t3105763620 *, const MethodInfo*))SyncList_1_GetEnumerator_m1643433315_gshared)(__this, method)
// System.Collections.IEnumerator UnityEngine.Networking.SyncList`1<System.UInt32>::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Il2CppObject * SyncList_1_System_Collections_IEnumerable_GetEnumerator_m2819505454_gshared (SyncList_1_t3105763620 * __this, const MethodInfo* method);
#define SyncList_1_System_Collections_IEnumerable_GetEnumerator_m2819505454(__this, method) ((  Il2CppObject * (*) (SyncList_1_t3105763620 *, const MethodInfo*))SyncList_1_System_Collections_IEnumerable_GetEnumerator_m2819505454_gshared)(__this, method)
