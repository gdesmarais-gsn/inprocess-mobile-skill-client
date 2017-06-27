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
#include "System_System_Net_Mail_SmtpStatusCode887155417.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Mail.SmtpClient/SmtpResponse
struct  SmtpResponse_t616735068 
{
public:
	// System.Net.Mail.SmtpStatusCode System.Net.Mail.SmtpClient/SmtpResponse::StatusCode
	int32_t ___StatusCode_0;
	// System.String System.Net.Mail.SmtpClient/SmtpResponse::Description
	String_t* ___Description_1;

public:
	inline static int32_t get_offset_of_StatusCode_0() { return static_cast<int32_t>(offsetof(SmtpResponse_t616735068, ___StatusCode_0)); }
	inline int32_t get_StatusCode_0() const { return ___StatusCode_0; }
	inline int32_t* get_address_of_StatusCode_0() { return &___StatusCode_0; }
	inline void set_StatusCode_0(int32_t value)
	{
		___StatusCode_0 = value;
	}

	inline static int32_t get_offset_of_Description_1() { return static_cast<int32_t>(offsetof(SmtpResponse_t616735068, ___Description_1)); }
	inline String_t* get_Description_1() const { return ___Description_1; }
	inline String_t** get_address_of_Description_1() { return &___Description_1; }
	inline void set_Description_1(String_t* value)
	{
		___Description_1 = value;
		Il2CppCodeGenWriteBarrier(&___Description_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Net.Mail.SmtpClient/SmtpResponse
struct SmtpResponse_t616735068_marshaled_pinvoke
{
	int32_t ___StatusCode_0;
	char* ___Description_1;
};
// Native definition for COM marshalling of System.Net.Mail.SmtpClient/SmtpResponse
struct SmtpResponse_t616735068_marshaled_com
{
	int32_t ___StatusCode_0;
	Il2CppChar* ___Description_1;
};
