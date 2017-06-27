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

// GSN.Skill.Games.Common.Client.Game.ReplayViewMode
struct ReplayViewMode_t3456706617;
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t3943999495;
// GSN.Skill.Games.Common.Client.UIHudBase
struct UIHudBase_t4131117260;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_GSN_Skill_Games_Common_Utils_Game186645125.h"
#include "AssemblyU2DCSharp_GSN_Skill_Games_Common_Client_UI4131117260.h"

// System.Void GSN.Skill.Games.Common.Client.Game.ReplayViewMode::.ctor()
extern "C"  void ReplayViewMode__ctor_m2783878652 (ReplayViewMode_t3456706617 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GSN.Skill.Games.Common.Client.Game.ReplayViewMode::get_AbortTitle()
extern "C"  String_t* ReplayViewMode_get_AbortTitle_m3007231808 (ReplayViewMode_t3456706617 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GSN.Skill.Games.Common.Client.Game.ReplayViewMode::get_AbortMessage()
extern "C"  String_t* ReplayViewMode_get_AbortMessage_m2851703059 (ReplayViewMode_t3456706617 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Client.Game.ReplayViewMode::Configure(System.Collections.Generic.Dictionary`2<System.String,System.String>)
extern "C"  void ReplayViewMode_Configure_m547629641 (ReplayViewMode_t3456706617 * __this, Dictionary_2_t3943999495 * ___joinRecord0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GSN.Skill.Games.Common.Utils.GameSessionExitMode GSN.Skill.Games.Common.Client.Game.ReplayViewMode::get_exitMode()
extern "C"  int32_t ReplayViewMode_get_exitMode_m3331713276 (ReplayViewMode_t3456706617 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Client.Game.ReplayViewMode::OnAbort()
extern "C"  void ReplayViewMode_OnAbort_m2281074105 (ReplayViewMode_t3456706617 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Client.Game.ReplayViewMode::ShowGameHud(GSN.Skill.Games.Common.Client.UIHudBase)
extern "C"  void ReplayViewMode_ShowGameHud_m2946931776 (ReplayViewMode_t3456706617 * __this, UIHudBase_t4131117260 * ___hud0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Client.Game.ReplayViewMode::Init(System.Collections.Generic.Dictionary`2<System.String,System.String>)
extern "C"  void ReplayViewMode_Init_m1276865147 (ReplayViewMode_t3456706617 * __this, Dictionary_2_t3943999495 * ___joinRecord0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GSN.Skill.Games.Common.Client.Game.ReplayViewMode::GetPreloadCount()
extern "C"  int32_t ReplayViewMode_GetPreloadCount_m319265690 (ReplayViewMode_t3456706617 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator GSN.Skill.Games.Common.Client.Game.ReplayViewMode::Preload(System.Collections.Generic.Dictionary`2<System.String,System.String>)
extern "C"  Il2CppObject * ReplayViewMode_Preload_m3074488808 (ReplayViewMode_t3456706617 * __this, Dictionary_2_t3943999495 * ___joinRecord0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GSN.Skill.Games.Common.Client.Game.ReplayViewMode::IsTutorial()
extern "C"  bool ReplayViewMode_IsTutorial_m3720535098 (ReplayViewMode_t3456706617 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Client.Game.ReplayViewMode::OnLoadingComplete()
extern "C"  void ReplayViewMode_OnLoadingComplete_m1382555000 (ReplayViewMode_t3456706617 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
