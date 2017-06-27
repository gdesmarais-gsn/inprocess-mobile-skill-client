#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// GSN.Skill.Phoenix.Requests.Account.CheckLocationLegalityRequestData
struct CheckLocationLegalityRequestData_t2809632747;
// System.Action
struct Action_t3226471752;
// System.Action`1<GSN.Skill.Phoenix.Model.LocationFailReason>
struct Action_1_t2037039551;
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

// GSN.Skill.Phoenix.Model.LocationManager
struct  LocationManager_t2180792764  : public Il2CppObject
{
public:
	// GSN.Skill.Phoenix.Requests.Account.CheckLocationLegalityRequestData GSN.Skill.Phoenix.Model.LocationManager::_checkLocationLegality
	CheckLocationLegalityRequestData_t2809632747 * ____checkLocationLegality_0;
	// System.Action GSN.Skill.Phoenix.Model.LocationManager::_successCallback
	Action_t3226471752 * ____successCallback_1;
	// System.Action`1<GSN.Skill.Phoenix.Model.LocationFailReason> GSN.Skill.Phoenix.Model.LocationManager::_failCallback
	Action_1_t2037039551 * ____failCallback_2;
	// System.Int32 GSN.Skill.Phoenix.Model.LocationManager::_gameId
	int32_t ____gameId_3;
	// System.Int32 GSN.Skill.Phoenix.Model.LocationManager::_flavorTypeID
	int32_t ____flavorTypeID_4;
	// System.Boolean GSN.Skill.Phoenix.Model.LocationManager::_cardGamesAllowed
	bool ____cardGamesAllowed_5;
	// System.Boolean GSN.Skill.Phoenix.Model.LocationManager::_allTournTypesAllowed
	bool ____allTournTypesAllowed_6;
	// System.Boolean GSN.Skill.Phoenix.Model.LocationManager::_locationCheckHasHappened
	bool ____locationCheckHasHappened_7;

public:
	inline static int32_t get_offset_of__checkLocationLegality_0() { return static_cast<int32_t>(offsetof(LocationManager_t2180792764, ____checkLocationLegality_0)); }
	inline CheckLocationLegalityRequestData_t2809632747 * get__checkLocationLegality_0() const { return ____checkLocationLegality_0; }
	inline CheckLocationLegalityRequestData_t2809632747 ** get_address_of__checkLocationLegality_0() { return &____checkLocationLegality_0; }
	inline void set__checkLocationLegality_0(CheckLocationLegalityRequestData_t2809632747 * value)
	{
		____checkLocationLegality_0 = value;
		Il2CppCodeGenWriteBarrier(&____checkLocationLegality_0, value);
	}

	inline static int32_t get_offset_of__successCallback_1() { return static_cast<int32_t>(offsetof(LocationManager_t2180792764, ____successCallback_1)); }
	inline Action_t3226471752 * get__successCallback_1() const { return ____successCallback_1; }
	inline Action_t3226471752 ** get_address_of__successCallback_1() { return &____successCallback_1; }
	inline void set__successCallback_1(Action_t3226471752 * value)
	{
		____successCallback_1 = value;
		Il2CppCodeGenWriteBarrier(&____successCallback_1, value);
	}

	inline static int32_t get_offset_of__failCallback_2() { return static_cast<int32_t>(offsetof(LocationManager_t2180792764, ____failCallback_2)); }
	inline Action_1_t2037039551 * get__failCallback_2() const { return ____failCallback_2; }
	inline Action_1_t2037039551 ** get_address_of__failCallback_2() { return &____failCallback_2; }
	inline void set__failCallback_2(Action_1_t2037039551 * value)
	{
		____failCallback_2 = value;
		Il2CppCodeGenWriteBarrier(&____failCallback_2, value);
	}

	inline static int32_t get_offset_of__gameId_3() { return static_cast<int32_t>(offsetof(LocationManager_t2180792764, ____gameId_3)); }
	inline int32_t get__gameId_3() const { return ____gameId_3; }
	inline int32_t* get_address_of__gameId_3() { return &____gameId_3; }
	inline void set__gameId_3(int32_t value)
	{
		____gameId_3 = value;
	}

	inline static int32_t get_offset_of__flavorTypeID_4() { return static_cast<int32_t>(offsetof(LocationManager_t2180792764, ____flavorTypeID_4)); }
	inline int32_t get__flavorTypeID_4() const { return ____flavorTypeID_4; }
	inline int32_t* get_address_of__flavorTypeID_4() { return &____flavorTypeID_4; }
	inline void set__flavorTypeID_4(int32_t value)
	{
		____flavorTypeID_4 = value;
	}

	inline static int32_t get_offset_of__cardGamesAllowed_5() { return static_cast<int32_t>(offsetof(LocationManager_t2180792764, ____cardGamesAllowed_5)); }
	inline bool get__cardGamesAllowed_5() const { return ____cardGamesAllowed_5; }
	inline bool* get_address_of__cardGamesAllowed_5() { return &____cardGamesAllowed_5; }
	inline void set__cardGamesAllowed_5(bool value)
	{
		____cardGamesAllowed_5 = value;
	}

	inline static int32_t get_offset_of__allTournTypesAllowed_6() { return static_cast<int32_t>(offsetof(LocationManager_t2180792764, ____allTournTypesAllowed_6)); }
	inline bool get__allTournTypesAllowed_6() const { return ____allTournTypesAllowed_6; }
	inline bool* get_address_of__allTournTypesAllowed_6() { return &____allTournTypesAllowed_6; }
	inline void set__allTournTypesAllowed_6(bool value)
	{
		____allTournTypesAllowed_6 = value;
	}

	inline static int32_t get_offset_of__locationCheckHasHappened_7() { return static_cast<int32_t>(offsetof(LocationManager_t2180792764, ____locationCheckHasHappened_7)); }
	inline bool get__locationCheckHasHappened_7() const { return ____locationCheckHasHappened_7; }
	inline bool* get_address_of__locationCheckHasHappened_7() { return &____locationCheckHasHappened_7; }
	inline void set__locationCheckHasHappened_7(bool value)
	{
		____locationCheckHasHappened_7 = value;
	}
};

struct LocationManager_t2180792764_StaticFields
{
public:
	// GSN.Skill.Requests.SingleWebRequestBegin GSN.Skill.Phoenix.Model.LocationManager::<>f__mg$cache0
	SingleWebRequestBegin_t714235414 * ___U3CU3Ef__mgU24cache0_8;
	// GSN.Skill.Requests.SingleWebRequestComplete GSN.Skill.Phoenix.Model.LocationManager::<>f__mg$cache1
	SingleWebRequestComplete_t61608820 * ___U3CU3Ef__mgU24cache1_9;
	// GSN.Skill.Requests.SingleWebRequestFail GSN.Skill.Phoenix.Model.LocationManager::<>f__mg$cache2
	SingleWebRequestFail_t691327747 * ___U3CU3Ef__mgU24cache2_10;

public:
	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache0_8() { return static_cast<int32_t>(offsetof(LocationManager_t2180792764_StaticFields, ___U3CU3Ef__mgU24cache0_8)); }
	inline SingleWebRequestBegin_t714235414 * get_U3CU3Ef__mgU24cache0_8() const { return ___U3CU3Ef__mgU24cache0_8; }
	inline SingleWebRequestBegin_t714235414 ** get_address_of_U3CU3Ef__mgU24cache0_8() { return &___U3CU3Ef__mgU24cache0_8; }
	inline void set_U3CU3Ef__mgU24cache0_8(SingleWebRequestBegin_t714235414 * value)
	{
		___U3CU3Ef__mgU24cache0_8 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__mgU24cache0_8, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache1_9() { return static_cast<int32_t>(offsetof(LocationManager_t2180792764_StaticFields, ___U3CU3Ef__mgU24cache1_9)); }
	inline SingleWebRequestComplete_t61608820 * get_U3CU3Ef__mgU24cache1_9() const { return ___U3CU3Ef__mgU24cache1_9; }
	inline SingleWebRequestComplete_t61608820 ** get_address_of_U3CU3Ef__mgU24cache1_9() { return &___U3CU3Ef__mgU24cache1_9; }
	inline void set_U3CU3Ef__mgU24cache1_9(SingleWebRequestComplete_t61608820 * value)
	{
		___U3CU3Ef__mgU24cache1_9 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__mgU24cache1_9, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache2_10() { return static_cast<int32_t>(offsetof(LocationManager_t2180792764_StaticFields, ___U3CU3Ef__mgU24cache2_10)); }
	inline SingleWebRequestFail_t691327747 * get_U3CU3Ef__mgU24cache2_10() const { return ___U3CU3Ef__mgU24cache2_10; }
	inline SingleWebRequestFail_t691327747 ** get_address_of_U3CU3Ef__mgU24cache2_10() { return &___U3CU3Ef__mgU24cache2_10; }
	inline void set_U3CU3Ef__mgU24cache2_10(SingleWebRequestFail_t691327747 * value)
	{
		___U3CU3Ef__mgU24cache2_10 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__mgU24cache2_10, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
