#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// GSN.Skill.Requests.SingleWebRequestBegin
struct SingleWebRequestBegin_t714235414;
// GSN.Skill.Requests.SingleWebRequestComplete
struct SingleWebRequestComplete_t61608820;
// GSN.Skill.Requests.SingleWebRequestFail
struct SingleWebRequestFail_t691327747;
// System.String
struct String_t;

#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_DateTime693205669.h"
#include "AssemblyU2DCSharp_GSN_Skill_Requests_WebRequestErr2176960341.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Requests.WebRequest`1<GSN.Skill.Phoenix.Requests.Tournament.GameHistoryData>
struct  WebRequest_1_t1068563341  : public Il2CppObject
{
public:
	// GSN.Skill.Requests.SingleWebRequestBegin GSN.Skill.Requests.WebRequest`1::<OnBeginHandler>k__BackingField
	SingleWebRequestBegin_t714235414 * ___U3COnBeginHandlerU3Ek__BackingField_0;
	// GSN.Skill.Requests.SingleWebRequestComplete GSN.Skill.Requests.WebRequest`1::<OnCompleteHandler>k__BackingField
	SingleWebRequestComplete_t61608820 * ___U3COnCompleteHandlerU3Ek__BackingField_1;
	// GSN.Skill.Requests.SingleWebRequestFail GSN.Skill.Requests.WebRequest`1::<OnFailHandler>k__BackingField
	SingleWebRequestFail_t691327747 * ___U3COnFailHandlerU3Ek__BackingField_2;
	// System.DateTime GSN.Skill.Requests.WebRequest`1::_lastFetched
	DateTime_t693205669  ____lastFetched_3;
	// System.String GSN.Skill.Requests.WebRequest`1::<ContentType>k__BackingField
	String_t* ___U3CContentTypeU3Ek__BackingField_4;
	// GSN.Skill.Requests.WebRequestErrorData GSN.Skill.Requests.WebRequest`1::<error>k__BackingField
	WebRequestErrorData_t2176960341  ___U3CerrorU3Ek__BackingField_5;

public:
	inline static int32_t get_offset_of_U3COnBeginHandlerU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(WebRequest_1_t1068563341, ___U3COnBeginHandlerU3Ek__BackingField_0)); }
	inline SingleWebRequestBegin_t714235414 * get_U3COnBeginHandlerU3Ek__BackingField_0() const { return ___U3COnBeginHandlerU3Ek__BackingField_0; }
	inline SingleWebRequestBegin_t714235414 ** get_address_of_U3COnBeginHandlerU3Ek__BackingField_0() { return &___U3COnBeginHandlerU3Ek__BackingField_0; }
	inline void set_U3COnBeginHandlerU3Ek__BackingField_0(SingleWebRequestBegin_t714235414 * value)
	{
		___U3COnBeginHandlerU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier(&___U3COnBeginHandlerU3Ek__BackingField_0, value);
	}

	inline static int32_t get_offset_of_U3COnCompleteHandlerU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(WebRequest_1_t1068563341, ___U3COnCompleteHandlerU3Ek__BackingField_1)); }
	inline SingleWebRequestComplete_t61608820 * get_U3COnCompleteHandlerU3Ek__BackingField_1() const { return ___U3COnCompleteHandlerU3Ek__BackingField_1; }
	inline SingleWebRequestComplete_t61608820 ** get_address_of_U3COnCompleteHandlerU3Ek__BackingField_1() { return &___U3COnCompleteHandlerU3Ek__BackingField_1; }
	inline void set_U3COnCompleteHandlerU3Ek__BackingField_1(SingleWebRequestComplete_t61608820 * value)
	{
		___U3COnCompleteHandlerU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier(&___U3COnCompleteHandlerU3Ek__BackingField_1, value);
	}

	inline static int32_t get_offset_of_U3COnFailHandlerU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(WebRequest_1_t1068563341, ___U3COnFailHandlerU3Ek__BackingField_2)); }
	inline SingleWebRequestFail_t691327747 * get_U3COnFailHandlerU3Ek__BackingField_2() const { return ___U3COnFailHandlerU3Ek__BackingField_2; }
	inline SingleWebRequestFail_t691327747 ** get_address_of_U3COnFailHandlerU3Ek__BackingField_2() { return &___U3COnFailHandlerU3Ek__BackingField_2; }
	inline void set_U3COnFailHandlerU3Ek__BackingField_2(SingleWebRequestFail_t691327747 * value)
	{
		___U3COnFailHandlerU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier(&___U3COnFailHandlerU3Ek__BackingField_2, value);
	}

	inline static int32_t get_offset_of__lastFetched_3() { return static_cast<int32_t>(offsetof(WebRequest_1_t1068563341, ____lastFetched_3)); }
	inline DateTime_t693205669  get__lastFetched_3() const { return ____lastFetched_3; }
	inline DateTime_t693205669 * get_address_of__lastFetched_3() { return &____lastFetched_3; }
	inline void set__lastFetched_3(DateTime_t693205669  value)
	{
		____lastFetched_3 = value;
	}

	inline static int32_t get_offset_of_U3CContentTypeU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(WebRequest_1_t1068563341, ___U3CContentTypeU3Ek__BackingField_4)); }
	inline String_t* get_U3CContentTypeU3Ek__BackingField_4() const { return ___U3CContentTypeU3Ek__BackingField_4; }
	inline String_t** get_address_of_U3CContentTypeU3Ek__BackingField_4() { return &___U3CContentTypeU3Ek__BackingField_4; }
	inline void set_U3CContentTypeU3Ek__BackingField_4(String_t* value)
	{
		___U3CContentTypeU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier(&___U3CContentTypeU3Ek__BackingField_4, value);
	}

	inline static int32_t get_offset_of_U3CerrorU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(WebRequest_1_t1068563341, ___U3CerrorU3Ek__BackingField_5)); }
	inline WebRequestErrorData_t2176960341  get_U3CerrorU3Ek__BackingField_5() const { return ___U3CerrorU3Ek__BackingField_5; }
	inline WebRequestErrorData_t2176960341 * get_address_of_U3CerrorU3Ek__BackingField_5() { return &___U3CerrorU3Ek__BackingField_5; }
	inline void set_U3CerrorU3Ek__BackingField_5(WebRequestErrorData_t2176960341  value)
	{
		___U3CerrorU3Ek__BackingField_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
