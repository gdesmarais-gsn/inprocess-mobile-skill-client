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

// GSN.Skill.Games.Common.Client.Game.StandardViewMode
struct StandardViewMode_t3768017161;
// GSN.Skill.Games.Common.Client.UIStartScreenBase
struct UIStartScreenBase_t566610785;
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t3943999495;
// GSN.Skill.Games.Common.Client.UIHudBase
struct UIHudBase_t4131117260;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_GSN_Skill_Games_Common_Client_UIS566610785.h"
#include "AssemblyU2DCSharp_GSN_Skill_Games_Common_Utils_Game186645125.h"
#include "AssemblyU2DCSharp_GSN_Skill_Games_Common_Client_UI4131117260.h"

// System.Void GSN.Skill.Games.Common.Client.Game.StandardViewMode::.ctor(GSN.Skill.Games.Common.Client.UIStartScreenBase)
extern "C"  void StandardViewMode__ctor_m2143982823 (StandardViewMode_t3768017161 * __this, UIStartScreenBase_t566610785 * ___startScreen0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GSN.Skill.Games.Common.Client.Game.StandardViewMode::get_AbortTitle()
extern "C"  String_t* StandardViewMode_get_AbortTitle_m3242193122 (StandardViewMode_t3768017161 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GSN.Skill.Games.Common.Client.Game.StandardViewMode::get_AbortMessage()
extern "C"  String_t* StandardViewMode_get_AbortMessage_m907738639 (StandardViewMode_t3768017161 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Client.Game.StandardViewMode::Configure(System.Collections.Generic.Dictionary`2<System.String,System.String>)
extern "C"  void StandardViewMode_Configure_m1084001785 (StandardViewMode_t3768017161 * __this, Dictionary_2_t3943999495 * ___joinRecord0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GSN.Skill.Games.Common.Utils.GameSessionExitMode GSN.Skill.Games.Common.Client.Game.StandardViewMode::get_exitMode()
extern "C"  int32_t StandardViewMode_get_exitMode_m3841041814 (StandardViewMode_t3768017161 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Client.Game.StandardViewMode::OnAbort()
extern "C"  void StandardViewMode_OnAbort_m3516108121 (StandardViewMode_t3768017161 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Client.Game.StandardViewMode::ShowGameHud(GSN.Skill.Games.Common.Client.UIHudBase)
extern "C"  void StandardViewMode_ShowGameHud_m194811906 (StandardViewMode_t3768017161 * __this, UIHudBase_t4131117260 * ___hud0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Client.Game.StandardViewMode::Init(System.Collections.Generic.Dictionary`2<System.String,System.String>)
extern "C"  void StandardViewMode_Init_m1303776439 (StandardViewMode_t3768017161 * __this, Dictionary_2_t3943999495 * ___joinRecord0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GSN.Skill.Games.Common.Client.Game.StandardViewMode::GetPreloadCount()
extern "C"  int32_t StandardViewMode_GetPreloadCount_m4037182920 (StandardViewMode_t3768017161 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator GSN.Skill.Games.Common.Client.Game.StandardViewMode::Preload(System.Collections.Generic.Dictionary`2<System.String,System.String>)
extern "C"  Il2CppObject * StandardViewMode_Preload_m3534646874 (StandardViewMode_t3768017161 * __this, Dictionary_2_t3943999495 * ___joinRecord0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GSN.Skill.Games.Common.Client.Game.StandardViewMode::IsTutorial()
extern "C"  bool StandardViewMode_IsTutorial_m1897005016 (StandardViewMode_t3768017161 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Client.Game.StandardViewMode::OnLoadingComplete()
extern "C"  void StandardViewMode_OnLoadingComplete_m3572310298 (StandardViewMode_t3768017161 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
