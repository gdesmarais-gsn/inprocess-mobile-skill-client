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

// GSN.Skill.Phoenix.Requests.Tournament.WinItNowData/Result
struct  Result_t27211638 
{
public:
	// GSN.Skill.Phoenix.Requests.Account.User GSN.Skill.Phoenix.Requests.Tournament.WinItNowData/Result::user
	User_t1577144177 * ___user_0;
	// System.String GSN.Skill.Phoenix.Requests.Tournament.WinItNowData/Result::action_performed
	String_t* ___action_performed_1;
	// System.String GSN.Skill.Phoenix.Requests.Tournament.WinItNowData/Result::status
	String_t* ___status_2;

public:
	inline static int32_t get_offset_of_user_0() { return static_cast<int32_t>(offsetof(Result_t27211638, ___user_0)); }
	inline User_t1577144177 * get_user_0() const { return ___user_0; }
	inline User_t1577144177 ** get_address_of_user_0() { return &___user_0; }
	inline void set_user_0(User_t1577144177 * value)
	{
		___user_0 = value;
		Il2CppCodeGenWriteBarrier(&___user_0, value);
	}

	inline static int32_t get_offset_of_action_performed_1() { return static_cast<int32_t>(offsetof(Result_t27211638, ___action_performed_1)); }
	inline String_t* get_action_performed_1() const { return ___action_performed_1; }
	inline String_t** get_address_of_action_performed_1() { return &___action_performed_1; }
	inline void set_action_performed_1(String_t* value)
	{
		___action_performed_1 = value;
		Il2CppCodeGenWriteBarrier(&___action_performed_1, value);
	}

	inline static int32_t get_offset_of_status_2() { return static_cast<int32_t>(offsetof(Result_t27211638, ___status_2)); }
	inline String_t* get_status_2() const { return ___status_2; }
	inline String_t** get_address_of_status_2() { return &___status_2; }
	inline void set_status_2(String_t* value)
	{
		___status_2 = value;
		Il2CppCodeGenWriteBarrier(&___status_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of GSN.Skill.Phoenix.Requests.Tournament.WinItNowData/Result
struct Result_t27211638_marshaled_pinvoke
{
	User_t1577144177 * ___user_0;
	char* ___action_performed_1;
	char* ___status_2;
};
// Native definition for COM marshalling of GSN.Skill.Phoenix.Requests.Tournament.WinItNowData/Result
struct Result_t27211638_marshaled_com
{
	User_t1577144177 * ___user_0;
	Il2CppChar* ___action_performed_1;
	Il2CppChar* ___status_2;
};
