#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t1756533147;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Games.Common.Client.ShineProjectorSpriteAssignment
struct  ShineProjectorSpriteAssignment_t4047538047  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject GSN.Skill.Games.Common.Client.ShineProjectorSpriteAssignment::shineTarget
	GameObject_t1756533147 * ___shineTarget_2;

public:
	inline static int32_t get_offset_of_shineTarget_2() { return static_cast<int32_t>(offsetof(ShineProjectorSpriteAssignment_t4047538047, ___shineTarget_2)); }
	inline GameObject_t1756533147 * get_shineTarget_2() const { return ___shineTarget_2; }
	inline GameObject_t1756533147 ** get_address_of_shineTarget_2() { return &___shineTarget_2; }
	inline void set_shineTarget_2(GameObject_t1756533147 * value)
	{
		___shineTarget_2 = value;
		Il2CppCodeGenWriteBarrier(&___shineTarget_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
