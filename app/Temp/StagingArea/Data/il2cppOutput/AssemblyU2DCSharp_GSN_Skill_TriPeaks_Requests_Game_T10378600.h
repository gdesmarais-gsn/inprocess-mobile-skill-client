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

#include "mscorlib_System_Object2689449295.h"
#include "AssemblyU2DCSharp_GSN_Skill_Phoenix_Requests_Accou2998162407.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.TriPeaks.Requests.Game.TriPeaksResult
struct  TriPeaksResult_t10378600  : public Il2CppObject
{
public:
	// System.String GSN.Skill.TriPeaks.Requests.Game.TriPeaksResult::status
	String_t* ___status_0;
	// GSN.Skill.Phoenix.Requests.Account.AccountLoginData/EnvVars GSN.Skill.TriPeaks.Requests.Game.TriPeaksResult::env_vars
	EnvVars_t2998162407  ___env_vars_1;

public:
	inline static int32_t get_offset_of_status_0() { return static_cast<int32_t>(offsetof(TriPeaksResult_t10378600, ___status_0)); }
	inline String_t* get_status_0() const { return ___status_0; }
	inline String_t** get_address_of_status_0() { return &___status_0; }
	inline void set_status_0(String_t* value)
	{
		___status_0 = value;
		Il2CppCodeGenWriteBarrier(&___status_0, value);
	}

	inline static int32_t get_offset_of_env_vars_1() { return static_cast<int32_t>(offsetof(TriPeaksResult_t10378600, ___env_vars_1)); }
	inline EnvVars_t2998162407  get_env_vars_1() const { return ___env_vars_1; }
	inline EnvVars_t2998162407 * get_address_of_env_vars_1() { return &___env_vars_1; }
	inline void set_env_vars_1(EnvVars_t2998162407  value)
	{
		___env_vars_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
