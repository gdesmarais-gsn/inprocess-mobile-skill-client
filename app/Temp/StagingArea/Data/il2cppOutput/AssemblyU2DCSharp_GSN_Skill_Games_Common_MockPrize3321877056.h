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
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t3943999495;

#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_Decimal724701077.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Games.Common.MockPrizeData
struct  MockPrizeData_t3321877056  : public Il2CppObject
{
public:
	// System.Decimal GSN.Skill.Games.Common.MockPrizeData::_amount
	Decimal_t724701077  ____amount_0;
	// System.String GSN.Skill.Games.Common.MockPrizeData::_currency
	String_t* ____currency_1;
	// System.String GSN.Skill.Games.Common.MockPrizeData::_currencySymbol
	String_t* ____currencySymbol_2;
	// System.Int32 GSN.Skill.Games.Common.MockPrizeData::_ranking
	int32_t ____ranking_3;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> GSN.Skill.Games.Common.MockPrizeData::_secondaryRewards
	Dictionary_2_t3943999495 * ____secondaryRewards_4;

public:
	inline static int32_t get_offset_of__amount_0() { return static_cast<int32_t>(offsetof(MockPrizeData_t3321877056, ____amount_0)); }
	inline Decimal_t724701077  get__amount_0() const { return ____amount_0; }
	inline Decimal_t724701077 * get_address_of__amount_0() { return &____amount_0; }
	inline void set__amount_0(Decimal_t724701077  value)
	{
		____amount_0 = value;
	}

	inline static int32_t get_offset_of__currency_1() { return static_cast<int32_t>(offsetof(MockPrizeData_t3321877056, ____currency_1)); }
	inline String_t* get__currency_1() const { return ____currency_1; }
	inline String_t** get_address_of__currency_1() { return &____currency_1; }
	inline void set__currency_1(String_t* value)
	{
		____currency_1 = value;
		Il2CppCodeGenWriteBarrier(&____currency_1, value);
	}

	inline static int32_t get_offset_of__currencySymbol_2() { return static_cast<int32_t>(offsetof(MockPrizeData_t3321877056, ____currencySymbol_2)); }
	inline String_t* get__currencySymbol_2() const { return ____currencySymbol_2; }
	inline String_t** get_address_of__currencySymbol_2() { return &____currencySymbol_2; }
	inline void set__currencySymbol_2(String_t* value)
	{
		____currencySymbol_2 = value;
		Il2CppCodeGenWriteBarrier(&____currencySymbol_2, value);
	}

	inline static int32_t get_offset_of__ranking_3() { return static_cast<int32_t>(offsetof(MockPrizeData_t3321877056, ____ranking_3)); }
	inline int32_t get__ranking_3() const { return ____ranking_3; }
	inline int32_t* get_address_of__ranking_3() { return &____ranking_3; }
	inline void set__ranking_3(int32_t value)
	{
		____ranking_3 = value;
	}

	inline static int32_t get_offset_of__secondaryRewards_4() { return static_cast<int32_t>(offsetof(MockPrizeData_t3321877056, ____secondaryRewards_4)); }
	inline Dictionary_2_t3943999495 * get__secondaryRewards_4() const { return ____secondaryRewards_4; }
	inline Dictionary_2_t3943999495 ** get_address_of__secondaryRewards_4() { return &____secondaryRewards_4; }
	inline void set__secondaryRewards_4(Dictionary_2_t3943999495 * value)
	{
		____secondaryRewards_4 = value;
		Il2CppCodeGenWriteBarrier(&____secondaryRewards_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
