#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// GSN.Skill.Requests.WebRequestsBegin
struct WebRequestsBegin_t937617057;
// GSN.Skill.Requests.WebRequestsComplete
struct WebRequestsComplete_t1110411373;
// GSN.Skill.Requests.WebRequestFail
struct WebRequestFail_t1417322259;

#include "System_System_Collections_Generic_Queue_1_gen35789389.h"
#include "AssemblyU2DCSharp_GSN_Skill_Requests_WebRequests_M3029385213.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Requests.WebRequests
struct  WebRequests_t3348797540  : public Queue_1_t35789389
{
public:
	// GSN.Skill.Requests.WebRequests/MultipleRequestType GSN.Skill.Requests.WebRequests::type
	int32_t ___type_5;
	// GSN.Skill.Requests.WebRequestsBegin GSN.Skill.Requests.WebRequests::<OnRequestsBeginHandler>k__BackingField
	WebRequestsBegin_t937617057 * ___U3COnRequestsBeginHandlerU3Ek__BackingField_6;
	// GSN.Skill.Requests.WebRequestsComplete GSN.Skill.Requests.WebRequests::<OnRequestsCompleteHandler>k__BackingField
	WebRequestsComplete_t1110411373 * ___U3COnRequestsCompleteHandlerU3Ek__BackingField_7;
	// GSN.Skill.Requests.WebRequestFail GSN.Skill.Requests.WebRequests::<OnRequestsFailHandler>k__BackingField
	WebRequestFail_t1417322259 * ___U3COnRequestsFailHandlerU3Ek__BackingField_8;

public:
	inline static int32_t get_offset_of_type_5() { return static_cast<int32_t>(offsetof(WebRequests_t3348797540, ___type_5)); }
	inline int32_t get_type_5() const { return ___type_5; }
	inline int32_t* get_address_of_type_5() { return &___type_5; }
	inline void set_type_5(int32_t value)
	{
		___type_5 = value;
	}

	inline static int32_t get_offset_of_U3COnRequestsBeginHandlerU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(WebRequests_t3348797540, ___U3COnRequestsBeginHandlerU3Ek__BackingField_6)); }
	inline WebRequestsBegin_t937617057 * get_U3COnRequestsBeginHandlerU3Ek__BackingField_6() const { return ___U3COnRequestsBeginHandlerU3Ek__BackingField_6; }
	inline WebRequestsBegin_t937617057 ** get_address_of_U3COnRequestsBeginHandlerU3Ek__BackingField_6() { return &___U3COnRequestsBeginHandlerU3Ek__BackingField_6; }
	inline void set_U3COnRequestsBeginHandlerU3Ek__BackingField_6(WebRequestsBegin_t937617057 * value)
	{
		___U3COnRequestsBeginHandlerU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier(&___U3COnRequestsBeginHandlerU3Ek__BackingField_6, value);
	}

	inline static int32_t get_offset_of_U3COnRequestsCompleteHandlerU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(WebRequests_t3348797540, ___U3COnRequestsCompleteHandlerU3Ek__BackingField_7)); }
	inline WebRequestsComplete_t1110411373 * get_U3COnRequestsCompleteHandlerU3Ek__BackingField_7() const { return ___U3COnRequestsCompleteHandlerU3Ek__BackingField_7; }
	inline WebRequestsComplete_t1110411373 ** get_address_of_U3COnRequestsCompleteHandlerU3Ek__BackingField_7() { return &___U3COnRequestsCompleteHandlerU3Ek__BackingField_7; }
	inline void set_U3COnRequestsCompleteHandlerU3Ek__BackingField_7(WebRequestsComplete_t1110411373 * value)
	{
		___U3COnRequestsCompleteHandlerU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier(&___U3COnRequestsCompleteHandlerU3Ek__BackingField_7, value);
	}

	inline static int32_t get_offset_of_U3COnRequestsFailHandlerU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(WebRequests_t3348797540, ___U3COnRequestsFailHandlerU3Ek__BackingField_8)); }
	inline WebRequestFail_t1417322259 * get_U3COnRequestsFailHandlerU3Ek__BackingField_8() const { return ___U3COnRequestsFailHandlerU3Ek__BackingField_8; }
	inline WebRequestFail_t1417322259 ** get_address_of_U3COnRequestsFailHandlerU3Ek__BackingField_8() { return &___U3COnRequestsFailHandlerU3Ek__BackingField_8; }
	inline void set_U3COnRequestsFailHandlerU3Ek__BackingField_8(WebRequestFail_t1417322259 * value)
	{
		___U3COnRequestsFailHandlerU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier(&___U3COnRequestsFailHandlerU3Ek__BackingField_8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
