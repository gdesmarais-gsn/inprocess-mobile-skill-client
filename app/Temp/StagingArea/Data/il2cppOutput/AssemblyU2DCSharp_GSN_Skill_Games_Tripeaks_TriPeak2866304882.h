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

#include "AssemblyU2DCSharp_GSN_Skill_Games_Common_Tasks_Gsn1299811741.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Games.Tripeaks.TriPeaksScheduler
struct  TriPeaksScheduler_t2866304882  : public GsnScheduler_t1299811741
{
public:
	// GSN.Skill.Games.Tripeaks.GameModel GSN.Skill.Games.Tripeaks.TriPeaksScheduler::_gameModel
	GameModel_t3841817345 * ____gameModel_15;
	// System.Boolean GSN.Skill.Games.Tripeaks.TriPeaksScheduler::_sentClearEvent
	bool ____sentClearEvent_16;

public:
	inline static int32_t get_offset_of__gameModel_15() { return static_cast<int32_t>(offsetof(TriPeaksScheduler_t2866304882, ____gameModel_15)); }
	inline GameModel_t3841817345 * get__gameModel_15() const { return ____gameModel_15; }
	inline GameModel_t3841817345 ** get_address_of__gameModel_15() { return &____gameModel_15; }
	inline void set__gameModel_15(GameModel_t3841817345 * value)
	{
		____gameModel_15 = value;
		Il2CppCodeGenWriteBarrier(&____gameModel_15, value);
	}

	inline static int32_t get_offset_of__sentClearEvent_16() { return static_cast<int32_t>(offsetof(TriPeaksScheduler_t2866304882, ____sentClearEvent_16)); }
	inline bool get__sentClearEvent_16() const { return ____sentClearEvent_16; }
	inline bool* get_address_of__sentClearEvent_16() { return &____sentClearEvent_16; }
	inline void set__sentClearEvent_16(bool value)
	{
		____sentClearEvent_16 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
