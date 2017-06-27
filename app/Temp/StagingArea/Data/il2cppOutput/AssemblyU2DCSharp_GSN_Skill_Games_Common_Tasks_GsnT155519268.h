#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// GSN.Skill.Games.Common.Utils.GsnDumpCatcher
struct GsnDumpCatcher_t16125840;

#include "AssemblyU2DCSharp_GSN_Skill_Games_Common_Tasks_Gsn2473238817.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Games.Common.Tasks.GsnTraceTask
struct  GsnTraceTask_t155519268  : public GsnCoTask_t2473238817
{
public:
	// System.Int32 GSN.Skill.Games.Common.Tasks.GsnTraceTask::_id
	int32_t ____id_8;
	// System.Int32 GSN.Skill.Games.Common.Tasks.GsnTraceTask::_period
	int32_t ____period_9;
	// GSN.Skill.Games.Common.Utils.GsnDumpCatcher GSN.Skill.Games.Common.Tasks.GsnTraceTask::_dc
	GsnDumpCatcher_t16125840 * ____dc_10;

public:
	inline static int32_t get_offset_of__id_8() { return static_cast<int32_t>(offsetof(GsnTraceTask_t155519268, ____id_8)); }
	inline int32_t get__id_8() const { return ____id_8; }
	inline int32_t* get_address_of__id_8() { return &____id_8; }
	inline void set__id_8(int32_t value)
	{
		____id_8 = value;
	}

	inline static int32_t get_offset_of__period_9() { return static_cast<int32_t>(offsetof(GsnTraceTask_t155519268, ____period_9)); }
	inline int32_t get__period_9() const { return ____period_9; }
	inline int32_t* get_address_of__period_9() { return &____period_9; }
	inline void set__period_9(int32_t value)
	{
		____period_9 = value;
	}

	inline static int32_t get_offset_of__dc_10() { return static_cast<int32_t>(offsetof(GsnTraceTask_t155519268, ____dc_10)); }
	inline GsnDumpCatcher_t16125840 * get__dc_10() const { return ____dc_10; }
	inline GsnDumpCatcher_t16125840 ** get_address_of__dc_10() { return &____dc_10; }
	inline void set__dc_10(GsnDumpCatcher_t16125840 * value)
	{
		____dc_10 = value;
		Il2CppCodeGenWriteBarrier(&____dc_10, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
