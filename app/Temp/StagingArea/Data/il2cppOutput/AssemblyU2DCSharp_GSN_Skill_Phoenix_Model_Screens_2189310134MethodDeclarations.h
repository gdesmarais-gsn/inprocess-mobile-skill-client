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

// GSN.Skill.Phoenix.Model.Screens.TournamentSelectScreenModel
struct TournamentSelectScreenModel_t2189310134;
// GSN.Skill.Phoenix.Model.Data.GameListData
struct GameListData_t2961126766;
// GSN.Skill.Requests.IWebRequest
struct IWebRequest_t216132554;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_GSN_Skill_Phoenix_Model_Data_Gam2961126766.h"

// System.Void GSN.Skill.Phoenix.Model.Screens.TournamentSelectScreenModel::.ctor(GSN.Skill.Phoenix.Model.Data.GameListData)
extern "C"  void TournamentSelectScreenModel__ctor_m2584740262 (TournamentSelectScreenModel_t2189310134 * __this, GameListData_t2961126766 * ___gameListData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Model.Screens.TournamentSelectScreenModel::OnPhoenixLoad()
extern "C"  void TournamentSelectScreenModel_OnPhoenixLoad_m1327303011 (TournamentSelectScreenModel_t2189310134 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Model.Screens.TournamentSelectScreenModel::HandleScreenFlow()
extern "C"  void TournamentSelectScreenModel_HandleScreenFlow_m2422971401 (TournamentSelectScreenModel_t2189310134 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Model.Screens.TournamentSelectScreenModel::ShowTournamentDetails(System.Int32)
extern "C"  void TournamentSelectScreenModel_ShowTournamentDetails_m3905691546 (TournamentSelectScreenModel_t2189310134 * __this, int32_t ___flavorID0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Model.Screens.TournamentSelectScreenModel::OnFetchTournamentSelectScreenBegin(GSN.Skill.Requests.IWebRequest)
extern "C"  void TournamentSelectScreenModel_OnFetchTournamentSelectScreenBegin_m1266907353 (TournamentSelectScreenModel_t2189310134 * __this, Il2CppObject * ___request0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Model.Screens.TournamentSelectScreenModel::OnFetchTournamentSelectScreenComplete(GSN.Skill.Requests.IWebRequest)
extern "C"  void TournamentSelectScreenModel_OnFetchTournamentSelectScreenComplete_m1257726707 (TournamentSelectScreenModel_t2189310134 * __this, Il2CppObject * ___request0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Model.Screens.TournamentSelectScreenModel::OnFetchTournamentSelectScreenFail(GSN.Skill.Requests.IWebRequest)
extern "C"  void TournamentSelectScreenModel_OnFetchTournamentSelectScreenFail_m2782284134 (TournamentSelectScreenModel_t2189310134 * __this, Il2CppObject * ___request0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
