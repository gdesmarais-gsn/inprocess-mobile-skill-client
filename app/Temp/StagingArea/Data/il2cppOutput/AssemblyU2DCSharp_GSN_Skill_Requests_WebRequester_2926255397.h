#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// GSN.Skill.Requests.IWebRequest
struct IWebRequest_t216132554;
// System.String
struct String_t;
// GSN.Skill.Requests.WebRequester/Parser
struct Parser_t1855886527;
// System.Threading.Thread
struct Thread_t241561612;
// GSN.Skill.Requests.WebRequester
struct WebRequester_t4254900636;
// System.Object
struct Il2CppObject;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Requests.WebRequester/<Parse>c__Iterator3
struct  U3CParseU3Ec__Iterator3_t2926255397  : public Il2CppObject
{
public:
	// GSN.Skill.Requests.IWebRequest GSN.Skill.Requests.WebRequester/<Parse>c__Iterator3::request
	Il2CppObject * ___request_0;
	// System.String GSN.Skill.Requests.WebRequester/<Parse>c__Iterator3::data
	String_t* ___data_1;
	// GSN.Skill.Requests.WebRequester/Parser GSN.Skill.Requests.WebRequester/<Parse>c__Iterator3::<parser>__0
	Parser_t1855886527 * ___U3CparserU3E__0_2;
	// System.Threading.Thread GSN.Skill.Requests.WebRequester/<Parse>c__Iterator3::<t>__1
	Thread_t241561612 * ___U3CtU3E__1_3;
	// GSN.Skill.Requests.WebRequester GSN.Skill.Requests.WebRequester/<Parse>c__Iterator3::$this
	WebRequester_t4254900636 * ___U24this_4;
	// System.Object GSN.Skill.Requests.WebRequester/<Parse>c__Iterator3::$current
	Il2CppObject * ___U24current_5;
	// System.Boolean GSN.Skill.Requests.WebRequester/<Parse>c__Iterator3::$disposing
	bool ___U24disposing_6;
	// System.Int32 GSN.Skill.Requests.WebRequester/<Parse>c__Iterator3::$PC
	int32_t ___U24PC_7;

public:
	inline static int32_t get_offset_of_request_0() { return static_cast<int32_t>(offsetof(U3CParseU3Ec__Iterator3_t2926255397, ___request_0)); }
	inline Il2CppObject * get_request_0() const { return ___request_0; }
	inline Il2CppObject ** get_address_of_request_0() { return &___request_0; }
	inline void set_request_0(Il2CppObject * value)
	{
		___request_0 = value;
		Il2CppCodeGenWriteBarrier(&___request_0, value);
	}

	inline static int32_t get_offset_of_data_1() { return static_cast<int32_t>(offsetof(U3CParseU3Ec__Iterator3_t2926255397, ___data_1)); }
	inline String_t* get_data_1() const { return ___data_1; }
	inline String_t** get_address_of_data_1() { return &___data_1; }
	inline void set_data_1(String_t* value)
	{
		___data_1 = value;
		Il2CppCodeGenWriteBarrier(&___data_1, value);
	}

	inline static int32_t get_offset_of_U3CparserU3E__0_2() { return static_cast<int32_t>(offsetof(U3CParseU3Ec__Iterator3_t2926255397, ___U3CparserU3E__0_2)); }
	inline Parser_t1855886527 * get_U3CparserU3E__0_2() const { return ___U3CparserU3E__0_2; }
	inline Parser_t1855886527 ** get_address_of_U3CparserU3E__0_2() { return &___U3CparserU3E__0_2; }
	inline void set_U3CparserU3E__0_2(Parser_t1855886527 * value)
	{
		___U3CparserU3E__0_2 = value;
		Il2CppCodeGenWriteBarrier(&___U3CparserU3E__0_2, value);
	}

	inline static int32_t get_offset_of_U3CtU3E__1_3() { return static_cast<int32_t>(offsetof(U3CParseU3Ec__Iterator3_t2926255397, ___U3CtU3E__1_3)); }
	inline Thread_t241561612 * get_U3CtU3E__1_3() const { return ___U3CtU3E__1_3; }
	inline Thread_t241561612 ** get_address_of_U3CtU3E__1_3() { return &___U3CtU3E__1_3; }
	inline void set_U3CtU3E__1_3(Thread_t241561612 * value)
	{
		___U3CtU3E__1_3 = value;
		Il2CppCodeGenWriteBarrier(&___U3CtU3E__1_3, value);
	}

	inline static int32_t get_offset_of_U24this_4() { return static_cast<int32_t>(offsetof(U3CParseU3Ec__Iterator3_t2926255397, ___U24this_4)); }
	inline WebRequester_t4254900636 * get_U24this_4() const { return ___U24this_4; }
	inline WebRequester_t4254900636 ** get_address_of_U24this_4() { return &___U24this_4; }
	inline void set_U24this_4(WebRequester_t4254900636 * value)
	{
		___U24this_4 = value;
		Il2CppCodeGenWriteBarrier(&___U24this_4, value);
	}

	inline static int32_t get_offset_of_U24current_5() { return static_cast<int32_t>(offsetof(U3CParseU3Ec__Iterator3_t2926255397, ___U24current_5)); }
	inline Il2CppObject * get_U24current_5() const { return ___U24current_5; }
	inline Il2CppObject ** get_address_of_U24current_5() { return &___U24current_5; }
	inline void set_U24current_5(Il2CppObject * value)
	{
		___U24current_5 = value;
		Il2CppCodeGenWriteBarrier(&___U24current_5, value);
	}

	inline static int32_t get_offset_of_U24disposing_6() { return static_cast<int32_t>(offsetof(U3CParseU3Ec__Iterator3_t2926255397, ___U24disposing_6)); }
	inline bool get_U24disposing_6() const { return ___U24disposing_6; }
	inline bool* get_address_of_U24disposing_6() { return &___U24disposing_6; }
	inline void set_U24disposing_6(bool value)
	{
		___U24disposing_6 = value;
	}

	inline static int32_t get_offset_of_U24PC_7() { return static_cast<int32_t>(offsetof(U3CParseU3Ec__Iterator3_t2926255397, ___U24PC_7)); }
	inline int32_t get_U24PC_7() const { return ___U24PC_7; }
	inline int32_t* get_address_of_U24PC_7() { return &___U24PC_7; }
	inline void set_U24PC_7(int32_t value)
	{
		___U24PC_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
