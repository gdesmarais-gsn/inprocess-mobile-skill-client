#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String[]
struct StringU5BU5D_t1642385972;

#include "mscorlib_System_ValueType3507792607.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Requests.WebRequester/Parser/ErrorParsingDataType2/Result
struct  Result_t1835315458 
{
public:
	// System.String[] GSN.Skill.Requests.WebRequester/Parser/ErrorParsingDataType2/Result::errors
	StringU5BU5D_t1642385972* ___errors_0;

public:
	inline static int32_t get_offset_of_errors_0() { return static_cast<int32_t>(offsetof(Result_t1835315458, ___errors_0)); }
	inline StringU5BU5D_t1642385972* get_errors_0() const { return ___errors_0; }
	inline StringU5BU5D_t1642385972** get_address_of_errors_0() { return &___errors_0; }
	inline void set_errors_0(StringU5BU5D_t1642385972* value)
	{
		___errors_0 = value;
		Il2CppCodeGenWriteBarrier(&___errors_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of GSN.Skill.Requests.WebRequester/Parser/ErrorParsingDataType2/Result
struct Result_t1835315458_marshaled_pinvoke
{
	char** ___errors_0;
};
// Native definition for COM marshalling of GSN.Skill.Requests.WebRequester/Parser/ErrorParsingDataType2/Result
struct Result_t1835315458_marshaled_com
{
	Il2CppChar** ___errors_0;
};
