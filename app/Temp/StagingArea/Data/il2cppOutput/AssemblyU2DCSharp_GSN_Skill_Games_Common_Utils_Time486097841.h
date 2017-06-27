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
// GSN.Skill.Games.Common.Utils.TimeoutDispatcher
struct TimeoutDispatcher_t290349592;
// GSN.Skill.Games.Common.Utils.ActionContext
struct ActionContext_t4252928663;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Games.Common.Utils.TimeoutDispatcher/ActionProxy
struct  ActionProxy_t486097841  : public Il2CppObject
{
public:
	// System.Action GSN.Skill.Games.Common.Utils.TimeoutDispatcher/ActionProxy::action
	Action_t3226471752 * ___action_0;
	// GSN.Skill.Games.Common.Utils.TimeoutDispatcher GSN.Skill.Games.Common.Utils.TimeoutDispatcher/ActionProxy::user
	TimeoutDispatcher_t290349592 * ___user_1;
	// System.Boolean GSN.Skill.Games.Common.Utils.TimeoutDispatcher/ActionProxy::queued
	bool ___queued_2;
	// System.Int32 GSN.Skill.Games.Common.Utils.TimeoutDispatcher/ActionProxy::id
	int32_t ___id_3;
	// GSN.Skill.Games.Common.Utils.ActionContext GSN.Skill.Games.Common.Utils.TimeoutDispatcher/ActionProxy::actionContext
	ActionContext_t4252928663 * ___actionContext_4;

public:
	inline static int32_t get_offset_of_action_0() { return static_cast<int32_t>(offsetof(ActionProxy_t486097841, ___action_0)); }
	inline Action_t3226471752 * get_action_0() const { return ___action_0; }
	inline Action_t3226471752 ** get_address_of_action_0() { return &___action_0; }
	inline void set_action_0(Action_t3226471752 * value)
	{
		___action_0 = value;
		Il2CppCodeGenWriteBarrier(&___action_0, value);
	}

	inline static int32_t get_offset_of_user_1() { return static_cast<int32_t>(offsetof(ActionProxy_t486097841, ___user_1)); }
	inline TimeoutDispatcher_t290349592 * get_user_1() const { return ___user_1; }
	inline TimeoutDispatcher_t290349592 ** get_address_of_user_1() { return &___user_1; }
	inline void set_user_1(TimeoutDispatcher_t290349592 * value)
	{
		___user_1 = value;
		Il2CppCodeGenWriteBarrier(&___user_1, value);
	}

	inline static int32_t get_offset_of_queued_2() { return static_cast<int32_t>(offsetof(ActionProxy_t486097841, ___queued_2)); }
	inline bool get_queued_2() const { return ___queued_2; }
	inline bool* get_address_of_queued_2() { return &___queued_2; }
	inline void set_queued_2(bool value)
	{
		___queued_2 = value;
	}

	inline static int32_t get_offset_of_id_3() { return static_cast<int32_t>(offsetof(ActionProxy_t486097841, ___id_3)); }
	inline int32_t get_id_3() const { return ___id_3; }
	inline int32_t* get_address_of_id_3() { return &___id_3; }
	inline void set_id_3(int32_t value)
	{
		___id_3 = value;
	}

	inline static int32_t get_offset_of_actionContext_4() { return static_cast<int32_t>(offsetof(ActionProxy_t486097841, ___actionContext_4)); }
	inline ActionContext_t4252928663 * get_actionContext_4() const { return ___actionContext_4; }
	inline ActionContext_t4252928663 ** get_address_of_actionContext_4() { return &___actionContext_4; }
	inline void set_actionContext_4(ActionContext_t4252928663 * value)
	{
		___actionContext_4 = value;
		Il2CppCodeGenWriteBarrier(&___actionContext_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
