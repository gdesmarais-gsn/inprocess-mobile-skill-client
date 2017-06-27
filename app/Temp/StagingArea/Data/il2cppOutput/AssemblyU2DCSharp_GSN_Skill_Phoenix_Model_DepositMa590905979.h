#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// GSN.Skill.Phoenix.Model.LocationManager
struct LocationManager_t2180792764;
// GSN.Skill.Phoenix.Model.Data.CurrentUser
struct CurrentUser_t3910039426;
// GSN.Skill.Phoenix.Model.Popups.DepositPopupModel
struct DepositPopupModel_t3496856047;
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

// GSN.Skill.Phoenix.Model.DepositManager
struct  DepositManager_t590905979  : public Il2CppObject
{
public:
	// GSN.Skill.Phoenix.Model.LocationManager GSN.Skill.Phoenix.Model.DepositManager::_locationManager
	LocationManager_t2180792764 * ____locationManager_0;
	// GSN.Skill.Phoenix.Model.Data.CurrentUser GSN.Skill.Phoenix.Model.DepositManager::_currentUser
	CurrentUser_t3910039426 * ____currentUser_1;
	// GSN.Skill.Phoenix.Model.Popups.DepositPopupModel GSN.Skill.Phoenix.Model.DepositManager::_depositPopup
	DepositPopupModel_t3496856047 * ____depositPopup_2;
	// System.Int32 GSN.Skill.Phoenix.Model.DepositManager::_lastDepositRequestAmount
	int32_t ____lastDepositRequestAmount_3;

public:
	inline static int32_t get_offset_of__locationManager_0() { return static_cast<int32_t>(offsetof(DepositManager_t590905979, ____locationManager_0)); }
	inline LocationManager_t2180792764 * get__locationManager_0() const { return ____locationManager_0; }
	inline LocationManager_t2180792764 ** get_address_of__locationManager_0() { return &____locationManager_0; }
	inline void set__locationManager_0(LocationManager_t2180792764 * value)
	{
		____locationManager_0 = value;
		Il2CppCodeGenWriteBarrier(&____locationManager_0, value);
	}

	inline static int32_t get_offset_of__currentUser_1() { return static_cast<int32_t>(offsetof(DepositManager_t590905979, ____currentUser_1)); }
	inline CurrentUser_t3910039426 * get__currentUser_1() const { return ____currentUser_1; }
	inline CurrentUser_t3910039426 ** get_address_of__currentUser_1() { return &____currentUser_1; }
	inline void set__currentUser_1(CurrentUser_t3910039426 * value)
	{
		____currentUser_1 = value;
		Il2CppCodeGenWriteBarrier(&____currentUser_1, value);
	}

	inline static int32_t get_offset_of__depositPopup_2() { return static_cast<int32_t>(offsetof(DepositManager_t590905979, ____depositPopup_2)); }
	inline DepositPopupModel_t3496856047 * get__depositPopup_2() const { return ____depositPopup_2; }
	inline DepositPopupModel_t3496856047 ** get_address_of__depositPopup_2() { return &____depositPopup_2; }
	inline void set__depositPopup_2(DepositPopupModel_t3496856047 * value)
	{
		____depositPopup_2 = value;
		Il2CppCodeGenWriteBarrier(&____depositPopup_2, value);
	}

	inline static int32_t get_offset_of__lastDepositRequestAmount_3() { return static_cast<int32_t>(offsetof(DepositManager_t590905979, ____lastDepositRequestAmount_3)); }
	inline int32_t get__lastDepositRequestAmount_3() const { return ____lastDepositRequestAmount_3; }
	inline int32_t* get_address_of__lastDepositRequestAmount_3() { return &____lastDepositRequestAmount_3; }
	inline void set__lastDepositRequestAmount_3(int32_t value)
	{
		____lastDepositRequestAmount_3 = value;
	}
};

struct DepositManager_t590905979_StaticFields
{
public:
	// GSN.Skill.Requests.SingleWebRequestBegin GSN.Skill.Phoenix.Model.DepositManager::<>f__mg$cache0
	SingleWebRequestBegin_t714235414 * ___U3CU3Ef__mgU24cache0_4;
	// GSN.Skill.Requests.SingleWebRequestComplete GSN.Skill.Phoenix.Model.DepositManager::<>f__mg$cache1
	SingleWebRequestComplete_t61608820 * ___U3CU3Ef__mgU24cache1_5;
	// GSN.Skill.Requests.SingleWebRequestFail GSN.Skill.Phoenix.Model.DepositManager::<>f__mg$cache2
	SingleWebRequestFail_t691327747 * ___U3CU3Ef__mgU24cache2_6;
	// GSN.Skill.Requests.SingleWebRequestBegin GSN.Skill.Phoenix.Model.DepositManager::<>f__mg$cache3
	SingleWebRequestBegin_t714235414 * ___U3CU3Ef__mgU24cache3_7;
	// GSN.Skill.Requests.SingleWebRequestComplete GSN.Skill.Phoenix.Model.DepositManager::<>f__mg$cache4
	SingleWebRequestComplete_t61608820 * ___U3CU3Ef__mgU24cache4_8;
	// GSN.Skill.Requests.SingleWebRequestFail GSN.Skill.Phoenix.Model.DepositManager::<>f__mg$cache5
	SingleWebRequestFail_t691327747 * ___U3CU3Ef__mgU24cache5_9;
	// GSN.Skill.Requests.SingleWebRequestBegin GSN.Skill.Phoenix.Model.DepositManager::<>f__mg$cache6
	SingleWebRequestBegin_t714235414 * ___U3CU3Ef__mgU24cache6_10;
	// GSN.Skill.Requests.SingleWebRequestComplete GSN.Skill.Phoenix.Model.DepositManager::<>f__mg$cache7
	SingleWebRequestComplete_t61608820 * ___U3CU3Ef__mgU24cache7_11;
	// GSN.Skill.Requests.SingleWebRequestFail GSN.Skill.Phoenix.Model.DepositManager::<>f__mg$cache8
	SingleWebRequestFail_t691327747 * ___U3CU3Ef__mgU24cache8_12;
	// GSN.Skill.Requests.SingleWebRequestBegin GSN.Skill.Phoenix.Model.DepositManager::<>f__mg$cache9
	SingleWebRequestBegin_t714235414 * ___U3CU3Ef__mgU24cache9_13;
	// GSN.Skill.Requests.SingleWebRequestComplete GSN.Skill.Phoenix.Model.DepositManager::<>f__mg$cacheA
	SingleWebRequestComplete_t61608820 * ___U3CU3Ef__mgU24cacheA_14;
	// GSN.Skill.Requests.SingleWebRequestFail GSN.Skill.Phoenix.Model.DepositManager::<>f__mg$cacheB
	SingleWebRequestFail_t691327747 * ___U3CU3Ef__mgU24cacheB_15;
	// GSN.Skill.Requests.SingleWebRequestBegin GSN.Skill.Phoenix.Model.DepositManager::<>f__mg$cacheC
	SingleWebRequestBegin_t714235414 * ___U3CU3Ef__mgU24cacheC_16;
	// GSN.Skill.Requests.SingleWebRequestComplete GSN.Skill.Phoenix.Model.DepositManager::<>f__mg$cacheD
	SingleWebRequestComplete_t61608820 * ___U3CU3Ef__mgU24cacheD_17;
	// GSN.Skill.Requests.SingleWebRequestFail GSN.Skill.Phoenix.Model.DepositManager::<>f__mg$cacheE
	SingleWebRequestFail_t691327747 * ___U3CU3Ef__mgU24cacheE_18;
	// GSN.Skill.Requests.SingleWebRequestBegin GSN.Skill.Phoenix.Model.DepositManager::<>f__mg$cacheF
	SingleWebRequestBegin_t714235414 * ___U3CU3Ef__mgU24cacheF_19;
	// GSN.Skill.Requests.SingleWebRequestComplete GSN.Skill.Phoenix.Model.DepositManager::<>f__mg$cache10
	SingleWebRequestComplete_t61608820 * ___U3CU3Ef__mgU24cache10_20;
	// GSN.Skill.Requests.SingleWebRequestFail GSN.Skill.Phoenix.Model.DepositManager::<>f__mg$cache11
	SingleWebRequestFail_t691327747 * ___U3CU3Ef__mgU24cache11_21;

public:
	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache0_4() { return static_cast<int32_t>(offsetof(DepositManager_t590905979_StaticFields, ___U3CU3Ef__mgU24cache0_4)); }
	inline SingleWebRequestBegin_t714235414 * get_U3CU3Ef__mgU24cache0_4() const { return ___U3CU3Ef__mgU24cache0_4; }
	inline SingleWebRequestBegin_t714235414 ** get_address_of_U3CU3Ef__mgU24cache0_4() { return &___U3CU3Ef__mgU24cache0_4; }
	inline void set_U3CU3Ef__mgU24cache0_4(SingleWebRequestBegin_t714235414 * value)
	{
		___U3CU3Ef__mgU24cache0_4 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__mgU24cache0_4, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache1_5() { return static_cast<int32_t>(offsetof(DepositManager_t590905979_StaticFields, ___U3CU3Ef__mgU24cache1_5)); }
	inline SingleWebRequestComplete_t61608820 * get_U3CU3Ef__mgU24cache1_5() const { return ___U3CU3Ef__mgU24cache1_5; }
	inline SingleWebRequestComplete_t61608820 ** get_address_of_U3CU3Ef__mgU24cache1_5() { return &___U3CU3Ef__mgU24cache1_5; }
	inline void set_U3CU3Ef__mgU24cache1_5(SingleWebRequestComplete_t61608820 * value)
	{
		___U3CU3Ef__mgU24cache1_5 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__mgU24cache1_5, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache2_6() { return static_cast<int32_t>(offsetof(DepositManager_t590905979_StaticFields, ___U3CU3Ef__mgU24cache2_6)); }
	inline SingleWebRequestFail_t691327747 * get_U3CU3Ef__mgU24cache2_6() const { return ___U3CU3Ef__mgU24cache2_6; }
	inline SingleWebRequestFail_t691327747 ** get_address_of_U3CU3Ef__mgU24cache2_6() { return &___U3CU3Ef__mgU24cache2_6; }
	inline void set_U3CU3Ef__mgU24cache2_6(SingleWebRequestFail_t691327747 * value)
	{
		___U3CU3Ef__mgU24cache2_6 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__mgU24cache2_6, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache3_7() { return static_cast<int32_t>(offsetof(DepositManager_t590905979_StaticFields, ___U3CU3Ef__mgU24cache3_7)); }
	inline SingleWebRequestBegin_t714235414 * get_U3CU3Ef__mgU24cache3_7() const { return ___U3CU3Ef__mgU24cache3_7; }
	inline SingleWebRequestBegin_t714235414 ** get_address_of_U3CU3Ef__mgU24cache3_7() { return &___U3CU3Ef__mgU24cache3_7; }
	inline void set_U3CU3Ef__mgU24cache3_7(SingleWebRequestBegin_t714235414 * value)
	{
		___U3CU3Ef__mgU24cache3_7 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__mgU24cache3_7, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache4_8() { return static_cast<int32_t>(offsetof(DepositManager_t590905979_StaticFields, ___U3CU3Ef__mgU24cache4_8)); }
	inline SingleWebRequestComplete_t61608820 * get_U3CU3Ef__mgU24cache4_8() const { return ___U3CU3Ef__mgU24cache4_8; }
	inline SingleWebRequestComplete_t61608820 ** get_address_of_U3CU3Ef__mgU24cache4_8() { return &___U3CU3Ef__mgU24cache4_8; }
	inline void set_U3CU3Ef__mgU24cache4_8(SingleWebRequestComplete_t61608820 * value)
	{
		___U3CU3Ef__mgU24cache4_8 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__mgU24cache4_8, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache5_9() { return static_cast<int32_t>(offsetof(DepositManager_t590905979_StaticFields, ___U3CU3Ef__mgU24cache5_9)); }
	inline SingleWebRequestFail_t691327747 * get_U3CU3Ef__mgU24cache5_9() const { return ___U3CU3Ef__mgU24cache5_9; }
	inline SingleWebRequestFail_t691327747 ** get_address_of_U3CU3Ef__mgU24cache5_9() { return &___U3CU3Ef__mgU24cache5_9; }
	inline void set_U3CU3Ef__mgU24cache5_9(SingleWebRequestFail_t691327747 * value)
	{
		___U3CU3Ef__mgU24cache5_9 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__mgU24cache5_9, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache6_10() { return static_cast<int32_t>(offsetof(DepositManager_t590905979_StaticFields, ___U3CU3Ef__mgU24cache6_10)); }
	inline SingleWebRequestBegin_t714235414 * get_U3CU3Ef__mgU24cache6_10() const { return ___U3CU3Ef__mgU24cache6_10; }
	inline SingleWebRequestBegin_t714235414 ** get_address_of_U3CU3Ef__mgU24cache6_10() { return &___U3CU3Ef__mgU24cache6_10; }
	inline void set_U3CU3Ef__mgU24cache6_10(SingleWebRequestBegin_t714235414 * value)
	{
		___U3CU3Ef__mgU24cache6_10 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__mgU24cache6_10, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache7_11() { return static_cast<int32_t>(offsetof(DepositManager_t590905979_StaticFields, ___U3CU3Ef__mgU24cache7_11)); }
	inline SingleWebRequestComplete_t61608820 * get_U3CU3Ef__mgU24cache7_11() const { return ___U3CU3Ef__mgU24cache7_11; }
	inline SingleWebRequestComplete_t61608820 ** get_address_of_U3CU3Ef__mgU24cache7_11() { return &___U3CU3Ef__mgU24cache7_11; }
	inline void set_U3CU3Ef__mgU24cache7_11(SingleWebRequestComplete_t61608820 * value)
	{
		___U3CU3Ef__mgU24cache7_11 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__mgU24cache7_11, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache8_12() { return static_cast<int32_t>(offsetof(DepositManager_t590905979_StaticFields, ___U3CU3Ef__mgU24cache8_12)); }
	inline SingleWebRequestFail_t691327747 * get_U3CU3Ef__mgU24cache8_12() const { return ___U3CU3Ef__mgU24cache8_12; }
	inline SingleWebRequestFail_t691327747 ** get_address_of_U3CU3Ef__mgU24cache8_12() { return &___U3CU3Ef__mgU24cache8_12; }
	inline void set_U3CU3Ef__mgU24cache8_12(SingleWebRequestFail_t691327747 * value)
	{
		___U3CU3Ef__mgU24cache8_12 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__mgU24cache8_12, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache9_13() { return static_cast<int32_t>(offsetof(DepositManager_t590905979_StaticFields, ___U3CU3Ef__mgU24cache9_13)); }
	inline SingleWebRequestBegin_t714235414 * get_U3CU3Ef__mgU24cache9_13() const { return ___U3CU3Ef__mgU24cache9_13; }
	inline SingleWebRequestBegin_t714235414 ** get_address_of_U3CU3Ef__mgU24cache9_13() { return &___U3CU3Ef__mgU24cache9_13; }
	inline void set_U3CU3Ef__mgU24cache9_13(SingleWebRequestBegin_t714235414 * value)
	{
		___U3CU3Ef__mgU24cache9_13 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__mgU24cache9_13, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cacheA_14() { return static_cast<int32_t>(offsetof(DepositManager_t590905979_StaticFields, ___U3CU3Ef__mgU24cacheA_14)); }
	inline SingleWebRequestComplete_t61608820 * get_U3CU3Ef__mgU24cacheA_14() const { return ___U3CU3Ef__mgU24cacheA_14; }
	inline SingleWebRequestComplete_t61608820 ** get_address_of_U3CU3Ef__mgU24cacheA_14() { return &___U3CU3Ef__mgU24cacheA_14; }
	inline void set_U3CU3Ef__mgU24cacheA_14(SingleWebRequestComplete_t61608820 * value)
	{
		___U3CU3Ef__mgU24cacheA_14 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__mgU24cacheA_14, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cacheB_15() { return static_cast<int32_t>(offsetof(DepositManager_t590905979_StaticFields, ___U3CU3Ef__mgU24cacheB_15)); }
	inline SingleWebRequestFail_t691327747 * get_U3CU3Ef__mgU24cacheB_15() const { return ___U3CU3Ef__mgU24cacheB_15; }
	inline SingleWebRequestFail_t691327747 ** get_address_of_U3CU3Ef__mgU24cacheB_15() { return &___U3CU3Ef__mgU24cacheB_15; }
	inline void set_U3CU3Ef__mgU24cacheB_15(SingleWebRequestFail_t691327747 * value)
	{
		___U3CU3Ef__mgU24cacheB_15 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__mgU24cacheB_15, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cacheC_16() { return static_cast<int32_t>(offsetof(DepositManager_t590905979_StaticFields, ___U3CU3Ef__mgU24cacheC_16)); }
	inline SingleWebRequestBegin_t714235414 * get_U3CU3Ef__mgU24cacheC_16() const { return ___U3CU3Ef__mgU24cacheC_16; }
	inline SingleWebRequestBegin_t714235414 ** get_address_of_U3CU3Ef__mgU24cacheC_16() { return &___U3CU3Ef__mgU24cacheC_16; }
	inline void set_U3CU3Ef__mgU24cacheC_16(SingleWebRequestBegin_t714235414 * value)
	{
		___U3CU3Ef__mgU24cacheC_16 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__mgU24cacheC_16, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cacheD_17() { return static_cast<int32_t>(offsetof(DepositManager_t590905979_StaticFields, ___U3CU3Ef__mgU24cacheD_17)); }
	inline SingleWebRequestComplete_t61608820 * get_U3CU3Ef__mgU24cacheD_17() const { return ___U3CU3Ef__mgU24cacheD_17; }
	inline SingleWebRequestComplete_t61608820 ** get_address_of_U3CU3Ef__mgU24cacheD_17() { return &___U3CU3Ef__mgU24cacheD_17; }
	inline void set_U3CU3Ef__mgU24cacheD_17(SingleWebRequestComplete_t61608820 * value)
	{
		___U3CU3Ef__mgU24cacheD_17 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__mgU24cacheD_17, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cacheE_18() { return static_cast<int32_t>(offsetof(DepositManager_t590905979_StaticFields, ___U3CU3Ef__mgU24cacheE_18)); }
	inline SingleWebRequestFail_t691327747 * get_U3CU3Ef__mgU24cacheE_18() const { return ___U3CU3Ef__mgU24cacheE_18; }
	inline SingleWebRequestFail_t691327747 ** get_address_of_U3CU3Ef__mgU24cacheE_18() { return &___U3CU3Ef__mgU24cacheE_18; }
	inline void set_U3CU3Ef__mgU24cacheE_18(SingleWebRequestFail_t691327747 * value)
	{
		___U3CU3Ef__mgU24cacheE_18 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__mgU24cacheE_18, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cacheF_19() { return static_cast<int32_t>(offsetof(DepositManager_t590905979_StaticFields, ___U3CU3Ef__mgU24cacheF_19)); }
	inline SingleWebRequestBegin_t714235414 * get_U3CU3Ef__mgU24cacheF_19() const { return ___U3CU3Ef__mgU24cacheF_19; }
	inline SingleWebRequestBegin_t714235414 ** get_address_of_U3CU3Ef__mgU24cacheF_19() { return &___U3CU3Ef__mgU24cacheF_19; }
	inline void set_U3CU3Ef__mgU24cacheF_19(SingleWebRequestBegin_t714235414 * value)
	{
		___U3CU3Ef__mgU24cacheF_19 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__mgU24cacheF_19, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache10_20() { return static_cast<int32_t>(offsetof(DepositManager_t590905979_StaticFields, ___U3CU3Ef__mgU24cache10_20)); }
	inline SingleWebRequestComplete_t61608820 * get_U3CU3Ef__mgU24cache10_20() const { return ___U3CU3Ef__mgU24cache10_20; }
	inline SingleWebRequestComplete_t61608820 ** get_address_of_U3CU3Ef__mgU24cache10_20() { return &___U3CU3Ef__mgU24cache10_20; }
	inline void set_U3CU3Ef__mgU24cache10_20(SingleWebRequestComplete_t61608820 * value)
	{
		___U3CU3Ef__mgU24cache10_20 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__mgU24cache10_20, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache11_21() { return static_cast<int32_t>(offsetof(DepositManager_t590905979_StaticFields, ___U3CU3Ef__mgU24cache11_21)); }
	inline SingleWebRequestFail_t691327747 * get_U3CU3Ef__mgU24cache11_21() const { return ___U3CU3Ef__mgU24cache11_21; }
	inline SingleWebRequestFail_t691327747 ** get_address_of_U3CU3Ef__mgU24cache11_21() { return &___U3CU3Ef__mgU24cache11_21; }
	inline void set_U3CU3Ef__mgU24cache11_21(SingleWebRequestFail_t691327747 * value)
	{
		___U3CU3Ef__mgU24cache11_21 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__mgU24cache11_21, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
