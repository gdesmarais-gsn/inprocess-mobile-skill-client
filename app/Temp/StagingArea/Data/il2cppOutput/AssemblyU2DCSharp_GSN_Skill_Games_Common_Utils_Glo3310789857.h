#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// GSN.Skill.Games.Common.Utils.JobPriorityQueue
struct JobPriorityQueue_t4214851120;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Games.Common.Utils.GlobalJobPriorityQueue
struct  GlobalJobPriorityQueue_t3310789857  : public Il2CppObject
{
public:

public:
};

struct GlobalJobPriorityQueue_t3310789857_StaticFields
{
public:
	// GSN.Skill.Games.Common.Utils.JobPriorityQueue GSN.Skill.Games.Common.Utils.GlobalJobPriorityQueue::_instance
	JobPriorityQueue_t4214851120 * ____instance_0;

public:
	inline static int32_t get_offset_of__instance_0() { return static_cast<int32_t>(offsetof(GlobalJobPriorityQueue_t3310789857_StaticFields, ____instance_0)); }
	inline JobPriorityQueue_t4214851120 * get__instance_0() const { return ____instance_0; }
	inline JobPriorityQueue_t4214851120 ** get_address_of__instance_0() { return &____instance_0; }
	inline void set__instance_0(JobPriorityQueue_t4214851120 * value)
	{
		____instance_0 = value;
		Il2CppCodeGenWriteBarrier(&____instance_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
