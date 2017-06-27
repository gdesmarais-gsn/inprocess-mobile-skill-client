#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// GSN.Skill.Requests.WebRequests
struct WebRequests_t3348797540;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Phoenix.Model.ErrorManager/<HandleWebRequestsError>c__AnonStorey1
struct  U3CHandleWebRequestsErrorU3Ec__AnonStorey1_t1051369075  : public Il2CppObject
{
public:
	// GSN.Skill.Requests.WebRequests GSN.Skill.Phoenix.Model.ErrorManager/<HandleWebRequestsError>c__AnonStorey1::requests
	WebRequests_t3348797540 * ___requests_0;

public:
	inline static int32_t get_offset_of_requests_0() { return static_cast<int32_t>(offsetof(U3CHandleWebRequestsErrorU3Ec__AnonStorey1_t1051369075, ___requests_0)); }
	inline WebRequests_t3348797540 * get_requests_0() const { return ___requests_0; }
	inline WebRequests_t3348797540 ** get_address_of_requests_0() { return &___requests_0; }
	inline void set_requests_0(WebRequests_t3348797540 * value)
	{
		___requests_0 = value;
		Il2CppCodeGenWriteBarrier(&___requests_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
