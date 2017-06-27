#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.UI.Button
struct Button_t2872111280;
// UnityEngine.GameObject
struct GameObject_t1756533147;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Phoenix.UI.TooltipToggle
struct  TooltipToggle_t2290825565  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.UI.Button GSN.Skill.Phoenix.UI.TooltipToggle::_showButton
	Button_t2872111280 * ____showButton_2;
	// UnityEngine.UI.Button GSN.Skill.Phoenix.UI.TooltipToggle::_hideButton
	Button_t2872111280 * ____hideButton_3;
	// UnityEngine.GameObject GSN.Skill.Phoenix.UI.TooltipToggle::_tooltip
	GameObject_t1756533147 * ____tooltip_4;

public:
	inline static int32_t get_offset_of__showButton_2() { return static_cast<int32_t>(offsetof(TooltipToggle_t2290825565, ____showButton_2)); }
	inline Button_t2872111280 * get__showButton_2() const { return ____showButton_2; }
	inline Button_t2872111280 ** get_address_of__showButton_2() { return &____showButton_2; }
	inline void set__showButton_2(Button_t2872111280 * value)
	{
		____showButton_2 = value;
		Il2CppCodeGenWriteBarrier(&____showButton_2, value);
	}

	inline static int32_t get_offset_of__hideButton_3() { return static_cast<int32_t>(offsetof(TooltipToggle_t2290825565, ____hideButton_3)); }
	inline Button_t2872111280 * get__hideButton_3() const { return ____hideButton_3; }
	inline Button_t2872111280 ** get_address_of__hideButton_3() { return &____hideButton_3; }
	inline void set__hideButton_3(Button_t2872111280 * value)
	{
		____hideButton_3 = value;
		Il2CppCodeGenWriteBarrier(&____hideButton_3, value);
	}

	inline static int32_t get_offset_of__tooltip_4() { return static_cast<int32_t>(offsetof(TooltipToggle_t2290825565, ____tooltip_4)); }
	inline GameObject_t1756533147 * get__tooltip_4() const { return ____tooltip_4; }
	inline GameObject_t1756533147 ** get_address_of__tooltip_4() { return &____tooltip_4; }
	inline void set__tooltip_4(GameObject_t1756533147 * value)
	{
		____tooltip_4 = value;
		Il2CppCodeGenWriteBarrier(&____tooltip_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
