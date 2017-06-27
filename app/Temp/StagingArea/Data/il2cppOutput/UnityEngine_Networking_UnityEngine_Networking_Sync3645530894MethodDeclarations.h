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

// UnityEngine.Networking.SyncList`1<System.Object>
struct SyncList_1_t3645530894;
// UnityEngine.Networking.SyncList`1/SyncListChanged<System.Object>
struct SyncListChanged_t1055719745;
// UnityEngine.Networking.NetworkBehaviour
struct NetworkBehaviour_t3873055601;
// System.Object
struct Il2CppObject;
// UnityEngine.Networking.NetworkReader
struct NetworkReader_t3187690923;
// System.Object[]
struct ObjectU5BU5D_t3614634134;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t164973122;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netw3873055601.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Sync2423178639.h"
#include "mscorlib_System_Object2689449295.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netw3187690923.h"

// System.Void UnityEngine.Networking.SyncList`1<System.Object>::.ctor()
extern "C"  void SyncList_1__ctor_m1979817233_gshared (SyncList_1_t3645530894 * __this, const MethodInfo* method);
#define SyncList_1__ctor_m1979817233(__this, method) ((  void (*) (SyncList_1_t3645530894 *, const MethodInfo*))SyncList_1__ctor_m1979817233_gshared)(__this, method)
// System.Int32 UnityEngine.Networking.SyncList`1<System.Object>::get_Count()
extern "C"  int32_t SyncList_1_get_Count_m3995922617_gshared (SyncList_1_t3645530894 * __this, const MethodInfo* method);
#define SyncList_1_get_Count_m3995922617(__this, method) ((  int32_t (*) (SyncList_1_t3645530894 *, const MethodInfo*))SyncList_1_get_Count_m3995922617_gshared)(__this, method)
// System.Boolean UnityEngine.Networking.SyncList`1<System.Object>::get_IsReadOnly()
extern "C"  bool SyncList_1_get_IsReadOnly_m1739608972_gshared (SyncList_1_t3645530894 * __this, const MethodInfo* method);
#define SyncList_1_get_IsReadOnly_m1739608972(__this, method) ((  bool (*) (SyncList_1_t3645530894 *, const MethodInfo*))SyncList_1_get_IsReadOnly_m1739608972_gshared)(__this, method)
// UnityEngine.Networking.SyncList`1/SyncListChanged<T> UnityEngine.Networking.SyncList`1<System.Object>::get_Callback()
extern "C"  SyncListChanged_t1055719745 * SyncList_1_get_Callback_m3756815995_gshared (SyncList_1_t3645530894 * __this, const MethodInfo* method);
#define SyncList_1_get_Callback_m3756815995(__this, method) ((  SyncListChanged_t1055719745 * (*) (SyncList_1_t3645530894 *, const MethodInfo*))SyncList_1_get_Callback_m3756815995_gshared)(__this, method)
// System.Void UnityEngine.Networking.SyncList`1<System.Object>::set_Callback(UnityEngine.Networking.SyncList`1/SyncListChanged<T>)
extern "C"  void SyncList_1_set_Callback_m3071308488_gshared (SyncList_1_t3645530894 * __this, SyncListChanged_t1055719745 * ___value0, const MethodInfo* method);
#define SyncList_1_set_Callback_m3071308488(__this, ___value0, method) ((  void (*) (SyncList_1_t3645530894 *, SyncListChanged_t1055719745 *, const MethodInfo*))SyncList_1_set_Callback_m3071308488_gshared)(__this, ___value0, method)
// System.Void UnityEngine.Networking.SyncList`1<System.Object>::InitializeBehaviour(UnityEngine.Networking.NetworkBehaviour,System.Int32)
extern "C"  void SyncList_1_InitializeBehaviour_m3472596089_gshared (SyncList_1_t3645530894 * __this, NetworkBehaviour_t3873055601 * ___beh0, int32_t ___cmdHash1, const MethodInfo* method);
#define SyncList_1_InitializeBehaviour_m3472596089(__this, ___beh0, ___cmdHash1, method) ((  void (*) (SyncList_1_t3645530894 *, NetworkBehaviour_t3873055601 *, int32_t, const MethodInfo*))SyncList_1_InitializeBehaviour_m3472596089_gshared)(__this, ___beh0, ___cmdHash1, method)
// System.Void UnityEngine.Networking.SyncList`1<System.Object>::SendMsg(UnityEngine.Networking.SyncList`1/Operation<T>,System.Int32,T)
extern "C"  void SyncList_1_SendMsg_m1310025432_gshared (SyncList_1_t3645530894 * __this, int32_t ___op0, int32_t ___itemIndex1, Il2CppObject * ___item2, const MethodInfo* method);
#define SyncList_1_SendMsg_m1310025432(__this, ___op0, ___itemIndex1, ___item2, method) ((  void (*) (SyncList_1_t3645530894 *, int32_t, int32_t, Il2CppObject *, const MethodInfo*))SyncList_1_SendMsg_m1310025432_gshared)(__this, ___op0, ___itemIndex1, ___item2, method)
// System.Void UnityEngine.Networking.SyncList`1<System.Object>::SendMsg(UnityEngine.Networking.SyncList`1/Operation<T>,System.Int32)
extern "C"  void SyncList_1_SendMsg_m3027456264_gshared (SyncList_1_t3645530894 * __this, int32_t ___op0, int32_t ___itemIndex1, const MethodInfo* method);
#define SyncList_1_SendMsg_m3027456264(__this, ___op0, ___itemIndex1, method) ((  void (*) (SyncList_1_t3645530894 *, int32_t, int32_t, const MethodInfo*))SyncList_1_SendMsg_m3027456264_gshared)(__this, ___op0, ___itemIndex1, method)
// System.Void UnityEngine.Networking.SyncList`1<System.Object>::HandleMsg(UnityEngine.Networking.NetworkReader)
extern "C"  void SyncList_1_HandleMsg_m1047790890_gshared (SyncList_1_t3645530894 * __this, NetworkReader_t3187690923 * ___reader0, const MethodInfo* method);
#define SyncList_1_HandleMsg_m1047790890(__this, ___reader0, method) ((  void (*) (SyncList_1_t3645530894 *, NetworkReader_t3187690923 *, const MethodInfo*))SyncList_1_HandleMsg_m1047790890_gshared)(__this, ___reader0, method)
// System.Void UnityEngine.Networking.SyncList`1<System.Object>::AddInternal(T)
extern "C"  void SyncList_1_AddInternal_m1156564503_gshared (SyncList_1_t3645530894 * __this, Il2CppObject * ___item0, const MethodInfo* method);
#define SyncList_1_AddInternal_m1156564503(__this, ___item0, method) ((  void (*) (SyncList_1_t3645530894 *, Il2CppObject *, const MethodInfo*))SyncList_1_AddInternal_m1156564503_gshared)(__this, ___item0, method)
// System.Void UnityEngine.Networking.SyncList`1<System.Object>::Add(T)
extern "C"  void SyncList_1_Add_m903203842_gshared (SyncList_1_t3645530894 * __this, Il2CppObject * ___item0, const MethodInfo* method);
#define SyncList_1_Add_m903203842(__this, ___item0, method) ((  void (*) (SyncList_1_t3645530894 *, Il2CppObject *, const MethodInfo*))SyncList_1_Add_m903203842_gshared)(__this, ___item0, method)
// System.Void UnityEngine.Networking.SyncList`1<System.Object>::Clear()
extern "C"  void SyncList_1_Clear_m479214166_gshared (SyncList_1_t3645530894 * __this, const MethodInfo* method);
#define SyncList_1_Clear_m479214166(__this, method) ((  void (*) (SyncList_1_t3645530894 *, const MethodInfo*))SyncList_1_Clear_m479214166_gshared)(__this, method)
// System.Boolean UnityEngine.Networking.SyncList`1<System.Object>::Contains(T)
extern "C"  bool SyncList_1_Contains_m2184498664_gshared (SyncList_1_t3645530894 * __this, Il2CppObject * ___item0, const MethodInfo* method);
#define SyncList_1_Contains_m2184498664(__this, ___item0, method) ((  bool (*) (SyncList_1_t3645530894 *, Il2CppObject *, const MethodInfo*))SyncList_1_Contains_m2184498664_gshared)(__this, ___item0, method)
// System.Void UnityEngine.Networking.SyncList`1<System.Object>::CopyTo(T[],System.Int32)
extern "C"  void SyncList_1_CopyTo_m1104313626_gshared (SyncList_1_t3645530894 * __this, ObjectU5BU5D_t3614634134* ___array0, int32_t ___index1, const MethodInfo* method);
#define SyncList_1_CopyTo_m1104313626(__this, ___array0, ___index1, method) ((  void (*) (SyncList_1_t3645530894 *, ObjectU5BU5D_t3614634134*, int32_t, const MethodInfo*))SyncList_1_CopyTo_m1104313626_gshared)(__this, ___array0, ___index1, method)
// System.Int32 UnityEngine.Networking.SyncList`1<System.Object>::IndexOf(T)
extern "C"  int32_t SyncList_1_IndexOf_m2624123316_gshared (SyncList_1_t3645530894 * __this, Il2CppObject * ___item0, const MethodInfo* method);
#define SyncList_1_IndexOf_m2624123316(__this, ___item0, method) ((  int32_t (*) (SyncList_1_t3645530894 *, Il2CppObject *, const MethodInfo*))SyncList_1_IndexOf_m2624123316_gshared)(__this, ___item0, method)
// System.Void UnityEngine.Networking.SyncList`1<System.Object>::Insert(System.Int32,T)
extern "C"  void SyncList_1_Insert_m4109060535_gshared (SyncList_1_t3645530894 * __this, int32_t ___index0, Il2CppObject * ___item1, const MethodInfo* method);
#define SyncList_1_Insert_m4109060535(__this, ___index0, ___item1, method) ((  void (*) (SyncList_1_t3645530894 *, int32_t, Il2CppObject *, const MethodInfo*))SyncList_1_Insert_m4109060535_gshared)(__this, ___index0, ___item1, method)
// System.Boolean UnityEngine.Networking.SyncList`1<System.Object>::Remove(T)
extern "C"  bool SyncList_1_Remove_m338076795_gshared (SyncList_1_t3645530894 * __this, Il2CppObject * ___item0, const MethodInfo* method);
#define SyncList_1_Remove_m338076795(__this, ___item0, method) ((  bool (*) (SyncList_1_t3645530894 *, Il2CppObject *, const MethodInfo*))SyncList_1_Remove_m338076795_gshared)(__this, ___item0, method)
// System.Void UnityEngine.Networking.SyncList`1<System.Object>::RemoveAt(System.Int32)
extern "C"  void SyncList_1_RemoveAt_m20766587_gshared (SyncList_1_t3645530894 * __this, int32_t ___index0, const MethodInfo* method);
#define SyncList_1_RemoveAt_m20766587(__this, ___index0, method) ((  void (*) (SyncList_1_t3645530894 *, int32_t, const MethodInfo*))SyncList_1_RemoveAt_m20766587_gshared)(__this, ___index0, method)
// System.Void UnityEngine.Networking.SyncList`1<System.Object>::Dirty(System.Int32)
extern "C"  void SyncList_1_Dirty_m1369571806_gshared (SyncList_1_t3645530894 * __this, int32_t ___index0, const MethodInfo* method);
#define SyncList_1_Dirty_m1369571806(__this, ___index0, method) ((  void (*) (SyncList_1_t3645530894 *, int32_t, const MethodInfo*))SyncList_1_Dirty_m1369571806_gshared)(__this, ___index0, method)
// T UnityEngine.Networking.SyncList`1<System.Object>::get_Item(System.Int32)
extern "C"  Il2CppObject * SyncList_1_get_Item_m172423547_gshared (SyncList_1_t3645530894 * __this, int32_t ___i0, const MethodInfo* method);
#define SyncList_1_get_Item_m172423547(__this, ___i0, method) ((  Il2CppObject * (*) (SyncList_1_t3645530894 *, int32_t, const MethodInfo*))SyncList_1_get_Item_m172423547_gshared)(__this, ___i0, method)
// System.Void UnityEngine.Networking.SyncList`1<System.Object>::set_Item(System.Int32,T)
extern "C"  void SyncList_1_set_Item_m4107841040_gshared (SyncList_1_t3645530894 * __this, int32_t ___i0, Il2CppObject * ___value1, const MethodInfo* method);
#define SyncList_1_set_Item_m4107841040(__this, ___i0, ___value1, method) ((  void (*) (SyncList_1_t3645530894 *, int32_t, Il2CppObject *, const MethodInfo*))SyncList_1_set_Item_m4107841040_gshared)(__this, ___i0, ___value1, method)
// System.Collections.Generic.IEnumerator`1<T> UnityEngine.Networking.SyncList`1<System.Object>::GetEnumerator()
extern "C"  Il2CppObject* SyncList_1_GetEnumerator_m1059025845_gshared (SyncList_1_t3645530894 * __this, const MethodInfo* method);
#define SyncList_1_GetEnumerator_m1059025845(__this, method) ((  Il2CppObject* (*) (SyncList_1_t3645530894 *, const MethodInfo*))SyncList_1_GetEnumerator_m1059025845_gshared)(__this, method)
// System.Collections.IEnumerator UnityEngine.Networking.SyncList`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Il2CppObject * SyncList_1_System_Collections_IEnumerable_GetEnumerator_m2736782484_gshared (SyncList_1_t3645530894 * __this, const MethodInfo* method);
#define SyncList_1_System_Collections_IEnumerable_GetEnumerator_m2736782484(__this, method) ((  Il2CppObject * (*) (SyncList_1_t3645530894 *, const MethodInfo*))SyncList_1_System_Collections_IEnumerable_GetEnumerator_m2736782484_gshared)(__this, method)
