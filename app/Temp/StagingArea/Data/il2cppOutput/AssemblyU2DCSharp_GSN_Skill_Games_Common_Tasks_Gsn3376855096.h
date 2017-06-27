#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// GSN.Skill.Games.Common.Tasks.GsnScheduler
struct GsnScheduler_t1299811741;

#include "AssemblyU2DCSharp_GSN_Skill_Games_Common_Utils_Lin3062077665.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Games.Common.Tasks.GsnTaskBase
struct  GsnTaskBase_t3376855096  : public LinkedListNode_t3062077665
{
public:
	// System.Int32 GSN.Skill.Games.Common.Tasks.GsnTaskBase::_wakeUpTime
	int32_t ____wakeUpTime_4;
	// GSN.Skill.Games.Common.Tasks.GsnScheduler GSN.Skill.Games.Common.Tasks.GsnTaskBase::_scheduler
	GsnScheduler_t1299811741 * ____scheduler_5;
	// System.Int32 GSN.Skill.Games.Common.Tasks.GsnTaskBase::_heapLocation
	int32_t ____heapLocation_6;

public:
	inline static int32_t get_offset_of__wakeUpTime_4() { return static_cast<int32_t>(offsetof(GsnTaskBase_t3376855096, ____wakeUpTime_4)); }
	inline int32_t get__wakeUpTime_4() const { return ____wakeUpTime_4; }
	inline int32_t* get_address_of__wakeUpTime_4() { return &____wakeUpTime_4; }
	inline void set__wakeUpTime_4(int32_t value)
	{
		____wakeUpTime_4 = value;
	}

	inline static int32_t get_offset_of__scheduler_5() { return static_cast<int32_t>(offsetof(GsnTaskBase_t3376855096, ____scheduler_5)); }
	inline GsnScheduler_t1299811741 * get__scheduler_5() const { return ____scheduler_5; }
	inline GsnScheduler_t1299811741 ** get_address_of__scheduler_5() { return &____scheduler_5; }
	inline void set__scheduler_5(GsnScheduler_t1299811741 * value)
	{
		____scheduler_5 = value;
		Il2CppCodeGenWriteBarrier(&____scheduler_5, value);
	}

	inline static int32_t get_offset_of__heapLocation_6() { return static_cast<int32_t>(offsetof(GsnTaskBase_t3376855096, ____heapLocation_6)); }
	inline int32_t get__heapLocation_6() const { return ____heapLocation_6; }
	inline int32_t* get_address_of__heapLocation_6() { return &____heapLocation_6; }
	inline void set__heapLocation_6(int32_t value)
	{
		____heapLocation_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
