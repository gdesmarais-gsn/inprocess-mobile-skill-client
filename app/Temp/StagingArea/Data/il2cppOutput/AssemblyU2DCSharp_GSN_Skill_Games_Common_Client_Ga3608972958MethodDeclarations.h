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

// GSN.Skill.Games.Common.Client.Game.ViewBase
struct ViewBase_t3608972958;
// GSN.Skill.Games.Common.Client.Game.ControllerBase
struct ControllerBase_t4247623737;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t3943999495;
// GSN.Skill.Games.Common.Events.IInputMessage
struct IInputMessage_t3660278550;
// GSN.Skill.Games.Common.Events.IModelEvent
struct IModelEvent_t642686546;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_GSN_Skill_Games_Common_Client_Ga4247623737.h"

// System.Void GSN.Skill.Games.Common.Client.Game.ViewBase::.ctor()
extern "C"  void ViewBase__ctor_m2784434195 (ViewBase_t3608972958 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GSN.Skill.Games.Common.Client.Game.ControllerBase GSN.Skill.Games.Common.Client.Game.ViewBase::get_controller()
extern "C"  ControllerBase_t4247623737 * ViewBase_get_controller_m2079575708 (ViewBase_t3608972958 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Client.Game.ViewBase::set_controller(GSN.Skill.Games.Common.Client.Game.ControllerBase)
extern "C"  void ViewBase_set_controller_m3296616731 (ViewBase_t3608972958 * __this, ControllerBase_t4247623737 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GSN.Skill.Games.Common.Client.Game.ViewBase::get_InReplay()
extern "C"  bool ViewBase_get_InReplay_m3135813152 (ViewBase_t3608972958 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Client.Game.ViewBase::set_InReplay(System.Boolean)
extern "C"  void ViewBase_set_InReplay_m3173247305 (ViewBase_t3608972958 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GSN.Skill.Games.Common.Client.Game.ViewBase GSN.Skill.Games.Common.Client.Game.ViewBase::get_Instance()
extern "C"  ViewBase_t3608972958 * ViewBase_get_Instance_m796410162 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Client.Game.ViewBase::Configure(System.Collections.Generic.Dictionary`2<System.String,System.String>)
extern "C"  void ViewBase_Configure_m1813412678 (ViewBase_t3608972958 * __this, Dictionary_2_t3943999495 * ___joinRecord0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Client.Game.ViewBase::Init(System.Collections.Generic.Dictionary`2<System.String,System.String>)
extern "C"  void ViewBase_Init_m3180957324 (ViewBase_t3608972958 * __this, Dictionary_2_t3943999495 * ___joinRecord0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Client.Game.ViewBase::Render(System.Int32)
extern "C"  void ViewBase_Render_m2960585914 (ViewBase_t3608972958 * __this, int32_t ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Client.Game.ViewBase::Send(GSN.Skill.Games.Common.Events.IInputMessage)
extern "C"  void ViewBase_Send_m3873562149 (ViewBase_t3608972958 * __this, Il2CppObject * ___msg0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Client.Game.ViewBase::SendEndGameMessage()
extern "C"  void ViewBase_SendEndGameMessage_m483078309 (ViewBase_t3608972958 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Client.Game.ViewBase::AddEventHandlers()
extern "C"  void ViewBase_AddEventHandlers_m2863107693 (ViewBase_t3608972958 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Client.Game.ViewBase::OnSync(GSN.Skill.Games.Common.Events.IModelEvent)
extern "C"  void ViewBase_OnSync_m3018313301 (ViewBase_t3608972958 * __this, Il2CppObject * ___e0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Client.Game.ViewBase::OnInputComplete(GSN.Skill.Games.Common.Events.IModelEvent)
extern "C"  void ViewBase_OnInputComplete_m3428073521 (ViewBase_t3608972958 * __this, Il2CppObject * ___e0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator GSN.Skill.Games.Common.Client.Game.ViewBase::WaitForFinalNotarization()
extern "C"  Il2CppObject * ViewBase_WaitForFinalNotarization_m1616108701 (ViewBase_t3608972958 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Client.Game.ViewBase::ImmediatelyStartGameWhenLoadingCompletes()
extern "C"  void ViewBase_ImmediatelyStartGameWhenLoadingCompletes_m3761805365 (ViewBase_t3608972958 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Client.Game.ViewBase::OnAbort()
extern "C"  void ViewBase_OnAbort_m630254606 (ViewBase_t3608972958 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Client.Game.ViewBase::GameClientComplete()
extern "C"  void ViewBase_GameClientComplete_m3010124241 (ViewBase_t3608972958 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Client.Game.ViewBase::OnLoadingComplete()
extern "C"  void ViewBase_OnLoadingComplete_m2042344149 (ViewBase_t3608972958 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Client.Game.ViewBase::LoadComplete()
extern "C"  void ViewBase_LoadComplete_m2006356496 (ViewBase_t3608972958 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator GSN.Skill.Games.Common.Client.Game.ViewBase::StartPreload()
extern "C"  Il2CppObject * ViewBase_StartPreload_m4103932850 (ViewBase_t3608972958 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator GSN.Skill.Games.Common.Client.Game.ViewBase::Preload(System.Collections.Generic.Dictionary`2<System.String,System.String>)
extern "C"  Il2CppObject * ViewBase_Preload_m1198982299 (ViewBase_t3608972958 * __this, Dictionary_2_t3943999495 * ___joinRecord0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Client.Game.ViewBase::ShaderWarmup()
extern "C"  void ViewBase_ShaderWarmup_m2598255746 (ViewBase_t3608972958 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Client.Game.ViewBase::IncrementItemLoaded()
extern "C"  void ViewBase_IncrementItemLoaded_m3239136480 (ViewBase_t3608972958 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator GSN.Skill.Games.Common.Client.Game.ViewBase::GamePreload()
extern "C"  Il2CppObject * ViewBase_GamePreload_m540091888 (ViewBase_t3608972958 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GSN.Skill.Games.Common.Client.Game.ViewBase::GamePreloadCount()
extern "C"  int32_t ViewBase_GamePreloadCount_m1325033261 (ViewBase_t3608972958 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator GSN.Skill.Games.Common.Client.Game.ViewBase::LoadBundles()
extern "C"  Il2CppObject * ViewBase_LoadBundles_m1197876014 (ViewBase_t3608972958 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Client.Game.ViewBase::UnloadBundles()
extern "C"  void ViewBase_UnloadBundles_m2027018145 (ViewBase_t3608972958 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Client.Game.ViewBase::UpdateLoadProgress(System.Single)
extern "C"  void ViewBase_UpdateLoadProgress_m1149092018 (ViewBase_t3608972958 * __this, float ___percent0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
