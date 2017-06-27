﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// GSN.Skill.Phoenix.Requests.Account.LogoutRequestData
struct LogoutRequestData_t3397811983;
// GSN.Skill.Requests.SingleWebRequestBegin
struct SingleWebRequestBegin_t714235414;
// GSN.Skill.Requests.SingleWebRequestComplete
struct SingleWebRequestComplete_t61608820;
// GSN.Skill.Requests.SingleWebRequestFail
struct SingleWebRequestFail_t691327747;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Phoenix.Model.LogoutManager
struct  LogoutManager_t100018189  : public Il2CppObject
{
public:
	// GSN.Skill.Phoenix.Requests.Account.LogoutRequestData GSN.Skill.Phoenix.Model.LogoutManager::_logout
	LogoutRequestData_t3397811983 * ____logout_0;

public:
	inline static int32_t get_offset_of__logout_0() { return static_cast<int32_t>(offsetof(LogoutManager_t100018189, ____logout_0)); }
	inline LogoutRequestData_t3397811983 * get__logout_0() const { return ____logout_0; }
	inline LogoutRequestData_t3397811983 ** get_address_of__logout_0() { return &____logout_0; }
	inline void set__logout_0(LogoutRequestData_t3397811983 * value)
	{
		____logout_0 = value;
		Il2CppCodeGenWriteBarrier(&____logout_0, value);
	}
};

struct LogoutManager_t100018189_StaticFields
{
public:
	// GSN.Skill.Requests.SingleWebRequestBegin GSN.Skill.Phoenix.Model.LogoutManager::<>f__mg$cache0
	SingleWebRequestBegin_t714235414 * ___U3CU3Ef__mgU24cache0_1;
	// GSN.Skill.Requests.SingleWebRequestComplete GSN.Skill.Phoenix.Model.LogoutManager::<>f__mg$cache1
	SingleWebRequestComplete_t61608820 * ___U3CU3Ef__mgU24cache1_2;
	// GSN.Skill.Requests.SingleWebRequestFail GSN.Skill.Phoenix.Model.LogoutManager::<>f__mg$cache2
	SingleWebRequestFail_t691327747 * ___U3CU3Ef__mgU24cache2_3;

public:
	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache0_1() { return static_cast<int32_t>(offsetof(LogoutManager_t100018189_StaticFields, ___U3CU3Ef__mgU24cache0_1)); }
	inline SingleWebRequestBegin_t714235414 * get_U3CU3Ef__mgU24cache0_1() const { return ___U3CU3Ef__mgU24cache0_1; }
	inline SingleWebRequestBegin_t714235414 ** get_address_of_U3CU3Ef__mgU24cache0_1() { return &___U3CU3Ef__mgU24cache0_1; }
	inline void set_U3CU3Ef__mgU24cache0_1(SingleWebRequestBegin_t714235414 * value)
	{
		___U3CU3Ef__mgU24cache0_1 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__mgU24cache0_1, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache1_2() { return static_cast<int32_t>(offsetof(LogoutManager_t100018189_StaticFields, ___U3CU3Ef__mgU24cache1_2)); }
	inline SingleWebRequestComplete_t61608820 * get_U3CU3Ef__mgU24cache1_2() const { return ___U3CU3Ef__mgU24cache1_2; }
	inline SingleWebRequestComplete_t61608820 ** get_address_of_U3CU3Ef__mgU24cache1_2() { return &___U3CU3Ef__mgU24cache1_2; }
	inline void set_U3CU3Ef__mgU24cache1_2(SingleWebRequestComplete_t61608820 * value)
	{
		___U3CU3Ef__mgU24cache1_2 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__mgU24cache1_2, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache2_3() { return static_cast<int32_t>(offsetof(LogoutManager_t100018189_StaticFields, ___U3CU3Ef__mgU24cache2_3)); }
	inline SingleWebRequestFail_t691327747 * get_U3CU3Ef__mgU24cache2_3() const { return ___U3CU3Ef__mgU24cache2_3; }
	inline SingleWebRequestFail_t691327747 ** get_address_of_U3CU3Ef__mgU24cache2_3() { return &___U3CU3Ef__mgU24cache2_3; }
	inline void set_U3CU3Ef__mgU24cache2_3(SingleWebRequestFail_t691327747 * value)
	{
		___U3CU3Ef__mgU24cache2_3 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__mgU24cache2_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif