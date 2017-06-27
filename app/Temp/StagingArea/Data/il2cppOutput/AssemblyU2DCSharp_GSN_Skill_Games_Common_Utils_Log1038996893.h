#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Action`1<System.String>
struct Action_1_t1831019615;

#include "mscorlib_System_ValueType3507792607.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Games.Common.Utils.LogContext
struct  LogContext_t1038996893 
{
public:
	// System.Action`1<System.String> GSN.Skill.Games.Common.Utils.LogContext::log
	Action_1_t1831019615 * ___log_0;
	// System.Action`1<System.String> GSN.Skill.Games.Common.Utils.LogContext::logWarning
	Action_1_t1831019615 * ___logWarning_1;
	// System.Action`1<System.String> GSN.Skill.Games.Common.Utils.LogContext::logError
	Action_1_t1831019615 * ___logError_2;

public:
	inline static int32_t get_offset_of_log_0() { return static_cast<int32_t>(offsetof(LogContext_t1038996893, ___log_0)); }
	inline Action_1_t1831019615 * get_log_0() const { return ___log_0; }
	inline Action_1_t1831019615 ** get_address_of_log_0() { return &___log_0; }
	inline void set_log_0(Action_1_t1831019615 * value)
	{
		___log_0 = value;
		Il2CppCodeGenWriteBarrier(&___log_0, value);
	}

	inline static int32_t get_offset_of_logWarning_1() { return static_cast<int32_t>(offsetof(LogContext_t1038996893, ___logWarning_1)); }
	inline Action_1_t1831019615 * get_logWarning_1() const { return ___logWarning_1; }
	inline Action_1_t1831019615 ** get_address_of_logWarning_1() { return &___logWarning_1; }
	inline void set_logWarning_1(Action_1_t1831019615 * value)
	{
		___logWarning_1 = value;
		Il2CppCodeGenWriteBarrier(&___logWarning_1, value);
	}

	inline static int32_t get_offset_of_logError_2() { return static_cast<int32_t>(offsetof(LogContext_t1038996893, ___logError_2)); }
	inline Action_1_t1831019615 * get_logError_2() const { return ___logError_2; }
	inline Action_1_t1831019615 ** get_address_of_logError_2() { return &___logError_2; }
	inline void set_logError_2(Action_1_t1831019615 * value)
	{
		___logError_2 = value;
		Il2CppCodeGenWriteBarrier(&___logError_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of GSN.Skill.Games.Common.Utils.LogContext
struct LogContext_t1038996893_marshaled_pinvoke
{
	Il2CppMethodPointer ___log_0;
	Il2CppMethodPointer ___logWarning_1;
	Il2CppMethodPointer ___logError_2;
};
// Native definition for COM marshalling of GSN.Skill.Games.Common.Utils.LogContext
struct LogContext_t1038996893_marshaled_com
{
	Il2CppMethodPointer ___log_0;
	Il2CppMethodPointer ___logWarning_1;
	Il2CppMethodPointer ___logError_2;
};
