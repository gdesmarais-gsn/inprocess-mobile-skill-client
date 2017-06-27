#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.AnimationCurve
struct AnimationCurve_t3306541151;

#include "UnityEngine_UnityEngine_ScriptableObject1975622470.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Games.Common.AnimCurve
struct  AnimCurve_t116428666  : public ScriptableObject_t1975622470
{
public:
	// UnityEngine.AnimationCurve GSN.Skill.Games.Common.AnimCurve::animationCurve
	AnimationCurve_t3306541151 * ___animationCurve_2;

public:
	inline static int32_t get_offset_of_animationCurve_2() { return static_cast<int32_t>(offsetof(AnimCurve_t116428666, ___animationCurve_2)); }
	inline AnimationCurve_t3306541151 * get_animationCurve_2() const { return ___animationCurve_2; }
	inline AnimationCurve_t3306541151 ** get_address_of_animationCurve_2() { return &___animationCurve_2; }
	inline void set_animationCurve_2(AnimationCurve_t3306541151 * value)
	{
		___animationCurve_2 = value;
		Il2CppCodeGenWriteBarrier(&___animationCurve_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
