#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "mscorlib_System_ValueType3507792607.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Phoenix.Requests.Logging.LogData/Result
struct  Result_t2114298597 
{
public:
	// System.Boolean GSN.Skill.Phoenix.Requests.Logging.LogData/Result::log_status
	bool ___log_status_0;

public:
	inline static int32_t get_offset_of_log_status_0() { return static_cast<int32_t>(offsetof(Result_t2114298597, ___log_status_0)); }
	inline bool get_log_status_0() const { return ___log_status_0; }
	inline bool* get_address_of_log_status_0() { return &___log_status_0; }
	inline void set_log_status_0(bool value)
	{
		___log_status_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of GSN.Skill.Phoenix.Requests.Logging.LogData/Result
struct Result_t2114298597_marshaled_pinvoke
{
	int32_t ___log_status_0;
};
// Native definition for COM marshalling of GSN.Skill.Phoenix.Requests.Logging.LogData/Result
struct Result_t2114298597_marshaled_com
{
	int32_t ___log_status_0;
};
