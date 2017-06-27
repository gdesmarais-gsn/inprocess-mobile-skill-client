#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// GSN.Skill.Games.Common.Utils.ActionQueue
struct ActionQueue_t1924202305;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Games.Common.Utils.GlobalActionQueue
struct  GlobalActionQueue_t347517762  : public Il2CppObject
{
public:

public:
};

struct GlobalActionQueue_t347517762_StaticFields
{
public:
	// GSN.Skill.Games.Common.Utils.ActionQueue GSN.Skill.Games.Common.Utils.GlobalActionQueue::_instance
	ActionQueue_t1924202305 * ____instance_0;

public:
	inline static int32_t get_offset_of__instance_0() { return static_cast<int32_t>(offsetof(GlobalActionQueue_t347517762_StaticFields, ____instance_0)); }
	inline ActionQueue_t1924202305 * get__instance_0() const { return ____instance_0; }
	inline ActionQueue_t1924202305 ** get_address_of__instance_0() { return &____instance_0; }
	inline void set__instance_0(ActionQueue_t1924202305 * value)
	{
		____instance_0 = value;
		Il2CppCodeGenWriteBarrier(&____instance_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
