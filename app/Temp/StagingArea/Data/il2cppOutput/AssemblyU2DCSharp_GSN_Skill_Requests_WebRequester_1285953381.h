#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// GSN.Skill.Requests.ISessionHandler
struct ISessionHandler_t2877131789;
// GSN.Skill.Requests.IWebRequest
struct IWebRequest_t216132554;
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

// GSN.Skill.Requests.WebRequester/<InternalFetchRequest>c__Iterator0
struct  U3CInternalFetchRequestU3Ec__Iterator0_t1285953381  : public Il2CppObject
{
public:
	// GSN.Skill.Requests.ISessionHandler GSN.Skill.Requests.WebRequester/<InternalFetchRequest>c__Iterator0::sessionHandler
	Il2CppObject * ___sessionHandler_0;
	// GSN.Skill.Requests.IWebRequest GSN.Skill.Requests.WebRequester/<InternalFetchRequest>c__Iterator0::request
	Il2CppObject * ___request_1;
	// GSN.Skill.Requests.WebRequester GSN.Skill.Requests.WebRequester/<InternalFetchRequest>c__Iterator0::$this
	WebRequester_t4254900636 * ___U24this_2;
	// System.Object GSN.Skill.Requests.WebRequester/<InternalFetchRequest>c__Iterator0::$current
	Il2CppObject * ___U24current_3;
	// System.Boolean GSN.Skill.Requests.WebRequester/<InternalFetchRequest>c__Iterator0::$disposing
	bool ___U24disposing_4;
	// System.Int32 GSN.Skill.Requests.WebRequester/<InternalFetchRequest>c__Iterator0::$PC
	int32_t ___U24PC_5;

public:
	inline static int32_t get_offset_of_sessionHandler_0() { return static_cast<int32_t>(offsetof(U3CInternalFetchRequestU3Ec__Iterator0_t1285953381, ___sessionHandler_0)); }
	inline Il2CppObject * get_sessionHandler_0() const { return ___sessionHandler_0; }
	inline Il2CppObject ** get_address_of_sessionHandler_0() { return &___sessionHandler_0; }
	inline void set_sessionHandler_0(Il2CppObject * value)
	{
		___sessionHandler_0 = value;
		Il2CppCodeGenWriteBarrier(&___sessionHandler_0, value);
	}

	inline static int32_t get_offset_of_request_1() { return static_cast<int32_t>(offsetof(U3CInternalFetchRequestU3Ec__Iterator0_t1285953381, ___request_1)); }
	inline Il2CppObject * get_request_1() const { return ___request_1; }
	inline Il2CppObject ** get_address_of_request_1() { return &___request_1; }
	inline void set_request_1(Il2CppObject * value)
	{
		___request_1 = value;
		Il2CppCodeGenWriteBarrier(&___request_1, value);
	}

	inline static int32_t get_offset_of_U24this_2() { return static_cast<int32_t>(offsetof(U3CInternalFetchRequestU3Ec__Iterator0_t1285953381, ___U24this_2)); }
	inline WebRequester_t4254900636 * get_U24this_2() const { return ___U24this_2; }
	inline WebRequester_t4254900636 ** get_address_of_U24this_2() { return &___U24this_2; }
	inline void set_U24this_2(WebRequester_t4254900636 * value)
	{
		___U24this_2 = value;
		Il2CppCodeGenWriteBarrier(&___U24this_2, value);
	}

	inline static int32_t get_offset_of_U24current_3() { return static_cast<int32_t>(offsetof(U3CInternalFetchRequestU3Ec__Iterator0_t1285953381, ___U24current_3)); }
	inline Il2CppObject * get_U24current_3() const { return ___U24current_3; }
	inline Il2CppObject ** get_address_of_U24current_3() { return &___U24current_3; }
	inline void set_U24current_3(Il2CppObject * value)
	{
		___U24current_3 = value;
		Il2CppCodeGenWriteBarrier(&___U24current_3, value);
	}

	inline static int32_t get_offset_of_U24disposing_4() { return static_cast<int32_t>(offsetof(U3CInternalFetchRequestU3Ec__Iterator0_t1285953381, ___U24disposing_4)); }
	inline bool get_U24disposing_4() const { return ___U24disposing_4; }
	inline bool* get_address_of_U24disposing_4() { return &___U24disposing_4; }
	inline void set_U24disposing_4(bool value)
	{
		___U24disposing_4 = value;
	}

	inline static int32_t get_offset_of_U24PC_5() { return static_cast<int32_t>(offsetof(U3CInternalFetchRequestU3Ec__Iterator0_t1285953381, ___U24PC_5)); }
	inline int32_t get_U24PC_5() const { return ___U24PC_5; }
	inline int32_t* get_address_of_U24PC_5() { return &___U24PC_5; }
	inline void set_U24PC_5(int32_t value)
	{
		___U24PC_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
