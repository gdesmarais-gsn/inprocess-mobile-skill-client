#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Animator
struct Animator_t69676727;
// TMPro.TextMeshProUGUI
struct TextMeshProUGUI_t934157183;
// UnityEngine.UI.Button
struct Button_t2872111280;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;
// System.String
struct String_t;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Games.Tripeaks.UIStartScreen
struct  UIStartScreen_t2387721474  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Animator GSN.Skill.Games.Tripeaks.UIStartScreen::startButtonAnimator
	Animator_t69676727 * ___startButtonAnimator_2;
	// UnityEngine.Animator GSN.Skill.Games.Tripeaks.UIStartScreen::animator
	Animator_t69676727 * ___animator_3;
	// TMPro.TextMeshProUGUI GSN.Skill.Games.Tripeaks.UIStartScreen::countdownTxtValue
	TextMeshProUGUI_t934157183 * ___countdownTxtValue_4;
	// UnityEngine.UI.Button GSN.Skill.Games.Tripeaks.UIStartScreen::settingsButton
	Button_t2872111280 * ___settingsButton_5;
	// UnityEngine.GameObject GSN.Skill.Games.Tripeaks.UIStartScreen::settingsPopup
	GameObject_t1756533147 * ___settingsPopup_6;
	// System.Single GSN.Skill.Games.Tripeaks.UIStartScreen::INITIAL_TIMER_SEC
	float ___INITIAL_TIMER_SEC_7;
	// System.Single GSN.Skill.Games.Tripeaks.UIStartScreen::REVEAL_TIMER_SEC
	float ___REVEAL_TIMER_SEC_8;
	// System.Single GSN.Skill.Games.Tripeaks.UIStartScreen::count
	float ___count_9;
	// System.Collections.IEnumerator GSN.Skill.Games.Tripeaks.UIStartScreen::_coBringUpStartTime
	Il2CppObject * ____coBringUpStartTime_10;
	// System.Int32 GSN.Skill.Games.Tripeaks.UIStartScreen::_pauseTimeStart
	int32_t ____pauseTimeStart_15;
	// System.Boolean GSN.Skill.Games.Tripeaks.UIStartScreen::_paused
	bool ____paused_16;
	// System.Boolean GSN.Skill.Games.Tripeaks.UIStartScreen::_autostarting
	bool ____autostarting_17;

public:
	inline static int32_t get_offset_of_startButtonAnimator_2() { return static_cast<int32_t>(offsetof(UIStartScreen_t2387721474, ___startButtonAnimator_2)); }
	inline Animator_t69676727 * get_startButtonAnimator_2() const { return ___startButtonAnimator_2; }
	inline Animator_t69676727 ** get_address_of_startButtonAnimator_2() { return &___startButtonAnimator_2; }
	inline void set_startButtonAnimator_2(Animator_t69676727 * value)
	{
		___startButtonAnimator_2 = value;
		Il2CppCodeGenWriteBarrier(&___startButtonAnimator_2, value);
	}

	inline static int32_t get_offset_of_animator_3() { return static_cast<int32_t>(offsetof(UIStartScreen_t2387721474, ___animator_3)); }
	inline Animator_t69676727 * get_animator_3() const { return ___animator_3; }
	inline Animator_t69676727 ** get_address_of_animator_3() { return &___animator_3; }
	inline void set_animator_3(Animator_t69676727 * value)
	{
		___animator_3 = value;
		Il2CppCodeGenWriteBarrier(&___animator_3, value);
	}

	inline static int32_t get_offset_of_countdownTxtValue_4() { return static_cast<int32_t>(offsetof(UIStartScreen_t2387721474, ___countdownTxtValue_4)); }
	inline TextMeshProUGUI_t934157183 * get_countdownTxtValue_4() const { return ___countdownTxtValue_4; }
	inline TextMeshProUGUI_t934157183 ** get_address_of_countdownTxtValue_4() { return &___countdownTxtValue_4; }
	inline void set_countdownTxtValue_4(TextMeshProUGUI_t934157183 * value)
	{
		___countdownTxtValue_4 = value;
		Il2CppCodeGenWriteBarrier(&___countdownTxtValue_4, value);
	}

	inline static int32_t get_offset_of_settingsButton_5() { return static_cast<int32_t>(offsetof(UIStartScreen_t2387721474, ___settingsButton_5)); }
	inline Button_t2872111280 * get_settingsButton_5() const { return ___settingsButton_5; }
	inline Button_t2872111280 ** get_address_of_settingsButton_5() { return &___settingsButton_5; }
	inline void set_settingsButton_5(Button_t2872111280 * value)
	{
		___settingsButton_5 = value;
		Il2CppCodeGenWriteBarrier(&___settingsButton_5, value);
	}

	inline static int32_t get_offset_of_settingsPopup_6() { return static_cast<int32_t>(offsetof(UIStartScreen_t2387721474, ___settingsPopup_6)); }
	inline GameObject_t1756533147 * get_settingsPopup_6() const { return ___settingsPopup_6; }
	inline GameObject_t1756533147 ** get_address_of_settingsPopup_6() { return &___settingsPopup_6; }
	inline void set_settingsPopup_6(GameObject_t1756533147 * value)
	{
		___settingsPopup_6 = value;
		Il2CppCodeGenWriteBarrier(&___settingsPopup_6, value);
	}

	inline static int32_t get_offset_of_INITIAL_TIMER_SEC_7() { return static_cast<int32_t>(offsetof(UIStartScreen_t2387721474, ___INITIAL_TIMER_SEC_7)); }
	inline float get_INITIAL_TIMER_SEC_7() const { return ___INITIAL_TIMER_SEC_7; }
	inline float* get_address_of_INITIAL_TIMER_SEC_7() { return &___INITIAL_TIMER_SEC_7; }
	inline void set_INITIAL_TIMER_SEC_7(float value)
	{
		___INITIAL_TIMER_SEC_7 = value;
	}

	inline static int32_t get_offset_of_REVEAL_TIMER_SEC_8() { return static_cast<int32_t>(offsetof(UIStartScreen_t2387721474, ___REVEAL_TIMER_SEC_8)); }
	inline float get_REVEAL_TIMER_SEC_8() const { return ___REVEAL_TIMER_SEC_8; }
	inline float* get_address_of_REVEAL_TIMER_SEC_8() { return &___REVEAL_TIMER_SEC_8; }
	inline void set_REVEAL_TIMER_SEC_8(float value)
	{
		___REVEAL_TIMER_SEC_8 = value;
	}

	inline static int32_t get_offset_of_count_9() { return static_cast<int32_t>(offsetof(UIStartScreen_t2387721474, ___count_9)); }
	inline float get_count_9() const { return ___count_9; }
	inline float* get_address_of_count_9() { return &___count_9; }
	inline void set_count_9(float value)
	{
		___count_9 = value;
	}

	inline static int32_t get_offset_of__coBringUpStartTime_10() { return static_cast<int32_t>(offsetof(UIStartScreen_t2387721474, ____coBringUpStartTime_10)); }
	inline Il2CppObject * get__coBringUpStartTime_10() const { return ____coBringUpStartTime_10; }
	inline Il2CppObject ** get_address_of__coBringUpStartTime_10() { return &____coBringUpStartTime_10; }
	inline void set__coBringUpStartTime_10(Il2CppObject * value)
	{
		____coBringUpStartTime_10 = value;
		Il2CppCodeGenWriteBarrier(&____coBringUpStartTime_10, value);
	}

	inline static int32_t get_offset_of__pauseTimeStart_15() { return static_cast<int32_t>(offsetof(UIStartScreen_t2387721474, ____pauseTimeStart_15)); }
	inline int32_t get__pauseTimeStart_15() const { return ____pauseTimeStart_15; }
	inline int32_t* get_address_of__pauseTimeStart_15() { return &____pauseTimeStart_15; }
	inline void set__pauseTimeStart_15(int32_t value)
	{
		____pauseTimeStart_15 = value;
	}

	inline static int32_t get_offset_of__paused_16() { return static_cast<int32_t>(offsetof(UIStartScreen_t2387721474, ____paused_16)); }
	inline bool get__paused_16() const { return ____paused_16; }
	inline bool* get_address_of__paused_16() { return &____paused_16; }
	inline void set__paused_16(bool value)
	{
		____paused_16 = value;
	}

	inline static int32_t get_offset_of__autostarting_17() { return static_cast<int32_t>(offsetof(UIStartScreen_t2387721474, ____autostarting_17)); }
	inline bool get__autostarting_17() const { return ____autostarting_17; }
	inline bool* get_address_of__autostarting_17() { return &____autostarting_17; }
	inline void set__autostarting_17(bool value)
	{
		____autostarting_17 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
