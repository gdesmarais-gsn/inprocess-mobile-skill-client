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

// GSN.Skill.Phoenix.Model.Data.GameListData
struct GameListData_t2961126766;
// GSN.Skill.Phoenix.Model.Data.StoredConfigData
struct StoredConfigData_t3100406041;
// GSN.Skill.Events.IEvent
struct IEvent_t972216987;
// GSN.Skill.Phoenix.Requests.Tournament.ListGameTypesRequestData
struct ListGameTypesRequestData_t3554081872;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_GSN_Skill_Phoenix_Model_Data_Sto3100406041.h"
#include "mscorlib_System_Nullable_1_gen106880235.h"
#include "AssemblyU2DCSharp_GSN_Skill_Phoenix_Requests_Tourn3554081872.h"

// System.Void GSN.Skill.Phoenix.Model.Data.GameListData::.ctor(GSN.Skill.Phoenix.Model.Data.StoredConfigData)
extern "C"  void GameListData__ctor_m640012544 (GameListData_t2961126766 * __this, StoredConfigData_t3100406041 * ___storedConfigData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GSN.Skill.Phoenix.Model.Data.GameListData::get_currentGameID()
extern "C"  int32_t GameListData_get_currentGameID_m1708387457 (GameListData_t2961126766 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GSN.Skill.Phoenix.Model.Data.GameListData::IsGameAvailable(System.Int32)
extern "C"  bool GameListData_IsGameAvailable_m825494568 (GameListData_t2961126766 * __this, int32_t ___gametype_id0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Nullable`1<GSN.Skill.Phoenix.Model.Data.GameData> GSN.Skill.Phoenix.Model.Data.GameListData::GetGameData(System.Int32)
extern "C"  Nullable_1_t106880235  GameListData_GetGameData_m4063735396 (GameListData_t2961126766 * __this, int32_t ___gameID0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Nullable`1<GSN.Skill.Phoenix.Model.Data.GameData> GSN.Skill.Phoenix.Model.Data.GameListData::GetCurrentGame()
extern "C"  Nullable_1_t106880235  GameListData_GetCurrentGame_m2395287460 (GameListData_t2961126766 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Model.Data.GameListData::SetCurrentGame(System.Int32)
extern "C"  void GameListData_SetCurrentGame_m3827565066 (GameListData_t2961126766 * __this, int32_t ___gameID0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Model.Data.GameListData::NotifySelectedGame()
extern "C"  void GameListData_NotifySelectedGame_m3656816498 (GameListData_t2961126766 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Model.Data.GameListData::OnUnsupportedGameListUpdated(GSN.Skill.Events.IEvent)
extern "C"  void GameListData_OnUnsupportedGameListUpdated_m1911882242 (GameListData_t2961126766 * __this, Il2CppObject * ___evt0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Model.Data.GameListData::OnGameListDataUpdate(GSN.Skill.Phoenix.Requests.Tournament.ListGameTypesRequestData)
extern "C"  void GameListData_OnGameListDataUpdate_m2748720341 (GameListData_t2961126766 * __this, ListGameTypesRequestData_t3554081872 * ___listGameTypes0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Model.Data.GameListData::ValidateCurrentGame()
extern "C"  void GameListData_ValidateCurrentGame_m2655325933 (GameListData_t2961126766 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
