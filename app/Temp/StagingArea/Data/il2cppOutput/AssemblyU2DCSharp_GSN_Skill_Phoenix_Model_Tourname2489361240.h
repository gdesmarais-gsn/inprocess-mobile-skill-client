#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// GSN.Skill.Requests.IWebRequest
struct IWebRequest_t216132554;
// GSN.Skill.Phoenix.Model.TournamentSignupManager
struct TournamentSignupManager_t2913170070;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Phoenix.Model.TournamentSignupManager/<OnTournamentSignupFail>c__AnonStorey3
struct  U3COnTournamentSignupFailU3Ec__AnonStorey3_t2489361240  : public Il2CppObject
{
public:
	// GSN.Skill.Requests.IWebRequest GSN.Skill.Phoenix.Model.TournamentSignupManager/<OnTournamentSignupFail>c__AnonStorey3::request
	Il2CppObject * ___request_0;
	// GSN.Skill.Phoenix.Model.TournamentSignupManager GSN.Skill.Phoenix.Model.TournamentSignupManager/<OnTournamentSignupFail>c__AnonStorey3::$this
	TournamentSignupManager_t2913170070 * ___U24this_1;

public:
	inline static int32_t get_offset_of_request_0() { return static_cast<int32_t>(offsetof(U3COnTournamentSignupFailU3Ec__AnonStorey3_t2489361240, ___request_0)); }
	inline Il2CppObject * get_request_0() const { return ___request_0; }
	inline Il2CppObject ** get_address_of_request_0() { return &___request_0; }
	inline void set_request_0(Il2CppObject * value)
	{
		___request_0 = value;
		Il2CppCodeGenWriteBarrier(&___request_0, value);
	}

	inline static int32_t get_offset_of_U24this_1() { return static_cast<int32_t>(offsetof(U3COnTournamentSignupFailU3Ec__AnonStorey3_t2489361240, ___U24this_1)); }
	inline TournamentSignupManager_t2913170070 * get_U24this_1() const { return ___U24this_1; }
	inline TournamentSignupManager_t2913170070 ** get_address_of_U24this_1() { return &___U24this_1; }
	inline void set_U24this_1(TournamentSignupManager_t2913170070 * value)
	{
		___U24this_1 = value;
		Il2CppCodeGenWriteBarrier(&___U24this_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
