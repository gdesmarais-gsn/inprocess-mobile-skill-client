#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Action`1<System.Boolean>
struct Action_1_t3627374100;
// GSN.Skill.Games.Common.Utils.Job
struct Job_t4002496073;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Games.Common.Utils.Job/<Start>c__AnonStorey1
struct  U3CStartU3Ec__AnonStorey1_t4196791402  : public Il2CppObject
{
public:
	// System.Action`1<System.Boolean> GSN.Skill.Games.Common.Utils.Job/<Start>c__AnonStorey1::doneAction
	Action_1_t3627374100 * ___doneAction_0;
	// GSN.Skill.Games.Common.Utils.Job GSN.Skill.Games.Common.Utils.Job/<Start>c__AnonStorey1::$this
	Job_t4002496073 * ___U24this_1;

public:
	inline static int32_t get_offset_of_doneAction_0() { return static_cast<int32_t>(offsetof(U3CStartU3Ec__AnonStorey1_t4196791402, ___doneAction_0)); }
	inline Action_1_t3627374100 * get_doneAction_0() const { return ___doneAction_0; }
	inline Action_1_t3627374100 ** get_address_of_doneAction_0() { return &___doneAction_0; }
	inline void set_doneAction_0(Action_1_t3627374100 * value)
	{
		___doneAction_0 = value;
		Il2CppCodeGenWriteBarrier(&___doneAction_0, value);
	}

	inline static int32_t get_offset_of_U24this_1() { return static_cast<int32_t>(offsetof(U3CStartU3Ec__AnonStorey1_t4196791402, ___U24this_1)); }
	inline Job_t4002496073 * get_U24this_1() const { return ___U24this_1; }
	inline Job_t4002496073 ** get_address_of_U24this_1() { return &___U24this_1; }
	inline void set_U24this_1(Job_t4002496073 * value)
	{
		___U24this_1 = value;
		Il2CppCodeGenWriteBarrier(&___U24this_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
