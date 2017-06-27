#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;

#include "mscorlib_System_ValueType3507792607.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Requests.WebRequester/Parser/ErrorParsingDataType1/Error
struct  Error_t1522081810 
{
public:
	// System.String GSN.Skill.Requests.WebRequester/Parser/ErrorParsingDataType1/Error::msg
	String_t* ___msg_0;

public:
	inline static int32_t get_offset_of_msg_0() { return static_cast<int32_t>(offsetof(Error_t1522081810, ___msg_0)); }
	inline String_t* get_msg_0() const { return ___msg_0; }
	inline String_t** get_address_of_msg_0() { return &___msg_0; }
	inline void set_msg_0(String_t* value)
	{
		___msg_0 = value;
		Il2CppCodeGenWriteBarrier(&___msg_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of GSN.Skill.Requests.WebRequester/Parser/ErrorParsingDataType1/Error
struct Error_t1522081810_marshaled_pinvoke
{
	char* ___msg_0;
};
// Native definition for COM marshalling of GSN.Skill.Requests.WebRequester/Parser/ErrorParsingDataType1/Error
struct Error_t1522081810_marshaled_com
{
	Il2CppChar* ___msg_0;
};
