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

// GSN.Skill.Games.Common.Utils.Job/DoneContext
struct  DoneContext_t4066679419 
{
public:
	// System.Action GSN.Skill.Games.Common.Utils.Job/DoneContext::doneAction
	Action_t3226471752 * ___doneAction_0;
	// GSN.Skill.Games.Common.Utils.ActionContext GSN.Skill.Games.Common.Utils.Job/DoneContext::actionContext
	ActionContext_t4252928663 * ___actionContext_1;

public:
	inline static int32_t get_offset_of_doneAction_0() { return static_cast<int32_t>(offsetof(DoneContext_t4066679419, ___doneAction_0)); }
	inline Action_t3226471752 * get_doneAction_0() const { return ___doneAction_0; }
	inline Action_t3226471752 ** get_address_of_doneAction_0() { return &___doneAction_0; }
	inline void set_doneAction_0(Action_t3226471752 * value)
	{
		___doneAction_0 = value;
		Il2CppCodeGenWriteBarrier(&___doneAction_0, value);
	}

	inline static int32_t get_offset_of_actionContext_1() { return static_cast<int32_t>(offsetof(DoneContext_t4066679419, ___actionContext_1)); }
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
// Native definition for P/Invoke marshalling of GSN.Skill.Games.Common.Utils.Job/DoneContext
struct DoneContext_t4066679419_marshaled_pinvoke
{
	Il2CppMethodPointer ___doneAction_0;
	ActionContext_t4252928663 * ___actionContext_1;
};
// Native definition for COM marshalling of GSN.Skill.Games.Common.Utils.Job/DoneContext
struct DoneContext_t4066679419_marshaled_com
{
	Il2CppMethodPointer ___doneAction_0;
	ActionContext_t4252928663 * ___actionContext_1;
};
