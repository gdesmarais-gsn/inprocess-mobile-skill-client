#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// GSN.Skill.Games.Common.Utils.GsnRational
struct GsnRational_t1635961804;
// GSN.Skill.Games.Common.Model.GameModelBase
struct GameModelBase_t2215752692;

#include "AssemblyU2DCSharp_GSN_Skill_Games_Common_Tasks_Gsn3376855096.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Games.Common.Tasks.GsnRollForwardTask
struct  GsnRollForwardTask_t505512105  : public GsnTaskBase_t3376855096
{
public:
	// GSN.Skill.Games.Common.Utils.GsnRational GSN.Skill.Games.Common.Tasks.GsnRollForwardTask::_rfTime
	GsnRational_t1635961804 * ____rfTime_7;
	// GSN.Skill.Games.Common.Utils.GsnRational GSN.Skill.Games.Common.Tasks.GsnRollForwardTask::_frameDuration
	GsnRational_t1635961804 * ____frameDuration_8;
	// GSN.Skill.Games.Common.Model.GameModelBase GSN.Skill.Games.Common.Tasks.GsnRollForwardTask::_model
	GameModelBase_t2215752692 * ____model_9;

public:
	inline static int32_t get_offset_of__rfTime_7() { return static_cast<int32_t>(offsetof(GsnRollForwardTask_t505512105, ____rfTime_7)); }
	inline GsnRational_t1635961804 * get__rfTime_7() const { return ____rfTime_7; }
	inline GsnRational_t1635961804 ** get_address_of__rfTime_7() { return &____rfTime_7; }
	inline void set__rfTime_7(GsnRational_t1635961804 * value)
	{
		____rfTime_7 = value;
		Il2CppCodeGenWriteBarrier(&____rfTime_7, value);
	}

	inline static int32_t get_offset_of__frameDuration_8() { return static_cast<int32_t>(offsetof(GsnRollForwardTask_t505512105, ____frameDuration_8)); }
	inline GsnRational_t1635961804 * get__frameDuration_8() const { return ____frameDuration_8; }
	inline GsnRational_t1635961804 ** get_address_of__frameDuration_8() { return &____frameDuration_8; }
	inline void set__frameDuration_8(GsnRational_t1635961804 * value)
	{
		____frameDuration_8 = value;
		Il2CppCodeGenWriteBarrier(&____frameDuration_8, value);
	}

	inline static int32_t get_offset_of__model_9() { return static_cast<int32_t>(offsetof(GsnRollForwardTask_t505512105, ____model_9)); }
	inline GameModelBase_t2215752692 * get__model_9() const { return ____model_9; }
	inline GameModelBase_t2215752692 ** get_address_of__model_9() { return &____model_9; }
	inline void set__model_9(GameModelBase_t2215752692 * value)
	{
		____model_9 = value;
		Il2CppCodeGenWriteBarrier(&____model_9, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
