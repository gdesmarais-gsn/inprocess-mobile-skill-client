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

// GSN.Skill.Requests.WebRequestErrorData/Error
struct  Error_t3008710795 
{
public:
	// System.String GSN.Skill.Requests.WebRequestErrorData/Error::error_message
	String_t* ___error_message_0;
	// System.String GSN.Skill.Requests.WebRequestErrorData/Error::status
	String_t* ___status_1;
	// System.String GSN.Skill.Requests.WebRequestErrorData/Error::error_code
	String_t* ___error_code_2;

public:
	inline static int32_t get_offset_of_error_message_0() { return static_cast<int32_t>(offsetof(Error_t3008710795, ___error_message_0)); }
	inline String_t* get_error_message_0() const { return ___error_message_0; }
	inline String_t** get_address_of_error_message_0() { return &___error_message_0; }
	inline void set_error_message_0(String_t* value)
	{
		___error_message_0 = value;
		Il2CppCodeGenWriteBarrier(&___error_message_0, value);
	}

	inline static int32_t get_offset_of_status_1() { return static_cast<int32_t>(offsetof(Error_t3008710795, ___status_1)); }
	inline String_t* get_status_1() const { return ___status_1; }
	inline String_t** get_address_of_status_1() { return &___status_1; }
	inline void set_status_1(String_t* value)
	{
		___status_1 = value;
		Il2CppCodeGenWriteBarrier(&___status_1, value);
	}

	inline static int32_t get_offset_of_error_code_2() { return static_cast<int32_t>(offsetof(Error_t3008710795, ___error_code_2)); }
	inline String_t* get_error_code_2() const { return ___error_code_2; }
	inline String_t** get_address_of_error_code_2() { return &___error_code_2; }
	inline void set_error_code_2(String_t* value)
	{
		___error_code_2 = value;
		Il2CppCodeGenWriteBarrier(&___error_code_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of GSN.Skill.Requests.WebRequestErrorData/Error
struct Error_t3008710795_marshaled_pinvoke
{
	char* ___error_message_0;
	char* ___status_1;
	char* ___error_code_2;
};
// Native definition for COM marshalling of GSN.Skill.Requests.WebRequestErrorData/Error
struct Error_t3008710795_marshaled_com
{
	Il2CppChar* ___error_message_0;
	Il2CppChar* ___status_1;
	Il2CppChar* ___error_code_2;
};
