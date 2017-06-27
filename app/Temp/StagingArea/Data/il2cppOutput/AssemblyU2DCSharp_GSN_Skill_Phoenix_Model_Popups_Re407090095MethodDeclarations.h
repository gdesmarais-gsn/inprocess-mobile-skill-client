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

// GSN.Skill.Phoenix.Model.Popups.RewardsPopupModel
struct RewardsPopupModel_t407090095;
// GSN.Skill.Phoenix.Model.Data.CurrentUser
struct CurrentUser_t3910039426;
// GSN.Skill.Requests.IWebRequest
struct IWebRequest_t216132554;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_GSN_Skill_Phoenix_Model_Data_Cur3910039426.h"
#include "AssemblyU2DCSharp_GSN_Skill_Phoenix_Model_PopupTyp3448311560.h"

// System.Void GSN.Skill.Phoenix.Model.Popups.RewardsPopupModel::.ctor(GSN.Skill.Phoenix.Model.Data.CurrentUser)
extern "C"  void RewardsPopupModel__ctor_m674373695 (RewardsPopupModel_t407090095 * __this, CurrentUser_t3910039426 * ___currentUser0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GSN.Skill.Phoenix.Model.PopupType GSN.Skill.Phoenix.Model.Popups.RewardsPopupModel::get_type()
extern "C"  int32_t RewardsPopupModel_get_type_m4069722341 (RewardsPopupModel_t407090095 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Model.Popups.RewardsPopupModel::OnOpen()
extern "C"  void RewardsPopupModel_OnOpen_m1918961513 (RewardsPopupModel_t407090095 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Model.Popups.RewardsPopupModel::OnClose()
extern "C"  void RewardsPopupModel_OnClose_m3891382443 (RewardsPopupModel_t407090095 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Model.Popups.RewardsPopupModel::OnGetRewardsBegin(GSN.Skill.Requests.IWebRequest)
extern "C"  void RewardsPopupModel_OnGetRewardsBegin_m2075938151 (RewardsPopupModel_t407090095 * __this, Il2CppObject * ___request0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Model.Popups.RewardsPopupModel::OnGetRewardsSuccess(GSN.Skill.Requests.IWebRequest)
extern "C"  void RewardsPopupModel_OnGetRewardsSuccess_m220687575 (RewardsPopupModel_t407090095 * __this, Il2CppObject * ___requests0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Model.Popups.RewardsPopupModel::OnGetRewardsFail(GSN.Skill.Requests.IWebRequest)
extern "C"  void RewardsPopupModel_OnGetRewardsFail_m1271987864 (RewardsPopupModel_t407090095 * __this, Il2CppObject * ___request0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
