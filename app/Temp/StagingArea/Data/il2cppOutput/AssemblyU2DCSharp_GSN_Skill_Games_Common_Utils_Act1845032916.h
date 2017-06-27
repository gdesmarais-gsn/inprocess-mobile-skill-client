#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// GSN.Skill.Games.Common.Utils.ActionContext
struct ActionContext_t4252928663;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Games.Common.Utils.ActionQueue/<EndContext>c__AnonStorey1
struct  U3CEndContextU3Ec__AnonStorey1_t1845032916  : public Il2CppObject
{
public:
	// GSN.Skill.Games.Common.Utils.ActionContext GSN.Skill.Games.Common.Utils.ActionQueue/<EndContext>c__AnonStorey1::child
	ActionContext_t4252928663 * ___child_0;

public:
	inline static int32_t get_offset_of_child_0() { return static_cast<int32_t>(offsetof(U3CEndContextU3Ec__AnonStorey1_t1845032916, ___child_0)); }
	inline ActionContext_t4252928663 * get_child_0() const { return ___child_0; }
	inline ActionContext_t4252928663 ** get_address_of_child_0() { return &___child_0; }
	inline void set_child_0(ActionContext_t4252928663 * value)
	{
		___child_0 = value;
		Il2CppCodeGenWriteBarrier(&___child_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
