#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// TMPro.TextMeshProUGUI
struct TextMeshProUGUI_t934157183;
// GSN.Skill.Games.Tripeaks.UIStreakCard[]
struct UIStreakCardU5BU5D_t2479047409;
// UnityEngine.Color32[]
struct Color32U5BU5D_t30278651;
// UnityEngine.Animator
struct Animator_t69676727;
// UnityEngine.UI.Button
struct Button_t2872111280;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.RuntimeAnimatorController
struct RuntimeAnimatorController_t670468573;
// GSN.Skill.Games.Tripeaks.UIAbortDialog
struct UIAbortDialog_t1044851848;
// GSN.Skill.Games.Tripeaks.UIHugeWin
struct UIHugeWin_t3990307283;
// GSN.Skill.Games.Tripeaks.CameraShakeFX
struct CameraShakeFX_t68180435;
// System.String
struct String_t;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Games.Tripeaks.UIHud
struct  UIHud_t3729045721  : public MonoBehaviour_t1158329972
{
public:
	// TMPro.TextMeshProUGUI GSN.Skill.Games.Tripeaks.UIHud::scoreText
	TextMeshProUGUI_t934157183 * ___scoreText_2;
	// GSN.Skill.Games.Tripeaks.UIStreakCard[] GSN.Skill.Games.Tripeaks.UIHud::streakCards
	UIStreakCardU5BU5D_t2479047409* ___streakCards_3;
	// TMPro.TextMeshProUGUI GSN.Skill.Games.Tripeaks.UIHud::streakText
	TextMeshProUGUI_t934157183 * ___streakText_4;
	// UnityEngine.Color32[] GSN.Skill.Games.Tripeaks.UIHud::streakColors
	Color32U5BU5D_t30278651* ___streakColors_5;
	// TMPro.TextMeshProUGUI GSN.Skill.Games.Tripeaks.UIHud::timerText
	TextMeshProUGUI_t934157183 * ___timerText_6;
	// UnityEngine.Animator GSN.Skill.Games.Tripeaks.UIHud::timerWarningAnimator
	Animator_t69676727 * ___timerWarningAnimator_7;
	// UnityEngine.UI.Button GSN.Skill.Games.Tripeaks.UIHud::reshuffle
	Button_t2872111280 * ___reshuffle_8;
	// UnityEngine.GameObject GSN.Skill.Games.Tripeaks.UIHud::reshuffleTimer
	GameObject_t1756533147 * ___reshuffleTimer_9;
	// TMPro.TextMeshProUGUI GSN.Skill.Games.Tripeaks.UIHud::reshuffleTimerText
	TextMeshProUGUI_t934157183 * ___reshuffleTimerText_10;
	// UnityEngine.GameObject GSN.Skill.Games.Tripeaks.UIHud::holdObject
	GameObject_t1756533147 * ___holdObject_11;
	// UnityEngine.GameObject GSN.Skill.Games.Tripeaks.UIHud::wildOneShotObject
	GameObject_t1756533147 * ___wildOneShotObject_12;
	// UnityEngine.GameObject GSN.Skill.Games.Tripeaks.UIHud::fastForwardButton
	GameObject_t1756533147 * ___fastForwardButton_13;
	// UnityEngine.Animator GSN.Skill.Games.Tripeaks.UIHud::animator
	Animator_t69676727 * ___animator_14;
	// UnityEngine.Animator GSN.Skill.Games.Tripeaks.UIHud::streakTextAnimator
	Animator_t69676727 * ___streakTextAnimator_15;
	// UnityEngine.Animator GSN.Skill.Games.Tripeaks.UIHud::streakCardsAnimator
	Animator_t69676727 * ___streakCardsAnimator_16;
	// UnityEngine.RuntimeAnimatorController GSN.Skill.Games.Tripeaks.UIHud::tutorialController
	RuntimeAnimatorController_t670468573 * ___tutorialController_17;
	// GSN.Skill.Games.Tripeaks.UIAbortDialog GSN.Skill.Games.Tripeaks.UIHud::abortDialog
	UIAbortDialog_t1044851848 * ___abortDialog_18;
	// GSN.Skill.Games.Tripeaks.UIHugeWin GSN.Skill.Games.Tripeaks.UIHud::hugeWin
	UIHugeWin_t3990307283 * ___hugeWin_19;
	// GSN.Skill.Games.Tripeaks.CameraShakeFX GSN.Skill.Games.Tripeaks.UIHud::shakeFX
	CameraShakeFX_t68180435 * ___shakeFX_20;
	// System.Boolean GSN.Skill.Games.Tripeaks.UIHud::_reshuffleEnabled
	bool ____reshuffleEnabled_22;
	// System.Int32 GSN.Skill.Games.Tripeaks.UIHud::firstTimeWarning
	int32_t ___firstTimeWarning_23;
	// System.Int32 GSN.Skill.Games.Tripeaks.UIHud::finalTimeWarning
	int32_t ___finalTimeWarning_24;
	// System.Boolean GSN.Skill.Games.Tripeaks.UIHud::_playedFirstWarning
	bool ____playedFirstWarning_25;
	// System.Boolean GSN.Skill.Games.Tripeaks.UIHud::_playedFinalWarning
	bool ____playedFinalWarning_26;
	// System.Boolean GSN.Skill.Games.Tripeaks.UIHud::_playedTimeUp
	bool ____playedTimeUp_27;
	// System.Collections.IEnumerator GSN.Skill.Games.Tripeaks.UIHud::_coSpeedUpTimeTap
	Il2CppObject * ____coSpeedUpTimeTap_40;
	// System.Single GSN.Skill.Games.Tripeaks.UIHud::_speedButtonDownTime
	float ____speedButtonDownTime_41;

public:
	inline static int32_t get_offset_of_scoreText_2() { return static_cast<int32_t>(offsetof(UIHud_t3729045721, ___scoreText_2)); }
	inline TextMeshProUGUI_t934157183 * get_scoreText_2() const { return ___scoreText_2; }
	inline TextMeshProUGUI_t934157183 ** get_address_of_scoreText_2() { return &___scoreText_2; }
	inline void set_scoreText_2(TextMeshProUGUI_t934157183 * value)
	{
		___scoreText_2 = value;
		Il2CppCodeGenWriteBarrier(&___scoreText_2, value);
	}

	inline static int32_t get_offset_of_streakCards_3() { return static_cast<int32_t>(offsetof(UIHud_t3729045721, ___streakCards_3)); }
	inline UIStreakCardU5BU5D_t2479047409* get_streakCards_3() const { return ___streakCards_3; }
	inline UIStreakCardU5BU5D_t2479047409** get_address_of_streakCards_3() { return &___streakCards_3; }
	inline void set_streakCards_3(UIStreakCardU5BU5D_t2479047409* value)
	{
		___streakCards_3 = value;
		Il2CppCodeGenWriteBarrier(&___streakCards_3, value);
	}

	inline static int32_t get_offset_of_streakText_4() { return static_cast<int32_t>(offsetof(UIHud_t3729045721, ___streakText_4)); }
	inline TextMeshProUGUI_t934157183 * get_streakText_4() const { return ___streakText_4; }
	inline TextMeshProUGUI_t934157183 ** get_address_of_streakText_4() { return &___streakText_4; }
	inline void set_streakText_4(TextMeshProUGUI_t934157183 * value)
	{
		___streakText_4 = value;
		Il2CppCodeGenWriteBarrier(&___streakText_4, value);
	}

	inline static int32_t get_offset_of_streakColors_5() { return static_cast<int32_t>(offsetof(UIHud_t3729045721, ___streakColors_5)); }
	inline Color32U5BU5D_t30278651* get_streakColors_5() const { return ___streakColors_5; }
	inline Color32U5BU5D_t30278651** get_address_of_streakColors_5() { return &___streakColors_5; }
	inline void set_streakColors_5(Color32U5BU5D_t30278651* value)
	{
		___streakColors_5 = value;
		Il2CppCodeGenWriteBarrier(&___streakColors_5, value);
	}

	inline static int32_t get_offset_of_timerText_6() { return static_cast<int32_t>(offsetof(UIHud_t3729045721, ___timerText_6)); }
	inline TextMeshProUGUI_t934157183 * get_timerText_6() const { return ___timerText_6; }
	inline TextMeshProUGUI_t934157183 ** get_address_of_timerText_6() { return &___timerText_6; }
	inline void set_timerText_6(TextMeshProUGUI_t934157183 * value)
	{
		___timerText_6 = value;
		Il2CppCodeGenWriteBarrier(&___timerText_6, value);
	}

	inline static int32_t get_offset_of_timerWarningAnimator_7() { return static_cast<int32_t>(offsetof(UIHud_t3729045721, ___timerWarningAnimator_7)); }
	inline Animator_t69676727 * get_timerWarningAnimator_7() const { return ___timerWarningAnimator_7; }
	inline Animator_t69676727 ** get_address_of_timerWarningAnimator_7() { return &___timerWarningAnimator_7; }
	inline void set_timerWarningAnimator_7(Animator_t69676727 * value)
	{
		___timerWarningAnimator_7 = value;
		Il2CppCodeGenWriteBarrier(&___timerWarningAnimator_7, value);
	}

	inline static int32_t get_offset_of_reshuffle_8() { return static_cast<int32_t>(offsetof(UIHud_t3729045721, ___reshuffle_8)); }
	inline Button_t2872111280 * get_reshuffle_8() const { return ___reshuffle_8; }
	inline Button_t2872111280 ** get_address_of_reshuffle_8() { return &___reshuffle_8; }
	inline void set_reshuffle_8(Button_t2872111280 * value)
	{
		___reshuffle_8 = value;
		Il2CppCodeGenWriteBarrier(&___reshuffle_8, value);
	}

	inline static int32_t get_offset_of_reshuffleTimer_9() { return static_cast<int32_t>(offsetof(UIHud_t3729045721, ___reshuffleTimer_9)); }
	inline GameObject_t1756533147 * get_reshuffleTimer_9() const { return ___reshuffleTimer_9; }
	inline GameObject_t1756533147 ** get_address_of_reshuffleTimer_9() { return &___reshuffleTimer_9; }
	inline void set_reshuffleTimer_9(GameObject_t1756533147 * value)
	{
		___reshuffleTimer_9 = value;
		Il2CppCodeGenWriteBarrier(&___reshuffleTimer_9, value);
	}

	inline static int32_t get_offset_of_reshuffleTimerText_10() { return static_cast<int32_t>(offsetof(UIHud_t3729045721, ___reshuffleTimerText_10)); }
	inline TextMeshProUGUI_t934157183 * get_reshuffleTimerText_10() const { return ___reshuffleTimerText_10; }
	inline TextMeshProUGUI_t934157183 ** get_address_of_reshuffleTimerText_10() { return &___reshuffleTimerText_10; }
	inline void set_reshuffleTimerText_10(TextMeshProUGUI_t934157183 * value)
	{
		___reshuffleTimerText_10 = value;
		Il2CppCodeGenWriteBarrier(&___reshuffleTimerText_10, value);
	}

	inline static int32_t get_offset_of_holdObject_11() { return static_cast<int32_t>(offsetof(UIHud_t3729045721, ___holdObject_11)); }
	inline GameObject_t1756533147 * get_holdObject_11() const { return ___holdObject_11; }
	inline GameObject_t1756533147 ** get_address_of_holdObject_11() { return &___holdObject_11; }
	inline void set_holdObject_11(GameObject_t1756533147 * value)
	{
		___holdObject_11 = value;
		Il2CppCodeGenWriteBarrier(&___holdObject_11, value);
	}

	inline static int32_t get_offset_of_wildOneShotObject_12() { return static_cast<int32_t>(offsetof(UIHud_t3729045721, ___wildOneShotObject_12)); }
	inline GameObject_t1756533147 * get_wildOneShotObject_12() const { return ___wildOneShotObject_12; }
	inline GameObject_t1756533147 ** get_address_of_wildOneShotObject_12() { return &___wildOneShotObject_12; }
	inline void set_wildOneShotObject_12(GameObject_t1756533147 * value)
	{
		___wildOneShotObject_12 = value;
		Il2CppCodeGenWriteBarrier(&___wildOneShotObject_12, value);
	}

	inline static int32_t get_offset_of_fastForwardButton_13() { return static_cast<int32_t>(offsetof(UIHud_t3729045721, ___fastForwardButton_13)); }
	inline GameObject_t1756533147 * get_fastForwardButton_13() const { return ___fastForwardButton_13; }
	inline GameObject_t1756533147 ** get_address_of_fastForwardButton_13() { return &___fastForwardButton_13; }
	inline void set_fastForwardButton_13(GameObject_t1756533147 * value)
	{
		___fastForwardButton_13 = value;
		Il2CppCodeGenWriteBarrier(&___fastForwardButton_13, value);
	}

	inline static int32_t get_offset_of_animator_14() { return static_cast<int32_t>(offsetof(UIHud_t3729045721, ___animator_14)); }
	inline Animator_t69676727 * get_animator_14() const { return ___animator_14; }
	inline Animator_t69676727 ** get_address_of_animator_14() { return &___animator_14; }
	inline void set_animator_14(Animator_t69676727 * value)
	{
		___animator_14 = value;
		Il2CppCodeGenWriteBarrier(&___animator_14, value);
	}

	inline static int32_t get_offset_of_streakTextAnimator_15() { return static_cast<int32_t>(offsetof(UIHud_t3729045721, ___streakTextAnimator_15)); }
	inline Animator_t69676727 * get_streakTextAnimator_15() const { return ___streakTextAnimator_15; }
	inline Animator_t69676727 ** get_address_of_streakTextAnimator_15() { return &___streakTextAnimator_15; }
	inline void set_streakTextAnimator_15(Animator_t69676727 * value)
	{
		___streakTextAnimator_15 = value;
		Il2CppCodeGenWriteBarrier(&___streakTextAnimator_15, value);
	}

	inline static int32_t get_offset_of_streakCardsAnimator_16() { return static_cast<int32_t>(offsetof(UIHud_t3729045721, ___streakCardsAnimator_16)); }
	inline Animator_t69676727 * get_streakCardsAnimator_16() const { return ___streakCardsAnimator_16; }
	inline Animator_t69676727 ** get_address_of_streakCardsAnimator_16() { return &___streakCardsAnimator_16; }
	inline void set_streakCardsAnimator_16(Animator_t69676727 * value)
	{
		___streakCardsAnimator_16 = value;
		Il2CppCodeGenWriteBarrier(&___streakCardsAnimator_16, value);
	}

	inline static int32_t get_offset_of_tutorialController_17() { return static_cast<int32_t>(offsetof(UIHud_t3729045721, ___tutorialController_17)); }
	inline RuntimeAnimatorController_t670468573 * get_tutorialController_17() const { return ___tutorialController_17; }
	inline RuntimeAnimatorController_t670468573 ** get_address_of_tutorialController_17() { return &___tutorialController_17; }
	inline void set_tutorialController_17(RuntimeAnimatorController_t670468573 * value)
	{
		___tutorialController_17 = value;
		Il2CppCodeGenWriteBarrier(&___tutorialController_17, value);
	}

	inline static int32_t get_offset_of_abortDialog_18() { return static_cast<int32_t>(offsetof(UIHud_t3729045721, ___abortDialog_18)); }
	inline UIAbortDialog_t1044851848 * get_abortDialog_18() const { return ___abortDialog_18; }
	inline UIAbortDialog_t1044851848 ** get_address_of_abortDialog_18() { return &___abortDialog_18; }
	inline void set_abortDialog_18(UIAbortDialog_t1044851848 * value)
	{
		___abortDialog_18 = value;
		Il2CppCodeGenWriteBarrier(&___abortDialog_18, value);
	}

	inline static int32_t get_offset_of_hugeWin_19() { return static_cast<int32_t>(offsetof(UIHud_t3729045721, ___hugeWin_19)); }
	inline UIHugeWin_t3990307283 * get_hugeWin_19() const { return ___hugeWin_19; }
	inline UIHugeWin_t3990307283 ** get_address_of_hugeWin_19() { return &___hugeWin_19; }
	inline void set_hugeWin_19(UIHugeWin_t3990307283 * value)
	{
		___hugeWin_19 = value;
		Il2CppCodeGenWriteBarrier(&___hugeWin_19, value);
	}

	inline static int32_t get_offset_of_shakeFX_20() { return static_cast<int32_t>(offsetof(UIHud_t3729045721, ___shakeFX_20)); }
	inline CameraShakeFX_t68180435 * get_shakeFX_20() const { return ___shakeFX_20; }
	inline CameraShakeFX_t68180435 ** get_address_of_shakeFX_20() { return &___shakeFX_20; }
	inline void set_shakeFX_20(CameraShakeFX_t68180435 * value)
	{
		___shakeFX_20 = value;
		Il2CppCodeGenWriteBarrier(&___shakeFX_20, value);
	}

	inline static int32_t get_offset_of__reshuffleEnabled_22() { return static_cast<int32_t>(offsetof(UIHud_t3729045721, ____reshuffleEnabled_22)); }
	inline bool get__reshuffleEnabled_22() const { return ____reshuffleEnabled_22; }
	inline bool* get_address_of__reshuffleEnabled_22() { return &____reshuffleEnabled_22; }
	inline void set__reshuffleEnabled_22(bool value)
	{
		____reshuffleEnabled_22 = value;
	}

	inline static int32_t get_offset_of_firstTimeWarning_23() { return static_cast<int32_t>(offsetof(UIHud_t3729045721, ___firstTimeWarning_23)); }
	inline int32_t get_firstTimeWarning_23() const { return ___firstTimeWarning_23; }
	inline int32_t* get_address_of_firstTimeWarning_23() { return &___firstTimeWarning_23; }
	inline void set_firstTimeWarning_23(int32_t value)
	{
		___firstTimeWarning_23 = value;
	}

	inline static int32_t get_offset_of_finalTimeWarning_24() { return static_cast<int32_t>(offsetof(UIHud_t3729045721, ___finalTimeWarning_24)); }
	inline int32_t get_finalTimeWarning_24() const { return ___finalTimeWarning_24; }
	inline int32_t* get_address_of_finalTimeWarning_24() { return &___finalTimeWarning_24; }
	inline void set_finalTimeWarning_24(int32_t value)
	{
		___finalTimeWarning_24 = value;
	}

	inline static int32_t get_offset_of__playedFirstWarning_25() { return static_cast<int32_t>(offsetof(UIHud_t3729045721, ____playedFirstWarning_25)); }
	inline bool get__playedFirstWarning_25() const { return ____playedFirstWarning_25; }
	inline bool* get_address_of__playedFirstWarning_25() { return &____playedFirstWarning_25; }
	inline void set__playedFirstWarning_25(bool value)
	{
		____playedFirstWarning_25 = value;
	}

	inline static int32_t get_offset_of__playedFinalWarning_26() { return static_cast<int32_t>(offsetof(UIHud_t3729045721, ____playedFinalWarning_26)); }
	inline bool get__playedFinalWarning_26() const { return ____playedFinalWarning_26; }
	inline bool* get_address_of__playedFinalWarning_26() { return &____playedFinalWarning_26; }
	inline void set__playedFinalWarning_26(bool value)
	{
		____playedFinalWarning_26 = value;
	}

	inline static int32_t get_offset_of__playedTimeUp_27() { return static_cast<int32_t>(offsetof(UIHud_t3729045721, ____playedTimeUp_27)); }
	inline bool get__playedTimeUp_27() const { return ____playedTimeUp_27; }
	inline bool* get_address_of__playedTimeUp_27() { return &____playedTimeUp_27; }
	inline void set__playedTimeUp_27(bool value)
	{
		____playedTimeUp_27 = value;
	}

	inline static int32_t get_offset_of__coSpeedUpTimeTap_40() { return static_cast<int32_t>(offsetof(UIHud_t3729045721, ____coSpeedUpTimeTap_40)); }
	inline Il2CppObject * get__coSpeedUpTimeTap_40() const { return ____coSpeedUpTimeTap_40; }
	inline Il2CppObject ** get_address_of__coSpeedUpTimeTap_40() { return &____coSpeedUpTimeTap_40; }
	inline void set__coSpeedUpTimeTap_40(Il2CppObject * value)
	{
		____coSpeedUpTimeTap_40 = value;
		Il2CppCodeGenWriteBarrier(&____coSpeedUpTimeTap_40, value);
	}

	inline static int32_t get_offset_of__speedButtonDownTime_41() { return static_cast<int32_t>(offsetof(UIHud_t3729045721, ____speedButtonDownTime_41)); }
	inline float get__speedButtonDownTime_41() const { return ____speedButtonDownTime_41; }
	inline float* get_address_of__speedButtonDownTime_41() { return &____speedButtonDownTime_41; }
	inline void set__speedButtonDownTime_41(float value)
	{
		____speedButtonDownTime_41 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
