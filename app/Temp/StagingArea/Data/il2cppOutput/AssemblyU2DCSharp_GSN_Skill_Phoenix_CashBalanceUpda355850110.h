#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_Decimal724701077.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Phoenix.CashBalanceUpdateEvent
struct  CashBalanceUpdateEvent_t355850110  : public Il2CppObject
{
public:
	// System.Decimal GSN.Skill.Phoenix.CashBalanceUpdateEvent::cashBalance
	Decimal_t724701077  ___cashBalance_0;
	// System.Decimal GSN.Skill.Phoenix.CashBalanceUpdateEvent::gameCredits
	Decimal_t724701077  ___gameCredits_1;
	// System.Boolean GSN.Skill.Phoenix.CashBalanceUpdateEvent::isCashPlayer
	bool ___isCashPlayer_2;

public:
	inline static int32_t get_offset_of_cashBalance_0() { return static_cast<int32_t>(offsetof(CashBalanceUpdateEvent_t355850110, ___cashBalance_0)); }
	inline Decimal_t724701077  get_cashBalance_0() const { return ___cashBalance_0; }
	inline Decimal_t724701077 * get_address_of_cashBalance_0() { return &___cashBalance_0; }
	inline void set_cashBalance_0(Decimal_t724701077  value)
	{
		___cashBalance_0 = value;
	}

	inline static int32_t get_offset_of_gameCredits_1() { return static_cast<int32_t>(offsetof(CashBalanceUpdateEvent_t355850110, ___gameCredits_1)); }
	inline Decimal_t724701077  get_gameCredits_1() const { return ___gameCredits_1; }
	inline Decimal_t724701077 * get_address_of_gameCredits_1() { return &___gameCredits_1; }
	inline void set_gameCredits_1(Decimal_t724701077  value)
	{
		___gameCredits_1 = value;
	}

	inline static int32_t get_offset_of_isCashPlayer_2() { return static_cast<int32_t>(offsetof(CashBalanceUpdateEvent_t355850110, ___isCashPlayer_2)); }
	inline bool get_isCashPlayer_2() const { return ___isCashPlayer_2; }
	inline bool* get_address_of_isCashPlayer_2() { return &___isCashPlayer_2; }
	inline void set_isCashPlayer_2(bool value)
	{
		___isCashPlayer_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
