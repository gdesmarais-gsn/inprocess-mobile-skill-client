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

// GSN.Skill.Phoenix.Controller.MainController
struct MainController_t1881357883;
// GSN.Skill.Phoenix.Model.MainModel
struct MainModel_t781558146;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_GSN_Skill_Phoenix_Model_MainModel781558146.h"
#include "mscorlib_System_String2029220233.h"
#include "AssemblyU2DCSharp_GSN_Skill_Phoenix_Model_ScreenTy4085852022.h"
#include "AssemblyU2DCSharp_GSN_Skill_Phoenix_Strings_InputFi918236426.h"
#include "mscorlib_System_Decimal724701077.h"
#include "AssemblyU2DCSharp_GSN_Skill_Phoenix_Model_DepositM3723506665.h"

// System.Void GSN.Skill.Phoenix.Controller.MainController::.ctor()
extern "C"  void MainController__ctor_m2950376842 (MainController_t1881357883 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GSN.Skill.Phoenix.Model.MainModel GSN.Skill.Phoenix.Controller.MainController::get_model()
extern "C"  MainModel_t781558146 * MainController_get_model_m357477178 (MainController_t1881357883 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Controller.MainController::set_model(GSN.Skill.Phoenix.Model.MainModel)
extern "C"  void MainController_set_model_m1930606761 (MainController_t1881357883 * __this, MainModel_t781558146 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Controller.MainController::HandleErrorCallback()
extern "C"  void MainController_HandleErrorCallback_m296321281 (MainController_t1881357883 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Controller.MainController::LoadComplete()
extern "C"  void MainController_LoadComplete_m1095104873 (MainController_t1881357883 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Controller.MainController::ShowLogin()
extern "C"  void MainController_ShowLogin_m669957004 (MainController_t1881357883 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Controller.MainController::ResetPassword(System.String,System.String)
extern "C"  void MainController_ResetPassword_m4122427642 (MainController_t1881357883 * __this, String_t* ___emailAddress0, String_t* ___username1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Controller.MainController::ShowResetPasswordPopup()
extern "C"  void MainController_ShowResetPasswordPopup_m3825646849 (MainController_t1881357883 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Controller.MainController::ShowRegistration()
extern "C"  void MainController_ShowRegistration_m2245693644 (MainController_t1881357883 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Controller.MainController::RegisterUser(System.String,System.String,System.String)
extern "C"  void MainController_RegisterUser_m1893707988 (MainController_t1881357883 * __this, String_t* ___username0, String_t* ___email1, String_t* ___password2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Controller.MainController::Login(System.String,System.String,System.Boolean)
extern "C"  void MainController_Login_m947116474 (MainController_t1881357883 * __this, String_t* ___username0, String_t* ___password1, bool ___autoLoginEnabled2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Controller.MainController::Logout()
extern "C"  void MainController_Logout_m1656070106 (MainController_t1881357883 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Controller.MainController::ShowTermsAndConditions()
extern "C"  void MainController_ShowTermsAndConditions_m3590320711 (MainController_t1881357883 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Controller.MainController::ShowTermsofService()
extern "C"  void MainController_ShowTermsofService_m1406307220 (MainController_t1881357883 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Controller.MainController::ShowPrivacyPolicy()
extern "C"  void MainController_ShowPrivacyPolicy_m1401261155 (MainController_t1881357883 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Controller.MainController::RemovePopup(System.Int64)
extern "C"  void MainController_RemovePopup_m2659362096 (MainController_t1881357883 * __this, int64_t ___uid0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Controller.MainController::SetScreen(GSN.Skill.Phoenix.Model.ScreenType)
extern "C"  void MainController_SetScreen_m3529618793 (MainController_t1881357883 * __this, int32_t ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Controller.MainController::SetCurrentGame(System.Int32)
extern "C"  void MainController_SetCurrentGame_m3910706266 (MainController_t1881357883 * __this, int32_t ___i0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Controller.MainController::ValidateInputField(GSN.Skill.Phoenix.Strings.InputFieldType,System.String,System.Boolean)
extern "C"  void MainController_ValidateInputField_m3688050165 (MainController_t1881357883 * __this, int32_t ___field0, String_t* ___text1, bool ___allowEmpty2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Controller.MainController::TournamentSignup(System.Int32,System.Int32,System.Int32,System.Decimal,System.Decimal)
extern "C"  void MainController_TournamentSignup_m31554984 (MainController_t1881357883 * __this, int32_t ___flavorID0, int32_t ___flavorTypeID1, int32_t ___gameID2, Decimal_t724701077  ___fee3, Decimal_t724701077  ___purseAmount4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Controller.MainController::ReEnterTournament(System.Int32,System.Int32,System.Int32,System.Int32,System.Decimal,System.Decimal)
extern "C"  void MainController_ReEnterTournament_m3536025118 (MainController_t1881357883 * __this, int32_t ___flavorID0, int32_t ___flavorTypeID1, int32_t ___tournID2, int32_t ___gameID3, Decimal_t724701077  ___fee4, Decimal_t724701077  ___purseAmount5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Controller.MainController::EnterPreviouslyUnplayedTournament(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Decimal,System.Decimal)
extern "C"  void MainController_EnterPreviouslyUnplayedTournament_m4144447684 (MainController_t1881357883 * __this, int32_t ___flavorID0, int32_t ___flavorTypeID1, int32_t ___tournID2, int32_t ___unplayedGameID3, int32_t ___gameID4, Decimal_t724701077  ___fee5, Decimal_t724701077  ___purseAmount6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Controller.MainController::VerifyPassword(System.String)
extern "C"  void MainController_VerifyPassword_m1479194806 (MainController_t1881357883 * __this, String_t* ___password0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Controller.MainController::ShowDeposit()
extern "C"  void MainController_ShowDeposit_m1051098433 (MainController_t1881357883 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Controller.MainController::ValidateDepositLocation()
extern "C"  void MainController_ValidateDepositLocation_m3977481473 (MainController_t1881357883 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Controller.MainController::MakeDepositWithExistingCard(System.Int32,System.Int32,System.String)
extern "C"  void MainController_MakeDepositWithExistingCard_m3154030163 (MainController_t1881357883 * __this, int32_t ___amount0, int32_t ___ccID1, String_t* ___password2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Controller.MainController::MakeDepositWithNewCard(GSN.Skill.Phoenix.Model.DepositManager/DepositWithNewCardData)
extern "C"  void MainController_MakeDepositWithNewCard_m2543070881 (MainController_t1881357883 * __this, DepositWithNewCardData_t3723506665  ___ccData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Controller.MainController::ShowPlayerProfile()
extern "C"  void MainController_ShowPlayerProfile_m2135745593 (MainController_t1881357883 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Controller.MainController::Withdraw(System.Decimal,System.String)
extern "C"  void MainController_Withdraw_m3055919862 (MainController_t1881357883 * __this, Decimal_t724701077  ___amount0, String_t* ___password1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Controller.MainController::Help()
extern "C"  void MainController_Help_m4234091339 (MainController_t1881357883 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Controller.MainController::ShowRewardPopup()
extern "C"  void MainController_ShowRewardPopup_m2138322078 (MainController_t1881357883 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Controller.MainController::RedeemReward(System.Int32)
extern "C"  void MainController_RedeemReward_m4132253806 (MainController_t1881357883 * __this, int32_t ___rewardID0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Controller.MainController::ShowTournamentResults(System.Int32)
extern "C"  void MainController_ShowTournamentResults_m2612365671 (MainController_t1881357883 * __this, int32_t ___tournamentID0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Controller.MainController::ShowAdditionalCompletedGameHistoryData()
extern "C"  void MainController_ShowAdditionalCompletedGameHistoryData_m1882583145 (MainController_t1881357883 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Controller.MainController::RefreshGameHistory()
extern "C"  void MainController_RefreshGameHistory_m446351027 (MainController_t1881357883 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Controller.MainController::ShowTournamentDetails(System.Int32)
extern "C"  void MainController_ShowTournamentDetails_m259245679 (MainController_t1881357883 * __this, int32_t ___flavorID0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Controller.MainController::WinItNowAccept(System.Int32,System.Decimal)
extern "C"  void MainController_WinItNowAccept_m4183807754 (MainController_t1881357883 * __this, int32_t ___tournID0, Decimal_t724701077  ___fee1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Controller.MainController::WinItNowDecline(System.Int32)
extern "C"  void MainController_WinItNowDecline_m2358479190 (MainController_t1881357883 * __this, int32_t ___tournID0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
