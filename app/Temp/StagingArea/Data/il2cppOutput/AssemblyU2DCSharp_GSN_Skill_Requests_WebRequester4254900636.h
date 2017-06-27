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
// GSN.Skill.Requests.ISessionHandler
struct ISessionHandler_t2877131789;
// System.Collections.Generic.Dictionary`2<GSN.Skill.Requests.IWebRequest,System.Int32>
struct Dictionary_2_t3816375649;
// GSN.Skill.Requests.WebRequester/RequestFilter
struct RequestFilter_t2349980733;

#include "AssemblyU2DCSharp_GSN_Skill_Utils_SingletonMonoBeh4181182509.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Requests.WebRequester
struct  WebRequester_t4254900636  : public SingletonMonoBehaviour_1_t4181182509
{
public:
	// System.Boolean GSN.Skill.Requests.WebRequester::_noSessionHandlerNotified
	bool ____noSessionHandlerNotified_13;
	// GSN.Skill.Requests.ISessionHandler GSN.Skill.Requests.WebRequester::_mainSessionHandler
	Il2CppObject * ____mainSessionHandler_14;
	// System.Collections.Generic.Dictionary`2<GSN.Skill.Requests.IWebRequest,System.Int32> GSN.Skill.Requests.WebRequester::_currentRequests
	Dictionary_2_t3816375649 * ____currentRequests_15;
	// System.Boolean GSN.Skill.Requests.WebRequester::<HasConnection>k__BackingField
	bool ___U3CHasConnectionU3Ek__BackingField_16;
	// GSN.Skill.Requests.WebRequester/RequestFilter GSN.Skill.Requests.WebRequester::filter
	RequestFilter_t2349980733 * ___filter_17;

public:
	inline static int32_t get_offset_of__noSessionHandlerNotified_13() { return static_cast<int32_t>(offsetof(WebRequester_t4254900636, ____noSessionHandlerNotified_13)); }
	inline bool get__noSessionHandlerNotified_13() const { return ____noSessionHandlerNotified_13; }
	inline bool* get_address_of__noSessionHandlerNotified_13() { return &____noSessionHandlerNotified_13; }
	inline void set__noSessionHandlerNotified_13(bool value)
	{
		____noSessionHandlerNotified_13 = value;
	}

	inline static int32_t get_offset_of__mainSessionHandler_14() { return static_cast<int32_t>(offsetof(WebRequester_t4254900636, ____mainSessionHandler_14)); }
	inline Il2CppObject * get__mainSessionHandler_14() const { return ____mainSessionHandler_14; }
	inline Il2CppObject ** get_address_of__mainSessionHandler_14() { return &____mainSessionHandler_14; }
	inline void set__mainSessionHandler_14(Il2CppObject * value)
	{
		____mainSessionHandler_14 = value;
		Il2CppCodeGenWriteBarrier(&____mainSessionHandler_14, value);
	}

	inline static int32_t get_offset_of__currentRequests_15() { return static_cast<int32_t>(offsetof(WebRequester_t4254900636, ____currentRequests_15)); }
	inline Dictionary_2_t3816375649 * get__currentRequests_15() const { return ____currentRequests_15; }
	inline Dictionary_2_t3816375649 ** get_address_of__currentRequests_15() { return &____currentRequests_15; }
	inline void set__currentRequests_15(Dictionary_2_t3816375649 * value)
	{
		____currentRequests_15 = value;
		Il2CppCodeGenWriteBarrier(&____currentRequests_15, value);
	}

	inline static int32_t get_offset_of_U3CHasConnectionU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(WebRequester_t4254900636, ___U3CHasConnectionU3Ek__BackingField_16)); }
	inline bool get_U3CHasConnectionU3Ek__BackingField_16() const { return ___U3CHasConnectionU3Ek__BackingField_16; }
	inline bool* get_address_of_U3CHasConnectionU3Ek__BackingField_16() { return &___U3CHasConnectionU3Ek__BackingField_16; }
	inline void set_U3CHasConnectionU3Ek__BackingField_16(bool value)
	{
		___U3CHasConnectionU3Ek__BackingField_16 = value;
	}

	inline static int32_t get_offset_of_filter_17() { return static_cast<int32_t>(offsetof(WebRequester_t4254900636, ___filter_17)); }
	inline RequestFilter_t2349980733 * get_filter_17() const { return ___filter_17; }
	inline RequestFilter_t2349980733 ** get_address_of_filter_17() { return &___filter_17; }
	inline void set_filter_17(RequestFilter_t2349980733 * value)
	{
		___filter_17 = value;
		Il2CppCodeGenWriteBarrier(&___filter_17, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
