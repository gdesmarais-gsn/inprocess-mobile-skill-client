#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Action
struct Action_t3226471752;
// GSN.Skill.Games.Common.Utils.ActionContext
struct ActionContext_t4252928663;

#include "mscorlib_System_ValueType3507792607.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Games.Common.Utils.ActionQueue/ActionWrapper
struct  ActionWrapper_t2343761773 
{
public:
	// System.Action GSN.Skill.Games.Common.Utils.ActionQueue/ActionWrapper::action
	Action_t3226471752 * ___action_0;
	// GSN.Skill.Games.Common.Utils.ActionContext GSN.Skill.Games.Common.Utils.ActionQueue/ActionWrapper::actionContext
	ActionContext_t4252928663 * ___actionContext_1;

public:
	inline static int32_t get_offset_of_action_0() { return static_cast<int32_t>(offsetof(ActionWrapper_t2343761773, ___action_0)); }
	inline Action_t3226471752 * get_action_0() const { return ___action_0; }
	inline Action_t3226471752 ** get_address_of_action_0() { return &___action_0; }
	inline void set_action_0(Action_t3226471752 * value)
	{
		___action_0 = value;
		Il2CppCodeGenWriteBarrier(&___action_0, value);
	}

	inline static int32_t get_offset_of_actionContext_1() { return static_cast<int32_t>(offsetof(ActionWrapper_t2343761773, ___actionContext_1)); }
	inline ActionContext_t4252928663 * get_actionContext_1() const { return ___actionContext_1; }
	inline ActionContext_t4252928663 ** get_address_of_actionContext_1() { return &___actionContext_1; }
	inline void set_actionContext_1(ActionContext_t4252928663 * value)
	{
		___actionContext_1 = value;
		Il2CppCodeGenWriteBarrier(&___actionContext_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of GSN.Skill.Games.Common.Utils.ActionQueue/ActionWrapper
struct ActionWrapper_t2343761773_marshaled_pinvoke
{
	Il2CppMethodPointer ___action_0;
	ActionContext_t4252928663 * ___actionContext_1;
};
// Native definition for COM marshalling of GSN.Skill.Games.Common.Utils.ActionQueue/ActionWrapper
struct ActionWrapper_t2343761773_marshaled_com
{
	Il2CppMethodPointer ___action_0;
	ActionContext_t4252928663 * ___actionContext_1;
};
