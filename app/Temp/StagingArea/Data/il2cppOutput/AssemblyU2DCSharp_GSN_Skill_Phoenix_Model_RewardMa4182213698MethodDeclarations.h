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

// GSN.Skill.Phoenix.Model.RewardManager
struct RewardManager_t4182213698;
// GSN.Skill.Phoenix.Model.Data.CurrentUser
struct CurrentUser_t3910039426;
// GSN.Skill.Phoenix.Model.DepositManager
struct DepositManager_t590905979;
// GSN.Skill.Requests.WebRequests
struct WebRequests_t3348797540;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_GSN_Skill_Phoenix_Model_Data_Cur3910039426.h"
#include "AssemblyU2DCSharp_GSN_Skill_Phoenix_Model_DepositMa590905979.h"
#include "AssemblyU2DCSharp_GSN_Skill_Requests_WebRequests3348797540.h"

// System.Void GSN.Skill.Phoenix.Model.RewardManager::.ctor(GSN.Skill.Phoenix.Model.Data.CurrentUser,GSN.Skill.Phoenix.Model.DepositManager)
extern "C"  void RewardManager__ctor_m262179863 (RewardManager_t4182213698 * __this, CurrentUser_t3910039426 * ___currentUser0, DepositManager_t590905979 * ___depositManager1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Model.RewardManager::ShowRewardPopup()
extern "C"  void RewardManager_ShowRewardPopup_m4105058344 (RewardManager_t4182213698 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Model.RewardManager::RedeemReward(System.Int32)
extern "C"  void RewardManager_RedeemReward_m3517988596 (RewardManager_t4182213698 * __this, int32_t ___rewardID0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Model.RewardManager::OnRedeemFail(GSN.Skill.Requests.WebRequests)
extern "C"  void RewardManager_OnRedeemFail_m3660264998 (RewardManager_t4182213698 * __this, WebRequests_t3348797540 * ___requests0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Model.RewardManager::HandleShowDeposit()
extern "C"  void RewardManager_HandleShowDeposit_m322642063 (RewardManager_t4182213698 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Model.RewardManager::OnRedeemSuccess(GSN.Skill.Requests.WebRequests)
extern "C"  void RewardManager_OnRedeemSuccess_m1967571467 (RewardManager_t4182213698 * __this, WebRequests_t3348797540 * ___requests0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
