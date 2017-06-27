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
// GSN.Skill.Games.Common.Utils.TimeoutDispatcher
struct TimeoutDispatcher_t290349592;

#include "AssemblyU2DCSharp_GSN_Skill_Games_Common_Utils_Job4002496073.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Games.Common.Utils.RetryJob
struct  RetryJob_t1640071313  : public Job_t4002496073
{
public:
	// System.Int32 GSN.Skill.Games.Common.Utils.RetryJob::tryCount
	int32_t ___tryCount_32;
	// System.Int32 GSN.Skill.Games.Common.Utils.RetryJob::savedTryCount
	int32_t ___savedTryCount_33;
	// GSN.Skill.Games.Common.Utils.Job GSN.Skill.Games.Common.Utils.RetryJob::RetriedJob
	Job_t4002496073 * ___RetriedJob_34;
	// GSN.Skill.Games.Common.Utils.Job GSN.Skill.Games.Common.Utils.RetryJob::RecoverJob
	Job_t4002496073 * ___RecoverJob_35;
	// System.Int32 GSN.Skill.Games.Common.Utils.RetryJob::RetryDelay
	int32_t ___RetryDelay_36;
	// GSN.Skill.Games.Common.Utils.TimeoutDispatcher GSN.Skill.Games.Common.Utils.RetryJob::retryTimeoutDispatcher
	TimeoutDispatcher_t290349592 * ___retryTimeoutDispatcher_37;
	// System.Boolean GSN.Skill.Games.Common.Utils.RetryJob::rushedRetry
	bool ___rushedRetry_38;

public:
	inline static int32_t get_offset_of_tryCount_32() { return static_cast<int32_t>(offsetof(RetryJob_t1640071313, ___tryCount_32)); }
	inline int32_t get_tryCount_32() const { return ___tryCount_32; }
	inline int32_t* get_address_of_tryCount_32() { return &___tryCount_32; }
	inline void set_tryCount_32(int32_t value)
	{
		___tryCount_32 = value;
	}

	inline static int32_t get_offset_of_savedTryCount_33() { return static_cast<int32_t>(offsetof(RetryJob_t1640071313, ___savedTryCount_33)); }
	inline int32_t get_savedTryCount_33() const { return ___savedTryCount_33; }
	inline int32_t* get_address_of_savedTryCount_33() { return &___savedTryCount_33; }
	inline void set_savedTryCount_33(int32_t value)
	{
		___savedTryCount_33 = value;
	}

	inline static int32_t get_offset_of_RetriedJob_34() { return static_cast<int32_t>(offsetof(RetryJob_t1640071313, ___RetriedJob_34)); }
	inline Job_t4002496073 * get_RetriedJob_34() const { return ___RetriedJob_34; }
	inline Job_t4002496073 ** get_address_of_RetriedJob_34() { return &___RetriedJob_34; }
	inline void set_RetriedJob_34(Job_t4002496073 * value)
	{
		___RetriedJob_34 = value;
		Il2CppCodeGenWriteBarrier(&___RetriedJob_34, value);
	}

	inline static int32_t get_offset_of_RecoverJob_35() { return static_cast<int32_t>(offsetof(RetryJob_t1640071313, ___RecoverJob_35)); }
	inline Job_t4002496073 * get_RecoverJob_35() const { return ___RecoverJob_35; }
	inline Job_t4002496073 ** get_address_of_RecoverJob_35() { return &___RecoverJob_35; }
	inline void set_RecoverJob_35(Job_t4002496073 * value)
	{
		___RecoverJob_35 = value;
		Il2CppCodeGenWriteBarrier(&___RecoverJob_35, value);
	}

	inline static int32_t get_offset_of_RetryDelay_36() { return static_cast<int32_t>(offsetof(RetryJob_t1640071313, ___RetryDelay_36)); }
	inline int32_t get_RetryDelay_36() const { return ___RetryDelay_36; }
	inline int32_t* get_address_of_RetryDelay_36() { return &___RetryDelay_36; }
	inline void set_RetryDelay_36(int32_t value)
	{
		___RetryDelay_36 = value;
	}

	inline static int32_t get_offset_of_retryTimeoutDispatcher_37() { return static_cast<int32_t>(offsetof(RetryJob_t1640071313, ___retryTimeoutDispatcher_37)); }
	inline TimeoutDispatcher_t290349592 * get_retryTimeoutDispatcher_37() const { return ___retryTimeoutDispatcher_37; }
	inline TimeoutDispatcher_t290349592 ** get_address_of_retryTimeoutDispatcher_37() { return &___retryTimeoutDispatcher_37; }
	inline void set_retryTimeoutDispatcher_37(TimeoutDispatcher_t290349592 * value)
	{
		___retryTimeoutDispatcher_37 = value;
		Il2CppCodeGenWriteBarrier(&___retryTimeoutDispatcher_37, value);
	}

	inline static int32_t get_offset_of_rushedRetry_38() { return static_cast<int32_t>(offsetof(RetryJob_t1640071313, ___rushedRetry_38)); }
	inline bool get_rushedRetry_38() const { return ___rushedRetry_38; }
	inline bool* get_address_of_rushedRetry_38() { return &___rushedRetry_38; }
	inline void set_rushedRetry_38(bool value)
	{
		___rushedRetry_38 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
