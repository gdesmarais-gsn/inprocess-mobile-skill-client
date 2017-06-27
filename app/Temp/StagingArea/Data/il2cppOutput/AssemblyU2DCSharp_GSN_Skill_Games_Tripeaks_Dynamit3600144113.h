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
// GSN.Skill.Games.Tripeaks.TriPeaksCard
struct TriPeaksCard_t214310709;

#include "AssemblyU2DCSharp_GSN_Skill_Games_Common_Tasks_Gsn3376855096.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Games.Tripeaks.DynamiteCountdownTask
struct  DynamiteCountdownTask_t3600144113  : public GsnTaskBase_t3376855096
{
public:
	// System.Int32 GSN.Skill.Games.Tripeaks.DynamiteCountdownTask::_timeLeftMS
	int32_t ____timeLeftMS_7;
	// System.Int32 GSN.Skill.Games.Tripeaks.DynamiteCountdownTask::_cardID
	int32_t ____cardID_8;
	// GSN.Skill.Games.Tripeaks.GameModel GSN.Skill.Games.Tripeaks.DynamiteCountdownTask::_model
	GameModel_t3841817345 * ____model_9;
	// GSN.Skill.Games.Tripeaks.TriPeaksCard GSN.Skill.Games.Tripeaks.DynamiteCountdownTask::_card
	TriPeaksCard_t214310709 * ____card_10;

public:
	inline static int32_t get_offset_of__timeLeftMS_7() { return static_cast<int32_t>(offsetof(DynamiteCountdownTask_t3600144113, ____timeLeftMS_7)); }
	inline int32_t get__timeLeftMS_7() const { return ____timeLeftMS_7; }
	inline int32_t* get_address_of__timeLeftMS_7() { return &____timeLeftMS_7; }
	inline void set__timeLeftMS_7(int32_t value)
	{
		____timeLeftMS_7 = value;
	}

	inline static int32_t get_offset_of__cardID_8() { return static_cast<int32_t>(offsetof(DynamiteCountdownTask_t3600144113, ____cardID_8)); }
	inline int32_t get__cardID_8() const { return ____cardID_8; }
	inline int32_t* get_address_of__cardID_8() { return &____cardID_8; }
	inline void set__cardID_8(int32_t value)
	{
		____cardID_8 = value;
	}

	inline static int32_t get_offset_of__model_9() { return static_cast<int32_t>(offsetof(DynamiteCountdownTask_t3600144113, ____model_9)); }
	inline GameModel_t3841817345 * get__model_9() const { return ____model_9; }
	inline GameModel_t3841817345 ** get_address_of__model_9() { return &____model_9; }
	inline void set__model_9(GameModel_t3841817345 * value)
	{
		____model_9 = value;
		Il2CppCodeGenWriteBarrier(&____model_9, value);
	}

	inline static int32_t get_offset_of__card_10() { return static_cast<int32_t>(offsetof(DynamiteCountdownTask_t3600144113, ____card_10)); }
	inline TriPeaksCard_t214310709 * get__card_10() const { return ____card_10; }
	inline TriPeaksCard_t214310709 ** get_address_of__card_10() { return &____card_10; }
	inline void set__card_10(TriPeaksCard_t214310709 * value)
	{
		____card_10 = value;
		Il2CppCodeGenWriteBarrier(&____card_10, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
