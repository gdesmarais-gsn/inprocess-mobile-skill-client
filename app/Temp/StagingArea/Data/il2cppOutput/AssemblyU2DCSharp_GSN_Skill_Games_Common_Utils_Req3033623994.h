#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Action`1<System.String>
struct Action_1_t1831019615;
// GSN.Skill.Games.Common.Utils.RequestWrapper
struct RequestWrapper_t293827378;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Games.Common.Utils.RequestWrapper/<send>c__AnonStorey0
struct  U3CsendU3Ec__AnonStorey0_t3033623994  : public Il2CppObject
{
public:
	// System.Action`1<System.String> GSN.Skill.Games.Common.Utils.RequestWrapper/<send>c__AnonStorey0::failureCallback
	Action_1_t1831019615 * ___failureCallback_0;
	// System.Action`1<System.String> GSN.Skill.Games.Common.Utils.RequestWrapper/<send>c__AnonStorey0::successCallback
	Action_1_t1831019615 * ___successCallback_1;
	// GSN.Skill.Games.Common.Utils.RequestWrapper GSN.Skill.Games.Common.Utils.RequestWrapper/<send>c__AnonStorey0::$this
	RequestWrapper_t293827378 * ___U24this_2;

public:
	inline static int32_t get_offset_of_failureCallback_0() { return static_cast<int32_t>(offsetof(U3CsendU3Ec__AnonStorey0_t3033623994, ___failureCallback_0)); }
	inline Action_1_t1831019615 * get_failureCallback_0() const { return ___failureCallback_0; }
	inline Action_1_t1831019615 ** get_address_of_failureCallback_0() { return &___failureCallback_0; }
	inline void set_failureCallback_0(Action_1_t1831019615 * value)
	{
		___failureCallback_0 = value;
		Il2CppCodeGenWriteBarrier(&___failureCallback_0, value);
	}

	inline static int32_t get_offset_of_successCallback_1() { return static_cast<int32_t>(offsetof(U3CsendU3Ec__AnonStorey0_t3033623994, ___successCallback_1)); }
	inline Action_1_t1831019615 * get_successCallback_1() const { return ___successCallback_1; }
	inline Action_1_t1831019615 ** get_address_of_successCallback_1() { return &___successCallback_1; }
	inline void set_successCallback_1(Action_1_t1831019615 * value)
	{
		___successCallback_1 = value;
		Il2CppCodeGenWriteBarrier(&___successCallback_1, value);
	}

	inline static int32_t get_offset_of_U24this_2() { return static_cast<int32_t>(offsetof(U3CsendU3Ec__AnonStorey0_t3033623994, ___U24this_2)); }
	inline RequestWrapper_t293827378 * get_U24this_2() const { return ___U24this_2; }
	inline RequestWrapper_t293827378 ** get_address_of_U24this_2() { return &___U24this_2; }
	inline void set_U24this_2(RequestWrapper_t293827378 * value)
	{
		___U24this_2 = value;
		Il2CppCodeGenWriteBarrier(&___U24this_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
