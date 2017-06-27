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

#include "System_System_Net_Mail_SmtpException1190166745.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Mail.SmtpFailedRecipientException
struct  SmtpFailedRecipientException_t3355744591  : public SmtpException_t1190166745
{
public:
	// System.String System.Net.Mail.SmtpFailedRecipientException::failedRecipient
	String_t* ___failedRecipient_12;

public:
	inline static int32_t get_offset_of_failedRecipient_12() { return static_cast<int32_t>(offsetof(SmtpFailedRecipientException_t3355744591, ___failedRecipient_12)); }
	inline String_t* get_failedRecipient_12() const { return ___failedRecipient_12; }
	inline String_t** get_address_of_failedRecipient_12() { return &___failedRecipient_12; }
	inline void set_failedRecipient_12(String_t* value)
	{
		___failedRecipient_12 = value;
		Il2CppCodeGenWriteBarrier(&___failedRecipient_12, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
