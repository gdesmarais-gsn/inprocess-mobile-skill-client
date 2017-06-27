#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// GSN.Skill.Phoenix.Model.PlayerProfileManager
struct PlayerProfileManager_t2964321803;
// GSN.Skill.Phoenix.Model.Data.CurrentUser
struct CurrentUser_t3910039426;
// GSN.Skill.Phoenix.Model.Data.StoredConfigData
struct StoredConfigData_t3100406041;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_GSN_Skill_Phoenix_Model_Data_Cur3910039426.h"
#include "AssemblyU2DCSharp_GSN_Skill_Phoenix_Model_Data_Sto3100406041.h"
#include "mscorlib_System_Decimal724701077.h"
#include "mscorlib_System_String2029220233.h"

// System.Void GSN.Skill.Phoenix.Model.PlayerProfileManager::.ctor(GSN.Skill.Phoenix.Model.Data.CurrentUser,GSN.Skill.Phoenix.Model.Data.StoredConfigData)
extern "C"  void PlayerProfileManager__ctor_m454474760 (PlayerProfileManager_t2964321803 * __this, CurrentUser_t3910039426 * ___currentUser0, StoredConfigData_t3100406041 * ___storedConfigData1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Model.PlayerProfileManager::ShowPlayerProfile()
extern "C"  void PlayerProfileManager_ShowPlayerProfile_m2262221154 (PlayerProfileManager_t2964321803 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Model.PlayerProfileManager::Withdraw(System.Decimal,System.String)
extern "C"  void PlayerProfileManager_Withdraw_m1432212285 (PlayerProfileManager_t2964321803 * __this, Decimal_t724701077  ___amount0, String_t* ___password1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Model.PlayerProfileManager::Help()
extern "C"  void PlayerProfileManager_Help_m3738343508 (PlayerProfileManager_t2964321803 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Model.PlayerProfileManager::Logout()
extern "C"  void PlayerProfileManager_Logout_m1845228911 (PlayerProfileManager_t2964321803 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
