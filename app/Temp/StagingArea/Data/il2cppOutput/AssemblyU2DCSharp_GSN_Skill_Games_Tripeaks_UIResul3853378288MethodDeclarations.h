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

// GSN.Skill.Games.Tripeaks.UIResults
struct UIResults_t3853378288;
// System.String
struct String_t;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;
// TMPro.TextMeshProUGUI
struct TextMeshProUGUI_t934157183;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_GSN_Skill_Games_Tripeaks_EndGame3448324057.h"
#include "AssemblyU2DCSharp_TMPro_TextMeshProUGUI934157183.h"

// System.Void GSN.Skill.Games.Tripeaks.UIResults::.ctor()
extern "C"  void UIResults__ctor_m2536095396 (UIResults_t3853378288 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Tripeaks.UIResults::setupPanel(GSN.Skill.Games.Tripeaks.EndGameEvent,System.Int32,System.Int32)
extern "C"  void UIResults_setupPanel_m253304857 (UIResults_t3853378288 * __this, EndGameEvent_t3448324057  ___ee0, int32_t ___timeOfDay1, int32_t ___timeRemaining2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Tripeaks.UIResults::ContinueButtonEnabled(System.Boolean)
extern "C"  void UIResults_ContinueButtonEnabled_m2378503197 (UIResults_t3853378288 * __this, bool ___isEnabled0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GSN.Skill.Games.Tripeaks.UIResults::getEndGameReason(System.Int32)
extern "C"  String_t* UIResults_getEndGameReason_m3310835271 (UIResults_t3853378288 * __this, int32_t ___endReason0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Tripeaks.UIResults::onContinueClick()
extern "C"  void UIResults_onContinueClick_m3386748404 (UIResults_t3853378288 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator GSN.Skill.Games.Tripeaks.UIResults::animateResultsOff()
extern "C"  Il2CppObject * UIResults_animateResultsOff_m368912244 (UIResults_t3853378288 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator GSN.Skill.Games.Tripeaks.UIResults::AnimateResultsIn()
extern "C"  Il2CppObject * UIResults_AnimateResultsIn_m3088989826 (UIResults_t3853378288 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Tripeaks.UIResults::AnimateRollingScore(TMPro.TextMeshProUGUI,System.Single,System.Single)
extern "C"  void UIResults_AnimateRollingScore_m1071656545 (UIResults_t3853378288 * __this, TextMeshProUGUI_t934157183 * ___textObject0, float ___fromValue1, float ___toValue2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Tripeaks.UIResults::UpdateTotalScore(System.Single)
extern "C"  void UIResults_UpdateTotalScore_m1659053824 (UIResults_t3853378288 * __this, float ___newPoints0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Tripeaks.UIResults::AnimateRollingTime(System.Single,System.Single)
extern "C"  void UIResults_AnimateRollingTime_m624118379 (UIResults_t3853378288 * __this, float ___fromValue0, float ___toValue1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Tripeaks.UIResults::<AnimateRollingTime>m__0(System.Single)
extern "C"  void UIResults_U3CAnimateRollingTimeU3Em__0_m1950084737 (UIResults_t3853378288 * __this, float ___val0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
