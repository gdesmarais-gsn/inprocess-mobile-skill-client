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

// UnityEngine.UI.Extensions.ScrollRectEx
struct ScrollRectEx_t4232992262;
// UnityEngine.UI.Extensions.ScrollRectEx/ScrollPastTopEvent
struct ScrollPastTopEvent_t1138129402;
// UnityEngine.UI.Extensions.ScrollRectEx/ScrollPastBottomEvent
struct ScrollPastBottomEvent_t183467032;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t1599784723;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_UnityEngine_UI_Extensions_Scroll1138129402.h"
#include "AssemblyU2DCSharp_UnityEngine_UI_Extensions_ScrollR183467032.h"
#include "UnityEngine_UI_UnityEngine_EventSystems_PointerEve1599784723.h"

// System.Void UnityEngine.UI.Extensions.ScrollRectEx::.ctor()
extern "C"  void ScrollRectEx__ctor_m2562796460 (ScrollRectEx_t4232992262 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Extensions.ScrollRectEx/ScrollPastTopEvent UnityEngine.UI.Extensions.ScrollRectEx::get_onScrollPastTop()
extern "C"  ScrollPastTopEvent_t1138129402 * ScrollRectEx_get_onScrollPastTop_m1561349023 (ScrollRectEx_t4232992262 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Extensions.ScrollRectEx::set_onScrollPastTop(UnityEngine.UI.Extensions.ScrollRectEx/ScrollPastTopEvent)
extern "C"  void ScrollRectEx_set_onScrollPastTop_m1262124620 (ScrollRectEx_t4232992262 * __this, ScrollPastTopEvent_t1138129402 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Extensions.ScrollRectEx/ScrollPastBottomEvent UnityEngine.UI.Extensions.ScrollRectEx::get_onScrollPastBottom()
extern "C"  ScrollPastBottomEvent_t183467032 * ScrollRectEx_get_onScrollPastBottom_m492731971 (ScrollRectEx_t4232992262 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Extensions.ScrollRectEx::set_onScrollPastBottom(UnityEngine.UI.Extensions.ScrollRectEx/ScrollPastBottomEvent)
extern "C"  void ScrollRectEx_set_onScrollPastBottom_m2073548616 (ScrollRectEx_t4232992262 * __this, ScrollPastBottomEvent_t183467032 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Extensions.ScrollRectEx::ScrollPastTop()
extern "C"  void ScrollRectEx_ScrollPastTop_m2589004584 (ScrollRectEx_t4232992262 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Extensions.ScrollRectEx::ScrollPastBottom()
extern "C"  void ScrollRectEx_ScrollPastBottom_m2694274628 (ScrollRectEx_t4232992262 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Extensions.ScrollRectEx::OnInitializePotentialDrag(UnityEngine.EventSystems.PointerEventData)
extern "C"  void ScrollRectEx_OnInitializePotentialDrag_m3645214479 (ScrollRectEx_t4232992262 * __this, PointerEventData_t1599784723 * ___eventData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Extensions.ScrollRectEx::OnDrag(UnityEngine.EventSystems.PointerEventData)
extern "C"  void ScrollRectEx_OnDrag_m1009699595 (ScrollRectEx_t4232992262 * __this, PointerEventData_t1599784723 * ___eventData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Extensions.ScrollRectEx::OnBeginDrag(UnityEngine.EventSystems.PointerEventData)
extern "C"  void ScrollRectEx_OnBeginDrag_m3858003072 (ScrollRectEx_t4232992262 * __this, PointerEventData_t1599784723 * ___eventData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Extensions.ScrollRectEx::OnEndDrag(UnityEngine.EventSystems.PointerEventData)
extern "C"  void ScrollRectEx_OnEndDrag_m4126585588 (ScrollRectEx_t4232992262 * __this, PointerEventData_t1599784723 * ___eventData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Extensions.ScrollRectEx::OnScroll(UnityEngine.EventSystems.PointerEventData)
extern "C"  void ScrollRectEx_OnScroll_m3947518578 (ScrollRectEx_t4232992262 * __this, PointerEventData_t1599784723 * ___eventData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.Extensions.ScrollRectEx::CalculateContentRelativeThreshold()
extern "C"  float ScrollRectEx_CalculateContentRelativeThreshold_m3278662202 (ScrollRectEx_t4232992262 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
