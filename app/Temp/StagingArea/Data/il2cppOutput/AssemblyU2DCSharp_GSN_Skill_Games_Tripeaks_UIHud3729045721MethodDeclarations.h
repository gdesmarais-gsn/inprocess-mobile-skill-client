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

// GSN.Skill.Games.Tripeaks.UIHud
struct UIHud_t3729045721;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;
// GSN.Skill.Games.Common.Events.IModelEvent
struct IModelEvent_t642686546;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"

// System.Void GSN.Skill.Games.Tripeaks.UIHud::.ctor()
extern "C"  void UIHud__ctor_m2744917487 (UIHud_t3729045721 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Tripeaks.UIHud::configure(System.Boolean,System.Boolean,System.Boolean)
extern "C"  void UIHud_configure_m3604098310 (UIHud_t3729045721 * __this, bool ___holdEnabled0, bool ___oneShotWildEnabled1, bool ___reshuffleEnabled2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Tripeaks.UIHud::setScoreValue(System.Int32)
extern "C"  void UIHud_setScoreValue_m2020336911 (UIHud_t3729045721 * __this, int32_t ___score0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Tripeaks.UIHud::setTutorialAnimController()
extern "C"  void UIHud_setTutorialAnimController_m964027722 (UIHud_t3729045721 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Tripeaks.UIHud::setTimeValue(System.Int32)
extern "C"  void UIHud_setTimeValue_m3739584670 (UIHud_t3729045721 * __this, int32_t ___time0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Tripeaks.UIHud::showReshuffle()
extern "C"  void UIHud_showReshuffle_m2144242100 (UIHud_t3729045721 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Tripeaks.UIHud::setStreak(System.Int32)
extern "C"  void UIHud_setStreak_m913486202 (UIHud_t3729045721 * __this, int32_t ___streakValue0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Tripeaks.UIHud::showReshuffleButton()
extern "C"  void UIHud_showReshuffleButton_m99225396 (UIHud_t3729045721 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Tripeaks.UIHud::hideReshuffleButton()
extern "C"  void UIHud_hideReshuffleButton_m777534725 (UIHud_t3729045721 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Tripeaks.UIHud::showHoldSlot()
extern "C"  void UIHud_showHoldSlot_m548016295 (UIHud_t3729045721 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Tripeaks.UIHud::hideHoldSlot()
extern "C"  void UIHud_hideHoldSlot_m423686360 (UIHud_t3729045721 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Tripeaks.UIHud::showReplayHud()
extern "C"  void UIHud_showReplayHud_m1741514130 (UIHud_t3729045721 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Tripeaks.UIHud::onCloseClicked()
extern "C"  void UIHud_onCloseClicked_m4240852151 (UIHud_t3729045721 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Tripeaks.UIHud::showAbortDialog()
extern "C"  void UIHud_showAbortDialog_m3528885408 (UIHud_t3729045721 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Tripeaks.UIHud::SpeedUpTimeDown()
extern "C"  void UIHud_SpeedUpTimeDown_m3586741430 (UIHud_t3729045721 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Tripeaks.UIHud::SpeedUpTimeUp()
extern "C"  void UIHud_SpeedUpTimeUp_m1114039197 (UIHud_t3729045721 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator GSN.Skill.Games.Tripeaks.UIHud::SpeedUpTimeTap()
extern "C"  Il2CppObject * UIHud_SpeedUpTimeTap_m1204119779 (UIHud_t3729045721 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Tripeaks.UIHud::animateHUDIn()
extern "C"  void UIHud_animateHUDIn_m246563966 (UIHud_t3729045721 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Tripeaks.UIHud::animateStreakMeterIn()
extern "C"  void UIHud_animateStreakMeterIn_m1703797844 (UIHud_t3729045721 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Tripeaks.UIHud::animateTimerIn()
extern "C"  void UIHud_animateTimerIn_m2614467654 (UIHud_t3729045721 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Tripeaks.UIHud::animateHUDOut()
extern "C"  void UIHud_animateHUDOut_m694185119 (UIHud_t3729045721 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Tripeaks.UIHud::onShowBannerEvent(GSN.Skill.Games.Common.Events.IModelEvent)
extern "C"  void UIHud_onShowBannerEvent_m1413628557 (UIHud_t3729045721 * __this, Il2CppObject * ___e0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Tripeaks.UIHud::showEndGameBanner(System.String)
extern "C"  void UIHud_showEndGameBanner_m1934789603 (UIHud_t3729045721 * __this, String_t* ___endGameReason0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator GSN.Skill.Games.Tripeaks.UIHud::startVolcanoEffect()
extern "C"  Il2CppObject * UIHud_startVolcanoEffect_m3619009678 (UIHud_t3729045721 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
