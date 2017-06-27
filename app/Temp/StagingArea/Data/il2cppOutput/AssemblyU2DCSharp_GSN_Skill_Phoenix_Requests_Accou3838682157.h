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

// GSN.Skill.Phoenix.Requests.Account.CompleteP1ExperienceData/Result
struct  Result_t3838682157 
{
public:
	// GSN.Skill.Phoenix.Requests.Account.User GSN.Skill.Phoenix.Requests.Account.CompleteP1ExperienceData/Result::user
	User_t1577144177 * ___user_0;
	// System.Boolean GSN.Skill.Phoenix.Requests.Account.CompleteP1ExperienceData/Result::account_changed
	bool ___account_changed_1;
	// System.String GSN.Skill.Phoenix.Requests.Account.CompleteP1ExperienceData/Result::message
	String_t* ___message_2;

public:
	inline static int32_t get_offset_of_user_0() { return static_cast<int32_t>(offsetof(Result_t3838682157, ___user_0)); }
	inline User_t1577144177 * get_user_0() const { return ___user_0; }
	inline User_t1577144177 ** get_address_of_user_0() { return &___user_0; }
	inline void set_user_0(User_t1577144177 * value)
	{
		___user_0 = value;
		Il2CppCodeGenWriteBarrier(&___user_0, value);
	}

	inline static int32_t get_offset_of_account_changed_1() { return static_cast<int32_t>(offsetof(Result_t3838682157, ___account_changed_1)); }
	inline bool get_account_changed_1() const { return ___account_changed_1; }
	inline bool* get_address_of_account_changed_1() { return &___account_changed_1; }
	inline void set_account_changed_1(bool value)
	{
		___account_changed_1 = value;
	}

	inline static int32_t get_offset_of_message_2() { return static_cast<int32_t>(offsetof(Result_t3838682157, ___message_2)); }
	inline String_t* get_message_2() const { return ___message_2; }
	inline String_t** get_address_of_message_2() { return &___message_2; }
	inline void set_message_2(String_t* value)
	{
		___message_2 = value;
		Il2CppCodeGenWriteBarrier(&___message_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of GSN.Skill.Phoenix.Requests.Account.CompleteP1ExperienceData/Result
struct Result_t3838682157_marshaled_pinvoke
{
	User_t1577144177 * ___user_0;
	int32_t ___account_changed_1;
	char* ___message_2;
};
// Native definition for COM marshalling of GSN.Skill.Phoenix.Requests.Account.CompleteP1ExperienceData/Result
struct Result_t3838682157_marshaled_com
{
	User_t1577144177 * ___user_0;
	int32_t ___account_changed_1;
	Il2CppChar* ___message_2;
};
