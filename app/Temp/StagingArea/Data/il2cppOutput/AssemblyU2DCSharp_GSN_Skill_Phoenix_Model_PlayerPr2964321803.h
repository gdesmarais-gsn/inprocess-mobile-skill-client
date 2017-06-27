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
// GSN.Skill.Phoenix.Model.Data.StoredConfigData
struct StoredConfigData_t3100406041;
// GSN.Skill.Phoenix.Model.WithdrawManager
struct WithdrawManager_t1792595621;
// GSN.Skill.Phoenix.Model.HelpManager
struct HelpManager_t3748340088;
// GSN.Skill.Phoenix.Model.LogoutManager
struct LogoutManager_t100018189;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Phoenix.Model.PlayerProfileManager
struct  PlayerProfileManager_t2964321803  : public Il2CppObject
{
public:
	// GSN.Skill.Phoenix.Model.Data.CurrentUser GSN.Skill.Phoenix.Model.PlayerProfileManager::_currentUser
	CurrentUser_t3910039426 * ____currentUser_0;
	// GSN.Skill.Phoenix.Model.Data.StoredConfigData GSN.Skill.Phoenix.Model.PlayerProfileManager::_storedConfigData
	StoredConfigData_t3100406041 * ____storedConfigData_1;
	// GSN.Skill.Phoenix.Model.WithdrawManager GSN.Skill.Phoenix.Model.PlayerProfileManager::_withdrawManager
	WithdrawManager_t1792595621 * ____withdrawManager_2;
	// GSN.Skill.Phoenix.Model.HelpManager GSN.Skill.Phoenix.Model.PlayerProfileManager::_helpManager
	HelpManager_t3748340088 * ____helpManager_3;
	// GSN.Skill.Phoenix.Model.LogoutManager GSN.Skill.Phoenix.Model.PlayerProfileManager::_logoutManager
	LogoutManager_t100018189 * ____logoutManager_4;

public:
	inline static int32_t get_offset_of__currentUser_0() { return static_cast<int32_t>(offsetof(PlayerProfileManager_t2964321803, ____currentUser_0)); }
	inline CurrentUser_t3910039426 * get__currentUser_0() const { return ____currentUser_0; }
	inline CurrentUser_t3910039426 ** get_address_of__currentUser_0() { return &____currentUser_0; }
	inline void set__currentUser_0(CurrentUser_t3910039426 * value)
	{
		____currentUser_0 = value;
		Il2CppCodeGenWriteBarrier(&____currentUser_0, value);
	}

	inline static int32_t get_offset_of__storedConfigData_1() { return static_cast<int32_t>(offsetof(PlayerProfileManager_t2964321803, ____storedConfigData_1)); }
	inline StoredConfigData_t3100406041 * get__storedConfigData_1() const { return ____storedConfigData_1; }
	inline StoredConfigData_t3100406041 ** get_address_of__storedConfigData_1() { return &____storedConfigData_1; }
	inline void set__storedConfigData_1(StoredConfigData_t3100406041 * value)
	{
		____storedConfigData_1 = value;
		Il2CppCodeGenWriteBarrier(&____storedConfigData_1, value);
	}

	inline static int32_t get_offset_of__withdrawManager_2() { return static_cast<int32_t>(offsetof(PlayerProfileManager_t2964321803, ____withdrawManager_2)); }
	inline WithdrawManager_t1792595621 * get__withdrawManager_2() const { return ____withdrawManager_2; }
	inline WithdrawManager_t1792595621 ** get_address_of__withdrawManager_2() { return &____withdrawManager_2; }
	inline void set__withdrawManager_2(WithdrawManager_t1792595621 * value)
	{
		____withdrawManager_2 = value;
		Il2CppCodeGenWriteBarrier(&____withdrawManager_2, value);
	}

	inline static int32_t get_offset_of__helpManager_3() { return static_cast<int32_t>(offsetof(PlayerProfileManager_t2964321803, ____helpManager_3)); }
	inline HelpManager_t3748340088 * get__helpManager_3() const { return ____helpManager_3; }
	inline HelpManager_t3748340088 ** get_address_of__helpManager_3() { return &____helpManager_3; }
	inline void set__helpManager_3(HelpManager_t3748340088 * value)
	{
		____helpManager_3 = value;
		Il2CppCodeGenWriteBarrier(&____helpManager_3, value);
	}

	inline static int32_t get_offset_of__logoutManager_4() { return static_cast<int32_t>(offsetof(PlayerProfileManager_t2964321803, ____logoutManager_4)); }
	inline LogoutManager_t100018189 * get__logoutManager_4() const { return ____logoutManager_4; }
	inline LogoutManager_t100018189 ** get_address_of__logoutManager_4() { return &____logoutManager_4; }
	inline void set__logoutManager_4(LogoutManager_t100018189 * value)
	{
		____logoutManager_4 = value;
		Il2CppCodeGenWriteBarrier(&____logoutManager_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
