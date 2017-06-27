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

#include "AssemblyU2DCSharp_GSN_Skill_Games_Common_Tasks_Gsn1299811741.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Games.Common.Tasks.GsnIdleAwareScheduler
struct  GsnIdleAwareScheduler_t2010059023  : public GsnScheduler_t1299811741
{
public:
	// System.Int32 GSN.Skill.Games.Common.Tasks.GsnIdleAwareScheduler::_id
	int32_t ____id_15;
	// GSN.Skill.Games.Common.Utils.GsnDumpCatcher GSN.Skill.Games.Common.Tasks.GsnIdleAwareScheduler::_dc
	GsnDumpCatcher_t16125840 * ____dc_16;

public:
	inline static int32_t get_offset_of__id_15() { return static_cast<int32_t>(offsetof(GsnIdleAwareScheduler_t2010059023, ____id_15)); }
	inline int32_t get__id_15() const { return ____id_15; }
	inline int32_t* get_address_of__id_15() { return &____id_15; }
	inline void set__id_15(int32_t value)
	{
		____id_15 = value;
	}

	inline static int32_t get_offset_of__dc_16() { return static_cast<int32_t>(offsetof(GsnIdleAwareScheduler_t2010059023, ____dc_16)); }
	inline GsnDumpCatcher_t16125840 * get__dc_16() const { return ____dc_16; }
	inline GsnDumpCatcher_t16125840 ** get_address_of__dc_16() { return &____dc_16; }
	inline void set__dc_16(GsnDumpCatcher_t16125840 * value)
	{
		____dc_16 = value;
		Il2CppCodeGenWriteBarrier(&____dc_16, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
