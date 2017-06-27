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

// GSN.Skill.Games.Common.Client.UIStartScreenBase
struct UIStartScreenBase_t566610785;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t3943999495;
// System.Action
struct Action_t3226471752;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_GSN_Skill_Games_Common_Client_UISt19800425.h"
#include "AssemblyU2DCSharp_GSN_Skill_Games_Common_Utils_Game186645125.h"
#include "System_Core_System_Action3226471752.h"

// System.Void GSN.Skill.Games.Common.Client.UIStartScreenBase::.ctor()
extern "C"  void UIStartScreenBase__ctor_m2973318422 (UIStartScreenBase_t566610785 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single GSN.Skill.Games.Common.Client.UIStartScreenBase::get_count()
extern "C"  float UIStartScreenBase_get_count_m3739175940 (UIStartScreenBase_t566610785 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Client.UIStartScreenBase::set_count(System.Single)
extern "C"  void UIStartScreenBase_set_count_m1378958449 (UIStartScreenBase_t566610785 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GSN.Skill.Games.Common.Client.UIStartScreenBase::get_autoStart()
extern "C"  bool UIStartScreenBase_get_autoStart_m257408178 (UIStartScreenBase_t566610785 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Client.UIStartScreenBase::set_autoStart(System.Boolean)
extern "C"  void UIStartScreenBase_set_autoStart_m1873506787 (UIStartScreenBase_t566610785 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Client.UIStartScreenBase::Start()
extern "C"  void UIStartScreenBase_Start_m1443682 (UIStartScreenBase_t566610785 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GSN.Skill.Games.Common.Client.UIStartScreenBase::SwitchTab(GSN.Skill.Games.Common.Client.UIStartScreenBase/InfoTab)
extern "C"  bool UIStartScreenBase_SwitchTab_m151837294 (UIStartScreenBase_t566610785 * __this, int32_t ___toTab0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Client.UIStartScreenBase::ShowTips()
extern "C"  void UIStartScreenBase_ShowTips_m2323051795 (UIStartScreenBase_t566610785 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Client.UIStartScreenBase::ShowDetails()
extern "C"  void UIStartScreenBase_ShowDetails_m151350147 (UIStartScreenBase_t566610785 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Client.UIStartScreenBase::ShowSettings()
extern "C"  void UIStartScreenBase_ShowSettings_m3054467336 (UIStartScreenBase_t566610785 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Client.UIStartScreenBase::SetupTabs()
extern "C"  void UIStartScreenBase_SetupTabs_m1460411569 (UIStartScreenBase_t566610785 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Client.UIStartScreenBase::OnLoadingComplete()
extern "C"  void UIStartScreenBase_OnLoadingComplete_m2161702058 (UIStartScreenBase_t566610785 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator GSN.Skill.Games.Common.Client.UIStartScreenBase::Hide()
extern "C"  Il2CppObject * UIStartScreenBase_Hide_m2592671784 (UIStartScreenBase_t566610785 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Client.UIStartScreenBase::OnStartButton()
extern "C"  void UIStartScreenBase_OnStartButton_m1929623437 (UIStartScreenBase_t566610785 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Client.UIStartScreenBase::OnCloseClick()
extern "C"  void UIStartScreenBase_OnCloseClick_m1100741003 (UIStartScreenBase_t566610785 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Client.UIStartScreenBase::OnCloseClickInternal(GSN.Skill.Games.Common.Utils.GameSessionExitMode)
extern "C"  void UIStartScreenBase_OnCloseClickInternal_m1857310673 (UIStartScreenBase_t566610785 * __this, int32_t ___exitMode0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator GSN.Skill.Games.Common.Client.UIStartScreenBase::Preload(System.Collections.Generic.Dictionary`2<System.String,System.String>)
extern "C"  Il2CppObject * UIStartScreenBase_Preload_m1290888810 (UIStartScreenBase_t566610785 * __this, Dictionary_2_t3943999495 * ___joinRecord0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GSN.Skill.Games.Common.Client.UIStartScreenBase::GetPreloadCount()
extern "C"  int32_t UIStartScreenBase_GetPreloadCount_m2878270776 (UIStartScreenBase_t566610785 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator GSN.Skill.Games.Common.Client.UIStartScreenBase::bringUpTimerAfterTime(System.Action)
extern "C"  Il2CppObject * UIStartScreenBase_bringUpTimerAfterTime_m2063427694 (UIStartScreenBase_t566610785 * __this, Action_t3226471752 * ___doneAction0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Client.UIStartScreenBase::HideStartScreen()
extern "C"  void UIStartScreenBase_HideStartScreen_m1227534822 (UIStartScreenBase_t566610785 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Client.UIStartScreenBase::OnApplicationPause(System.Boolean)
extern "C"  void UIStartScreenBase_OnApplicationPause_m1254679560 (UIStartScreenBase_t566610785 * __this, bool ___paused0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
