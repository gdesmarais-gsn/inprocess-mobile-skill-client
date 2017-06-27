#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// GSN.Skill.Games.Common.Client.Session.GameSession
struct GameSession_t3448824060;

#include "AssemblyU2DCSharp_GSN_Skill_Games_Common_Utils_Job4002496073.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Games.Common.Client.Session.ValidateJob
struct  ValidateJob_t4103004751  : public Job_t4002496073
{
public:
	// GSN.Skill.Games.Common.Client.Session.GameSession GSN.Skill.Games.Common.Client.Session.ValidateJob::gameSession
	GameSession_t3448824060 * ___gameSession_32;

public:
	inline static int32_t get_offset_of_gameSession_32() { return static_cast<int32_t>(offsetof(ValidateJob_t4103004751, ___gameSession_32)); }
	inline GameSession_t3448824060 * get_gameSession_32() const { return ___gameSession_32; }
	inline GameSession_t3448824060 ** get_address_of_gameSession_32() { return &___gameSession_32; }
	inline void set_gameSession_32(GameSession_t3448824060 * value)
	{
		___gameSession_32 = value;
		Il2CppCodeGenWriteBarrier(&___gameSession_32, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
