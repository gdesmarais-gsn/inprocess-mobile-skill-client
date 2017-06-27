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

// GSN.Skill.Phoenix.Model.MainModel
struct MainModel_t781558146;
// GSN.Skill.Phoenix.Model.SceneManager
struct SceneManager_t2219221181;
// GSN.Skill.Phoenix.Model.RewardManager
struct RewardManager_t4182213698;
// GSN.Skill.Phoenix.Model.LoginFlowManager
struct LoginFlowManager_t3154992724;
// GSN.Skill.Phoenix.Model.TournamentSignupManager
struct TournamentSignupManager_t2913170070;
// GSN.Skill.Phoenix.Model.DepositManager
struct DepositManager_t590905979;
// GSN.Skill.Phoenix.Model.PlayerProfileManager
struct PlayerProfileManager_t2964321803;
// GSN.Skill.Phoenix.Model.ResetPasswordManager
struct ResetPasswordManager_t1389202643;
// System.String
struct String_t;
// GSN.Skill.Events.IEvent
struct IEvent_t972216987;
// GSN.Skill.Requests.WebRequests
struct WebRequests_t3348797540;
// GSN.Skill.Requests.IWebRequest
struct IWebRequest_t216132554;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_GSN_Skill_Phoenix_Model_SceneMan2219221181.h"
#include "AssemblyU2DCSharp_GSN_Skill_Phoenix_Model_ScreenTy4085852022.h"
#include "mscorlib_System_String2029220233.h"
#include "AssemblyU2DCSharp_GSN_Skill_Phoenix_Strings_InputFi918236426.h"
#include "AssemblyU2DCSharp_GSN_Skill_Requests_WebRequests3348797540.h"

// System.Void GSN.Skill.Phoenix.Model.MainModel::.ctor(GSN.Skill.Phoenix.Model.SceneManager)
extern "C"  void MainModel__ctor_m3201139990 (MainModel_t781558146 * __this, SceneManager_t2219221181 * ___sceneManager0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Model.MainModel::Init()
extern "C"  void MainModel_Init_m1916181504 (MainModel_t781558146 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GSN.Skill.Phoenix.Model.RewardManager GSN.Skill.Phoenix.Model.MainModel::get_rewardManager()
extern "C"  RewardManager_t4182213698 * MainModel_get_rewardManager_m3391678589 (MainModel_t781558146 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GSN.Skill.Phoenix.Model.LoginFlowManager GSN.Skill.Phoenix.Model.MainModel::get_loginFlowManager()
extern "C"  LoginFlowManager_t3154992724 * MainModel_get_loginFlowManager_m4283997213 (MainModel_t781558146 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GSN.Skill.Phoenix.Model.TournamentSignupManager GSN.Skill.Phoenix.Model.MainModel::get_tournamentSignupManager()
extern "C"  TournamentSignupManager_t2913170070 * MainModel_get_tournamentSignupManager_m3140836349 (MainModel_t781558146 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GSN.Skill.Phoenix.Model.DepositManager GSN.Skill.Phoenix.Model.MainModel::get_depositManager()
extern "C"  DepositManager_t590905979 * MainModel_get_depositManager_m1967122493 (MainModel_t781558146 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GSN.Skill.Phoenix.Model.PlayerProfileManager GSN.Skill.Phoenix.Model.MainModel::get_playerProfileManager()
extern "C"  PlayerProfileManager_t2964321803 * MainModel_get_playerProfileManager_m1190272349 (MainModel_t781558146 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GSN.Skill.Phoenix.Model.ResetPasswordManager GSN.Skill.Phoenix.Model.MainModel::get_resetPasswordManager()
extern "C"  ResetPasswordManager_t1389202643 * MainModel_get_resetPasswordManager_m3915964829 (MainModel_t781558146 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Model.MainModel::HandleErrorCallback()
extern "C"  void MainModel_HandleErrorCallback_m3595986645 (MainModel_t781558146 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Model.MainModel::LoadComplete()
extern "C"  void MainModel_LoadComplete_m4120986237 (MainModel_t781558146 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Model.MainModel::RemovePopup(System.Int64)
extern "C"  void MainModel_RemovePopup_m159909334 (MainModel_t781558146 * __this, int64_t ___uid0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Model.MainModel::SetScreen(GSN.Skill.Phoenix.Model.ScreenType)
extern "C"  void MainModel_SetScreen_m1577666125 (MainModel_t781558146 * __this, int32_t ___screen0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Model.MainModel::SetGameID(System.Int32)
extern "C"  void MainModel_SetGameID_m2203759454 (MainModel_t781558146 * __this, int32_t ___gameID0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Model.MainModel::ShowTournamentResult(System.Int32)
extern "C"  void MainModel_ShowTournamentResult_m2662246796 (MainModel_t781558146 * __this, int32_t ___tournamentID0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Model.MainModel::ShowAdditionalCompletedGameHistoryData()
extern "C"  void MainModel_ShowAdditionalCompletedGameHistoryData_m3326206901 (MainModel_t781558146 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Model.MainModel::RefreshGameHistory()
extern "C"  void MainModel_RefreshGameHistory_m441781551 (MainModel_t781558146 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Model.MainModel::ShowTournamentDetails(System.Int32)
extern "C"  void MainModel_ShowTournamentDetails_m4225039299 (MainModel_t781558146 * __this, int32_t ___flavorID0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Model.MainModel::VerifyPassword(System.String)
extern "C"  void MainModel_VerifyPassword_m3902279568 (MainModel_t781558146 * __this, String_t* ___password0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Model.MainModel::ValidateInputField(GSN.Skill.Phoenix.Strings.InputFieldType,System.String,System.Boolean)
extern "C"  void MainModel_ValidateInputField_m1489091497 (MainModel_t781558146 * __this, int32_t ___field0, String_t* ___text1, bool ___allowEmpty2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Model.MainModel::ShowTermsAndConditions()
extern "C"  void MainModel_ShowTermsAndConditions_m1245744451 (MainModel_t781558146 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Model.MainModel::ShowPrivacyPolicy()
extern "C"  void MainModel_ShowPrivacyPolicy_m2869996199 (MainModel_t781558146 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Model.MainModel::ShowTermsOfService()
extern "C"  void MainModel_ShowTermsOfService_m2475803658 (MainModel_t781558146 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Model.MainModel::OnLogout(GSN.Skill.Events.IEvent)
extern "C"  void MainModel_OnLogout_m417172890 (MainModel_t781558146 * __this, Il2CppObject * ___e0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Model.MainModel::ResetPhoenixSceneData()
extern "C"  void MainModel_ResetPhoenixSceneData_m3558809142 (MainModel_t781558146 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Model.MainModel::AddListeners()
extern "C"  void MainModel_AddListeners_m2167013882 (MainModel_t781558146 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Model.MainModel::RemoveListeners()
extern "C"  void MainModel_RemoveListeners_m2277258273 (MainModel_t781558146 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Model.MainModel::OnSceneChange(GSN.Skill.Events.IEvent)
extern "C"  void MainModel_OnSceneChange_m973432360 (MainModel_t781558146 * __this, Il2CppObject * ___e0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Model.MainModel::OnSceneLoadComplete(GSN.Skill.Events.IEvent)
extern "C"  void MainModel_OnSceneLoadComplete_m2724124249 (MainModel_t781558146 * __this, Il2CppObject * ___e0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Model.MainModel::HandleStartupLoadComplete()
extern "C"  void MainModel_HandleStartupLoadComplete_m74088332 (MainModel_t781558146 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Model.MainModel::OnPostLoginRequestsComplete(GSN.Skill.Requests.WebRequests)
extern "C"  void MainModel_OnPostLoginRequestsComplete_m1071776584 (MainModel_t781558146 * __this, WebRequests_t3348797540 * ___requests0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Model.MainModel::HandleGameLoadComplete()
extern "C"  void MainModel_HandleGameLoadComplete_m2175927961 (MainModel_t781558146 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Model.MainModel::HandlePhoenixLoadComplete()
extern "C"  void MainModel_HandlePhoenixLoadComplete_m4258140566 (MainModel_t781558146 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Model.MainModel::InitializeMainScreen(GSN.Skill.Phoenix.Model.ScreenType)
extern "C"  void MainModel_InitializeMainScreen_m1681082366 (MainModel_t781558146 * __this, int32_t ___screen0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Model.MainModel::OnErrorLog(System.String)
extern "C"  void MainModel_OnErrorLog_m155233025 (MainModel_t781558146 * __this, String_t* ___log0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Model.MainModel::OnLogComplete(GSN.Skill.Requests.IWebRequest)
extern "C"  void MainModel_OnLogComplete_m174964017 (MainModel_t781558146 * __this, Il2CppObject * ___request0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Model.MainModel::OnLogFail(GSN.Skill.Requests.IWebRequest)
extern "C"  void MainModel_OnLogFail_m2838140628 (MainModel_t781558146 * __this, Il2CppObject * ___request0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Model.MainModel::OnVersionCheckComplete(GSN.Skill.Events.IEvent)
extern "C"  void MainModel_OnVersionCheckComplete_m2038841845 (MainModel_t781558146 * __this, Il2CppObject * ___evt0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
