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

// GSN.Skill.Phoenix.View.LoadScreenView
struct LoadScreenView_t768218321;
// GSN.Skill.Events.IEvent
struct IEvent_t972216987;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;
// GSN.Skill.Phoenix.View.PopupView
struct PopupView_t1248909057;
// System.String
struct String_t;
// UnityEngine.Transform
struct Transform_t3275118058;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "UnityEngine_UnityEngine_Transform3275118058.h"

// System.Void GSN.Skill.Phoenix.View.LoadScreenView::.ctor()
extern "C"  void LoadScreenView__ctor_m821143411 (LoadScreenView_t768218321 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.View.LoadScreenView::Awake()
extern "C"  void LoadScreenView_Awake_m496321956 (LoadScreenView_t768218321 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.View.LoadScreenView::OnEnable()
extern "C"  void LoadScreenView_OnEnable_m1724403455 (LoadScreenView_t768218321 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.View.LoadScreenView::OnDisable()
extern "C"  void LoadScreenView_OnDisable_m2439815864 (LoadScreenView_t768218321 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.View.LoadScreenView::OnStartupLoadComplete(GSN.Skill.Events.IEvent)
extern "C"  void LoadScreenView_OnStartupLoadComplete_m212814911 (LoadScreenView_t768218321 * __this, Il2CppObject * ___e0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator GSN.Skill.Phoenix.View.LoadScreenView::AnimateScreenOut()
extern "C"  Il2CppObject * LoadScreenView_AnimateScreenOut_m1535868322 (LoadScreenView_t768218321 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator GSN.Skill.Phoenix.View.LoadScreenView::AnimateScreenIn()
extern "C"  Il2CppObject * LoadScreenView_AnimateScreenIn_m2510184625 (LoadScreenView_t768218321 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.View.LoadScreenView::OnUpdateProgressBar(GSN.Skill.Events.IEvent)
extern "C"  void LoadScreenView_OnUpdateProgressBar_m1992120840 (LoadScreenView_t768218321 * __this, Il2CppObject * ___e0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.View.LoadScreenView::UpdateProgressBar(System.Single)
extern "C"  void LoadScreenView_UpdateProgressBar_m4182284467 (LoadScreenView_t768218321 * __this, float ___progress0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.View.LoadScreenView::AnimateBar(System.Single)
extern "C"  void LoadScreenView_AnimateBar_m534657248 (LoadScreenView_t768218321 * __this, float ___progress0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.View.LoadScreenView::OnPopupEvent(GSN.Skill.Events.IEvent)
extern "C"  void LoadScreenView_OnPopupEvent_m3430427251 (LoadScreenView_t768218321 * __this, Il2CppObject * ___e0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GSN.Skill.Phoenix.View.PopupView GSN.Skill.Phoenix.View.LoadScreenView::CreatePopup(System.Int64,System.String,UnityEngine.Transform)
extern "C"  PopupView_t1248909057 * LoadScreenView_CreatePopup_m1210286537 (LoadScreenView_t768218321 * __this, int64_t ___uid0, String_t* ___popupResource1, Transform_t3275118058 * ___popupAnchor2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.View.LoadScreenView::ShowGlobalActivityIndicator(GSN.Skill.Events.IEvent)
extern "C"  void LoadScreenView_ShowGlobalActivityIndicator_m3248272772 (LoadScreenView_t768218321 * __this, Il2CppObject * ___e0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.View.LoadScreenView::HideGlobalActivityIndicator(GSN.Skill.Events.IEvent)
extern "C"  void LoadScreenView_HideGlobalActivityIndicator_m487142599 (LoadScreenView_t768218321 * __this, Il2CppObject * ___e0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator GSN.Skill.Phoenix.View.LoadScreenView::<AnimateScreenOut>__BaseCallProxy0()
extern "C"  Il2CppObject * LoadScreenView_U3CAnimateScreenOutU3E__BaseCallProxy0_m1804612449 (LoadScreenView_t768218321 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator GSN.Skill.Phoenix.View.LoadScreenView::<AnimateScreenIn>__BaseCallProxy1()
extern "C"  Il2CppObject * LoadScreenView_U3CAnimateScreenInU3E__BaseCallProxy1_m4229542033 (LoadScreenView_t768218321 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
