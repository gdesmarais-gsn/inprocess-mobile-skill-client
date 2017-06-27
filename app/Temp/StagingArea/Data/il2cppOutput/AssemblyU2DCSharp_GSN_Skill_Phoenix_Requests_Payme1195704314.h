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

#include "mscorlib_System_ValueType3507792607.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Phoenix.Requests.Payment.WithdrawData/Result
struct  Result_t1195704314 
{
public:
	// GSN.Skill.Phoenix.Requests.Account.User GSN.Skill.Phoenix.Requests.Payment.WithdrawData/Result::user
	User_t1577144177 * ___user_0;

public:
	inline static int32_t get_offset_of_user_0() { return static_cast<int32_t>(offsetof(Result_t1195704314, ___user_0)); }
	inline User_t1577144177 * get_user_0() const { return ___user_0; }
	inline User_t1577144177 ** get_address_of_user_0() { return &___user_0; }
	inline void set_user_0(User_t1577144177 * value)
	{
		___user_0 = value;
		Il2CppCodeGenWriteBarrier(&___user_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of GSN.Skill.Phoenix.Requests.Payment.WithdrawData/Result
struct Result_t1195704314_marshaled_pinvoke
{
	User_t1577144177 * ___user_0;
};
// Native definition for COM marshalling of GSN.Skill.Phoenix.Requests.Payment.WithdrawData/Result
struct Result_t1195704314_marshaled_com
{
	User_t1577144177 * ___user_0;
};
