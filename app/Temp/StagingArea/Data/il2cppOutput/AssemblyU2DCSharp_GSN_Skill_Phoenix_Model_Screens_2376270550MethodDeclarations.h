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

// GSN.Skill.Phoenix.Model.Screens.HomeScreenModel
struct HomeScreenModel_t2376270550;
// GSN.Skill.Phoenix.Model.Data.GameListData
struct GameListData_t2961126766;
// GSN.Skill.Requests.IWebRequest
struct IWebRequest_t216132554;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_GSN_Skill_Phoenix_Model_Data_Gam2961126766.h"

// System.Void GSN.Skill.Phoenix.Model.Screens.HomeScreenModel::.ctor(GSN.Skill.Phoenix.Model.Data.GameListData)
extern "C"  void HomeScreenModel__ctor_m2822894142 (HomeScreenModel_t2376270550 * __this, GameListData_t2961126766 * ___gameListData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Model.Screens.HomeScreenModel::OnPhoenixLoad()
extern "C"  void HomeScreenModel_OnPhoenixLoad_m2314046817 (HomeScreenModel_t2376270550 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Model.Screens.HomeScreenModel::HandleScreenFlow()
extern "C"  void HomeScreenModel_HandleScreenFlow_m3510199115 (HomeScreenModel_t2376270550 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Model.Screens.HomeScreenModel::DispatchHomeScreenEvents()
extern "C"  void HomeScreenModel_DispatchHomeScreenEvents_m682852439 (HomeScreenModel_t2376270550 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Model.Screens.HomeScreenModel::OnFetchHomeScreenBegin(GSN.Skill.Requests.IWebRequest)
extern "C"  void HomeScreenModel_OnFetchHomeScreenBegin_m2694895257 (HomeScreenModel_t2376270550 * __this, Il2CppObject * ___request0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Model.Screens.HomeScreenModel::OnFetchHomeScreenComplete(GSN.Skill.Requests.IWebRequest)
extern "C"  void HomeScreenModel_OnFetchHomeScreenComplete_m2429634611 (HomeScreenModel_t2376270550 * __this, Il2CppObject * ___request0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Model.Screens.HomeScreenModel::OnFetchHomeScreenFail(GSN.Skill.Requests.IWebRequest)
extern "C"  void HomeScreenModel_OnFetchHomeScreenFail_m948024230 (HomeScreenModel_t2376270550 * __this, Il2CppObject * ___request0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
