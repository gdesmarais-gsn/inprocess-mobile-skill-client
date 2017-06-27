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
// System.Net.CookieContainer
struct CookieContainer_t2808809223;
// GSN.Skill.Phoenix.Requests.Account.RememberMeLoginRequestData
struct RememberMeLoginRequestData_t3143073869;

#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_21701344717.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Requests.WorldWinnerSessionHandler
struct  WorldWinnerSessionHandler_t1662797409  : public Il2CppObject
{
public:
	// System.Net.CookieContainer GSN.Skill.Requests.WorldWinnerSessionHandler::_cookieContainer
	CookieContainer_t2808809223 * ____cookieContainer_2;
	// GSN.Skill.Phoenix.Requests.Account.RememberMeLoginRequestData GSN.Skill.Requests.WorldWinnerSessionHandler::_rememberMeLoginData
	RememberMeLoginRequestData_t3143073869 * ____rememberMeLoginData_4;
	// System.Int32 GSN.Skill.Requests.WorldWinnerSessionHandler::<retryCount>k__BackingField
	int32_t ___U3CretryCountU3Ek__BackingField_5;

public:
	inline static int32_t get_offset_of__cookieContainer_2() { return static_cast<int32_t>(offsetof(WorldWinnerSessionHandler_t1662797409, ____cookieContainer_2)); }
	inline CookieContainer_t2808809223 * get__cookieContainer_2() const { return ____cookieContainer_2; }
	inline CookieContainer_t2808809223 ** get_address_of__cookieContainer_2() { return &____cookieContainer_2; }
	inline void set__cookieContainer_2(CookieContainer_t2808809223 * value)
	{
		____cookieContainer_2 = value;
		Il2CppCodeGenWriteBarrier(&____cookieContainer_2, value);
	}

	inline static int32_t get_offset_of__rememberMeLoginData_4() { return static_cast<int32_t>(offsetof(WorldWinnerSessionHandler_t1662797409, ____rememberMeLoginData_4)); }
	inline RememberMeLoginRequestData_t3143073869 * get__rememberMeLoginData_4() const { return ____rememberMeLoginData_4; }
	inline RememberMeLoginRequestData_t3143073869 ** get_address_of__rememberMeLoginData_4() { return &____rememberMeLoginData_4; }
	inline void set__rememberMeLoginData_4(RememberMeLoginRequestData_t3143073869 * value)
	{
		____rememberMeLoginData_4 = value;
		Il2CppCodeGenWriteBarrier(&____rememberMeLoginData_4, value);
	}

	inline static int32_t get_offset_of_U3CretryCountU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(WorldWinnerSessionHandler_t1662797409, ___U3CretryCountU3Ek__BackingField_5)); }
	inline int32_t get_U3CretryCountU3Ek__BackingField_5() const { return ___U3CretryCountU3Ek__BackingField_5; }
	inline int32_t* get_address_of_U3CretryCountU3Ek__BackingField_5() { return &___U3CretryCountU3Ek__BackingField_5; }
	inline void set_U3CretryCountU3Ek__BackingField_5(int32_t value)
	{
		___U3CretryCountU3Ek__BackingField_5 = value;
	}
};

struct WorldWinnerSessionHandler_t1662797409_StaticFields
{
public:
	// System.Collections.Generic.KeyValuePair`2<System.String,System.String> GSN.Skill.Requests.WorldWinnerSessionHandler::_cookieSessionId
	KeyValuePair_2_t1701344717  ____cookieSessionId_3;

public:
	inline static int32_t get_offset_of__cookieSessionId_3() { return static_cast<int32_t>(offsetof(WorldWinnerSessionHandler_t1662797409_StaticFields, ____cookieSessionId_3)); }
	inline KeyValuePair_2_t1701344717  get__cookieSessionId_3() const { return ____cookieSessionId_3; }
	inline KeyValuePair_2_t1701344717 * get_address_of__cookieSessionId_3() { return &____cookieSessionId_3; }
	inline void set__cookieSessionId_3(KeyValuePair_2_t1701344717  value)
	{
		____cookieSessionId_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
