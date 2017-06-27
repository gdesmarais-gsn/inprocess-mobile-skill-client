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

// UnityEngine.Networking.SyncList`1<System.Int32>
struct SyncList_1_t3027959047;
// UnityEngine.Networking.SyncList`1/SyncListChanged<System.Int32>
struct SyncListChanged_t438147898;
// UnityEngine.Networking.NetworkBehaviour
struct NetworkBehaviour_t3873055601;
// UnityEngine.Networking.NetworkReader
struct NetworkReader_t3187690923;
// System.Int32[]
struct Int32U5BU5D_t3030399641;
// System.Collections.Generic.IEnumerator`1<System.Int32>
struct IEnumerator_1_t3842368571;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netw3873055601.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Sync1805606792.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netw3187690923.h"

// System.Void UnityEngine.Networking.SyncList`1<System.Int32>::.ctor()
extern "C"  void SyncList_1__ctor_m1617538870_gshared (SyncList_1_t3027959047 * __this, const MethodInfo* method);
#define SyncList_1__ctor_m1617538870(__this, method) ((  void (*) (SyncList_1_t3027959047 *, const MethodInfo*))SyncList_1__ctor_m1617538870_gshared)(__this, method)
// System.Int32 UnityEngine.Networking.SyncList`1<System.Int32>::get_Count()
extern "C"  int32_t SyncList_1_get_Count_m674961814_gshared (SyncList_1_t3027959047 * __this, const MethodInfo* method);
#define SyncList_1_get_Count_m674961814(__this, method) ((  int32_t (*) (SyncList_1_t3027959047 *, const MethodInfo*))SyncList_1_get_Count_m674961814_gshared)(__this, method)
// System.Boolean UnityEngine.Networking.SyncList`1<System.Int32>::get_IsReadOnly()
extern "C"  bool SyncList_1_get_IsReadOnly_m1888710563_gshared (SyncList_1_t3027959047 * __this, const MethodInfo* method);
#define SyncList_1_get_IsReadOnly_m1888710563(__this, method) ((  bool (*) (SyncList_1_t3027959047 *, const MethodInfo*))SyncList_1_get_IsReadOnly_m1888710563_gshared)(__this, method)
// UnityEngine.Networking.SyncList`1/SyncListChanged<T> UnityEngine.Networking.SyncList`1<System.Int32>::get_Callback()
extern "C"  SyncListChanged_t438147898 * SyncList_1_get_Callback_m1988320818_gshared (SyncList_1_t3027959047 * __this, const MethodInfo* method);
#define SyncList_1_get_Callback_m1988320818(__this, method) ((  SyncListChanged_t438147898 * (*) (SyncList_1_t3027959047 *, const MethodInfo*))SyncList_1_get_Callback_m1988320818_gshared)(__this, method)
// System.Void UnityEngine.Networking.SyncList`1<System.Int32>::set_Callback(UnityEngine.Networking.SyncList`1/SyncListChanged<T>)
extern "C"  void SyncList_1_set_Callback_m2413288163_gshared (SyncList_1_t3027959047 * __this, SyncListChanged_t438147898 * ___value0, const MethodInfo* method);
#define SyncList_1_set_Callback_m2413288163(__this, ___value0, method) ((  void (*) (SyncList_1_t3027959047 *, SyncListChanged_t438147898 *, const MethodInfo*))SyncList_1_set_Callback_m2413288163_gshared)(__this, ___value0, method)
// System.Void UnityEngine.Networking.SyncList`1<System.Int32>::InitializeBehaviour(UnityEngine.Networking.NetworkBehaviour,System.Int32)
extern "C"  void SyncList_1_InitializeBehaviour_m3248485582_gshared (SyncList_1_t3027959047 * __this, NetworkBehaviour_t3873055601 * ___beh0, int32_t ___cmdHash1, const MethodInfo* method);
#define SyncList_1_InitializeBehaviour_m3248485582(__this, ___beh0, ___cmdHash1, method) ((  void (*) (SyncList_1_t3027959047 *, NetworkBehaviour_t3873055601 *, int32_t, const MethodInfo*))SyncList_1_InitializeBehaviour_m3248485582_gshared)(__this, ___beh0, ___cmdHash1, method)
// System.Void UnityEngine.Networking.SyncList`1<System.Int32>::SendMsg(UnityEngine.Networking.SyncList`1/Operation<T>,System.Int32,T)
extern "C"  void SyncList_1_SendMsg_m4213084229_gshared (SyncList_1_t3027959047 * __this, int32_t ___op0, int32_t ___itemIndex1, int32_t ___item2, const MethodInfo* method);
#define SyncList_1_SendMsg_m4213084229(__this, ___op0, ___itemIndex1, ___item2, method) ((  void (*) (SyncList_1_t3027959047 *, int32_t, int32_t, int32_t, const MethodInfo*))SyncList_1_SendMsg_m4213084229_gshared)(__this, ___op0, ___itemIndex1, ___item2, method)
// System.Void UnityEngine.Networking.SyncList`1<System.Int32>::SendMsg(UnityEngine.Networking.SyncList`1/Operation<T>,System.Int32)
extern "C"  void SyncList_1_SendMsg_m2507854557_gshared (SyncList_1_t3027959047 * __this, int32_t ___op0, int32_t ___itemIndex1, const MethodInfo* method);
#define SyncList_1_SendMsg_m2507854557(__this, ___op0, ___itemIndex1, method) ((  void (*) (SyncList_1_t3027959047 *, int32_t, int32_t, const MethodInfo*))SyncList_1_SendMsg_m2507854557_gshared)(__this, ___op0, ___itemIndex1, method)
// System.Void UnityEngine.Networking.SyncList`1<System.Int32>::HandleMsg(UnityEngine.Networking.NetworkReader)
extern "C"  void SyncList_1_HandleMsg_m1811372009_gshared (SyncList_1_t3027959047 * __this, NetworkReader_t3187690923 * ___reader0, const MethodInfo* method);
#define SyncList_1_HandleMsg_m1811372009(__this, ___reader0, method) ((  void (*) (SyncList_1_t3027959047 *, NetworkReader_t3187690923 *, const MethodInfo*))SyncList_1_HandleMsg_m1811372009_gshared)(__this, ___reader0, method)
// System.Void UnityEngine.Networking.SyncList`1<System.Int32>::AddInternal(T)
extern "C"  void SyncList_1_AddInternal_m3520370070_gshared (SyncList_1_t3027959047 * __this, int32_t ___item0, const MethodInfo* method);
#define SyncList_1_AddInternal_m3520370070(__this, ___item0, method) ((  void (*) (SyncList_1_t3027959047 *, int32_t, const MethodInfo*))SyncList_1_AddInternal_m3520370070_gshared)(__this, ___item0, method)
// System.Void UnityEngine.Networking.SyncList`1<System.Int32>::Add(T)
extern "C"  void SyncList_1_Add_m983006667_gshared (SyncList_1_t3027959047 * __this, int32_t ___item0, const MethodInfo* method);
#define SyncList_1_Add_m983006667(__this, ___item0, method) ((  void (*) (SyncList_1_t3027959047 *, int32_t, const MethodInfo*))SyncList_1_Add_m983006667_gshared)(__this, ___item0, method)
// System.Void UnityEngine.Networking.SyncList`1<System.Int32>::Clear()
extern "C"  void SyncList_1_Clear_m4207226335_gshared (SyncList_1_t3027959047 * __this, const MethodInfo* method);
#define SyncList_1_Clear_m4207226335(__this, method) ((  void (*) (SyncList_1_t3027959047 *, const MethodInfo*))SyncList_1_Clear_m4207226335_gshared)(__this, method)
// System.Boolean UnityEngine.Networking.SyncList`1<System.Int32>::Contains(T)
extern "C"  bool SyncList_1_Contains_m3476989245_gshared (SyncList_1_t3027959047 * __this, int32_t ___item0, const MethodInfo* method);
#define SyncList_1_Contains_m3476989245(__this, ___item0, method) ((  bool (*) (SyncList_1_t3027959047 *, int32_t, const MethodInfo*))SyncList_1_Contains_m3476989245_gshared)(__this, ___item0, method)
// System.Void UnityEngine.Networking.SyncList`1<System.Int32>::CopyTo(T[],System.Int32)
extern "C"  void SyncList_1_CopyTo_m2328597255_gshared (SyncList_1_t3027959047 * __this, Int32U5BU5D_t3030399641* ___array0, int32_t ___index1, const MethodInfo* method);
#define SyncList_1_CopyTo_m2328597255(__this, ___array0, ___index1, method) ((  void (*) (SyncList_1_t3027959047 *, Int32U5BU5D_t3030399641*, int32_t, const MethodInfo*))SyncList_1_CopyTo_m2328597255_gshared)(__this, ___array0, ___index1, method)
// System.Int32 UnityEngine.Networking.SyncList`1<System.Int32>::IndexOf(T)
extern "C"  int32_t SyncList_1_IndexOf_m4188021131_gshared (SyncList_1_t3027959047 * __this, int32_t ___item0, const MethodInfo* method);
#define SyncList_1_IndexOf_m4188021131(__this, ___item0, method) ((  int32_t (*) (SyncList_1_t3027959047 *, int32_t, const MethodInfo*))SyncList_1_IndexOf_m4188021131_gshared)(__this, ___item0, method)
// System.Void UnityEngine.Networking.SyncList`1<System.Int32>::Insert(System.Int32,T)
extern "C"  void SyncList_1_Insert_m669348072_gshared (SyncList_1_t3027959047 * __this, int32_t ___index0, int32_t ___item1, const MethodInfo* method);
#define SyncList_1_Insert_m669348072(__this, ___index0, ___item1, method) ((  void (*) (SyncList_1_t3027959047 *, int32_t, int32_t, const MethodInfo*))SyncList_1_Insert_m669348072_gshared)(__this, ___index0, ___item1, method)
// System.Boolean UnityEngine.Networking.SyncList`1<System.Int32>::Remove(T)
extern "C"  bool SyncList_1_Remove_m3307296690_gshared (SyncList_1_t3027959047 * __this, int32_t ___item0, const MethodInfo* method);
#define SyncList_1_Remove_m3307296690(__this, ___item0, method) ((  bool (*) (SyncList_1_t3027959047 *, int32_t, const MethodInfo*))SyncList_1_Remove_m3307296690_gshared)(__this, ___item0, method)
// System.Void UnityEngine.Networking.SyncList`1<System.Int32>::RemoveAt(System.Int32)
extern "C"  void SyncList_1_RemoveAt_m3057230892_gshared (SyncList_1_t3027959047 * __this, int32_t ___index0, const MethodInfo* method);
#define SyncList_1_RemoveAt_m3057230892(__this, ___index0, method) ((  void (*) (SyncList_1_t3027959047 *, int32_t, const MethodInfo*))SyncList_1_RemoveAt_m3057230892_gshared)(__this, ___index0, method)
// System.Void UnityEngine.Networking.SyncList`1<System.Int32>::Dirty(System.Int32)
extern "C"  void SyncList_1_Dirty_m3348978025_gshared (SyncList_1_t3027959047 * __this, int32_t ___index0, const MethodInfo* method);
#define SyncList_1_Dirty_m3348978025(__this, ___index0, method) ((  void (*) (SyncList_1_t3027959047 *, int32_t, const MethodInfo*))SyncList_1_Dirty_m3348978025_gshared)(__this, ___index0, method)
// T UnityEngine.Networking.SyncList`1<System.Int32>::get_Item(System.Int32)
extern "C"  int32_t SyncList_1_get_Item_m3721680368_gshared (SyncList_1_t3027959047 * __this, int32_t ___i0, const MethodInfo* method);
#define SyncList_1_get_Item_m3721680368(__this, ___i0, method) ((  int32_t (*) (SyncList_1_t3027959047 *, int32_t, const MethodInfo*))SyncList_1_get_Item_m3721680368_gshared)(__this, ___i0, method)
// System.Void UnityEngine.Networking.SyncList`1<System.Int32>::set_Item(System.Int32,T)
extern "C"  void SyncList_1_set_Item_m1912747907_gshared (SyncList_1_t3027959047 * __this, int32_t ___i0, int32_t ___value1, const MethodInfo* method);
#define SyncList_1_set_Item_m1912747907(__this, ___i0, ___value1, method) ((  void (*) (SyncList_1_t3027959047 *, int32_t, int32_t, const MethodInfo*))SyncList_1_set_Item_m1912747907_gshared)(__this, ___i0, ___value1, method)
// System.Collections.Generic.IEnumerator`1<T> UnityEngine.Networking.SyncList`1<System.Int32>::GetEnumerator()
extern "C"  Il2CppObject* SyncList_1_GetEnumerator_m3342809466_gshared (SyncList_1_t3027959047 * __this, const MethodInfo* method);
#define SyncList_1_GetEnumerator_m3342809466(__this, method) ((  Il2CppObject* (*) (SyncList_1_t3027959047 *, const MethodInfo*))SyncList_1_GetEnumerator_m3342809466_gshared)(__this, method)
// System.Collections.IEnumerator UnityEngine.Networking.SyncList`1<System.Int32>::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Il2CppObject * SyncList_1_System_Collections_IEnumerable_GetEnumerator_m3585423471_gshared (SyncList_1_t3027959047 * __this, const MethodInfo* method);
#define SyncList_1_System_Collections_IEnumerable_GetEnumerator_m3585423471(__this, method) ((  Il2CppObject * (*) (SyncList_1_t3027959047 *, const MethodInfo*))SyncList_1_System_Collections_IEnumerable_GetEnumerator_m3585423471_gshared)(__this, method)
