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

// UnityEngine.Networking.SyncList`1<System.Boolean>
struct SyncList_1_t486689021;
// UnityEngine.Networking.SyncList`1/SyncListChanged<System.Boolean>
struct SyncListChanged_t2191845168;
// UnityEngine.Networking.NetworkBehaviour
struct NetworkBehaviour_t3873055601;
// UnityEngine.Networking.NetworkReader
struct NetworkReader_t3187690923;
// System.Boolean[]
struct BooleanU5BU5D_t3568034315;
// System.Collections.Generic.IEnumerator`1<System.Boolean>
struct IEnumerator_1_t1301098545;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netw3873055601.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Sync3559304062.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netw3187690923.h"

// System.Void UnityEngine.Networking.SyncList`1<System.Boolean>::.ctor()
extern "C"  void SyncList_1__ctor_m3883448086_gshared (SyncList_1_t486689021 * __this, const MethodInfo* method);
#define SyncList_1__ctor_m3883448086(__this, method) ((  void (*) (SyncList_1_t486689021 *, const MethodInfo*))SyncList_1__ctor_m3883448086_gshared)(__this, method)
// System.Int32 UnityEngine.Networking.SyncList`1<System.Boolean>::get_Count()
extern "C"  int32_t SyncList_1_get_Count_m729930006_gshared (SyncList_1_t486689021 * __this, const MethodInfo* method);
#define SyncList_1_get_Count_m729930006(__this, method) ((  int32_t (*) (SyncList_1_t486689021 *, const MethodInfo*))SyncList_1_get_Count_m729930006_gshared)(__this, method)
// System.Boolean UnityEngine.Networking.SyncList`1<System.Boolean>::get_IsReadOnly()
extern "C"  bool SyncList_1_get_IsReadOnly_m1309112529_gshared (SyncList_1_t486689021 * __this, const MethodInfo* method);
#define SyncList_1_get_IsReadOnly_m1309112529(__this, method) ((  bool (*) (SyncList_1_t486689021 *, const MethodInfo*))SyncList_1_get_IsReadOnly_m1309112529_gshared)(__this, method)
// UnityEngine.Networking.SyncList`1/SyncListChanged<T> UnityEngine.Networking.SyncList`1<System.Boolean>::get_Callback()
extern "C"  SyncListChanged_t2191845168 * SyncList_1_get_Callback_m1373482542_gshared (SyncList_1_t486689021 * __this, const MethodInfo* method);
#define SyncList_1_get_Callback_m1373482542(__this, method) ((  SyncListChanged_t2191845168 * (*) (SyncList_1_t486689021 *, const MethodInfo*))SyncList_1_get_Callback_m1373482542_gshared)(__this, method)
// System.Void UnityEngine.Networking.SyncList`1<System.Boolean>::set_Callback(UnityEngine.Networking.SyncList`1/SyncListChanged<T>)
extern "C"  void SyncList_1_set_Callback_m1728077921_gshared (SyncList_1_t486689021 * __this, SyncListChanged_t2191845168 * ___value0, const MethodInfo* method);
#define SyncList_1_set_Callback_m1728077921(__this, ___value0, method) ((  void (*) (SyncList_1_t486689021 *, SyncListChanged_t2191845168 *, const MethodInfo*))SyncList_1_set_Callback_m1728077921_gshared)(__this, ___value0, method)
// System.Void UnityEngine.Networking.SyncList`1<System.Boolean>::InitializeBehaviour(UnityEngine.Networking.NetworkBehaviour,System.Int32)
extern "C"  void SyncList_1_InitializeBehaviour_m3861922590_gshared (SyncList_1_t486689021 * __this, NetworkBehaviour_t3873055601 * ___beh0, int32_t ___cmdHash1, const MethodInfo* method);
#define SyncList_1_InitializeBehaviour_m3861922590(__this, ___beh0, ___cmdHash1, method) ((  void (*) (SyncList_1_t486689021 *, NetworkBehaviour_t3873055601 *, int32_t, const MethodInfo*))SyncList_1_InitializeBehaviour_m3861922590_gshared)(__this, ___beh0, ___cmdHash1, method)
// System.Void UnityEngine.Networking.SyncList`1<System.Boolean>::SendMsg(UnityEngine.Networking.SyncList`1/Operation<T>,System.Int32,T)
extern "C"  void SyncList_1_SendMsg_m3803823555_gshared (SyncList_1_t486689021 * __this, int32_t ___op0, int32_t ___itemIndex1, bool ___item2, const MethodInfo* method);
#define SyncList_1_SendMsg_m3803823555(__this, ___op0, ___itemIndex1, ___item2, method) ((  void (*) (SyncList_1_t486689021 *, int32_t, int32_t, bool, const MethodInfo*))SyncList_1_SendMsg_m3803823555_gshared)(__this, ___op0, ___itemIndex1, ___item2, method)
// System.Void UnityEngine.Networking.SyncList`1<System.Boolean>::SendMsg(UnityEngine.Networking.SyncList`1/Operation<T>,System.Int32)
extern "C"  void SyncList_1_SendMsg_m3461705107_gshared (SyncList_1_t486689021 * __this, int32_t ___op0, int32_t ___itemIndex1, const MethodInfo* method);
#define SyncList_1_SendMsg_m3461705107(__this, ___op0, ___itemIndex1, method) ((  void (*) (SyncList_1_t486689021 *, int32_t, int32_t, const MethodInfo*))SyncList_1_SendMsg_m3461705107_gshared)(__this, ___op0, ___itemIndex1, method)
// System.Void UnityEngine.Networking.SyncList`1<System.Boolean>::HandleMsg(UnityEngine.Networking.NetworkReader)
extern "C"  void SyncList_1_HandleMsg_m510169247_gshared (SyncList_1_t486689021 * __this, NetworkReader_t3187690923 * ___reader0, const MethodInfo* method);
#define SyncList_1_HandleMsg_m510169247(__this, ___reader0, method) ((  void (*) (SyncList_1_t486689021 *, NetworkReader_t3187690923 *, const MethodInfo*))SyncList_1_HandleMsg_m510169247_gshared)(__this, ___reader0, method)
// System.Void UnityEngine.Networking.SyncList`1<System.Boolean>::AddInternal(T)
extern "C"  void SyncList_1_AddInternal_m3400484086_gshared (SyncList_1_t486689021 * __this, bool ___item0, const MethodInfo* method);
#define SyncList_1_AddInternal_m3400484086(__this, ___item0, method) ((  void (*) (SyncList_1_t486689021 *, bool, const MethodInfo*))SyncList_1_AddInternal_m3400484086_gshared)(__this, ___item0, method)
// System.Void UnityEngine.Networking.SyncList`1<System.Boolean>::Add(T)
extern "C"  void SyncList_1_Add_m1357060353_gshared (SyncList_1_t486689021 * __this, bool ___item0, const MethodInfo* method);
#define SyncList_1_Add_m1357060353(__this, ___item0, method) ((  void (*) (SyncList_1_t486689021 *, bool, const MethodInfo*))SyncList_1_Add_m1357060353_gshared)(__this, ___item0, method)
// System.Void UnityEngine.Networking.SyncList`1<System.Boolean>::Clear()
extern "C"  void SyncList_1_Clear_m3078903365_gshared (SyncList_1_t486689021 * __this, const MethodInfo* method);
#define SyncList_1_Clear_m3078903365(__this, method) ((  void (*) (SyncList_1_t486689021 *, const MethodInfo*))SyncList_1_Clear_m3078903365_gshared)(__this, method)
// System.Boolean UnityEngine.Networking.SyncList`1<System.Boolean>::Contains(T)
extern "C"  bool SyncList_1_Contains_m2034188887_gshared (SyncList_1_t486689021 * __this, bool ___item0, const MethodInfo* method);
#define SyncList_1_Contains_m2034188887(__this, ___item0, method) ((  bool (*) (SyncList_1_t486689021 *, bool, const MethodInfo*))SyncList_1_Contains_m2034188887_gshared)(__this, ___item0, method)
// System.Void UnityEngine.Networking.SyncList`1<System.Boolean>::CopyTo(T[],System.Int32)
extern "C"  void SyncList_1_CopyTo_m1452428865_gshared (SyncList_1_t486689021 * __this, BooleanU5BU5D_t3568034315* ___array0, int32_t ___index1, const MethodInfo* method);
#define SyncList_1_CopyTo_m1452428865(__this, ___array0, ___index1, method) ((  void (*) (SyncList_1_t486689021 *, BooleanU5BU5D_t3568034315*, int32_t, const MethodInfo*))SyncList_1_CopyTo_m1452428865_gshared)(__this, ___array0, ___index1, method)
// System.Int32 UnityEngine.Networking.SyncList`1<System.Boolean>::IndexOf(T)
extern "C"  int32_t SyncList_1_IndexOf_m3878656989_gshared (SyncList_1_t486689021 * __this, bool ___item0, const MethodInfo* method);
#define SyncList_1_IndexOf_m3878656989(__this, ___item0, method) ((  int32_t (*) (SyncList_1_t486689021 *, bool, const MethodInfo*))SyncList_1_IndexOf_m3878656989_gshared)(__this, ___item0, method)
// System.Void UnityEngine.Networking.SyncList`1<System.Boolean>::Insert(System.Int32,T)
extern "C"  void SyncList_1_Insert_m636769576_gshared (SyncList_1_t486689021 * __this, int32_t ___index0, bool ___item1, const MethodInfo* method);
#define SyncList_1_Insert_m636769576(__this, ___index0, ___item1, method) ((  void (*) (SyncList_1_t486689021 *, int32_t, bool, const MethodInfo*))SyncList_1_Insert_m636769576_gshared)(__this, ___index0, ___item1, method)
// System.Boolean UnityEngine.Networking.SyncList`1<System.Boolean>::Remove(T)
extern "C"  bool SyncList_1_Remove_m4241621430_gshared (SyncList_1_t486689021 * __this, bool ___item0, const MethodInfo* method);
#define SyncList_1_Remove_m4241621430(__this, ___item0, method) ((  bool (*) (SyncList_1_t486689021 *, bool, const MethodInfo*))SyncList_1_Remove_m4241621430_gshared)(__this, ___item0, method)
// System.Void UnityEngine.Networking.SyncList`1<System.Boolean>::RemoveAt(System.Int32)
extern "C"  void SyncList_1_RemoveAt_m595967228_gshared (SyncList_1_t486689021 * __this, int32_t ___index0, const MethodInfo* method);
#define SyncList_1_RemoveAt_m595967228(__this, ___index0, method) ((  void (*) (SyncList_1_t486689021 *, int32_t, const MethodInfo*))SyncList_1_RemoveAt_m595967228_gshared)(__this, ___index0, method)
// System.Void UnityEngine.Networking.SyncList`1<System.Boolean>::Dirty(System.Int32)
extern "C"  void SyncList_1_Dirty_m2092426563_gshared (SyncList_1_t486689021 * __this, int32_t ___index0, const MethodInfo* method);
#define SyncList_1_Dirty_m2092426563(__this, ___index0, method) ((  void (*) (SyncList_1_t486689021 *, int32_t, const MethodInfo*))SyncList_1_Dirty_m2092426563_gshared)(__this, ___index0, method)
// T UnityEngine.Networking.SyncList`1<System.Boolean>::get_Item(System.Int32)
extern "C"  bool SyncList_1_get_Item_m2490763992_gshared (SyncList_1_t486689021 * __this, int32_t ___i0, const MethodInfo* method);
#define SyncList_1_get_Item_m2490763992(__this, ___i0, method) ((  bool (*) (SyncList_1_t486689021 *, int32_t, const MethodInfo*))SyncList_1_get_Item_m2490763992_gshared)(__this, ___i0, method)
// System.Void UnityEngine.Networking.SyncList`1<System.Boolean>::set_Item(System.Int32,T)
extern "C"  void SyncList_1_set_Item_m3387238089_gshared (SyncList_1_t486689021 * __this, int32_t ___i0, bool ___value1, const MethodInfo* method);
#define SyncList_1_set_Item_m3387238089(__this, ___i0, ___value1, method) ((  void (*) (SyncList_1_t486689021 *, int32_t, bool, const MethodInfo*))SyncList_1_set_Item_m3387238089_gshared)(__this, ___i0, ___value1, method)
// System.Collections.Generic.IEnumerator`1<T> UnityEngine.Networking.SyncList`1<System.Boolean>::GetEnumerator()
extern "C"  Il2CppObject* SyncList_1_GetEnumerator_m2887830198_gshared (SyncList_1_t486689021 * __this, const MethodInfo* method);
#define SyncList_1_GetEnumerator_m2887830198(__this, method) ((  Il2CppObject* (*) (SyncList_1_t486689021 *, const MethodInfo*))SyncList_1_GetEnumerator_m2887830198_gshared)(__this, method)
// System.Collections.IEnumerator UnityEngine.Networking.SyncList`1<System.Boolean>::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Il2CppObject * SyncList_1_System_Collections_IEnumerable_GetEnumerator_m102818917_gshared (SyncList_1_t486689021 * __this, const MethodInfo* method);
#define SyncList_1_System_Collections_IEnumerable_GetEnumerator_m102818917(__this, method) ((  Il2CppObject * (*) (SyncList_1_t486689021 *, const MethodInfo*))SyncList_1_System_Collections_IEnumerable_GetEnumerator_m102818917_gshared)(__this, method)
