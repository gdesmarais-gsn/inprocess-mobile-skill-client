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
#include "AssemblyU2DCSharp_GSN_Skill_Phoenix_Requests_Tourn3039471716.h"
#include "AssemblyU2DCSharp_GSN_Skill_Phoenix_Requests_Tourn1431012079.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Phoenix.Requests.Tournament.TournamentResultData/Result
struct  Result_t1068025539 
{
public:
	// GSN.Skill.Phoenix.Requests.Tournament.TournamentResultData/TournamentResult GSN.Skill.Phoenix.Requests.Tournament.TournamentResultData/Result::tournament
	TournamentResult_t3039471716  ___tournament_0;
	// GSN.Skill.Phoenix.Requests.Account.User GSN.Skill.Phoenix.Requests.Tournament.TournamentResultData/Result::user
	User_t1577144177 * ___user_1;
	// System.String GSN.Skill.Phoenix.Requests.Tournament.TournamentResultData/Result::fb_app_id
	String_t* ___fb_app_id_2;
	// GSN.Skill.Phoenix.Requests.Tournament.ListFlavorsData/Flavor GSN.Skill.Phoenix.Requests.Tournament.TournamentResultData/Result::flavor
	Flavor_t1431012079  ___flavor_3;

public:
	inline static int32_t get_offset_of_tournament_0() { return static_cast<int32_t>(offsetof(Result_t1068025539, ___tournament_0)); }
	inline TournamentResult_t3039471716  get_tournament_0() const { return ___tournament_0; }
	inline TournamentResult_t3039471716 * get_address_of_tournament_0() { return &___tournament_0; }
	inline void set_tournament_0(TournamentResult_t3039471716  value)
	{
		___tournament_0 = value;
	}

	inline static int32_t get_offset_of_user_1() { return static_cast<int32_t>(offsetof(Result_t1068025539, ___user_1)); }
	inline User_t1577144177 * get_user_1() const { return ___user_1; }
	inline User_t1577144177 ** get_address_of_user_1() { return &___user_1; }
	inline void set_user_1(User_t1577144177 * value)
	{
		___user_1 = value;
		Il2CppCodeGenWriteBarrier(&___user_1, value);
	}

	inline static int32_t get_offset_of_fb_app_id_2() { return static_cast<int32_t>(offsetof(Result_t1068025539, ___fb_app_id_2)); }
	inline String_t* get_fb_app_id_2() const { return ___fb_app_id_2; }
	inline String_t** get_address_of_fb_app_id_2() { return &___fb_app_id_2; }
	inline void set_fb_app_id_2(String_t* value)
	{
		___fb_app_id_2 = value;
		Il2CppCodeGenWriteBarrier(&___fb_app_id_2, value);
	}

	inline static int32_t get_offset_of_flavor_3() { return static_cast<int32_t>(offsetof(Result_t1068025539, ___flavor_3)); }
	inline Flavor_t1431012079  get_flavor_3() const { return ___flavor_3; }
	inline Flavor_t1431012079 * get_address_of_flavor_3() { return &___flavor_3; }
	inline void set_flavor_3(Flavor_t1431012079  value)
	{
		___flavor_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of GSN.Skill.Phoenix.Requests.Tournament.TournamentResultData/Result
struct Result_t1068025539_marshaled_pinvoke
{
	TournamentResult_t3039471716_marshaled_pinvoke ___tournament_0;
	User_t1577144177 * ___user_1;
	char* ___fb_app_id_2;
	Flavor_t1431012079_marshaled_pinvoke ___flavor_3;
};
// Native definition for COM marshalling of GSN.Skill.Phoenix.Requests.Tournament.TournamentResultData/Result
struct Result_t1068025539_marshaled_com
{
	TournamentResult_t3039471716_marshaled_com ___tournament_0;
	User_t1577144177 * ___user_1;
	Il2CppChar* ___fb_app_id_2;
	Flavor_t1431012079_marshaled_com ___flavor_3;
};
