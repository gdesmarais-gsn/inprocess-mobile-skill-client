#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// GSN.Skill.Phoenix.Model.ScreenManager
struct ScreenManager_t2047768743;
// GSN.Skill.Phoenix.Model.Data.CurrentUser
struct CurrentUser_t3910039426;
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

// GSN.Skill.Phoenix.Model.LoginFlowManager
struct  LoginFlowManager_t3154992724  : public Il2CppObject
{
public:
	// GSN.Skill.Phoenix.Model.ScreenManager GSN.Skill.Phoenix.Model.LoginFlowManager::_screenManager
	ScreenManager_t2047768743 * ____screenManager_0;
	// GSN.Skill.Phoenix.Model.Data.CurrentUser GSN.Skill.Phoenix.Model.LoginFlowManager::_currentUser
	CurrentUser_t3910039426 * ____currentUser_1;

public:
	inline static int32_t get_offset_of__screenManager_0() { return static_cast<int32_t>(offsetof(LoginFlowManager_t3154992724, ____screenManager_0)); }
	inline ScreenManager_t2047768743 * get__screenManager_0() const { return ____screenManager_0; }
	inline ScreenManager_t2047768743 ** get_address_of__screenManager_0() { return &____screenManager_0; }
	inline void set__screenManager_0(ScreenManager_t2047768743 * value)
	{
		____screenManager_0 = value;
		Il2CppCodeGenWriteBarrier(&____screenManager_0, value);
	}

	inline static int32_t get_offset_of__currentUser_1() { return static_cast<int32_t>(offsetof(LoginFlowManager_t3154992724, ____currentUser_1)); }
	inline CurrentUser_t3910039426 * get__currentUser_1() const { return ____currentUser_1; }
	inline CurrentUser_t3910039426 ** get_address_of__currentUser_1() { return &____currentUser_1; }
	inline void set__currentUser_1(CurrentUser_t3910039426 * value)
	{
		____currentUser_1 = value;
		Il2CppCodeGenWriteBarrier(&____currentUser_1, value);
	}
};

struct LoginFlowManager_t3154992724_StaticFields
{
public:
	// GSN.Skill.Requests.SingleWebRequestBegin GSN.Skill.Phoenix.Model.LoginFlowManager::<>f__mg$cache0
	SingleWebRequestBegin_t714235414 * ___U3CU3Ef__mgU24cache0_2;
	// GSN.Skill.Requests.SingleWebRequestComplete GSN.Skill.Phoenix.Model.LoginFlowManager::<>f__mg$cache1
	SingleWebRequestComplete_t61608820 * ___U3CU3Ef__mgU24cache1_3;
	// GSN.Skill.Requests.SingleWebRequestFail GSN.Skill.Phoenix.Model.LoginFlowManager::<>f__mg$cache2
	SingleWebRequestFail_t691327747 * ___U3CU3Ef__mgU24cache2_4;
	// GSN.Skill.Requests.SingleWebRequestBegin GSN.Skill.Phoenix.Model.LoginFlowManager::<>f__mg$cache3
	SingleWebRequestBegin_t714235414 * ___U3CU3Ef__mgU24cache3_5;
	// GSN.Skill.Requests.SingleWebRequestComplete GSN.Skill.Phoenix.Model.LoginFlowManager::<>f__mg$cache4
	SingleWebRequestComplete_t61608820 * ___U3CU3Ef__mgU24cache4_6;
	// GSN.Skill.Requests.SingleWebRequestFail GSN.Skill.Phoenix.Model.LoginFlowManager::<>f__mg$cache5
	SingleWebRequestFail_t691327747 * ___U3CU3Ef__mgU24cache5_7;

public:
	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache0_2() { return static_cast<int32_t>(offsetof(LoginFlowManager_t3154992724_StaticFields, ___U3CU3Ef__mgU24cache0_2)); }
	inline SingleWebRequestBegin_t714235414 * get_U3CU3Ef__mgU24cache0_2() const { return ___U3CU3Ef__mgU24cache0_2; }
	inline SingleWebRequestBegin_t714235414 ** get_address_of_U3CU3Ef__mgU24cache0_2() { return &___U3CU3Ef__mgU24cache0_2; }
	inline void set_U3CU3Ef__mgU24cache0_2(SingleWebRequestBegin_t714235414 * value)
	{
		___U3CU3Ef__mgU24cache0_2 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__mgU24cache0_2, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache1_3() { return static_cast<int32_t>(offsetof(LoginFlowManager_t3154992724_StaticFields, ___U3CU3Ef__mgU24cache1_3)); }
	inline SingleWebRequestComplete_t61608820 * get_U3CU3Ef__mgU24cache1_3() const { return ___U3CU3Ef__mgU24cache1_3; }
	inline SingleWebRequestComplete_t61608820 ** get_address_of_U3CU3Ef__mgU24cache1_3() { return &___U3CU3Ef__mgU24cache1_3; }
	inline void set_U3CU3Ef__mgU24cache1_3(SingleWebRequestComplete_t61608820 * value)
	{
		___U3CU3Ef__mgU24cache1_3 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__mgU24cache1_3, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache2_4() { return static_cast<int32_t>(offsetof(LoginFlowManager_t3154992724_StaticFields, ___U3CU3Ef__mgU24cache2_4)); }
	inline SingleWebRequestFail_t691327747 * get_U3CU3Ef__mgU24cache2_4() const { return ___U3CU3Ef__mgU24cache2_4; }
	inline SingleWebRequestFail_t691327747 ** get_address_of_U3CU3Ef__mgU24cache2_4() { return &___U3CU3Ef__mgU24cache2_4; }
	inline void set_U3CU3Ef__mgU24cache2_4(SingleWebRequestFail_t691327747 * value)
	{
		___U3CU3Ef__mgU24cache2_4 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__mgU24cache2_4, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache3_5() { return static_cast<int32_t>(offsetof(LoginFlowManager_t3154992724_StaticFields, ___U3CU3Ef__mgU24cache3_5)); }
	inline SingleWebRequestBegin_t714235414 * get_U3CU3Ef__mgU24cache3_5() const { return ___U3CU3Ef__mgU24cache3_5; }
	inline SingleWebRequestBegin_t714235414 ** get_address_of_U3CU3Ef__mgU24cache3_5() { return &___U3CU3Ef__mgU24cache3_5; }
	inline void set_U3CU3Ef__mgU24cache3_5(SingleWebRequestBegin_t714235414 * value)
	{
		___U3CU3Ef__mgU24cache3_5 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__mgU24cache3_5, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache4_6() { return static_cast<int32_t>(offsetof(LoginFlowManager_t3154992724_StaticFields, ___U3CU3Ef__mgU24cache4_6)); }
	inline SingleWebRequestComplete_t61608820 * get_U3CU3Ef__mgU24cache4_6() const { return ___U3CU3Ef__mgU24cache4_6; }
	inline SingleWebRequestComplete_t61608820 ** get_address_of_U3CU3Ef__mgU24cache4_6() { return &___U3CU3Ef__mgU24cache4_6; }
	inline void set_U3CU3Ef__mgU24cache4_6(SingleWebRequestComplete_t61608820 * value)
	{
		___U3CU3Ef__mgU24cache4_6 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__mgU24cache4_6, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache5_7() { return static_cast<int32_t>(offsetof(LoginFlowManager_t3154992724_StaticFields, ___U3CU3Ef__mgU24cache5_7)); }
	inline SingleWebRequestFail_t691327747 * get_U3CU3Ef__mgU24cache5_7() const { return ___U3CU3Ef__mgU24cache5_7; }
	inline SingleWebRequestFail_t691327747 ** get_address_of_U3CU3Ef__mgU24cache5_7() { return &___U3CU3Ef__mgU24cache5_7; }
	inline void set_U3CU3Ef__mgU24cache5_7(SingleWebRequestFail_t691327747 * value)
	{
		___U3CU3Ef__mgU24cache5_7 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__mgU24cache5_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
