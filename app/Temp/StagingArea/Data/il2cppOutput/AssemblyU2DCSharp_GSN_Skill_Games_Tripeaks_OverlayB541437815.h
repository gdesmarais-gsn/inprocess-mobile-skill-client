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

#include "AssemblyU2DCSharp_GSN_Skill_Games_Common_Client_Po1962253443.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Games.Tripeaks.OverlayBase
struct  OverlayBase_t541437815  : public PooledMonoBehaviour_t1962253443
{
public:
	// UnityEngine.Animator GSN.Skill.Games.Tripeaks.OverlayBase::animator
	Animator_t69676727 * ___animator_4;

public:
	inline static int32_t get_offset_of_animator_4() { return static_cast<int32_t>(offsetof(OverlayBase_t541437815, ___animator_4)); }
	inline Animator_t69676727 * get_animator_4() const { return ___animator_4; }
	inline Animator_t69676727 ** get_address_of_animator_4() { return &___animator_4; }
	inline void set_animator_4(Animator_t69676727 * value)
	{
		___animator_4 = value;
		Il2CppCodeGenWriteBarrier(&___animator_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
