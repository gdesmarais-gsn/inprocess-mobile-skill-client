#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Net.Mail.SmtpFailedRecipientException[]
struct SmtpFailedRecipientExceptionU5BU5D_t1612260502;

#include "System_System_Net_Mail_SmtpFailedRecipientExceptio3355744591.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Mail.SmtpFailedRecipientsException
struct  SmtpFailedRecipientsException_t1979361300  : public SmtpFailedRecipientException_t3355744591
{
public:
	// System.Net.Mail.SmtpFailedRecipientException[] System.Net.Mail.SmtpFailedRecipientsException::innerExceptions
	SmtpFailedRecipientExceptionU5BU5D_t1612260502* ___innerExceptions_13;

public:
	inline static int32_t get_offset_of_innerExceptions_13() { return static_cast<int32_t>(offsetof(SmtpFailedRecipientsException_t1979361300, ___innerExceptions_13)); }
	inline SmtpFailedRecipientExceptionU5BU5D_t1612260502* get_innerExceptions_13() const { return ___innerExceptions_13; }
	inline SmtpFailedRecipientExceptionU5BU5D_t1612260502** get_address_of_innerExceptions_13() { return &___innerExceptions_13; }
	inline void set_innerExceptions_13(SmtpFailedRecipientExceptionU5BU5D_t1612260502* value)
	{
		___innerExceptions_13 = value;
		Il2CppCodeGenWriteBarrier(&___innerExceptions_13, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
