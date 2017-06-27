#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.IO.MemoryStream
struct MemoryStream_t743994179;
// GSN.Skill.Games.Common.Utils.ActionQueue
struct ActionQueue_t1924202305;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Games.Common.Model.ReplayDataSafe
struct  ReplayDataSafe_t2494969088  : public Il2CppObject
{
public:
	// System.IO.MemoryStream GSN.Skill.Games.Common.Model.ReplayDataSafe::dataStream
	MemoryStream_t743994179 * ___dataStream_0;
	// GSN.Skill.Games.Common.Utils.ActionQueue GSN.Skill.Games.Common.Model.ReplayDataSafe::actionQueue
	ActionQueue_t1924202305 * ___actionQueue_1;
	// System.UInt32 GSN.Skill.Games.Common.Model.ReplayDataSafe::startTimeStamp
	uint32_t ___startTimeStamp_2;
	// System.Int32 GSN.Skill.Games.Common.Model.ReplayDataSafe::badTimingCount
	int32_t ___badTimingCount_3;

public:
	inline static int32_t get_offset_of_dataStream_0() { return static_cast<int32_t>(offsetof(ReplayDataSafe_t2494969088, ___dataStream_0)); }
	inline MemoryStream_t743994179 * get_dataStream_0() const { return ___dataStream_0; }
	inline MemoryStream_t743994179 ** get_address_of_dataStream_0() { return &___dataStream_0; }
	inline void set_dataStream_0(MemoryStream_t743994179 * value)
	{
		___dataStream_0 = value;
		Il2CppCodeGenWriteBarrier(&___dataStream_0, value);
	}

	inline static int32_t get_offset_of_actionQueue_1() { return static_cast<int32_t>(offsetof(ReplayDataSafe_t2494969088, ___actionQueue_1)); }
	inline ActionQueue_t1924202305 * get_actionQueue_1() const { return ___actionQueue_1; }
	inline ActionQueue_t1924202305 ** get_address_of_actionQueue_1() { return &___actionQueue_1; }
	inline void set_actionQueue_1(ActionQueue_t1924202305 * value)
	{
		___actionQueue_1 = value;
		Il2CppCodeGenWriteBarrier(&___actionQueue_1, value);
	}

	inline static int32_t get_offset_of_startTimeStamp_2() { return static_cast<int32_t>(offsetof(ReplayDataSafe_t2494969088, ___startTimeStamp_2)); }
	inline uint32_t get_startTimeStamp_2() const { return ___startTimeStamp_2; }
	inline uint32_t* get_address_of_startTimeStamp_2() { return &___startTimeStamp_2; }
	inline void set_startTimeStamp_2(uint32_t value)
	{
		___startTimeStamp_2 = value;
	}

	inline static int32_t get_offset_of_badTimingCount_3() { return static_cast<int32_t>(offsetof(ReplayDataSafe_t2494969088, ___badTimingCount_3)); }
	inline int32_t get_badTimingCount_3() const { return ___badTimingCount_3; }
	inline int32_t* get_address_of_badTimingCount_3() { return &___badTimingCount_3; }
	inline void set_badTimingCount_3(int32_t value)
	{
		___badTimingCount_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
