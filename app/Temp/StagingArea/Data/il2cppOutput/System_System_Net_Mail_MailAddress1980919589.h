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

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Mail.MailAddress
struct  MailAddress_t1980919589  : public Il2CppObject
{
public:
	// System.String System.Net.Mail.MailAddress::address
	String_t* ___address_0;
	// System.String System.Net.Mail.MailAddress::displayName
	String_t* ___displayName_1;

public:
	inline static int32_t get_offset_of_address_0() { return static_cast<int32_t>(offsetof(MailAddress_t1980919589, ___address_0)); }
	inline String_t* get_address_0() const { return ___address_0; }
	inline String_t** get_address_of_address_0() { return &___address_0; }
	inline void set_address_0(String_t* value)
	{
		___address_0 = value;
		Il2CppCodeGenWriteBarrier(&___address_0, value);
	}

	inline static int32_t get_offset_of_displayName_1() { return static_cast<int32_t>(offsetof(MailAddress_t1980919589, ___displayName_1)); }
	inline String_t* get_displayName_1() const { return ___displayName_1; }
	inline String_t** get_address_of_displayName_1() { return &___displayName_1; }
	inline void set_displayName_1(String_t* value)
	{
		___displayName_1 = value;
		Il2CppCodeGenWriteBarrier(&___displayName_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
