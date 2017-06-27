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
// System.String
struct String_t;

#include "mscorlib_System_ValueType3507792607.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Phoenix.Requests.Account.CaptchaFailedAttemptResponse
struct  CaptchaFailedAttemptResponse_t2839665689 
{
public:
	// System.Boolean GSN.Skill.Phoenix.Requests.Account.CaptchaFailedAttemptResponse::inject
	bool ___inject_0;
	// System.String[] GSN.Skill.Phoenix.Requests.Account.CaptchaFailedAttemptResponse::message
	StringU5BU5D_t1642385972* ___message_1;
	// System.String GSN.Skill.Phoenix.Requests.Account.CaptchaFailedAttemptResponse::code
	String_t* ___code_2;

public:
	inline static int32_t get_offset_of_inject_0() { return static_cast<int32_t>(offsetof(CaptchaFailedAttemptResponse_t2839665689, ___inject_0)); }
	inline bool get_inject_0() const { return ___inject_0; }
	inline bool* get_address_of_inject_0() { return &___inject_0; }
	inline void set_inject_0(bool value)
	{
		___inject_0 = value;
	}

	inline static int32_t get_offset_of_message_1() { return static_cast<int32_t>(offsetof(CaptchaFailedAttemptResponse_t2839665689, ___message_1)); }
	inline StringU5BU5D_t1642385972* get_message_1() const { return ___message_1; }
	inline StringU5BU5D_t1642385972** get_address_of_message_1() { return &___message_1; }
	inline void set_message_1(StringU5BU5D_t1642385972* value)
	{
		___message_1 = value;
		Il2CppCodeGenWriteBarrier(&___message_1, value);
	}

	inline static int32_t get_offset_of_code_2() { return static_cast<int32_t>(offsetof(CaptchaFailedAttemptResponse_t2839665689, ___code_2)); }
	inline String_t* get_code_2() const { return ___code_2; }
	inline String_t** get_address_of_code_2() { return &___code_2; }
	inline void set_code_2(String_t* value)
	{
		___code_2 = value;
		Il2CppCodeGenWriteBarrier(&___code_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of GSN.Skill.Phoenix.Requests.Account.CaptchaFailedAttemptResponse
struct CaptchaFailedAttemptResponse_t2839665689_marshaled_pinvoke
{
	int32_t ___inject_0;
	char** ___message_1;
	char* ___code_2;
};
// Native definition for COM marshalling of GSN.Skill.Phoenix.Requests.Account.CaptchaFailedAttemptResponse
struct CaptchaFailedAttemptResponse_t2839665689_marshaled_com
{
	int32_t ___inject_0;
	Il2CppChar** ___message_1;
	Il2CppChar* ___code_2;
};
