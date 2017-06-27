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

// UnityEngine.UI.Extensions.HorizontalScrollSnap
struct HorizontalScrollSnap_t3431010905;
// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t1612828712;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t1599784723;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "UnityEngine_UI_UnityEngine_EventSystems_PointerEve1599784723.h"

// System.Void UnityEngine.UI.Extensions.HorizontalScrollSnap::.ctor()
extern "C"  void HorizontalScrollSnap__ctor_m2504637133 (HorizontalScrollSnap_t3431010905 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Extensions.HorizontalScrollSnap::Awake()
extern "C"  void HorizontalScrollSnap_Awake_m614408642 (HorizontalScrollSnap_t3431010905 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Extensions.HorizontalScrollSnap::Init()
extern "C"  void HorizontalScrollSnap_Init_m4274661975 (HorizontalScrollSnap_t3431010905 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Extensions.HorizontalScrollSnap::Update()
extern "C"  void HorizontalScrollSnap_Update_m1657024612 (HorizontalScrollSnap_t3431010905 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Extensions.HorizontalScrollSnap::PushPage()
extern "C"  void HorizontalScrollSnap_PushPage_m3166949630 (HorizontalScrollSnap_t3431010905 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Extensions.HorizontalScrollSnap::PopPage()
extern "C"  void HorizontalScrollSnap_PopPage_m1659909389 (HorizontalScrollSnap_t3431010905 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Extensions.HorizontalScrollSnap::NextPageCommand()
extern "C"  void HorizontalScrollSnap_NextPageCommand_m1932200966 (HorizontalScrollSnap_t3431010905 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Extensions.HorizontalScrollSnap::PrevPageCommand()
extern "C"  void HorizontalScrollSnap_PrevPageCommand_m1494015854 (HorizontalScrollSnap_t3431010905 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.UI.Extensions.HorizontalScrollSnap::PagePostionToContainerPosition(UnityEngine.Vector3)
extern "C"  Vector3_t2243707580  HorizontalScrollSnap_PagePostionToContainerPosition_m1862088168 (HorizontalScrollSnap_t3431010905 * __this, Vector3_t2243707580  ___pagePosition0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.UI.Extensions.HorizontalScrollSnap::FindClosestFrom(UnityEngine.Vector3,System.Collections.Generic.List`1<UnityEngine.Vector3>)
extern "C"  Vector3_t2243707580  HorizontalScrollSnap_FindClosestFrom_m3214579895 (HorizontalScrollSnap_t3431010905 * __this, Vector3_t2243707580  ___start0, List_1_t1612828712 * ___localPositions1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.UI.Extensions.HorizontalScrollSnap::CurrentPage()
extern "C"  int32_t HorizontalScrollSnap_CurrentPage_m765188597 (HorizontalScrollSnap_t3431010905 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.UI.Extensions.HorizontalScrollSnap::ActualPage()
extern "C"  int32_t HorizontalScrollSnap_ActualPage_m1556825790 (HorizontalScrollSnap_t3431010905 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Extensions.HorizontalScrollSnap::ChangeBulletsInfo(System.Int32)
extern "C"  void HorizontalScrollSnap_ChangeBulletsInfo_m1501685817 (HorizontalScrollSnap_t3431010905 * __this, int32_t ___currentPageIndex0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Extensions.HorizontalScrollSnap::CreateBullets()
extern "C"  void HorizontalScrollSnap_CreateBullets_m1653885264 (HorizontalScrollSnap_t3431010905 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Extensions.HorizontalScrollSnap::DistributePages()
extern "C"  void HorizontalScrollSnap_DistributePages_m660388920 (HorizontalScrollSnap_t3431010905 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Extensions.HorizontalScrollSnap::SetCurrentPage(System.Int32)
extern "C"  void HorizontalScrollSnap_SetCurrentPage_m713716774 (HorizontalScrollSnap_t3431010905 * __this, int32_t ___pageIndex0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Extensions.HorizontalScrollSnap::OnBeginDrag(UnityEngine.EventSystems.PointerEventData)
extern "C"  void HorizontalScrollSnap_OnBeginDrag_m146883495 (HorizontalScrollSnap_t3431010905 * __this, PointerEventData_t1599784723 * ___eventData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Extensions.HorizontalScrollSnap::OnEndDrag(UnityEngine.EventSystems.PointerEventData)
extern "C"  void HorizontalScrollSnap_OnEndDrag_m3163106455 (HorizontalScrollSnap_t3431010905 * __this, PointerEventData_t1599784723 * ___eventData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Extensions.HorizontalScrollSnap::OnDrag(UnityEngine.EventSystems.PointerEventData)
extern "C"  void HorizontalScrollSnap_OnDrag_m3127962610 (HorizontalScrollSnap_t3431010905 * __this, PointerEventData_t1599784723 * ___eventData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
