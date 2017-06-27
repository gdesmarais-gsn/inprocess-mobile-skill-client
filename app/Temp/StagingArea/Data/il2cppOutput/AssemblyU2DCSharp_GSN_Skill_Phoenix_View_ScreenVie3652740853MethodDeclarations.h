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

// GSN.Skill.Phoenix.View.ScreenView
struct ScreenView_t3652740853;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;
// UnityEngine.Transform
struct Transform_t3275118058;
// GSN.Skill.Events.IEvent
struct IEvent_t972216987;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Transform3275118058.h"

// System.Void GSN.Skill.Phoenix.View.ScreenView::.ctor()
extern "C"  void ScreenView__ctor_m264586029 (ScreenView_t3652740853 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.View.ScreenView::OnEnable()
extern "C"  void ScreenView_OnEnable_m3051568173 (ScreenView_t3652740853 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.View.ScreenView::OnDisable()
extern "C"  void ScreenView_OnDisable_m4012795516 (ScreenView_t3652740853 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single GSN.Skill.Phoenix.View.ScreenView::get_AnimateScreenInTime()
extern "C"  float ScreenView_get_AnimateScreenInTime_m1304034563 (ScreenView_t3652740853 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.View.ScreenView::set_AnimateScreenInTime(System.Single)
extern "C"  void ScreenView_set_AnimateScreenInTime_m3224012602 (ScreenView_t3652740853 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single GSN.Skill.Phoenix.View.ScreenView::get_AnimateScreenOutTime()
extern "C"  float ScreenView_get_AnimateScreenOutTime_m748762992 (ScreenView_t3652740853 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.View.ScreenView::set_AnimateScreenOutTime(System.Single)
extern "C"  void ScreenView_set_AnimateScreenOutTime_m873689933 (ScreenView_t3652740853 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.View.ScreenView::OnShow()
extern "C"  void ScreenView_OnShow_m3873642951 (ScreenView_t3652740853 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.View.ScreenView::OnHide()
extern "C"  void ScreenView_OnHide_m248291718 (ScreenView_t3652740853 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator GSN.Skill.Phoenix.View.ScreenView::AnimateScreenOut()
extern "C"  Il2CppObject * ScreenView_AnimateScreenOut_m3719165994 (ScreenView_t3652740853 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator GSN.Skill.Phoenix.View.ScreenView::AnimateScreenIn()
extern "C"  Il2CppObject * ScreenView_AnimateScreenIn_m4036235967 (ScreenView_t3652740853 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.View.ScreenView::Hide()
extern "C"  void ScreenView_Hide_m1811812405 (ScreenView_t3652740853 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.View.ScreenView::Show()
extern "C"  void ScreenView_Show_m1959813554 (ScreenView_t3652740853 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.View.ScreenView::ClearChildrenObjects(UnityEngine.Transform)
extern "C"  void ScreenView_ClearChildrenObjects_m4192001718 (ScreenView_t3652740853 * __this, Transform_t3275118058 * ___listTransform0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.View.ScreenView::OnFetchScreenBeginEvent(GSN.Skill.Events.IEvent)
extern "C"  void ScreenView_OnFetchScreenBeginEvent_m214403864 (ScreenView_t3652740853 * __this, Il2CppObject * ___e0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.View.ScreenView::OnFetchScreenCompleteEvent(GSN.Skill.Events.IEvent)
extern "C"  void ScreenView_OnFetchScreenCompleteEvent_m893426432 (ScreenView_t3652740853 * __this, Il2CppObject * ___e0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.View.ScreenView::ShowActivityIndicator()
extern "C"  void ScreenView_ShowActivityIndicator_m3705232118 (ScreenView_t3652740853 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.View.ScreenView::HideActivityIndicator()
extern "C"  void ScreenView_HideActivityIndicator_m3885347445 (ScreenView_t3652740853 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
