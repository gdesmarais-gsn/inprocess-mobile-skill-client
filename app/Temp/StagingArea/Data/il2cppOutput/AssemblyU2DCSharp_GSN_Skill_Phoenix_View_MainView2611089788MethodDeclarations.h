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

// GSN.Skill.Phoenix.View.MainView
struct MainView_t2611089788;
// GSN.Skill.Events.IEvent
struct IEvent_t972216987;
// UnityEngine.Transform
struct Transform_t3275118058;
// GSN.Skill.Phoenix.View.PopupView
struct PopupView_t1248909057;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Transform3275118058.h"
#include "mscorlib_System_String2029220233.h"

// System.Void GSN.Skill.Phoenix.View.MainView::.ctor()
extern "C"  void MainView__ctor_m1474523504 (MainView_t2611089788 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.View.MainView::OnEnable()
extern "C"  void MainView_OnEnable_m3448108980 (MainView_t2611089788 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.View.MainView::OnDisable()
extern "C"  void MainView_OnDisable_m2578995515 (MainView_t2611089788 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.View.MainView::ShowMainScreen()
extern "C"  void MainView_ShowMainScreen_m4279950610 (MainView_t2611089788 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.View.MainView::HideMainScreen()
extern "C"  void MainView_HideMainScreen_m2403350133 (MainView_t2611089788 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.View.MainView::ShowWelcomeScreen()
extern "C"  void MainView_ShowWelcomeScreen_m3242561667 (MainView_t2611089788 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.View.MainView::HideWelcomeScreen()
extern "C"  void MainView_HideWelcomeScreen_m3672344548 (MainView_t2611089788 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.View.MainView::OnInitializePool(GSN.Skill.Events.IEvent)
extern "C"  void MainView_OnInitializePool_m3812899664 (MainView_t2611089788 * __this, Il2CppObject * ___e0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.View.MainView::OnScreenChange(GSN.Skill.Events.IEvent)
extern "C"  void MainView_OnScreenChange_m2305027232 (MainView_t2611089788 * __this, Il2CppObject * ___e0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.View.MainView::OnPopupEvent(GSN.Skill.Events.IEvent)
extern "C"  void MainView_OnPopupEvent_m836867374 (MainView_t2611089788 * __this, Il2CppObject * ___e0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.View.MainView::OnHistoryTileSelect(GSN.Skill.Events.IEvent)
extern "C"  void MainView_OnHistoryTileSelect_m3195326980 (MainView_t2611089788 * __this, Il2CppObject * ___e0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.View.MainView::OnP1StateChange(GSN.Skill.Events.IEvent)
extern "C"  void MainView_OnP1StateChange_m1433996280 (MainView_t2611089788 * __this, Il2CppObject * ___e0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.View.MainView::OnSetTheme(GSN.Skill.Events.IEvent)
extern "C"  void MainView_OnSetTheme_m386084363 (MainView_t2611089788 * __this, Il2CppObject * ___e0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.View.MainView::ClearPopupAnchor(UnityEngine.Transform)
extern "C"  void MainView_ClearPopupAnchor_m617896375 (MainView_t2611089788 * __this, Transform_t3275118058 * ___popupAnchor0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GSN.Skill.Phoenix.View.PopupView GSN.Skill.Phoenix.View.MainView::CreatePopup(System.Int64,System.String,UnityEngine.Transform)
extern "C"  PopupView_t1248909057 * MainView_CreatePopup_m1446043242 (MainView_t2611089788 * __this, int64_t ___uid0, String_t* ___popupResource1, Transform_t3275118058 * ___popupAnchor2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
