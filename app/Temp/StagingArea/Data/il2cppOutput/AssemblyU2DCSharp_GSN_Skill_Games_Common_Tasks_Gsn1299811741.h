#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// GSN.Skill.Games.Common.Utils.GsnVector`1<GSN.Skill.Games.Common.Tasks.GsnTaskBase>
struct GsnVector_1_t2075901747;
// GSN.Skill.Games.Common.Tasks.GsnTaskBase
struct GsnTaskBase_t3376855096;

#include "AssemblyU2DCSharp_GSN_Skill_Games_Common_Tasks_Gsn3376855096.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Games.Common.Tasks.GsnScheduler
struct  GsnScheduler_t1299811741  : public GsnTaskBase_t3376855096
{
public:
	// GSN.Skill.Games.Common.Utils.GsnVector`1<GSN.Skill.Games.Common.Tasks.GsnTaskBase> GSN.Skill.Games.Common.Tasks.GsnScheduler::_schedule
	GsnVector_1_t2075901747 * ____schedule_7;
	// GSN.Skill.Games.Common.Utils.GsnVector`1<GSN.Skill.Games.Common.Tasks.GsnTaskBase> GSN.Skill.Games.Common.Tasks.GsnScheduler::_otherSchedule
	GsnVector_1_t2075901747 * ____otherSchedule_8;
	// System.Int32 GSN.Skill.Games.Common.Tasks.GsnScheduler::_schedLen
	int32_t ____schedLen_9;
	// GSN.Skill.Games.Common.Tasks.GsnTaskBase GSN.Skill.Games.Common.Tasks.GsnScheduler::_runningTask
	GsnTaskBase_t3376855096 * ____runningTask_10;
	// System.Boolean GSN.Skill.Games.Common.Tasks.GsnScheduler::_lazy
	bool ____lazy_11;
	// System.Boolean GSN.Skill.Games.Common.Tasks.GsnScheduler::_dirty
	bool ____dirty_12;
	// System.Int32 GSN.Skill.Games.Common.Tasks.GsnScheduler::_minWakeUpTime
	int32_t ____minWakeUpTime_13;
	// System.Int32 GSN.Skill.Games.Common.Tasks.GsnScheduler::_lastRunTime
	int32_t ____lastRunTime_14;

public:
	inline static int32_t get_offset_of__schedule_7() { return static_cast<int32_t>(offsetof(GsnScheduler_t1299811741, ____schedule_7)); }
	inline GsnVector_1_t2075901747 * get__schedule_7() const { return ____schedule_7; }
	inline GsnVector_1_t2075901747 ** get_address_of__schedule_7() { return &____schedule_7; }
	inline void set__schedule_7(GsnVector_1_t2075901747 * value)
	{
		____schedule_7 = value;
		Il2CppCodeGenWriteBarrier(&____schedule_7, value);
	}

	inline static int32_t get_offset_of__otherSchedule_8() { return static_cast<int32_t>(offsetof(GsnScheduler_t1299811741, ____otherSchedule_8)); }
	inline GsnVector_1_t2075901747 * get__otherSchedule_8() const { return ____otherSchedule_8; }
	inline GsnVector_1_t2075901747 ** get_address_of__otherSchedule_8() { return &____otherSchedule_8; }
	inline void set__otherSchedule_8(GsnVector_1_t2075901747 * value)
	{
		____otherSchedule_8 = value;
		Il2CppCodeGenWriteBarrier(&____otherSchedule_8, value);
	}

	inline static int32_t get_offset_of__schedLen_9() { return static_cast<int32_t>(offsetof(GsnScheduler_t1299811741, ____schedLen_9)); }
	inline int32_t get__schedLen_9() const { return ____schedLen_9; }
	inline int32_t* get_address_of__schedLen_9() { return &____schedLen_9; }
	inline void set__schedLen_9(int32_t value)
	{
		____schedLen_9 = value;
	}

	inline static int32_t get_offset_of__runningTask_10() { return static_cast<int32_t>(offsetof(GsnScheduler_t1299811741, ____runningTask_10)); }
	inline GsnTaskBase_t3376855096 * get__runningTask_10() const { return ____runningTask_10; }
	inline GsnTaskBase_t3376855096 ** get_address_of__runningTask_10() { return &____runningTask_10; }
	inline void set__runningTask_10(GsnTaskBase_t3376855096 * value)
	{
		____runningTask_10 = value;
		Il2CppCodeGenWriteBarrier(&____runningTask_10, value);
	}

	inline static int32_t get_offset_of__lazy_11() { return static_cast<int32_t>(offsetof(GsnScheduler_t1299811741, ____lazy_11)); }
	inline bool get__lazy_11() const { return ____lazy_11; }
	inline bool* get_address_of__lazy_11() { return &____lazy_11; }
	inline void set__lazy_11(bool value)
	{
		____lazy_11 = value;
	}

	inline static int32_t get_offset_of__dirty_12() { return static_cast<int32_t>(offsetof(GsnScheduler_t1299811741, ____dirty_12)); }
	inline bool get__dirty_12() const { return ____dirty_12; }
	inline bool* get_address_of__dirty_12() { return &____dirty_12; }
	inline void set__dirty_12(bool value)
	{
		____dirty_12 = value;
	}

	inline static int32_t get_offset_of__minWakeUpTime_13() { return static_cast<int32_t>(offsetof(GsnScheduler_t1299811741, ____minWakeUpTime_13)); }
	inline int32_t get__minWakeUpTime_13() const { return ____minWakeUpTime_13; }
	inline int32_t* get_address_of__minWakeUpTime_13() { return &____minWakeUpTime_13; }
	inline void set__minWakeUpTime_13(int32_t value)
	{
		____minWakeUpTime_13 = value;
	}

	inline static int32_t get_offset_of__lastRunTime_14() { return static_cast<int32_t>(offsetof(GsnScheduler_t1299811741, ____lastRunTime_14)); }
	inline int32_t get__lastRunTime_14() const { return ____lastRunTime_14; }
	inline int32_t* get_address_of__lastRunTime_14() { return &____lastRunTime_14; }
	inline void set__lastRunTime_14(int32_t value)
	{
		____lastRunTime_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
