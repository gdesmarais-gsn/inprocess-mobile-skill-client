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
// GSN.Skill.Phoenix.Model.LocationManager
struct LocationManager_t2180792764;
// GSN.Skill.Phoenix.Requests.Tournament.TournamentSignupRequestData
struct TournamentSignupRequestData_t1741431844;
// GSN.Skill.Phoenix.Model.Data.CurrentUser
struct CurrentUser_t3910039426;
// GSN.Skill.Phoenix.Model.Data.DeviceData
struct DeviceData_t2224045298;
// GSN.Skill.Phoenix.Model.Data.GameListData
struct GameListData_t2961126766;
// GSN.Skill.Phoenix.Requests.Tournament.ListFlavorsRequestData
struct ListFlavorsRequestData_t34547778;
// GSN.Skill.Phoenix.Model.Data.StoredConfigData
struct StoredConfigData_t3100406041;
// System.String
struct String_t;
// GSN.Skill.Phoenix.Requests.Tournament.WinItNowRequestData
struct WinItNowRequestData_t687331048;
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

// GSN.Skill.Phoenix.Model.TournamentSignupManager
struct  TournamentSignupManager_t2913170070  : public Il2CppObject
{
public:
	// GSN.Skill.Phoenix.Model.ScreenManager GSN.Skill.Phoenix.Model.TournamentSignupManager::_screenManager
	ScreenManager_t2047768743 * ____screenManager_0;
	// GSN.Skill.Phoenix.Model.LocationManager GSN.Skill.Phoenix.Model.TournamentSignupManager::_locationManager
	LocationManager_t2180792764 * ____locationManager_1;
	// GSN.Skill.Phoenix.Requests.Tournament.TournamentSignupRequestData GSN.Skill.Phoenix.Model.TournamentSignupManager::_tournamentSignupRequestData
	TournamentSignupRequestData_t1741431844 * ____tournamentSignupRequestData_2;
	// GSN.Skill.Phoenix.Model.Data.CurrentUser GSN.Skill.Phoenix.Model.TournamentSignupManager::_currentUser
	CurrentUser_t3910039426 * ____currentUser_3;
	// GSN.Skill.Phoenix.Model.Data.DeviceData GSN.Skill.Phoenix.Model.TournamentSignupManager::_deviceData
	DeviceData_t2224045298 * ____deviceData_4;
	// GSN.Skill.Phoenix.Model.Data.GameListData GSN.Skill.Phoenix.Model.TournamentSignupManager::_gameListData
	GameListData_t2961126766 * ____gameListData_5;
	// GSN.Skill.Phoenix.Requests.Tournament.ListFlavorsRequestData GSN.Skill.Phoenix.Model.TournamentSignupManager::_listFlavor
	ListFlavorsRequestData_t34547778 * ____listFlavor_6;
	// GSN.Skill.Phoenix.Model.Data.StoredConfigData GSN.Skill.Phoenix.Model.TournamentSignupManager::_storedConfigData
	StoredConfigData_t3100406041 * ____storedConfigData_7;
	// System.Int32 GSN.Skill.Phoenix.Model.TournamentSignupManager::_gameID
	int32_t ____gameID_8;
	// GSN.Skill.Phoenix.Requests.Tournament.WinItNowRequestData GSN.Skill.Phoenix.Model.TournamentSignupManager::_winItNowRequestData
	WinItNowRequestData_t687331048 * ____winItNowRequestData_15;

public:
	inline static int32_t get_offset_of__screenManager_0() { return static_cast<int32_t>(offsetof(TournamentSignupManager_t2913170070, ____screenManager_0)); }
	inline ScreenManager_t2047768743 * get__screenManager_0() const { return ____screenManager_0; }
	inline ScreenManager_t2047768743 ** get_address_of__screenManager_0() { return &____screenManager_0; }
	inline void set__screenManager_0(ScreenManager_t2047768743 * value)
	{
		____screenManager_0 = value;
		Il2CppCodeGenWriteBarrier(&____screenManager_0, value);
	}

	inline static int32_t get_offset_of__locationManager_1() { return static_cast<int32_t>(offsetof(TournamentSignupManager_t2913170070, ____locationManager_1)); }
	inline LocationManager_t2180792764 * get__locationManager_1() const { return ____locationManager_1; }
	inline LocationManager_t2180792764 ** get_address_of__locationManager_1() { return &____locationManager_1; }
	inline void set__locationManager_1(LocationManager_t2180792764 * value)
	{
		____locationManager_1 = value;
		Il2CppCodeGenWriteBarrier(&____locationManager_1, value);
	}

	inline static int32_t get_offset_of__tournamentSignupRequestData_2() { return static_cast<int32_t>(offsetof(TournamentSignupManager_t2913170070, ____tournamentSignupRequestData_2)); }
	inline TournamentSignupRequestData_t1741431844 * get__tournamentSignupRequestData_2() const { return ____tournamentSignupRequestData_2; }
	inline TournamentSignupRequestData_t1741431844 ** get_address_of__tournamentSignupRequestData_2() { return &____tournamentSignupRequestData_2; }
	inline void set__tournamentSignupRequestData_2(TournamentSignupRequestData_t1741431844 * value)
	{
		____tournamentSignupRequestData_2 = value;
		Il2CppCodeGenWriteBarrier(&____tournamentSignupRequestData_2, value);
	}

	inline static int32_t get_offset_of__currentUser_3() { return static_cast<int32_t>(offsetof(TournamentSignupManager_t2913170070, ____currentUser_3)); }
	inline CurrentUser_t3910039426 * get__currentUser_3() const { return ____currentUser_3; }
	inline CurrentUser_t3910039426 ** get_address_of__currentUser_3() { return &____currentUser_3; }
	inline void set__currentUser_3(CurrentUser_t3910039426 * value)
	{
		____currentUser_3 = value;
		Il2CppCodeGenWriteBarrier(&____currentUser_3, value);
	}

	inline static int32_t get_offset_of__deviceData_4() { return static_cast<int32_t>(offsetof(TournamentSignupManager_t2913170070, ____deviceData_4)); }
	inline DeviceData_t2224045298 * get__deviceData_4() const { return ____deviceData_4; }
	inline DeviceData_t2224045298 ** get_address_of__deviceData_4() { return &____deviceData_4; }
	inline void set__deviceData_4(DeviceData_t2224045298 * value)
	{
		____deviceData_4 = value;
		Il2CppCodeGenWriteBarrier(&____deviceData_4, value);
	}

	inline static int32_t get_offset_of__gameListData_5() { return static_cast<int32_t>(offsetof(TournamentSignupManager_t2913170070, ____gameListData_5)); }
	inline GameListData_t2961126766 * get__gameListData_5() const { return ____gameListData_5; }
	inline GameListData_t2961126766 ** get_address_of__gameListData_5() { return &____gameListData_5; }
	inline void set__gameListData_5(GameListData_t2961126766 * value)
	{
		____gameListData_5 = value;
		Il2CppCodeGenWriteBarrier(&____gameListData_5, value);
	}

	inline static int32_t get_offset_of__listFlavor_6() { return static_cast<int32_t>(offsetof(TournamentSignupManager_t2913170070, ____listFlavor_6)); }
	inline ListFlavorsRequestData_t34547778 * get__listFlavor_6() const { return ____listFlavor_6; }
	inline ListFlavorsRequestData_t34547778 ** get_address_of__listFlavor_6() { return &____listFlavor_6; }
	inline void set__listFlavor_6(ListFlavorsRequestData_t34547778 * value)
	{
		____listFlavor_6 = value;
		Il2CppCodeGenWriteBarrier(&____listFlavor_6, value);
	}

	inline static int32_t get_offset_of__storedConfigData_7() { return static_cast<int32_t>(offsetof(TournamentSignupManager_t2913170070, ____storedConfigData_7)); }
	inline StoredConfigData_t3100406041 * get__storedConfigData_7() const { return ____storedConfigData_7; }
	inline StoredConfigData_t3100406041 ** get_address_of__storedConfigData_7() { return &____storedConfigData_7; }
	inline void set__storedConfigData_7(StoredConfigData_t3100406041 * value)
	{
		____storedConfigData_7 = value;
		Il2CppCodeGenWriteBarrier(&____storedConfigData_7, value);
	}

	inline static int32_t get_offset_of__gameID_8() { return static_cast<int32_t>(offsetof(TournamentSignupManager_t2913170070, ____gameID_8)); }
	inline int32_t get__gameID_8() const { return ____gameID_8; }
	inline int32_t* get_address_of__gameID_8() { return &____gameID_8; }
	inline void set__gameID_8(int32_t value)
	{
		____gameID_8 = value;
	}

	inline static int32_t get_offset_of__winItNowRequestData_15() { return static_cast<int32_t>(offsetof(TournamentSignupManager_t2913170070, ____winItNowRequestData_15)); }
	inline WinItNowRequestData_t687331048 * get__winItNowRequestData_15() const { return ____winItNowRequestData_15; }
	inline WinItNowRequestData_t687331048 ** get_address_of__winItNowRequestData_15() { return &____winItNowRequestData_15; }
	inline void set__winItNowRequestData_15(WinItNowRequestData_t687331048 * value)
	{
		____winItNowRequestData_15 = value;
		Il2CppCodeGenWriteBarrier(&____winItNowRequestData_15, value);
	}
};

struct TournamentSignupManager_t2913170070_StaticFields
{
public:
	// GSN.Skill.Requests.SingleWebRequestBegin GSN.Skill.Phoenix.Model.TournamentSignupManager::<>f__mg$cache0
	SingleWebRequestBegin_t714235414 * ___U3CU3Ef__mgU24cache0_16;
	// GSN.Skill.Requests.SingleWebRequestComplete GSN.Skill.Phoenix.Model.TournamentSignupManager::<>f__mg$cache1
	SingleWebRequestComplete_t61608820 * ___U3CU3Ef__mgU24cache1_17;
	// GSN.Skill.Requests.SingleWebRequestFail GSN.Skill.Phoenix.Model.TournamentSignupManager::<>f__mg$cache2
	SingleWebRequestFail_t691327747 * ___U3CU3Ef__mgU24cache2_18;
	// GSN.Skill.Requests.SingleWebRequestBegin GSN.Skill.Phoenix.Model.TournamentSignupManager::<>f__mg$cache3
	SingleWebRequestBegin_t714235414 * ___U3CU3Ef__mgU24cache3_19;
	// GSN.Skill.Requests.SingleWebRequestComplete GSN.Skill.Phoenix.Model.TournamentSignupManager::<>f__mg$cache4
	SingleWebRequestComplete_t61608820 * ___U3CU3Ef__mgU24cache4_20;
	// GSN.Skill.Requests.SingleWebRequestFail GSN.Skill.Phoenix.Model.TournamentSignupManager::<>f__mg$cache5
	SingleWebRequestFail_t691327747 * ___U3CU3Ef__mgU24cache5_21;
	// GSN.Skill.Requests.SingleWebRequestBegin GSN.Skill.Phoenix.Model.TournamentSignupManager::<>f__mg$cache6
	SingleWebRequestBegin_t714235414 * ___U3CU3Ef__mgU24cache6_22;
	// GSN.Skill.Requests.SingleWebRequestComplete GSN.Skill.Phoenix.Model.TournamentSignupManager::<>f__mg$cache7
	SingleWebRequestComplete_t61608820 * ___U3CU3Ef__mgU24cache7_23;
	// GSN.Skill.Requests.SingleWebRequestFail GSN.Skill.Phoenix.Model.TournamentSignupManager::<>f__mg$cache8
	SingleWebRequestFail_t691327747 * ___U3CU3Ef__mgU24cache8_24;
	// GSN.Skill.Requests.SingleWebRequestBegin GSN.Skill.Phoenix.Model.TournamentSignupManager::<>f__mg$cache9
	SingleWebRequestBegin_t714235414 * ___U3CU3Ef__mgU24cache9_25;
	// GSN.Skill.Requests.SingleWebRequestComplete GSN.Skill.Phoenix.Model.TournamentSignupManager::<>f__mg$cacheA
	SingleWebRequestComplete_t61608820 * ___U3CU3Ef__mgU24cacheA_26;
	// GSN.Skill.Requests.SingleWebRequestFail GSN.Skill.Phoenix.Model.TournamentSignupManager::<>f__mg$cacheB
	SingleWebRequestFail_t691327747 * ___U3CU3Ef__mgU24cacheB_27;
	// GSN.Skill.Requests.SingleWebRequestBegin GSN.Skill.Phoenix.Model.TournamentSignupManager::<>f__mg$cacheC
	SingleWebRequestBegin_t714235414 * ___U3CU3Ef__mgU24cacheC_28;
	// GSN.Skill.Requests.SingleWebRequestComplete GSN.Skill.Phoenix.Model.TournamentSignupManager::<>f__mg$cacheD
	SingleWebRequestComplete_t61608820 * ___U3CU3Ef__mgU24cacheD_29;
	// GSN.Skill.Requests.SingleWebRequestFail GSN.Skill.Phoenix.Model.TournamentSignupManager::<>f__mg$cacheE
	SingleWebRequestFail_t691327747 * ___U3CU3Ef__mgU24cacheE_30;
	// GSN.Skill.Requests.SingleWebRequestBegin GSN.Skill.Phoenix.Model.TournamentSignupManager::<>f__mg$cacheF
	SingleWebRequestBegin_t714235414 * ___U3CU3Ef__mgU24cacheF_31;
	// GSN.Skill.Requests.SingleWebRequestComplete GSN.Skill.Phoenix.Model.TournamentSignupManager::<>f__mg$cache10
	SingleWebRequestComplete_t61608820 * ___U3CU3Ef__mgU24cache10_32;
	// GSN.Skill.Requests.SingleWebRequestFail GSN.Skill.Phoenix.Model.TournamentSignupManager::<>f__mg$cache11
	SingleWebRequestFail_t691327747 * ___U3CU3Ef__mgU24cache11_33;
	// GSN.Skill.Requests.SingleWebRequestBegin GSN.Skill.Phoenix.Model.TournamentSignupManager::<>f__mg$cache12
	SingleWebRequestBegin_t714235414 * ___U3CU3Ef__mgU24cache12_34;
	// GSN.Skill.Requests.SingleWebRequestComplete GSN.Skill.Phoenix.Model.TournamentSignupManager::<>f__mg$cache13
	SingleWebRequestComplete_t61608820 * ___U3CU3Ef__mgU24cache13_35;
	// GSN.Skill.Requests.SingleWebRequestFail GSN.Skill.Phoenix.Model.TournamentSignupManager::<>f__mg$cache14
	SingleWebRequestFail_t691327747 * ___U3CU3Ef__mgU24cache14_36;

public:
	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache0_16() { return static_cast<int32_t>(offsetof(TournamentSignupManager_t2913170070_StaticFields, ___U3CU3Ef__mgU24cache0_16)); }
	inline SingleWebRequestBegin_t714235414 * get_U3CU3Ef__mgU24cache0_16() const { return ___U3CU3Ef__mgU24cache0_16; }
	inline SingleWebRequestBegin_t714235414 ** get_address_of_U3CU3Ef__mgU24cache0_16() { return &___U3CU3Ef__mgU24cache0_16; }
	inline void set_U3CU3Ef__mgU24cache0_16(SingleWebRequestBegin_t714235414 * value)
	{
		___U3CU3Ef__mgU24cache0_16 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__mgU24cache0_16, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache1_17() { return static_cast<int32_t>(offsetof(TournamentSignupManager_t2913170070_StaticFields, ___U3CU3Ef__mgU24cache1_17)); }
	inline SingleWebRequestComplete_t61608820 * get_U3CU3Ef__mgU24cache1_17() const { return ___U3CU3Ef__mgU24cache1_17; }
	inline SingleWebRequestComplete_t61608820 ** get_address_of_U3CU3Ef__mgU24cache1_17() { return &___U3CU3Ef__mgU24cache1_17; }
	inline void set_U3CU3Ef__mgU24cache1_17(SingleWebRequestComplete_t61608820 * value)
	{
		___U3CU3Ef__mgU24cache1_17 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__mgU24cache1_17, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache2_18() { return static_cast<int32_t>(offsetof(TournamentSignupManager_t2913170070_StaticFields, ___U3CU3Ef__mgU24cache2_18)); }
	inline SingleWebRequestFail_t691327747 * get_U3CU3Ef__mgU24cache2_18() const { return ___U3CU3Ef__mgU24cache2_18; }
	inline SingleWebRequestFail_t691327747 ** get_address_of_U3CU3Ef__mgU24cache2_18() { return &___U3CU3Ef__mgU24cache2_18; }
	inline void set_U3CU3Ef__mgU24cache2_18(SingleWebRequestFail_t691327747 * value)
	{
		___U3CU3Ef__mgU24cache2_18 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__mgU24cache2_18, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache3_19() { return static_cast<int32_t>(offsetof(TournamentSignupManager_t2913170070_StaticFields, ___U3CU3Ef__mgU24cache3_19)); }
	inline SingleWebRequestBegin_t714235414 * get_U3CU3Ef__mgU24cache3_19() const { return ___U3CU3Ef__mgU24cache3_19; }
	inline SingleWebRequestBegin_t714235414 ** get_address_of_U3CU3Ef__mgU24cache3_19() { return &___U3CU3Ef__mgU24cache3_19; }
	inline void set_U3CU3Ef__mgU24cache3_19(SingleWebRequestBegin_t714235414 * value)
	{
		___U3CU3Ef__mgU24cache3_19 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__mgU24cache3_19, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache4_20() { return static_cast<int32_t>(offsetof(TournamentSignupManager_t2913170070_StaticFields, ___U3CU3Ef__mgU24cache4_20)); }
	inline SingleWebRequestComplete_t61608820 * get_U3CU3Ef__mgU24cache4_20() const { return ___U3CU3Ef__mgU24cache4_20; }
	inline SingleWebRequestComplete_t61608820 ** get_address_of_U3CU3Ef__mgU24cache4_20() { return &___U3CU3Ef__mgU24cache4_20; }
	inline void set_U3CU3Ef__mgU24cache4_20(SingleWebRequestComplete_t61608820 * value)
	{
		___U3CU3Ef__mgU24cache4_20 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__mgU24cache4_20, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache5_21() { return static_cast<int32_t>(offsetof(TournamentSignupManager_t2913170070_StaticFields, ___U3CU3Ef__mgU24cache5_21)); }
	inline SingleWebRequestFail_t691327747 * get_U3CU3Ef__mgU24cache5_21() const { return ___U3CU3Ef__mgU24cache5_21; }
	inline SingleWebRequestFail_t691327747 ** get_address_of_U3CU3Ef__mgU24cache5_21() { return &___U3CU3Ef__mgU24cache5_21; }
	inline void set_U3CU3Ef__mgU24cache5_21(SingleWebRequestFail_t691327747 * value)
	{
		___U3CU3Ef__mgU24cache5_21 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__mgU24cache5_21, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache6_22() { return static_cast<int32_t>(offsetof(TournamentSignupManager_t2913170070_StaticFields, ___U3CU3Ef__mgU24cache6_22)); }
	inline SingleWebRequestBegin_t714235414 * get_U3CU3Ef__mgU24cache6_22() const { return ___U3CU3Ef__mgU24cache6_22; }
	inline SingleWebRequestBegin_t714235414 ** get_address_of_U3CU3Ef__mgU24cache6_22() { return &___U3CU3Ef__mgU24cache6_22; }
	inline void set_U3CU3Ef__mgU24cache6_22(SingleWebRequestBegin_t714235414 * value)
	{
		___U3CU3Ef__mgU24cache6_22 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__mgU24cache6_22, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache7_23() { return static_cast<int32_t>(offsetof(TournamentSignupManager_t2913170070_StaticFields, ___U3CU3Ef__mgU24cache7_23)); }
	inline SingleWebRequestComplete_t61608820 * get_U3CU3Ef__mgU24cache7_23() const { return ___U3CU3Ef__mgU24cache7_23; }
	inline SingleWebRequestComplete_t61608820 ** get_address_of_U3CU3Ef__mgU24cache7_23() { return &___U3CU3Ef__mgU24cache7_23; }
	inline void set_U3CU3Ef__mgU24cache7_23(SingleWebRequestComplete_t61608820 * value)
	{
		___U3CU3Ef__mgU24cache7_23 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__mgU24cache7_23, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache8_24() { return static_cast<int32_t>(offsetof(TournamentSignupManager_t2913170070_StaticFields, ___U3CU3Ef__mgU24cache8_24)); }
	inline SingleWebRequestFail_t691327747 * get_U3CU3Ef__mgU24cache8_24() const { return ___U3CU3Ef__mgU24cache8_24; }
	inline SingleWebRequestFail_t691327747 ** get_address_of_U3CU3Ef__mgU24cache8_24() { return &___U3CU3Ef__mgU24cache8_24; }
	inline void set_U3CU3Ef__mgU24cache8_24(SingleWebRequestFail_t691327747 * value)
	{
		___U3CU3Ef__mgU24cache8_24 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__mgU24cache8_24, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache9_25() { return static_cast<int32_t>(offsetof(TournamentSignupManager_t2913170070_StaticFields, ___U3CU3Ef__mgU24cache9_25)); }
	inline SingleWebRequestBegin_t714235414 * get_U3CU3Ef__mgU24cache9_25() const { return ___U3CU3Ef__mgU24cache9_25; }
	inline SingleWebRequestBegin_t714235414 ** get_address_of_U3CU3Ef__mgU24cache9_25() { return &___U3CU3Ef__mgU24cache9_25; }
	inline void set_U3CU3Ef__mgU24cache9_25(SingleWebRequestBegin_t714235414 * value)
	{
		___U3CU3Ef__mgU24cache9_25 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__mgU24cache9_25, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cacheA_26() { return static_cast<int32_t>(offsetof(TournamentSignupManager_t2913170070_StaticFields, ___U3CU3Ef__mgU24cacheA_26)); }
	inline SingleWebRequestComplete_t61608820 * get_U3CU3Ef__mgU24cacheA_26() const { return ___U3CU3Ef__mgU24cacheA_26; }
	inline SingleWebRequestComplete_t61608820 ** get_address_of_U3CU3Ef__mgU24cacheA_26() { return &___U3CU3Ef__mgU24cacheA_26; }
	inline void set_U3CU3Ef__mgU24cacheA_26(SingleWebRequestComplete_t61608820 * value)
	{
		___U3CU3Ef__mgU24cacheA_26 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__mgU24cacheA_26, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cacheB_27() { return static_cast<int32_t>(offsetof(TournamentSignupManager_t2913170070_StaticFields, ___U3CU3Ef__mgU24cacheB_27)); }
	inline SingleWebRequestFail_t691327747 * get_U3CU3Ef__mgU24cacheB_27() const { return ___U3CU3Ef__mgU24cacheB_27; }
	inline SingleWebRequestFail_t691327747 ** get_address_of_U3CU3Ef__mgU24cacheB_27() { return &___U3CU3Ef__mgU24cacheB_27; }
	inline void set_U3CU3Ef__mgU24cacheB_27(SingleWebRequestFail_t691327747 * value)
	{
		___U3CU3Ef__mgU24cacheB_27 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__mgU24cacheB_27, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cacheC_28() { return static_cast<int32_t>(offsetof(TournamentSignupManager_t2913170070_StaticFields, ___U3CU3Ef__mgU24cacheC_28)); }
	inline SingleWebRequestBegin_t714235414 * get_U3CU3Ef__mgU24cacheC_28() const { return ___U3CU3Ef__mgU24cacheC_28; }
	inline SingleWebRequestBegin_t714235414 ** get_address_of_U3CU3Ef__mgU24cacheC_28() { return &___U3CU3Ef__mgU24cacheC_28; }
	inline void set_U3CU3Ef__mgU24cacheC_28(SingleWebRequestBegin_t714235414 * value)
	{
		___U3CU3Ef__mgU24cacheC_28 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__mgU24cacheC_28, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cacheD_29() { return static_cast<int32_t>(offsetof(TournamentSignupManager_t2913170070_StaticFields, ___U3CU3Ef__mgU24cacheD_29)); }
	inline SingleWebRequestComplete_t61608820 * get_U3CU3Ef__mgU24cacheD_29() const { return ___U3CU3Ef__mgU24cacheD_29; }
	inline SingleWebRequestComplete_t61608820 ** get_address_of_U3CU3Ef__mgU24cacheD_29() { return &___U3CU3Ef__mgU24cacheD_29; }
	inline void set_U3CU3Ef__mgU24cacheD_29(SingleWebRequestComplete_t61608820 * value)
	{
		___U3CU3Ef__mgU24cacheD_29 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__mgU24cacheD_29, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cacheE_30() { return static_cast<int32_t>(offsetof(TournamentSignupManager_t2913170070_StaticFields, ___U3CU3Ef__mgU24cacheE_30)); }
	inline SingleWebRequestFail_t691327747 * get_U3CU3Ef__mgU24cacheE_30() const { return ___U3CU3Ef__mgU24cacheE_30; }
	inline SingleWebRequestFail_t691327747 ** get_address_of_U3CU3Ef__mgU24cacheE_30() { return &___U3CU3Ef__mgU24cacheE_30; }
	inline void set_U3CU3Ef__mgU24cacheE_30(SingleWebRequestFail_t691327747 * value)
	{
		___U3CU3Ef__mgU24cacheE_30 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__mgU24cacheE_30, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cacheF_31() { return static_cast<int32_t>(offsetof(TournamentSignupManager_t2913170070_StaticFields, ___U3CU3Ef__mgU24cacheF_31)); }
	inline SingleWebRequestBegin_t714235414 * get_U3CU3Ef__mgU24cacheF_31() const { return ___U3CU3Ef__mgU24cacheF_31; }
	inline SingleWebRequestBegin_t714235414 ** get_address_of_U3CU3Ef__mgU24cacheF_31() { return &___U3CU3Ef__mgU24cacheF_31; }
	inline void set_U3CU3Ef__mgU24cacheF_31(SingleWebRequestBegin_t714235414 * value)
	{
		___U3CU3Ef__mgU24cacheF_31 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__mgU24cacheF_31, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache10_32() { return static_cast<int32_t>(offsetof(TournamentSignupManager_t2913170070_StaticFields, ___U3CU3Ef__mgU24cache10_32)); }
	inline SingleWebRequestComplete_t61608820 * get_U3CU3Ef__mgU24cache10_32() const { return ___U3CU3Ef__mgU24cache10_32; }
	inline SingleWebRequestComplete_t61608820 ** get_address_of_U3CU3Ef__mgU24cache10_32() { return &___U3CU3Ef__mgU24cache10_32; }
	inline void set_U3CU3Ef__mgU24cache10_32(SingleWebRequestComplete_t61608820 * value)
	{
		___U3CU3Ef__mgU24cache10_32 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__mgU24cache10_32, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache11_33() { return static_cast<int32_t>(offsetof(TournamentSignupManager_t2913170070_StaticFields, ___U3CU3Ef__mgU24cache11_33)); }
	inline SingleWebRequestFail_t691327747 * get_U3CU3Ef__mgU24cache11_33() const { return ___U3CU3Ef__mgU24cache11_33; }
	inline SingleWebRequestFail_t691327747 ** get_address_of_U3CU3Ef__mgU24cache11_33() { return &___U3CU3Ef__mgU24cache11_33; }
	inline void set_U3CU3Ef__mgU24cache11_33(SingleWebRequestFail_t691327747 * value)
	{
		___U3CU3Ef__mgU24cache11_33 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__mgU24cache11_33, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache12_34() { return static_cast<int32_t>(offsetof(TournamentSignupManager_t2913170070_StaticFields, ___U3CU3Ef__mgU24cache12_34)); }
	inline SingleWebRequestBegin_t714235414 * get_U3CU3Ef__mgU24cache12_34() const { return ___U3CU3Ef__mgU24cache12_34; }
	inline SingleWebRequestBegin_t714235414 ** get_address_of_U3CU3Ef__mgU24cache12_34() { return &___U3CU3Ef__mgU24cache12_34; }
	inline void set_U3CU3Ef__mgU24cache12_34(SingleWebRequestBegin_t714235414 * value)
	{
		___U3CU3Ef__mgU24cache12_34 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__mgU24cache12_34, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache13_35() { return static_cast<int32_t>(offsetof(TournamentSignupManager_t2913170070_StaticFields, ___U3CU3Ef__mgU24cache13_35)); }
	inline SingleWebRequestComplete_t61608820 * get_U3CU3Ef__mgU24cache13_35() const { return ___U3CU3Ef__mgU24cache13_35; }
	inline SingleWebRequestComplete_t61608820 ** get_address_of_U3CU3Ef__mgU24cache13_35() { return &___U3CU3Ef__mgU24cache13_35; }
	inline void set_U3CU3Ef__mgU24cache13_35(SingleWebRequestComplete_t61608820 * value)
	{
		___U3CU3Ef__mgU24cache13_35 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__mgU24cache13_35, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache14_36() { return static_cast<int32_t>(offsetof(TournamentSignupManager_t2913170070_StaticFields, ___U3CU3Ef__mgU24cache14_36)); }
	inline SingleWebRequestFail_t691327747 * get_U3CU3Ef__mgU24cache14_36() const { return ___U3CU3Ef__mgU24cache14_36; }
	inline SingleWebRequestFail_t691327747 ** get_address_of_U3CU3Ef__mgU24cache14_36() { return &___U3CU3Ef__mgU24cache14_36; }
	inline void set_U3CU3Ef__mgU24cache14_36(SingleWebRequestFail_t691327747 * value)
	{
		___U3CU3Ef__mgU24cache14_36 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__mgU24cache14_36, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
