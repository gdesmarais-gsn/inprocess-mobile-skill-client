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

// GSN.Skill.Phoenix.RewardEvent/Reward
struct  Reward_t2735046925 
{
public:
	// System.Int32 GSN.Skill.Phoenix.RewardEvent/Reward::price
	int32_t ___price_0;
	// System.Decimal GSN.Skill.Phoenix.RewardEvent/Reward::value
	Decimal_t724701077  ___value_1;
	// System.Boolean GSN.Skill.Phoenix.RewardEvent/Reward::canAfford
	bool ___canAfford_2;
	// System.Int32 GSN.Skill.Phoenix.RewardEvent/Reward::rewardID
	int32_t ___rewardID_3;

public:
	inline static int32_t get_offset_of_price_0() { return static_cast<int32_t>(offsetof(Reward_t2735046925, ___price_0)); }
	inline int32_t get_price_0() const { return ___price_0; }
	inline int32_t* get_address_of_price_0() { return &___price_0; }
	inline void set_price_0(int32_t value)
	{
		___price_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(Reward_t2735046925, ___value_1)); }
	inline Decimal_t724701077  get_value_1() const { return ___value_1; }
	inline Decimal_t724701077 * get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(Decimal_t724701077  value)
	{
		___value_1 = value;
	}

	inline static int32_t get_offset_of_canAfford_2() { return static_cast<int32_t>(offsetof(Reward_t2735046925, ___canAfford_2)); }
	inline bool get_canAfford_2() const { return ___canAfford_2; }
	inline bool* get_address_of_canAfford_2() { return &___canAfford_2; }
	inline void set_canAfford_2(bool value)
	{
		___canAfford_2 = value;
	}

	inline static int32_t get_offset_of_rewardID_3() { return static_cast<int32_t>(offsetof(Reward_t2735046925, ___rewardID_3)); }
	inline int32_t get_rewardID_3() const { return ___rewardID_3; }
	inline int32_t* get_address_of_rewardID_3() { return &___rewardID_3; }
	inline void set_rewardID_3(int32_t value)
	{
		___rewardID_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of GSN.Skill.Phoenix.RewardEvent/Reward
struct Reward_t2735046925_marshaled_pinvoke
{
	int32_t ___price_0;
	Decimal_t724701077  ___value_1;
	int32_t ___canAfford_2;
	int32_t ___rewardID_3;
};
// Native definition for COM marshalling of GSN.Skill.Phoenix.RewardEvent/Reward
struct Reward_t2735046925_marshaled_com
{
	int32_t ___price_0;
	Decimal_t724701077  ___value_1;
	int32_t ___canAfford_2;
	int32_t ___rewardID_3;
};
