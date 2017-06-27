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
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t1440998580;

#include "AssemblyU2DCSharp_GSN_Skill_Games_Common_Tasks_Gsn3376855096.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Games.Tripeaks.FlipCardTask
struct  FlipCardTask_t2449739428  : public GsnTaskBase_t3376855096
{
public:
	// GSN.Skill.Games.Tripeaks.GameModel GSN.Skill.Games.Tripeaks.FlipCardTask::_model
	GameModel_t3841817345 * ____model_7;
	// System.Collections.Generic.List`1<System.Int32> GSN.Skill.Games.Tripeaks.FlipCardTask::_faceUpCards
	List_1_t1440998580 * ____faceUpCards_8;

public:
	inline static int32_t get_offset_of__model_7() { return static_cast<int32_t>(offsetof(FlipCardTask_t2449739428, ____model_7)); }
	inline GameModel_t3841817345 * get__model_7() const { return ____model_7; }
	inline GameModel_t3841817345 ** get_address_of__model_7() { return &____model_7; }
	inline void set__model_7(GameModel_t3841817345 * value)
	{
		____model_7 = value;
		Il2CppCodeGenWriteBarrier(&____model_7, value);
	}

	inline static int32_t get_offset_of__faceUpCards_8() { return static_cast<int32_t>(offsetof(FlipCardTask_t2449739428, ____faceUpCards_8)); }
	inline List_1_t1440998580 * get__faceUpCards_8() const { return ____faceUpCards_8; }
	inline List_1_t1440998580 ** get_address_of__faceUpCards_8() { return &____faceUpCards_8; }
	inline void set__faceUpCards_8(List_1_t1440998580 * value)
	{
		____faceUpCards_8 = value;
		Il2CppCodeGenWriteBarrier(&____faceUpCards_8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
