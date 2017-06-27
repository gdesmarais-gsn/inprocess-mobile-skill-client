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

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Games.Tripeaks.UIToggleSlider
struct  UIToggleSlider_t3362915155  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Animator GSN.Skill.Games.Tripeaks.UIToggleSlider::_animator
	Animator_t69676727 * ____animator_2;

public:
	inline static int32_t get_offset_of__animator_2() { return static_cast<int32_t>(offsetof(UIToggleSlider_t3362915155, ____animator_2)); }
	inline Animator_t69676727 * get__animator_2() const { return ____animator_2; }
	inline Animator_t69676727 ** get_address_of__animator_2() { return &____animator_2; }
	inline void set__animator_2(Animator_t69676727 * value)
	{
		____animator_2 = value;
		Il2CppCodeGenWriteBarrier(&____animator_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
