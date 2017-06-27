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

// GSN.Skill.Phoenix.Model.Popups.TournamentResultPopupModel
struct TournamentResultPopupModel_t1922360923;
// GSN.Skill.Phoenix.Model.Data.GameListData
struct GameListData_t2961126766;
// GSN.Skill.Phoenix.Model.Data.CurrentUser
struct CurrentUser_t3910039426;
// GSN.Skill.Phoenix.GetTournResultsSuccessEvent
struct GetTournResultsSuccessEvent_t31795773;
// GSN.Skill.Requests.IWebRequest
struct IWebRequest_t216132554;
// GSN.Skill.Phoenix.Requests.Tournament.TournamentResultRequestData
struct TournamentResultRequestData_t77650391;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_GSN_Skill_Phoenix_Model_Data_Gam2961126766.h"
#include "AssemblyU2DCSharp_GSN_Skill_Phoenix_Model_Data_Cur3910039426.h"
#include "AssemblyU2DCSharp_GSN_Skill_Phoenix_Model_PopupTyp3448311560.h"
#include "AssemblyU2DCSharp_GSN_Skill_Phoenix_GetTournResultsS31795773.h"
#include "AssemblyU2DCSharp_GSN_Skill_Phoenix_Requests_Tournam77650391.h"

// System.Void GSN.Skill.Phoenix.Model.Popups.TournamentResultPopupModel::.ctor(GSN.Skill.Phoenix.Model.Data.GameListData,GSN.Skill.Phoenix.Model.Data.CurrentUser,System.Int32)
extern "C"  void TournamentResultPopupModel__ctor_m310009429 (TournamentResultPopupModel_t1922360923 * __this, GameListData_t2961126766 * ___gameListData0, CurrentUser_t3910039426 * ___currentUser1, int32_t ___tournamentID2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GSN.Skill.Phoenix.Model.PopupType GSN.Skill.Phoenix.Model.Popups.TournamentResultPopupModel::get_type()
extern "C"  int32_t TournamentResultPopupModel_get_type_m699279609 (TournamentResultPopupModel_t1922360923 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Model.Popups.TournamentResultPopupModel::OnOpen()
extern "C"  void TournamentResultPopupModel_OnOpen_m887335237 (TournamentResultPopupModel_t1922360923 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Model.Popups.TournamentResultPopupModel::OnClose()
extern "C"  void TournamentResultPopupModel_OnClose_m2123656815 (TournamentResultPopupModel_t1922360923 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GSN.Skill.Phoenix.Model.Popups.TournamentResultPopupModel::IsClosed(GSN.Skill.Phoenix.GetTournResultsSuccessEvent)
extern "C"  bool TournamentResultPopupModel_IsClosed_m1832302601 (TournamentResultPopupModel_t1922360923 * __this, GetTournResultsSuccessEvent_t31795773 * ___evt0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Model.Popups.TournamentResultPopupModel::OnTournamentResultBegin(GSN.Skill.Requests.IWebRequest)
extern "C"  void TournamentResultPopupModel_OnTournamentResultBegin_m48277537 (TournamentResultPopupModel_t1922360923 * __this, Il2CppObject * ___request0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Model.Popups.TournamentResultPopupModel::OnTournamentResultComplete(GSN.Skill.Requests.IWebRequest)
extern "C"  void TournamentResultPopupModel_OnTournamentResultComplete_m1758136683 (TournamentResultPopupModel_t1922360923 * __this, Il2CppObject * ___request0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Model.Popups.TournamentResultPopupModel::HandleTournamentResultData(GSN.Skill.Phoenix.GetTournResultsSuccessEvent)
extern "C"  void TournamentResultPopupModel_HandleTournamentResultData_m3570681559 (TournamentResultPopupModel_t1922360923 * __this, GetTournResultsSuccessEvent_t31795773 * ___evt0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Model.Popups.TournamentResultPopupModel::OnTournamentResultFail(GSN.Skill.Requests.IWebRequest)
extern "C"  void TournamentResultPopupModel_OnTournamentResultFail_m4186636640 (TournamentResultPopupModel_t1922360923 * __this, Il2CppObject * ___request0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GSN.Skill.Phoenix.GetTournResultsSuccessEvent GSN.Skill.Phoenix.Model.Popups.TournamentResultPopupModel::BuildTournamentResultEvent(GSN.Skill.Phoenix.Requests.Tournament.TournamentResultRequestData)
extern "C"  GetTournResultsSuccessEvent_t31795773 * TournamentResultPopupModel_BuildTournamentResultEvent_m198222172 (TournamentResultPopupModel_t1922360923 * __this, TournamentResultRequestData_t77650391 * ___tournamentResult0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
