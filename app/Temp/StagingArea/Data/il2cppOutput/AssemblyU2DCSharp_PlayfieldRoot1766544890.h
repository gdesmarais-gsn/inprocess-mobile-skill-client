#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// GSN.Skill.Games.Tripeaks.PlayfieldData
struct PlayfieldData_t2127658700;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayfieldRoot
struct  PlayfieldRoot_t1766544890  : public MonoBehaviour_t1158329972
{
public:
	// GSN.Skill.Games.Tripeaks.PlayfieldData PlayfieldRoot::playfieldData
	PlayfieldData_t2127658700 * ___playfieldData_2;
	// System.Single PlayfieldRoot::collisionFudge
	float ___collisionFudge_3;

public:
	inline static int32_t get_offset_of_playfieldData_2() { return static_cast<int32_t>(offsetof(PlayfieldRoot_t1766544890, ___playfieldData_2)); }
	inline PlayfieldData_t2127658700 * get_playfieldData_2() const { return ___playfieldData_2; }
	inline PlayfieldData_t2127658700 ** get_address_of_playfieldData_2() { return &___playfieldData_2; }
	inline void set_playfieldData_2(PlayfieldData_t2127658700 * value)
	{
		___playfieldData_2 = value;
		Il2CppCodeGenWriteBarrier(&___playfieldData_2, value);
	}

	inline static int32_t get_offset_of_collisionFudge_3() { return static_cast<int32_t>(offsetof(PlayfieldRoot_t1766544890, ___collisionFudge_3)); }
	inline float get_collisionFudge_3() const { return ___collisionFudge_3; }
	inline float* get_address_of_collisionFudge_3() { return &___collisionFudge_3; }
	inline void set_collisionFudge_3(float value)
	{
		___collisionFudge_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
