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
// System.String
struct String_t;

#include "mscorlib_System_ValueType3507792607.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Phoenix.Requests.Reward.RedeemRewardData/Result
struct  Result_t858545524 
{
public:
	// GSN.Skill.Phoenix.Requests.Account.User GSN.Skill.Phoenix.Requests.Reward.RedeemRewardData/Result::user
	User_t1577144177 * ___user_0;
	// System.String GSN.Skill.Phoenix.Requests.Reward.RedeemRewardData/Result::redemption_status
	String_t* ___redemption_status_1;

public:
	inline static int32_t get_offset_of_user_0() { return static_cast<int32_t>(offsetof(Result_t858545524, ___user_0)); }
	inline User_t1577144177 * get_user_0() const { return ___user_0; }
	inline User_t1577144177 ** get_address_of_user_0() { return &___user_0; }
	inline void set_user_0(User_t1577144177 * value)
	{
		___user_0 = value;
		Il2CppCodeGenWriteBarrier(&___user_0, value);
	}

	inline static int32_t get_offset_of_redemption_status_1() { return static_cast<int32_t>(offsetof(Result_t858545524, ___redemption_status_1)); }
	inline String_t* get_redemption_status_1() const { return ___redemption_status_1; }
	inline String_t** get_address_of_redemption_status_1() { return &___redemption_status_1; }
	inline void set_redemption_status_1(String_t* value)
	{
		___redemption_status_1 = value;
		Il2CppCodeGenWriteBarrier(&___redemption_status_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of GSN.Skill.Phoenix.Requests.Reward.RedeemRewardData/Result
struct Result_t858545524_marshaled_pinvoke
{
	User_t1577144177 * ___user_0;
	char* ___redemption_status_1;
};
// Native definition for COM marshalling of GSN.Skill.Phoenix.Requests.Reward.RedeemRewardData/Result
struct Result_t858545524_marshaled_com
{
	User_t1577144177 * ___user_0;
	Il2CppChar* ___redemption_status_1;
};
