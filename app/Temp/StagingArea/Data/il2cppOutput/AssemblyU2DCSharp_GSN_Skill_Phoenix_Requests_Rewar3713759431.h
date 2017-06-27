#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// GSN.Skill.Phoenix.Requests.Account.User
struct User_t1577144177;
// GSN.Skill.Phoenix.Requests.Reward.GetRewardsData/Reward[]
struct RewardU5BU5D_t1080027996;
struct Reward_t245563777_marshaled_pinvoke;
struct Reward_t245563777_marshaled_com;

#include "mscorlib_System_ValueType3507792607.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Phoenix.Requests.Reward.GetRewardsData/Result
struct  Result_t3713759431 
{
public:
	// GSN.Skill.Phoenix.Requests.Account.User GSN.Skill.Phoenix.Requests.Reward.GetRewardsData/Result::user
	User_t1577144177 * ___user_0;
	// GSN.Skill.Phoenix.Requests.Reward.GetRewardsData/Reward[] GSN.Skill.Phoenix.Requests.Reward.GetRewardsData/Result::rewards
	RewardU5BU5D_t1080027996* ___rewards_1;

public:
	inline static int32_t get_offset_of_user_0() { return static_cast<int32_t>(offsetof(Result_t3713759431, ___user_0)); }
	inline User_t1577144177 * get_user_0() const { return ___user_0; }
	inline User_t1577144177 ** get_address_of_user_0() { return &___user_0; }
	inline void set_user_0(User_t1577144177 * value)
	{
		___user_0 = value;
		Il2CppCodeGenWriteBarrier(&___user_0, value);
	}

	inline static int32_t get_offset_of_rewards_1() { return static_cast<int32_t>(offsetof(Result_t3713759431, ___rewards_1)); }
	inline RewardU5BU5D_t1080027996* get_rewards_1() const { return ___rewards_1; }
	inline RewardU5BU5D_t1080027996** get_address_of_rewards_1() { return &___rewards_1; }
	inline void set_rewards_1(RewardU5BU5D_t1080027996* value)
	{
		___rewards_1 = value;
		Il2CppCodeGenWriteBarrier(&___rewards_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of GSN.Skill.Phoenix.Requests.Reward.GetRewardsData/Result
struct Result_t3713759431_marshaled_pinvoke
{
	User_t1577144177 * ___user_0;
	Reward_t245563777_marshaled_pinvoke* ___rewards_1;
};
// Native definition for COM marshalling of GSN.Skill.Phoenix.Requests.Reward.GetRewardsData/Result
struct Result_t3713759431_marshaled_com
{
	User_t1577144177 * ___user_0;
	Reward_t245563777_marshaled_com* ___rewards_1;
};
