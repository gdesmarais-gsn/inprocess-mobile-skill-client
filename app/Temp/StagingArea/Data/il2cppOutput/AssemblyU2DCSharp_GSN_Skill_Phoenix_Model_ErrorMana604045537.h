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

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Phoenix.Model.ErrorManager/<HandleWebRequestError>c__AnonStorey0
struct  U3CHandleWebRequestErrorU3Ec__AnonStorey0_t604045537  : public Il2CppObject
{
public:
	// GSN.Skill.Requests.IWebRequest GSN.Skill.Phoenix.Model.ErrorManager/<HandleWebRequestError>c__AnonStorey0::request
	Il2CppObject * ___request_0;

public:
	inline static int32_t get_offset_of_request_0() { return static_cast<int32_t>(offsetof(U3CHandleWebRequestErrorU3Ec__AnonStorey0_t604045537, ___request_0)); }
	inline Il2CppObject * get_request_0() const { return ___request_0; }
	inline Il2CppObject ** get_address_of_request_0() { return &___request_0; }
	inline void set_request_0(Il2CppObject * value)
	{
		___request_0 = value;
		Il2CppCodeGenWriteBarrier(&___request_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
