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

// GSN.Skill.Games.Common.Client.Game.TutorialViewMode
struct TutorialViewMode_t1368696022;
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

// System.Void GSN.Skill.Games.Common.Client.Game.TutorialViewMode::.ctor()
extern "C"  void TutorialViewMode__ctor_m4169261445 (TutorialViewMode_t1368696022 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GSN.Skill.Games.Common.Client.Game.TutorialViewMode::get_AbortTitle()
extern "C"  String_t* TutorialViewMode_get_AbortTitle_m487425903 (TutorialViewMode_t1368696022 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GSN.Skill.Games.Common.Client.Game.TutorialViewMode::get_AbortMessage()
extern "C"  String_t* TutorialViewMode_get_AbortMessage_m909563460 (TutorialViewMode_t1368696022 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Client.Game.TutorialViewMode::Configure(System.Collections.Generic.Dictionary`2<System.String,System.String>)
extern "C"  void TutorialViewMode_Configure_m4097604814 (TutorialViewMode_t1368696022 * __this, Dictionary_2_t3943999495 * ___joinRecord0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GSN.Skill.Games.Common.Utils.GameSessionExitMode GSN.Skill.Games.Common.Client.Game.TutorialViewMode::get_exitMode()
extern "C"  int32_t TutorialViewMode_get_exitMode_m3703147661 (TutorialViewMode_t1368696022 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Client.Game.TutorialViewMode::ShowGameHud(GSN.Skill.Games.Common.Client.UIHudBase)
extern "C"  void TutorialViewMode_ShowGameHud_m4088213589 (TutorialViewMode_t1368696022 * __this, UIHudBase_t4131117260 * ___hud0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Client.Game.TutorialViewMode::Init(System.Collections.Generic.Dictionary`2<System.String,System.String>)
extern "C"  void TutorialViewMode_Init_m873716312 (TutorialViewMode_t1368696022 * __this, Dictionary_2_t3943999495 * ___joinRecord0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GSN.Skill.Games.Common.Client.Game.TutorialViewMode::GetPreloadCount()
extern "C"  int32_t TutorialViewMode_GetPreloadCount_m2367023103 (TutorialViewMode_t1368696022 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator GSN.Skill.Games.Common.Client.Game.TutorialViewMode::Preload(System.Collections.Generic.Dictionary`2<System.String,System.String>)
extern "C"  Il2CppObject * TutorialViewMode_Preload_m88021197 (TutorialViewMode_t1368696022 * __this, Dictionary_2_t3943999495 * ___joinRecord0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Client.Game.TutorialViewMode::OnLoadingComplete()
extern "C"  void TutorialViewMode_OnLoadingComplete_m3435124387 (TutorialViewMode_t1368696022 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Client.Game.TutorialViewMode::OnAbort()
extern "C"  void TutorialViewMode_OnAbort_m3282275270 (TutorialViewMode_t1368696022 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
