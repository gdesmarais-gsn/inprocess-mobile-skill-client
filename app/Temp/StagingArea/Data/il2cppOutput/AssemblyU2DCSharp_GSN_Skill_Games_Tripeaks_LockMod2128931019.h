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

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Games.Tripeaks.LockModelTask
struct  LockModelTask_t2128931019  : public GsnTaskBase_t3376855096
{
public:
	// GSN.Skill.Games.Tripeaks.GameModel GSN.Skill.Games.Tripeaks.LockModelTask::_model
	GameModel_t3841817345 * ____model_7;

public:
	inline static int32_t get_offset_of__model_7() { return static_cast<int32_t>(offsetof(LockModelTask_t2128931019, ____model_7)); }
	inline GameModel_t3841817345 * get__model_7() const { return ____model_7; }
	inline GameModel_t3841817345 ** get_address_of__model_7() { return &____model_7; }
	inline void set__model_7(GameModel_t3841817345 * value)
	{
		____model_7 = value;
		Il2CppCodeGenWriteBarrier(&____model_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
