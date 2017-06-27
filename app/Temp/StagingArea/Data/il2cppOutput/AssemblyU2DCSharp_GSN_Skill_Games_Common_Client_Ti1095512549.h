#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "AssemblyU2DCSharp_GSN_Skill_Games_Common_Client_Si3570932034.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Games.Common.Client.TimeScale
struct  TimeScale_t1095512549  : public Singleton_1_t3570932034
{
public:
	// System.Boolean GSN.Skill.Games.Common.Client.TimeScale::<Paused>k__BackingField
	bool ___U3CPausedU3Ek__BackingField_1;
	// System.Single GSN.Skill.Games.Common.Client.TimeScale::pausedSpeed
	float ___pausedSpeed_2;

public:
	inline static int32_t get_offset_of_U3CPausedU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(TimeScale_t1095512549, ___U3CPausedU3Ek__BackingField_1)); }
	inline bool get_U3CPausedU3Ek__BackingField_1() const { return ___U3CPausedU3Ek__BackingField_1; }
	inline bool* get_address_of_U3CPausedU3Ek__BackingField_1() { return &___U3CPausedU3Ek__BackingField_1; }
	inline void set_U3CPausedU3Ek__BackingField_1(bool value)
	{
		___U3CPausedU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_pausedSpeed_2() { return static_cast<int32_t>(offsetof(TimeScale_t1095512549, ___pausedSpeed_2)); }
	inline float get_pausedSpeed_2() const { return ___pausedSpeed_2; }
	inline float* get_address_of_pausedSpeed_2() { return &___pausedSpeed_2; }
	inline void set_pausedSpeed_2(float value)
	{
		___pausedSpeed_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
