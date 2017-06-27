#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// GSN.Skill.Games.Common.Utils.ActionQueueChecker
struct ActionQueueChecker_t3059963862;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Games.Common.Utils.GlobalActionQueueChecker
struct  GlobalActionQueueChecker_t1123879531  : public Il2CppObject
{
public:

public:
};

struct GlobalActionQueueChecker_t1123879531_StaticFields
{
public:
	// GSN.Skill.Games.Common.Utils.ActionQueueChecker GSN.Skill.Games.Common.Utils.GlobalActionQueueChecker::_instance
	ActionQueueChecker_t3059963862 * ____instance_0;

public:
	inline static int32_t get_offset_of__instance_0() { return static_cast<int32_t>(offsetof(GlobalActionQueueChecker_t1123879531_StaticFields, ____instance_0)); }
	inline ActionQueueChecker_t3059963862 * get__instance_0() const { return ____instance_0; }
	inline ActionQueueChecker_t3059963862 ** get_address_of__instance_0() { return &____instance_0; }
	inline void set__instance_0(ActionQueueChecker_t3059963862 * value)
	{
		____instance_0 = value;
		Il2CppCodeGenWriteBarrier(&____instance_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
