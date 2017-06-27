#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;

#include "mscorlib_System_ValueType3507792607.h"
#include "mscorlib_System_Decimal724701077.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Phoenix.View.TournamentDetailsPopupView/RankSetPrize
struct  RankSetPrize_t276363598 
{
public:
	// System.String GSN.Skill.Phoenix.View.TournamentDetailsPopupView/RankSetPrize::rank
	String_t* ___rank_0;
	// System.Decimal GSN.Skill.Phoenix.View.TournamentDetailsPopupView/RankSetPrize::prize
	Decimal_t724701077  ___prize_1;

public:
	inline static int32_t get_offset_of_rank_0() { return static_cast<int32_t>(offsetof(RankSetPrize_t276363598, ___rank_0)); }
	inline String_t* get_rank_0() const { return ___rank_0; }
	inline String_t** get_address_of_rank_0() { return &___rank_0; }
	inline void set_rank_0(String_t* value)
	{
		___rank_0 = value;
		Il2CppCodeGenWriteBarrier(&___rank_0, value);
	}

	inline static int32_t get_offset_of_prize_1() { return static_cast<int32_t>(offsetof(RankSetPrize_t276363598, ___prize_1)); }
	inline Decimal_t724701077  get_prize_1() const { return ___prize_1; }
	inline Decimal_t724701077 * get_address_of_prize_1() { return &___prize_1; }
	inline void set_prize_1(Decimal_t724701077  value)
	{
		___prize_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of GSN.Skill.Phoenix.View.TournamentDetailsPopupView/RankSetPrize
struct RankSetPrize_t276363598_marshaled_pinvoke
{
	char* ___rank_0;
	Decimal_t724701077  ___prize_1;
};
// Native definition for COM marshalling of GSN.Skill.Phoenix.View.TournamentDetailsPopupView/RankSetPrize
struct RankSetPrize_t276363598_marshaled_com
{
	Il2CppChar* ___rank_0;
	Decimal_t724701077  ___prize_1;
};
