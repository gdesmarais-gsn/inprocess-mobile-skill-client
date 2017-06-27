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
// System.String[]
struct StringU5BU5D_t1642385972;

#include "mscorlib_System_ValueType3507792607.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Phoenix.Requests.Account.ResetPasswordData/Result
struct  Result_t4208979253 
{
public:
	// System.Boolean GSN.Skill.Phoenix.Requests.Account.ResetPasswordData/Result::multiAccounts
	bool ___multiAccounts_0;
	// System.String GSN.Skill.Phoenix.Requests.Account.ResetPasswordData/Result::Success
	String_t* ___Success_1;
	// System.String[] GSN.Skill.Phoenix.Requests.Account.ResetPasswordData/Result::errors
	StringU5BU5D_t1642385972* ___errors_2;

public:
	inline static int32_t get_offset_of_multiAccounts_0() { return static_cast<int32_t>(offsetof(Result_t4208979253, ___multiAccounts_0)); }
	inline bool get_multiAccounts_0() const { return ___multiAccounts_0; }
	inline bool* get_address_of_multiAccounts_0() { return &___multiAccounts_0; }
	inline void set_multiAccounts_0(bool value)
	{
		___multiAccounts_0 = value;
	}

	inline static int32_t get_offset_of_Success_1() { return static_cast<int32_t>(offsetof(Result_t4208979253, ___Success_1)); }
	inline String_t* get_Success_1() const { return ___Success_1; }
	inline String_t** get_address_of_Success_1() { return &___Success_1; }
	inline void set_Success_1(String_t* value)
	{
		___Success_1 = value;
		Il2CppCodeGenWriteBarrier(&___Success_1, value);
	}

	inline static int32_t get_offset_of_errors_2() { return static_cast<int32_t>(offsetof(Result_t4208979253, ___errors_2)); }
	inline StringU5BU5D_t1642385972* get_errors_2() const { return ___errors_2; }
	inline StringU5BU5D_t1642385972** get_address_of_errors_2() { return &___errors_2; }
	inline void set_errors_2(StringU5BU5D_t1642385972* value)
	{
		___errors_2 = value;
		Il2CppCodeGenWriteBarrier(&___errors_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of GSN.Skill.Phoenix.Requests.Account.ResetPasswordData/Result
struct Result_t4208979253_marshaled_pinvoke
{
	int32_t ___multiAccounts_0;
	char* ___Success_1;
	char** ___errors_2;
};
// Native definition for COM marshalling of GSN.Skill.Phoenix.Requests.Account.ResetPasswordData/Result
struct Result_t4208979253_marshaled_com
{
	int32_t ___multiAccounts_0;
	Il2CppChar* ___Success_1;
	Il2CppChar** ___errors_2;
};
