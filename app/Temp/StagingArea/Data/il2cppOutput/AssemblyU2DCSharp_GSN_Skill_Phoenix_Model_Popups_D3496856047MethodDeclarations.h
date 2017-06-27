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

// GSN.Skill.Phoenix.Model.Popups.DepositPopupModel
struct DepositPopupModel_t3496856047;
// GSN.Skill.Phoenix.Model.Data.CurrentUser
struct CurrentUser_t3910039426;
// GSN.Skill.Requests.WebRequests
struct WebRequests_t3348797540;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_GSN_Skill_Phoenix_Model_Data_Cur3910039426.h"
#include "AssemblyU2DCSharp_GSN_Skill_Phoenix_Model_PopupTyp3448311560.h"
#include "AssemblyU2DCSharp_GSN_Skill_Requests_WebRequests3348797540.h"
#include "AssemblyU2DCSharp_GSN_Skill_Phoenix_Requests_Confi4099275588.h"
#include "AssemblyU2DCSharp_GSN_Skill_Phoenix_Requests_Confi1634083830.h"
#include "AssemblyU2DCSharp_GSN_Skill_Phoenix_Requests_Accou3253730133.h"

// System.Void GSN.Skill.Phoenix.Model.Popups.DepositPopupModel::.ctor(GSN.Skill.Phoenix.Model.Data.CurrentUser,System.Boolean)
extern "C"  void DepositPopupModel__ctor_m68422358 (DepositPopupModel_t3496856047 * __this, CurrentUser_t3910039426 * ___currentUser0, bool ___refetchData1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GSN.Skill.Phoenix.Model.PopupType GSN.Skill.Phoenix.Model.Popups.DepositPopupModel::get_type()
extern "C"  int32_t DepositPopupModel_get_type_m573958537 (DepositPopupModel_t3496856047 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Model.Popups.DepositPopupModel::OnOpen()
extern "C"  void DepositPopupModel_OnOpen_m2033523453 (DepositPopupModel_t3496856047 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Model.Popups.DepositPopupModel::OnClose()
extern "C"  void DepositPopupModel_OnClose_m3832851355 (DepositPopupModel_t3496856047 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Model.Popups.DepositPopupModel::OnDepositConfigDataBegin(GSN.Skill.Requests.WebRequests)
extern "C"  void DepositPopupModel_OnDepositConfigDataBegin_m4905605 (DepositPopupModel_t3496856047 * __this, WebRequests_t3348797540 * ___requests0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Model.Popups.DepositPopupModel::OnDepositConfigDataReady(GSN.Skill.Requests.WebRequests)
extern "C"  void DepositPopupModel_OnDepositConfigDataReady_m2135882525 (DepositPopupModel_t3496856047 * __this, WebRequests_t3348797540 * ___requests0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Model.Popups.DepositPopupModel::OnDepositConfigDataFail(GSN.Skill.Requests.WebRequests)
extern "C"  void DepositPopupModel_OnDepositConfigDataFail_m1510821738 (DepositPopupModel_t3496856047 * __this, WebRequests_t3348797540 * ___requests0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Model.Popups.DepositPopupModel::BuildDepositPopupReadyEventData(GSN.Skill.Phoenix.Requests.Config.ConfigData,GSN.Skill.Phoenix.Requests.Config.UpgradeBonusAmountsData)
extern "C"  void DepositPopupModel_BuildDepositPopupReadyEventData_m713663635 (DepositPopupModel_t3496856047 * __this, ConfigData_t4099275588  ___configData0, UpgradeBonusAmountsData_t1634083830  ___upgradeBonusData1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Model.Popups.DepositPopupModel::AddCreditCardDataToEvent(GSN.Skill.Phoenix.Requests.Account.GetAllCreditCardsData)
extern "C"  void DepositPopupModel_AddCreditCardDataToEvent_m4194244313 (DepositPopupModel_t3496856047 * __this, GetAllCreditCardsData_t3253730133  ___ccData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
