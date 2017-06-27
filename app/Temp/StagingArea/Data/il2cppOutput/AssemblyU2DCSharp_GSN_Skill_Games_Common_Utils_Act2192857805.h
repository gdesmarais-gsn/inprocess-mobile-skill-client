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

// GSN.Skill.Games.Common.Utils.ActionQueue/<RecycleContext>c__AnonStorey0
struct  U3CRecycleContextU3Ec__AnonStorey0_t2192857805  : public Il2CppObject
{
public:
	// GSN.Skill.Games.Common.Utils.ActionContext GSN.Skill.Games.Common.Utils.ActionQueue/<RecycleContext>c__AnonStorey0::actionContext
	ActionContext_t4252928663 * ___actionContext_0;

public:
	inline static int32_t get_offset_of_actionContext_0() { return static_cast<int32_t>(offsetof(U3CRecycleContextU3Ec__AnonStorey0_t2192857805, ___actionContext_0)); }
	inline ActionContext_t4252928663 * get_actionContext_0() const { return ___actionContext_0; }
	inline ActionContext_t4252928663 ** get_address_of_actionContext_0() { return &___actionContext_0; }
	inline void set_actionContext_0(ActionContext_t4252928663 * value)
	{
		___actionContext_0 = value;
		Il2CppCodeGenWriteBarrier(&___actionContext_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
