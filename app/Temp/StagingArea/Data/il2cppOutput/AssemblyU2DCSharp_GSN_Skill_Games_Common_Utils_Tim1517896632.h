#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// GSN.Skill.Games.Common.Utils.TimeoutDispatcher
struct TimeoutDispatcher_t290349592;

#include "AssemblyU2DCSharp_GSN_Skill_Games_Common_Utils_Job4002496073.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Games.Common.Utils.TimeoutJob
struct  TimeoutJob_t1517896632  : public Job_t4002496073
{
public:
	// GSN.Skill.Games.Common.Utils.TimeoutDispatcher GSN.Skill.Games.Common.Utils.TimeoutJob::dispatcher
	TimeoutDispatcher_t290349592 * ___dispatcher_32;
	// System.Int32 GSN.Skill.Games.Common.Utils.TimeoutJob::duration
	int32_t ___duration_33;

public:
	inline static int32_t get_offset_of_dispatcher_32() { return static_cast<int32_t>(offsetof(TimeoutJob_t1517896632, ___dispatcher_32)); }
	inline TimeoutDispatcher_t290349592 * get_dispatcher_32() const { return ___dispatcher_32; }
	inline TimeoutDispatcher_t290349592 ** get_address_of_dispatcher_32() { return &___dispatcher_32; }
	inline void set_dispatcher_32(TimeoutDispatcher_t290349592 * value)
	{
		___dispatcher_32 = value;
		Il2CppCodeGenWriteBarrier(&___dispatcher_32, value);
	}

	inline static int32_t get_offset_of_duration_33() { return static_cast<int32_t>(offsetof(TimeoutJob_t1517896632, ___duration_33)); }
	inline int32_t get_duration_33() const { return ___duration_33; }
	inline int32_t* get_address_of_duration_33() { return &___duration_33; }
	inline void set_duration_33(int32_t value)
	{
		___duration_33 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
