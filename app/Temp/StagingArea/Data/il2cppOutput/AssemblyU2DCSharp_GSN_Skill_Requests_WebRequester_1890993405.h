#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// GSN.Skill.Requests.WebRequestErrorData/Error[]
struct ErrorU5BU5D_t1838875882;
struct Error_t3008710795_marshaled_pinvoke;
struct Error_t3008710795_marshaled_com;

#include "mscorlib_System_ValueType3507792607.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Requests.WebRequester/Parser/ErrorParsingDataType3/Result
struct  Result_t1890993405 
{
public:
	// GSN.Skill.Requests.WebRequestErrorData/Error[] GSN.Skill.Requests.WebRequester/Parser/ErrorParsingDataType3/Result::errors
	ErrorU5BU5D_t1838875882* ___errors_0;

public:
	inline static int32_t get_offset_of_errors_0() { return static_cast<int32_t>(offsetof(Result_t1890993405, ___errors_0)); }
	inline ErrorU5BU5D_t1838875882* get_errors_0() const { return ___errors_0; }
	inline ErrorU5BU5D_t1838875882** get_address_of_errors_0() { return &___errors_0; }
	inline void set_errors_0(ErrorU5BU5D_t1838875882* value)
	{
		___errors_0 = value;
		Il2CppCodeGenWriteBarrier(&___errors_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of GSN.Skill.Requests.WebRequester/Parser/ErrorParsingDataType3/Result
struct Result_t1890993405_marshaled_pinvoke
{
	Error_t3008710795_marshaled_pinvoke* ___errors_0;
};
// Native definition for COM marshalling of GSN.Skill.Requests.WebRequester/Parser/ErrorParsingDataType3/Result
struct Result_t1890993405_marshaled_com
{
	Error_t3008710795_marshaled_com* ___errors_0;
};
