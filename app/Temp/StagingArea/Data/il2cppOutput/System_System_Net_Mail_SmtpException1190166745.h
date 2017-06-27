#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "mscorlib_System_Exception1927440687.h"
#include "System_System_Net_Mail_SmtpStatusCode887155417.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Mail.SmtpException
struct  SmtpException_t1190166745  : public Exception_t1927440687
{
public:
	// System.Net.Mail.SmtpStatusCode System.Net.Mail.SmtpException::statusCode
	int32_t ___statusCode_11;

public:
	inline static int32_t get_offset_of_statusCode_11() { return static_cast<int32_t>(offsetof(SmtpException_t1190166745, ___statusCode_11)); }
	inline int32_t get_statusCode_11() const { return ___statusCode_11; }
	inline int32_t* get_address_of_statusCode_11() { return &___statusCode_11; }
	inline void set_statusCode_11(int32_t value)
	{
		___statusCode_11 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
