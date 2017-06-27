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

#include "mscorlib_System_ValueType3507792607.h"
#include "AssemblyU2DCSharp_GSN_Skill_Phoenix_Requests_Accou3362481673.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Phoenix.Requests.Account.AccountLoginData/EnvVars
struct  EnvVars_t2998162407 
{
public:
	// GSN.Skill.Phoenix.Requests.Account.AccountLoginData/LightFeatures GSN.Skill.Phoenix.Requests.Account.AccountLoginData/EnvVars::light_features
	LightFeatures_t3362481673  ___light_features_0;
	// System.String GSN.Skill.Phoenix.Requests.Account.AccountLoginData/EnvVars::cookieName
	String_t* ___cookieName_1;

public:
	inline static int32_t get_offset_of_light_features_0() { return static_cast<int32_t>(offsetof(EnvVars_t2998162407, ___light_features_0)); }
	inline LightFeatures_t3362481673  get_light_features_0() const { return ___light_features_0; }
	inline LightFeatures_t3362481673 * get_address_of_light_features_0() { return &___light_features_0; }
	inline void set_light_features_0(LightFeatures_t3362481673  value)
	{
		___light_features_0 = value;
	}

	inline static int32_t get_offset_of_cookieName_1() { return static_cast<int32_t>(offsetof(EnvVars_t2998162407, ___cookieName_1)); }
	inline String_t* get_cookieName_1() const { return ___cookieName_1; }
	inline String_t** get_address_of_cookieName_1() { return &___cookieName_1; }
	inline void set_cookieName_1(String_t* value)
	{
		___cookieName_1 = value;
		Il2CppCodeGenWriteBarrier(&___cookieName_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of GSN.Skill.Phoenix.Requests.Account.AccountLoginData/EnvVars
struct EnvVars_t2998162407_marshaled_pinvoke
{
	LightFeatures_t3362481673  ___light_features_0;
	char* ___cookieName_1;
};
// Native definition for COM marshalling of GSN.Skill.Phoenix.Requests.Account.AccountLoginData/EnvVars
struct EnvVars_t2998162407_marshaled_com
{
	LightFeatures_t3362481673  ___light_features_0;
	Il2CppChar* ___cookieName_1;
};
