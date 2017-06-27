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

// GSN.Skill.Games.Common.Client.Game.NewViewBase
struct NewViewBase_t1548807964;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t3943999495;
// GSN.Skill.Games.Common.Client.Game.IViewMode
struct IViewMode_t1215208523;
// GSN.Skill.Games.Common.Events.IModelEvent
struct IModelEvent_t642686546;

#include "codegen/il2cpp-codegen.h"

// System.Void GSN.Skill.Games.Common.Client.Game.NewViewBase::.ctor()
extern "C"  void NewViewBase__ctor_m1564526743 (NewViewBase_t1548807964 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GSN.Skill.Games.Common.Client.Game.NewViewBase GSN.Skill.Games.Common.Client.Game.NewViewBase::get_instance()
extern "C"  NewViewBase_t1548807964 * NewViewBase_get_instance_m1737709426 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Client.Game.NewViewBase::Awake()
extern "C"  void NewViewBase_Awake_m3455202586 (NewViewBase_t1548807964 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Client.Game.NewViewBase::Configure(System.Collections.Generic.Dictionary`2<System.String,System.String>)
extern "C"  void NewViewBase_Configure_m3992772368 (NewViewBase_t1548807964 * __this, Dictionary_2_t3943999495 * ___joinRecord0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GSN.Skill.Games.Common.Client.Game.IViewMode GSN.Skill.Games.Common.Client.Game.NewViewBase::CreateReplayViewMode()
extern "C"  Il2CppObject * NewViewBase_CreateReplayViewMode_m2326808724 (NewViewBase_t1548807964 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Client.Game.NewViewBase::Init(System.Collections.Generic.Dictionary`2<System.String,System.String>)
extern "C"  void NewViewBase_Init_m785876810 (NewViewBase_t1548807964 * __this, Dictionary_2_t3943999495 * ___joinRecord0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Client.Game.NewViewBase::AddEventHandlers()
extern "C"  void NewViewBase_AddEventHandlers_m3572011421 (NewViewBase_t1548807964 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Client.Game.NewViewBase::OnAbort()
extern "C"  void NewViewBase_OnAbort_m3771238816 (NewViewBase_t1548807964 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Client.Game.NewViewBase::OnEndGame(GSN.Skill.Games.Common.Events.IModelEvent)
extern "C"  void NewViewBase_OnEndGame_m1600614379 (NewViewBase_t1548807964 * __this, Il2CppObject * ___e0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Client.Game.NewViewBase::ShowGameHud()
extern "C"  void NewViewBase_ShowGameHud_m1544329919 (NewViewBase_t1548807964 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Client.Game.NewViewBase::HideGameHUD()
extern "C"  void NewViewBase_HideGameHUD_m304492270 (NewViewBase_t1548807964 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Client.Game.NewViewBase::ShaderWarmup()
extern "C"  void NewViewBase_ShaderWarmup_m1596253348 (NewViewBase_t1548807964 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Client.Game.NewViewBase::OnLoadingComplete()
extern "C"  void NewViewBase_OnLoadingComplete_m2553730453 (NewViewBase_t1548807964 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Client.Game.NewViewBase::StartGame()
extern "C"  void NewViewBase_StartGame_m2623818705 (NewViewBase_t1548807964 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Client.Game.NewViewBase::SkipStartScreen()
extern "C"  void NewViewBase_SkipStartScreen_m884877284 (NewViewBase_t1548807964 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Client.Game.NewViewBase::ReadyToStart()
extern "C"  void NewViewBase_ReadyToStart_m3576298803 (NewViewBase_t1548807964 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Client.Game.NewViewBase::<Init>m__0()
extern "C"  void NewViewBase_U3CInitU3Em__0_m3555386950 (NewViewBase_t1548807964 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
