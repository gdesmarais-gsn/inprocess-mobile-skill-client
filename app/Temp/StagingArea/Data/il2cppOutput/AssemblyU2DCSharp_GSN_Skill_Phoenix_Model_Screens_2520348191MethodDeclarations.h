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

// GSN.Skill.Phoenix.Model.Screens.GameHistoryScreenModel
struct GameHistoryScreenModel_t2520348191;
// GSN.Skill.Phoenix.Model.Data.GameListData
struct GameListData_t2961126766;
// GSN.Skill.Requests.IWebRequest
struct IWebRequest_t216132554;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_GSN_Skill_Phoenix_Model_Data_Gam2961126766.h"

// System.Void GSN.Skill.Phoenix.Model.Screens.GameHistoryScreenModel::.ctor(GSN.Skill.Phoenix.Model.Data.GameListData)
extern "C"  void GameHistoryScreenModel__ctor_m522571223 (GameHistoryScreenModel_t2520348191 * __this, GameListData_t2961126766 * ___gameListData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Model.Screens.GameHistoryScreenModel::OnPhoenixLoad()
extern "C"  void GameHistoryScreenModel_OnPhoenixLoad_m1446437502 (GameHistoryScreenModel_t2520348191 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Model.Screens.GameHistoryScreenModel::HandleScreenFlow()
extern "C"  void GameHistoryScreenModel_HandleScreenFlow_m1345836382 (GameHistoryScreenModel_t2520348191 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Model.Screens.GameHistoryScreenModel::ShowAdditionalCompletedGameHistoryData()
extern "C"  void GameHistoryScreenModel_ShowAdditionalCompletedGameHistoryData_m4217075099 (GameHistoryScreenModel_t2520348191 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Model.Screens.GameHistoryScreenModel::RefreshGameHistory()
extern "C"  void GameHistoryScreenModel_RefreshGameHistory_m3258713401 (GameHistoryScreenModel_t2520348191 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Model.Screens.GameHistoryScreenModel::OnFetchGameHistoryScreenBegin(GSN.Skill.Requests.IWebRequest)
extern "C"  void GameHistoryScreenModel_OnFetchGameHistoryScreenBegin_m3550657669 (GameHistoryScreenModel_t2520348191 * __this, Il2CppObject * ___request0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Model.Screens.GameHistoryScreenModel::OnFetchGameHistoryScreenFail(GSN.Skill.Requests.IWebRequest)
extern "C"  void GameHistoryScreenModel_OnFetchGameHistoryScreenFail_m4102370810 (GameHistoryScreenModel_t2520348191 * __this, Il2CppObject * ___request0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Model.Screens.GameHistoryScreenModel::OnFetchGameHistoryScreenComplete(GSN.Skill.Requests.IWebRequest)
extern "C"  void GameHistoryScreenModel_OnFetchGameHistoryScreenComplete_m1342147547 (GameHistoryScreenModel_t2520348191 * __this, Il2CppObject * ___request0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
