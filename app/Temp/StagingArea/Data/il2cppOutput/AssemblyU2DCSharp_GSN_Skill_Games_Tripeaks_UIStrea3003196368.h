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
// UnityEngine.ParticleSystem
struct ParticleSystem_t3394631041;
// System.String
struct String_t;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Games.Tripeaks.UIStreakCard
struct  UIStreakCard_t3003196368  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Animator GSN.Skill.Games.Tripeaks.UIStreakCard::animator
	Animator_t69676727 * ___animator_2;
	// UnityEngine.ParticleSystem GSN.Skill.Games.Tripeaks.UIStreakCard::fireFX
	ParticleSystem_t3394631041 * ___fireFX_3;
	// UnityEngine.ParticleSystem GSN.Skill.Games.Tripeaks.UIStreakCard::smokeFX
	ParticleSystem_t3394631041 * ___smokeFX_4;
	// System.Boolean GSN.Skill.Games.Tripeaks.UIStreakCard::visible
	bool ___visible_5;

public:
	inline static int32_t get_offset_of_animator_2() { return static_cast<int32_t>(offsetof(UIStreakCard_t3003196368, ___animator_2)); }
	inline Animator_t69676727 * get_animator_2() const { return ___animator_2; }
	inline Animator_t69676727 ** get_address_of_animator_2() { return &___animator_2; }
	inline void set_animator_2(Animator_t69676727 * value)
	{
		___animator_2 = value;
		Il2CppCodeGenWriteBarrier(&___animator_2, value);
	}

	inline static int32_t get_offset_of_fireFX_3() { return static_cast<int32_t>(offsetof(UIStreakCard_t3003196368, ___fireFX_3)); }
	inline ParticleSystem_t3394631041 * get_fireFX_3() const { return ___fireFX_3; }
	inline ParticleSystem_t3394631041 ** get_address_of_fireFX_3() { return &___fireFX_3; }
	inline void set_fireFX_3(ParticleSystem_t3394631041 * value)
	{
		___fireFX_3 = value;
		Il2CppCodeGenWriteBarrier(&___fireFX_3, value);
	}

	inline static int32_t get_offset_of_smokeFX_4() { return static_cast<int32_t>(offsetof(UIStreakCard_t3003196368, ___smokeFX_4)); }
	inline ParticleSystem_t3394631041 * get_smokeFX_4() const { return ___smokeFX_4; }
	inline ParticleSystem_t3394631041 ** get_address_of_smokeFX_4() { return &___smokeFX_4; }
	inline void set_smokeFX_4(ParticleSystem_t3394631041 * value)
	{
		___smokeFX_4 = value;
		Il2CppCodeGenWriteBarrier(&___smokeFX_4, value);
	}

	inline static int32_t get_offset_of_visible_5() { return static_cast<int32_t>(offsetof(UIStreakCard_t3003196368, ___visible_5)); }
	inline bool get_visible_5() const { return ___visible_5; }
	inline bool* get_address_of_visible_5() { return &___visible_5; }
	inline void set_visible_5(bool value)
	{
		___visible_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
