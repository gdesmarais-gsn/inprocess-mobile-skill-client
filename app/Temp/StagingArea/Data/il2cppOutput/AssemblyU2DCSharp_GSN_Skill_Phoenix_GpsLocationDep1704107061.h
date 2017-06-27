#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Phoenix.GpsLocationDepositAllowedEvent
struct  GpsLocationDepositAllowedEvent_t1704107061  : public Il2CppObject
{
public:
	// System.Boolean GSN.Skill.Phoenix.GpsLocationDepositAllowedEvent::cardGamesAllowed
	bool ___cardGamesAllowed_0;
	// System.Boolean GSN.Skill.Phoenix.GpsLocationDepositAllowedEvent::allTournamentsAllowed
	bool ___allTournamentsAllowed_1;

public:
	inline static int32_t get_offset_of_cardGamesAllowed_0() { return static_cast<int32_t>(offsetof(GpsLocationDepositAllowedEvent_t1704107061, ___cardGamesAllowed_0)); }
	inline bool get_cardGamesAllowed_0() const { return ___cardGamesAllowed_0; }
	inline bool* get_address_of_cardGamesAllowed_0() { return &___cardGamesAllowed_0; }
	inline void set_cardGamesAllowed_0(bool value)
	{
		___cardGamesAllowed_0 = value;
	}

	inline static int32_t get_offset_of_allTournamentsAllowed_1() { return static_cast<int32_t>(offsetof(GpsLocationDepositAllowedEvent_t1704107061, ___allTournamentsAllowed_1)); }
	inline bool get_allTournamentsAllowed_1() const { return ___allTournamentsAllowed_1; }
	inline bool* get_address_of_allTournamentsAllowed_1() { return &___allTournamentsAllowed_1; }
	inline void set_allTournamentsAllowed_1(bool value)
	{
		___allTournamentsAllowed_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
