#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// GSN.Skill.Games.Common.Model.GameModelBase
struct GameModelBase_t2215752692;

#include "AssemblyU2DCSharp_GSN_Skill_Games_Common_Tasks_Gsn3376855096.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Games.Common.Tasks.GsnGameClockTask
struct  GsnGameClockTask_t2111061105  : public GsnTaskBase_t3376855096
{
public:
	// System.Int32 GSN.Skill.Games.Common.Tasks.GsnGameClockTask::_duration
	int32_t ____duration_7;
	// GSN.Skill.Games.Common.Model.GameModelBase GSN.Skill.Games.Common.Tasks.GsnGameClockTask::_model
	GameModelBase_t2215752692 * ____model_8;
	// System.Int32 GSN.Skill.Games.Common.Tasks.GsnGameClockTask::_timeStep
	int32_t ____timeStep_9;
	// System.Int32 GSN.Skill.Games.Common.Tasks.GsnGameClockTask::_startTime
	int32_t ____startTime_10;
	// System.Int32 GSN.Skill.Games.Common.Tasks.GsnGameClockTask::<accumulatedPauseTime>k__BackingField
	int32_t ___U3CaccumulatedPauseTimeU3Ek__BackingField_11;
	// System.Int32 GSN.Skill.Games.Common.Tasks.GsnGameClockTask::_lastPausedAt
	int32_t ____lastPausedAt_12;

public:
	inline static int32_t get_offset_of__duration_7() { return static_cast<int32_t>(offsetof(GsnGameClockTask_t2111061105, ____duration_7)); }
	inline int32_t get__duration_7() const { return ____duration_7; }
	inline int32_t* get_address_of__duration_7() { return &____duration_7; }
	inline void set__duration_7(int32_t value)
	{
		____duration_7 = value;
	}

	inline static int32_t get_offset_of__model_8() { return static_cast<int32_t>(offsetof(GsnGameClockTask_t2111061105, ____model_8)); }
	inline GameModelBase_t2215752692 * get__model_8() const { return ____model_8; }
	inline GameModelBase_t2215752692 ** get_address_of__model_8() { return &____model_8; }
	inline void set__model_8(GameModelBase_t2215752692 * value)
	{
		____model_8 = value;
		Il2CppCodeGenWriteBarrier(&____model_8, value);
	}

	inline static int32_t get_offset_of__timeStep_9() { return static_cast<int32_t>(offsetof(GsnGameClockTask_t2111061105, ____timeStep_9)); }
	inline int32_t get__timeStep_9() const { return ____timeStep_9; }
	inline int32_t* get_address_of__timeStep_9() { return &____timeStep_9; }
	inline void set__timeStep_9(int32_t value)
	{
		____timeStep_9 = value;
	}

	inline static int32_t get_offset_of__startTime_10() { return static_cast<int32_t>(offsetof(GsnGameClockTask_t2111061105, ____startTime_10)); }
	inline int32_t get__startTime_10() const { return ____startTime_10; }
	inline int32_t* get_address_of__startTime_10() { return &____startTime_10; }
	inline void set__startTime_10(int32_t value)
	{
		____startTime_10 = value;
	}

	inline static int32_t get_offset_of_U3CaccumulatedPauseTimeU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(GsnGameClockTask_t2111061105, ___U3CaccumulatedPauseTimeU3Ek__BackingField_11)); }
	inline int32_t get_U3CaccumulatedPauseTimeU3Ek__BackingField_11() const { return ___U3CaccumulatedPauseTimeU3Ek__BackingField_11; }
	inline int32_t* get_address_of_U3CaccumulatedPauseTimeU3Ek__BackingField_11() { return &___U3CaccumulatedPauseTimeU3Ek__BackingField_11; }
	inline void set_U3CaccumulatedPauseTimeU3Ek__BackingField_11(int32_t value)
	{
		___U3CaccumulatedPauseTimeU3Ek__BackingField_11 = value;
	}

	inline static int32_t get_offset_of__lastPausedAt_12() { return static_cast<int32_t>(offsetof(GsnGameClockTask_t2111061105, ____lastPausedAt_12)); }
	inline int32_t get__lastPausedAt_12() const { return ____lastPausedAt_12; }
	inline int32_t* get_address_of__lastPausedAt_12() { return &____lastPausedAt_12; }
	inline void set__lastPausedAt_12(int32_t value)
	{
		____lastPausedAt_12 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
