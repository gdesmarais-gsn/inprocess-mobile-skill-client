#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// GSN.Skill.Games.Common.Utils.Job
struct Job_t4002496073;

#include "AssemblyU2DCSharp_GSN_Skill_Games_Common_Utils_Job4002496073.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Games.Common.Utils.ContainerJob
struct  ContainerJob_t2282676652  : public Job_t4002496073
{
public:
	// GSN.Skill.Games.Common.Utils.Job GSN.Skill.Games.Common.Utils.ContainerJob::ContainedJob
	Job_t4002496073 * ___ContainedJob_32;

public:
	inline static int32_t get_offset_of_ContainedJob_32() { return static_cast<int32_t>(offsetof(ContainerJob_t2282676652, ___ContainedJob_32)); }
	inline Job_t4002496073 * get_ContainedJob_32() const { return ___ContainedJob_32; }
	inline Job_t4002496073 ** get_address_of_ContainedJob_32() { return &___ContainedJob_32; }
	inline void set_ContainedJob_32(Job_t4002496073 * value)
	{
		___ContainedJob_32 = value;
		Il2CppCodeGenWriteBarrier(&___ContainedJob_32, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
