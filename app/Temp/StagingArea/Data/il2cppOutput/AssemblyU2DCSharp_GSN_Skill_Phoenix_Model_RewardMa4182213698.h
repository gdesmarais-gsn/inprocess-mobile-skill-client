#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// GSN.Skill.Phoenix.Model.Data.CurrentUser
struct CurrentUser_t3910039426;
// GSN.Skill.Phoenix.Model.DepositManager
struct DepositManager_t590905979;
// GSN.Skill.Requests.WebRequests
struct WebRequests_t3348797540;
// GSN.Skill.Phoenix.Model.Popups.RewardsPopupModel
struct RewardsPopupModel_t407090095;
// GSN.Skill.Requests.WebRequestsBegin
struct WebRequestsBegin_t937617057;
// GSN.Skill.Requests.WebRequestsComplete
struct WebRequestsComplete_t1110411373;
// GSN.Skill.Requests.WebRequestFail
struct WebRequestFail_t1417322259;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Phoenix.Model.RewardManager
struct  RewardManager_t4182213698  : public Il2CppObject
{
public:
	// GSN.Skill.Phoenix.Model.Data.CurrentUser GSN.Skill.Phoenix.Model.RewardManager::_currentUser
	CurrentUser_t3910039426 * ____currentUser_0;
	// GSN.Skill.Phoenix.Model.DepositManager GSN.Skill.Phoenix.Model.RewardManager::_depositManager
	DepositManager_t590905979 * ____depositManager_1;
	// GSN.Skill.Requests.WebRequests GSN.Skill.Phoenix.Model.RewardManager::_requests
	WebRequests_t3348797540 * ____requests_2;
	// GSN.Skill.Phoenix.Model.Popups.RewardsPopupModel GSN.Skill.Phoenix.Model.RewardManager::_popup
	RewardsPopupModel_t407090095 * ____popup_3;

public:
	inline static int32_t get_offset_of__currentUser_0() { return static_cast<int32_t>(offsetof(RewardManager_t4182213698, ____currentUser_0)); }
	inline CurrentUser_t3910039426 * get__currentUser_0() const { return ____currentUser_0; }
	inline CurrentUser_t3910039426 ** get_address_of__currentUser_0() { return &____currentUser_0; }
	inline void set__currentUser_0(CurrentUser_t3910039426 * value)
	{
		____currentUser_0 = value;
		Il2CppCodeGenWriteBarrier(&____currentUser_0, value);
	}

	inline static int32_t get_offset_of__depositManager_1() { return static_cast<int32_t>(offsetof(RewardManager_t4182213698, ____depositManager_1)); }
	inline DepositManager_t590905979 * get__depositManager_1() const { return ____depositManager_1; }
	inline DepositManager_t590905979 ** get_address_of__depositManager_1() { return &____depositManager_1; }
	inline void set__depositManager_1(DepositManager_t590905979 * value)
	{
		____depositManager_1 = value;
		Il2CppCodeGenWriteBarrier(&____depositManager_1, value);
	}

	inline static int32_t get_offset_of__requests_2() { return static_cast<int32_t>(offsetof(RewardManager_t4182213698, ____requests_2)); }
	inline WebRequests_t3348797540 * get__requests_2() const { return ____requests_2; }
	inline WebRequests_t3348797540 ** get_address_of__requests_2() { return &____requests_2; }
	inline void set__requests_2(WebRequests_t3348797540 * value)
	{
		____requests_2 = value;
		Il2CppCodeGenWriteBarrier(&____requests_2, value);
	}

	inline static int32_t get_offset_of__popup_3() { return static_cast<int32_t>(offsetof(RewardManager_t4182213698, ____popup_3)); }
	inline RewardsPopupModel_t407090095 * get__popup_3() const { return ____popup_3; }
	inline RewardsPopupModel_t407090095 ** get_address_of__popup_3() { return &____popup_3; }
	inline void set__popup_3(RewardsPopupModel_t407090095 * value)
	{
		____popup_3 = value;
		Il2CppCodeGenWriteBarrier(&____popup_3, value);
	}
};

struct RewardManager_t4182213698_StaticFields
{
public:
	// GSN.Skill.Requests.WebRequestsBegin GSN.Skill.Phoenix.Model.RewardManager::<>f__mg$cache0
	WebRequestsBegin_t937617057 * ___U3CU3Ef__mgU24cache0_4;
	// GSN.Skill.Requests.WebRequestsComplete GSN.Skill.Phoenix.Model.RewardManager::<>f__mg$cache1
	WebRequestsComplete_t1110411373 * ___U3CU3Ef__mgU24cache1_5;
	// GSN.Skill.Requests.WebRequestFail GSN.Skill.Phoenix.Model.RewardManager::<>f__mg$cache2
	WebRequestFail_t1417322259 * ___U3CU3Ef__mgU24cache2_6;

public:
	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache0_4() { return static_cast<int32_t>(offsetof(RewardManager_t4182213698_StaticFields, ___U3CU3Ef__mgU24cache0_4)); }
	inline WebRequestsBegin_t937617057 * get_U3CU3Ef__mgU24cache0_4() const { return ___U3CU3Ef__mgU24cache0_4; }
	inline WebRequestsBegin_t937617057 ** get_address_of_U3CU3Ef__mgU24cache0_4() { return &___U3CU3Ef__mgU24cache0_4; }
	inline void set_U3CU3Ef__mgU24cache0_4(WebRequestsBegin_t937617057 * value)
	{
		___U3CU3Ef__mgU24cache0_4 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__mgU24cache0_4, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache1_5() { return static_cast<int32_t>(offsetof(RewardManager_t4182213698_StaticFields, ___U3CU3Ef__mgU24cache1_5)); }
	inline WebRequestsComplete_t1110411373 * get_U3CU3Ef__mgU24cache1_5() const { return ___U3CU3Ef__mgU24cache1_5; }
	inline WebRequestsComplete_t1110411373 ** get_address_of_U3CU3Ef__mgU24cache1_5() { return &___U3CU3Ef__mgU24cache1_5; }
	inline void set_U3CU3Ef__mgU24cache1_5(WebRequestsComplete_t1110411373 * value)
	{
		___U3CU3Ef__mgU24cache1_5 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__mgU24cache1_5, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache2_6() { return static_cast<int32_t>(offsetof(RewardManager_t4182213698_StaticFields, ___U3CU3Ef__mgU24cache2_6)); }
	inline WebRequestFail_t1417322259 * get_U3CU3Ef__mgU24cache2_6() const { return ___U3CU3Ef__mgU24cache2_6; }
	inline WebRequestFail_t1417322259 ** get_address_of_U3CU3Ef__mgU24cache2_6() { return &___U3CU3Ef__mgU24cache2_6; }
	inline void set_U3CU3Ef__mgU24cache2_6(WebRequestFail_t1417322259 * value)
	{
		___U3CU3Ef__mgU24cache2_6 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__mgU24cache2_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
