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

// GSN.Skill.Games.Common.Utils.RepeaterJob
struct  RepeaterJob_t1855617669  : public Job_t4002496073
{
public:
	// GSN.Skill.Games.Common.Utils.Job GSN.Skill.Games.Common.Utils.RepeaterJob::repeatingJob
	Job_t4002496073 * ___repeatingJob_32;
	// System.Int32 GSN.Skill.Games.Common.Utils.RepeaterJob::timesToRun
	int32_t ___timesToRun_33;
	// System.Int32 GSN.Skill.Games.Common.Utils.RepeaterJob::runCount
	int32_t ___runCount_34;

public:
	inline static int32_t get_offset_of_repeatingJob_32() { return static_cast<int32_t>(offsetof(RepeaterJob_t1855617669, ___repeatingJob_32)); }
	inline Job_t4002496073 * get_repeatingJob_32() const { return ___repeatingJob_32; }
	inline Job_t4002496073 ** get_address_of_repeatingJob_32() { return &___repeatingJob_32; }
	inline void set_repeatingJob_32(Job_t4002496073 * value)
	{
		___repeatingJob_32 = value;
		Il2CppCodeGenWriteBarrier(&___repeatingJob_32, value);
	}

	inline static int32_t get_offset_of_timesToRun_33() { return static_cast<int32_t>(offsetof(RepeaterJob_t1855617669, ___timesToRun_33)); }
	inline int32_t get_timesToRun_33() const { return ___timesToRun_33; }
	inline int32_t* get_address_of_timesToRun_33() { return &___timesToRun_33; }
	inline void set_timesToRun_33(int32_t value)
	{
		___timesToRun_33 = value;
	}

	inline static int32_t get_offset_of_runCount_34() { return static_cast<int32_t>(offsetof(RepeaterJob_t1855617669, ___runCount_34)); }
	inline int32_t get_runCount_34() const { return ___runCount_34; }
	inline int32_t* get_address_of_runCount_34() { return &___runCount_34; }
	inline void set_runCount_34(int32_t value)
	{
		___runCount_34 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
