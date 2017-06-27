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

// GSN.Skill.Phoenix.Model.ScreenManager
struct ScreenManager_t2047768743;
// GSN.Skill.Phoenix.Model.Data.GameListData
struct GameListData_t2961126766;
// GSN.Skill.Phoenix.Model.Screens.GameHistoryScreenModel
struct GameHistoryScreenModel_t2520348191;
// GSN.Skill.Phoenix.Model.Screens.TournamentSelectScreenModel
struct TournamentSelectScreenModel_t2189310134;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_GSN_Skill_Phoenix_Model_Data_Gam2961126766.h"
#include "AssemblyU2DCSharp_GSN_Skill_Phoenix_Model_Screens_2520348191.h"
#include "AssemblyU2DCSharp_GSN_Skill_Phoenix_Model_Screens_2189310134.h"
#include "AssemblyU2DCSharp_GSN_Skill_Phoenix_Model_ScreenTy4085852022.h"

// System.Void GSN.Skill.Phoenix.Model.ScreenManager::.ctor(GSN.Skill.Phoenix.Model.Data.GameListData)
extern "C"  void ScreenManager__ctor_m4057627202 (ScreenManager_t2047768743 * __this, GameListData_t2961126766 * ___gameListData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GSN.Skill.Phoenix.Model.Screens.GameHistoryScreenModel GSN.Skill.Phoenix.Model.ScreenManager::get_gameHistoryScreen()
extern "C"  GameHistoryScreenModel_t2520348191 * ScreenManager_get_gameHistoryScreen_m3188457012 (ScreenManager_t2047768743 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Model.ScreenManager::set_gameHistoryScreen(GSN.Skill.Phoenix.Model.Screens.GameHistoryScreenModel)
extern "C"  void ScreenManager_set_gameHistoryScreen_m1172777719 (ScreenManager_t2047768743 * __this, GameHistoryScreenModel_t2520348191 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GSN.Skill.Phoenix.Model.Screens.TournamentSelectScreenModel GSN.Skill.Phoenix.Model.ScreenManager::get_tournamentSelectScreen()
extern "C"  TournamentSelectScreenModel_t2189310134 * ScreenManager_get_tournamentSelectScreen_m21606474 (ScreenManager_t2047768743 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Model.ScreenManager::set_tournamentSelectScreen(GSN.Skill.Phoenix.Model.Screens.TournamentSelectScreenModel)
extern "C"  void ScreenManager_set_tournamentSelectScreen_m1302294347 (ScreenManager_t2047768743 * __this, TournamentSelectScreenModel_t2189310134 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Model.ScreenManager::HandleMainScreenPhoenixLoad()
extern "C"  void ScreenManager_HandleMainScreenPhoenixLoad_m3283132007 (ScreenManager_t2047768743 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GSN.Skill.Phoenix.Model.ScreenType GSN.Skill.Phoenix.Model.ScreenManager::get_CurrentScreen()
extern "C"  int32_t ScreenManager_get_CurrentScreen_m1787433947 (ScreenManager_t2047768743 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Model.ScreenManager::set_CurrentScreen(GSN.Skill.Phoenix.Model.ScreenType)
extern "C"  void ScreenManager_set_CurrentScreen_m3620143986 (ScreenManager_t2047768743 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Model.ScreenManager::Reset()
extern "C"  void ScreenManager_Reset_m2254186284 (ScreenManager_t2047768743 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Model.ScreenManager::HandleSetScreen(GSN.Skill.Phoenix.Model.ScreenType)
extern "C"  void ScreenManager_HandleSetScreen_m1912554450 (ScreenManager_t2047768743 * __this, int32_t ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
