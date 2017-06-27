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
#include "AssemblyU2DCSharp_GSN_Skill_Phoenix_Requests_Accou2998162407.h"
#include "mscorlib_System_Nullable_1_gen1102732004.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Phoenix.Requests.Account.AccountLoginData/Result
struct  Result_t2464515681 
{
public:
	// GSN.Skill.Phoenix.Requests.Account.AccountLoginData/EnvVars GSN.Skill.Phoenix.Requests.Account.AccountLoginData/Result::env_vars
	EnvVars_t2998162407  ___env_vars_0;
	// GSN.Skill.Phoenix.Requests.Account.User GSN.Skill.Phoenix.Requests.Account.AccountLoginData/Result::user
	User_t1577144177 * ___user_1;
	// System.Nullable`1<GSN.Skill.Phoenix.Requests.Account.CaptchaFailedAttemptResponse> GSN.Skill.Phoenix.Requests.Account.AccountLoginData/Result::info
	Nullable_1_t1102732004  ___info_2;

public:
	inline static int32_t get_offset_of_env_vars_0() { return static_cast<int32_t>(offsetof(Result_t2464515681, ___env_vars_0)); }
	inline EnvVars_t2998162407  get_env_vars_0() const { return ___env_vars_0; }
	inline EnvVars_t2998162407 * get_address_of_env_vars_0() { return &___env_vars_0; }
	inline void set_env_vars_0(EnvVars_t2998162407  value)
	{
		___env_vars_0 = value;
	}

	inline static int32_t get_offset_of_user_1() { return static_cast<int32_t>(offsetof(Result_t2464515681, ___user_1)); }
	inline User_t1577144177 * get_user_1() const { return ___user_1; }
	inline User_t1577144177 ** get_address_of_user_1() { return &___user_1; }
	inline void set_user_1(User_t1577144177 * value)
	{
		___user_1 = value;
		Il2CppCodeGenWriteBarrier(&___user_1, value);
	}

	inline static int32_t get_offset_of_info_2() { return static_cast<int32_t>(offsetof(Result_t2464515681, ___info_2)); }
	inline Nullable_1_t1102732004  get_info_2() const { return ___info_2; }
	inline Nullable_1_t1102732004 * get_address_of_info_2() { return &___info_2; }
	inline void set_info_2(Nullable_1_t1102732004  value)
	{
		___info_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of GSN.Skill.Phoenix.Requests.Account.AccountLoginData/Result
struct Result_t2464515681_marshaled_pinvoke
{
	EnvVars_t2998162407_marshaled_pinvoke ___env_vars_0;
	User_t1577144177 * ___user_1;
	Nullable_1_t1102732004  ___info_2;
};
// Native definition for COM marshalling of GSN.Skill.Phoenix.Requests.Account.AccountLoginData/Result
struct Result_t2464515681_marshaled_com
{
	EnvVars_t2998162407_marshaled_com ___env_vars_0;
	User_t1577144177 * ___user_1;
	Nullable_1_t1102732004  ___info_2;
};
