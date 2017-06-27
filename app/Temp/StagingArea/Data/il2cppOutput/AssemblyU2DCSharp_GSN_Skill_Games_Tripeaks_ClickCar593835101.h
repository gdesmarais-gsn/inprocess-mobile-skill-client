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

// GSN.Skill.Games.Tripeaks.ClickCardTask
struct  ClickCardTask_t593835101  : public GsnTaskBase_t3376855096
{
public:
	// System.Boolean GSN.Skill.Games.Tripeaks.ClickCardTask::_result
	bool ____result_7;
	// System.Int32 GSN.Skill.Games.Tripeaks.ClickCardTask::_cardID
	int32_t ____cardID_8;
	// GSN.Skill.Games.Tripeaks.GameModel GSN.Skill.Games.Tripeaks.ClickCardTask::_model
	GameModel_t3841817345 * ____model_9;

public:
	inline static int32_t get_offset_of__result_7() { return static_cast<int32_t>(offsetof(ClickCardTask_t593835101, ____result_7)); }
	inline bool get__result_7() const { return ____result_7; }
	inline bool* get_address_of__result_7() { return &____result_7; }
	inline void set__result_7(bool value)
	{
		____result_7 = value;
	}

	inline static int32_t get_offset_of__cardID_8() { return static_cast<int32_t>(offsetof(ClickCardTask_t593835101, ____cardID_8)); }
	inline int32_t get__cardID_8() const { return ____cardID_8; }
	inline int32_t* get_address_of__cardID_8() { return &____cardID_8; }
	inline void set__cardID_8(int32_t value)
	{
		____cardID_8 = value;
	}

	inline static int32_t get_offset_of__model_9() { return static_cast<int32_t>(offsetof(ClickCardTask_t593835101, ____model_9)); }
	inline GameModel_t3841817345 * get__model_9() const { return ____model_9; }
	inline GameModel_t3841817345 ** get_address_of__model_9() { return &____model_9; }
	inline void set__model_9(GameModel_t3841817345 * value)
	{
		____model_9 = value;
		Il2CppCodeGenWriteBarrier(&____model_9, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
