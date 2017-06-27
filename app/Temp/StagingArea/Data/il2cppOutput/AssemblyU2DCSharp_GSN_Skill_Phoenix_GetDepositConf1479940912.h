#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "mscorlib_System_ValueType3507792607.h"
#include "mscorlib_System_Decimal724701077.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Phoenix.GetDepositConfigDataSuccessEvent/DepositAmount
struct  DepositAmount_t1479940912 
{
public:
	// System.Decimal GSN.Skill.Phoenix.GetDepositConfigDataSuccessEvent/DepositAmount::baseAmount
	Decimal_t724701077  ___baseAmount_0;
	// System.Decimal GSN.Skill.Phoenix.GetDepositConfigDataSuccessEvent/DepositAmount::bonusAmount
	Decimal_t724701077  ___bonusAmount_1;

public:
	inline static int32_t get_offset_of_baseAmount_0() { return static_cast<int32_t>(offsetof(DepositAmount_t1479940912, ___baseAmount_0)); }
	inline Decimal_t724701077  get_baseAmount_0() const { return ___baseAmount_0; }
	inline Decimal_t724701077 * get_address_of_baseAmount_0() { return &___baseAmount_0; }
	inline void set_baseAmount_0(Decimal_t724701077  value)
	{
		___baseAmount_0 = value;
	}

	inline static int32_t get_offset_of_bonusAmount_1() { return static_cast<int32_t>(offsetof(DepositAmount_t1479940912, ___bonusAmount_1)); }
	inline Decimal_t724701077  get_bonusAmount_1() const { return ___bonusAmount_1; }
	inline Decimal_t724701077 * get_address_of_bonusAmount_1() { return &___bonusAmount_1; }
	inline void set_bonusAmount_1(Decimal_t724701077  value)
	{
		___bonusAmount_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
