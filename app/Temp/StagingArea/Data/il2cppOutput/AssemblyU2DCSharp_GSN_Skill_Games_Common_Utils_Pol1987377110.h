#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// GSN.Skill.Games.Common.Utils.PollJob/PollingFunction
struct PollingFunction_t2575115420;

#include "AssemblyU2DCSharp_GSN_Skill_Games_Common_Utils_Job4002496073.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Games.Common.Utils.PollJob
struct  PollJob_t1987377110  : public Job_t4002496073
{
public:
	// GSN.Skill.Games.Common.Utils.PollJob/PollingFunction GSN.Skill.Games.Common.Utils.PollJob::pollingFunction
	PollingFunction_t2575115420 * ___pollingFunction_32;

public:
	inline static int32_t get_offset_of_pollingFunction_32() { return static_cast<int32_t>(offsetof(PollJob_t1987377110, ___pollingFunction_32)); }
	inline PollingFunction_t2575115420 * get_pollingFunction_32() const { return ___pollingFunction_32; }
	inline PollingFunction_t2575115420 ** get_address_of_pollingFunction_32() { return &___pollingFunction_32; }
	inline void set_pollingFunction_32(PollingFunction_t2575115420 * value)
	{
		___pollingFunction_32 = value;
		Il2CppCodeGenWriteBarrier(&___pollingFunction_32, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
