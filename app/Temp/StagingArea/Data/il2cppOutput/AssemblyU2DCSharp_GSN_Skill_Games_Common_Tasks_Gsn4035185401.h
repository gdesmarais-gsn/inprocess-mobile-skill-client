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

#include "AssemblyU2DCSharp_GSN_Skill_Games_Common_Tasks_Gsn3376855096.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Games.Common.Tasks.GsnOneShotTask
struct  GsnOneShotTask_t4035185401  : public GsnTaskBase_t3376855096
{
public:
	// System.Int32 GSN.Skill.Games.Common.Tasks.GsnOneShotTask::_id
	int32_t ____id_7;
	// GSN.Skill.Games.Common.Utils.GsnDumpCatcher GSN.Skill.Games.Common.Tasks.GsnOneShotTask::_dc
	GsnDumpCatcher_t16125840 * ____dc_8;

public:
	inline static int32_t get_offset_of__id_7() { return static_cast<int32_t>(offsetof(GsnOneShotTask_t4035185401, ____id_7)); }
	inline int32_t get__id_7() const { return ____id_7; }
	inline int32_t* get_address_of__id_7() { return &____id_7; }
	inline void set__id_7(int32_t value)
	{
		____id_7 = value;
	}

	inline static int32_t get_offset_of__dc_8() { return static_cast<int32_t>(offsetof(GsnOneShotTask_t4035185401, ____dc_8)); }
	inline GsnDumpCatcher_t16125840 * get__dc_8() const { return ____dc_8; }
	inline GsnDumpCatcher_t16125840 ** get_address_of__dc_8() { return &____dc_8; }
	inline void set__dc_8(GsnDumpCatcher_t16125840 * value)
	{
		____dc_8 = value;
		Il2CppCodeGenWriteBarrier(&____dc_8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
