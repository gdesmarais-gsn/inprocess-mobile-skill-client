#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// GSN.Skill.Games.Tripeaks.GameModel
struct GameModel_t3841817345;

#include "AssemblyU2DCSharp_GSN_Skill_Games_Common_Tasks_Gsn3376855096.h"
#include "AssemblyU2DCSharp_GSN_Skill_Games_Tripeaks_UpdateS3725099735.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Games.Tripeaks.UpdateScoreTask
struct  UpdateScoreTask_t3654187114  : public GsnTaskBase_t3376855096
{
public:
	// GSN.Skill.Games.Tripeaks.GameModel GSN.Skill.Games.Tripeaks.UpdateScoreTask::_model
	GameModel_t3841817345 * ____model_7;
	// GSN.Skill.Games.Tripeaks.UpdateScoreEvent GSN.Skill.Games.Tripeaks.UpdateScoreTask::_updateScoreEvent
	UpdateScoreEvent_t3725099735  ____updateScoreEvent_8;

public:
	inline static int32_t get_offset_of__model_7() { return static_cast<int32_t>(offsetof(UpdateScoreTask_t3654187114, ____model_7)); }
	inline GameModel_t3841817345 * get__model_7() const { return ____model_7; }
	inline GameModel_t3841817345 ** get_address_of__model_7() { return &____model_7; }
	inline void set__model_7(GameModel_t3841817345 * value)
	{
		____model_7 = value;
		Il2CppCodeGenWriteBarrier(&____model_7, value);
	}

	inline static int32_t get_offset_of__updateScoreEvent_8() { return static_cast<int32_t>(offsetof(UpdateScoreTask_t3654187114, ____updateScoreEvent_8)); }
	inline UpdateScoreEvent_t3725099735  get__updateScoreEvent_8() const { return ____updateScoreEvent_8; }
	inline UpdateScoreEvent_t3725099735 * get_address_of__updateScoreEvent_8() { return &____updateScoreEvent_8; }
	inline void set__updateScoreEvent_8(UpdateScoreEvent_t3725099735  value)
	{
		____updateScoreEvent_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
