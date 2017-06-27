#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.UI.Toggle
struct Toggle_t3976754468;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t3057952154;
// UnityEngine.Animator
struct Animator_t69676727;
// System.String
struct String_t;
// GSN.Skill.Phoenix.UI.ToggleEx/ToggleClickedEvent
struct ToggleClickedEvent_t103982157;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Phoenix.UI.ToggleEx
struct  ToggleEx_t2538879365  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.UI.Toggle GSN.Skill.Phoenix.UI.ToggleEx::_toggle
	Toggle_t3976754468 * ____toggle_2;
	// UnityEngine.GameObject[] GSN.Skill.Phoenix.UI.ToggleEx::offImage
	GameObjectU5BU5D_t3057952154* ___offImage_3;
	// UnityEngine.GameObject[] GSN.Skill.Phoenix.UI.ToggleEx::onImage
	GameObjectU5BU5D_t3057952154* ___onImage_4;
	// UnityEngine.Animator GSN.Skill.Phoenix.UI.ToggleEx::animatedObject
	Animator_t69676727 * ___animatedObject_5;
	// System.String GSN.Skill.Phoenix.UI.ToggleEx::stateNameOff
	String_t* ___stateNameOff_6;
	// System.String GSN.Skill.Phoenix.UI.ToggleEx::stateNameOn
	String_t* ___stateNameOn_7;
	// System.Boolean GSN.Skill.Phoenix.UI.ToggleEx::_lastToggleState
	bool ____lastToggleState_8;
	// GSN.Skill.Phoenix.UI.ToggleEx/ToggleClickedEvent GSN.Skill.Phoenix.UI.ToggleEx::m_OnClick
	ToggleClickedEvent_t103982157 * ___m_OnClick_9;

public:
	inline static int32_t get_offset_of__toggle_2() { return static_cast<int32_t>(offsetof(ToggleEx_t2538879365, ____toggle_2)); }
	inline Toggle_t3976754468 * get__toggle_2() const { return ____toggle_2; }
	inline Toggle_t3976754468 ** get_address_of__toggle_2() { return &____toggle_2; }
	inline void set__toggle_2(Toggle_t3976754468 * value)
	{
		____toggle_2 = value;
		Il2CppCodeGenWriteBarrier(&____toggle_2, value);
	}

	inline static int32_t get_offset_of_offImage_3() { return static_cast<int32_t>(offsetof(ToggleEx_t2538879365, ___offImage_3)); }
	inline GameObjectU5BU5D_t3057952154* get_offImage_3() const { return ___offImage_3; }
	inline GameObjectU5BU5D_t3057952154** get_address_of_offImage_3() { return &___offImage_3; }
	inline void set_offImage_3(GameObjectU5BU5D_t3057952154* value)
	{
		___offImage_3 = value;
		Il2CppCodeGenWriteBarrier(&___offImage_3, value);
	}

	inline static int32_t get_offset_of_onImage_4() { return static_cast<int32_t>(offsetof(ToggleEx_t2538879365, ___onImage_4)); }
	inline GameObjectU5BU5D_t3057952154* get_onImage_4() const { return ___onImage_4; }
	inline GameObjectU5BU5D_t3057952154** get_address_of_onImage_4() { return &___onImage_4; }
	inline void set_onImage_4(GameObjectU5BU5D_t3057952154* value)
	{
		___onImage_4 = value;
		Il2CppCodeGenWriteBarrier(&___onImage_4, value);
	}

	inline static int32_t get_offset_of_animatedObject_5() { return static_cast<int32_t>(offsetof(ToggleEx_t2538879365, ___animatedObject_5)); }
	inline Animator_t69676727 * get_animatedObject_5() const { return ___animatedObject_5; }
	inline Animator_t69676727 ** get_address_of_animatedObject_5() { return &___animatedObject_5; }
	inline void set_animatedObject_5(Animator_t69676727 * value)
	{
		___animatedObject_5 = value;
		Il2CppCodeGenWriteBarrier(&___animatedObject_5, value);
	}

	inline static int32_t get_offset_of_stateNameOff_6() { return static_cast<int32_t>(offsetof(ToggleEx_t2538879365, ___stateNameOff_6)); }
	inline String_t* get_stateNameOff_6() const { return ___stateNameOff_6; }
	inline String_t** get_address_of_stateNameOff_6() { return &___stateNameOff_6; }
	inline void set_stateNameOff_6(String_t* value)
	{
		___stateNameOff_6 = value;
		Il2CppCodeGenWriteBarrier(&___stateNameOff_6, value);
	}

	inline static int32_t get_offset_of_stateNameOn_7() { return static_cast<int32_t>(offsetof(ToggleEx_t2538879365, ___stateNameOn_7)); }
	inline String_t* get_stateNameOn_7() const { return ___stateNameOn_7; }
	inline String_t** get_address_of_stateNameOn_7() { return &___stateNameOn_7; }
	inline void set_stateNameOn_7(String_t* value)
	{
		___stateNameOn_7 = value;
		Il2CppCodeGenWriteBarrier(&___stateNameOn_7, value);
	}

	inline static int32_t get_offset_of__lastToggleState_8() { return static_cast<int32_t>(offsetof(ToggleEx_t2538879365, ____lastToggleState_8)); }
	inline bool get__lastToggleState_8() const { return ____lastToggleState_8; }
	inline bool* get_address_of__lastToggleState_8() { return &____lastToggleState_8; }
	inline void set__lastToggleState_8(bool value)
	{
		____lastToggleState_8 = value;
	}

	inline static int32_t get_offset_of_m_OnClick_9() { return static_cast<int32_t>(offsetof(ToggleEx_t2538879365, ___m_OnClick_9)); }
	inline ToggleClickedEvent_t103982157 * get_m_OnClick_9() const { return ___m_OnClick_9; }
	inline ToggleClickedEvent_t103982157 ** get_address_of_m_OnClick_9() { return &___m_OnClick_9; }
	inline void set_m_OnClick_9(ToggleClickedEvent_t103982157 * value)
	{
		___m_OnClick_9 = value;
		Il2CppCodeGenWriteBarrier(&___m_OnClick_9, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
