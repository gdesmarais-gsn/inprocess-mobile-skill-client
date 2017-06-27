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

// System.String
struct String_t;
// GSN.Skill.Phoenix.Model.Data.GameListData
struct GameListData_t2961126766;
// GSN.Skill.Phoenix.Utils.ITournamentResultData
struct ITournamentResultData_t715701521;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_GSN_Skill_Phoenix_Requests_Tourna124904856.h"
#include "mscorlib_System_String2029220233.h"
#include "AssemblyU2DCSharp_GSN_Skill_Phoenix_Model_Data_Gam2961126766.h"
#include "AssemblyU2DCSharp_GSN_Skill_Phoenix_TournamentHist2695971443.h"

// GSN.Skill.Phoenix.Requests.Tournament.GameHistoryData/TournamentState GSN.Skill.Phoenix.Utils.TournamentUtilities::GetTournamentState(System.Boolean,System.Boolean,System.String,System.Int32,GSN.Skill.Phoenix.Model.Data.GameListData)
extern "C"  int32_t TournamentUtilities_GetTournamentState_m1117137908 (Il2CppObject * __this /* static, unused */, bool ___playerWon0, bool ___unfinished1, String_t* ___winnerDeclared2, int32_t ___gameID3, GameListData_t2961126766 * ___gameListData4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GSN.Skill.Phoenix.Utils.TournamentUtilities::IsBuyout(System.String)
extern "C"  bool TournamentUtilities_IsBuyout_m4077259237 (Il2CppObject * __this /* static, unused */, String_t* ___winnerDeclared0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GSN.Skill.Phoenix.TournamentHistoryData GSN.Skill.Phoenix.Utils.TournamentUtilities::BuildTournamentHistoryData(GSN.Skill.Phoenix.Model.Data.GameListData,GSN.Skill.Phoenix.Utils.ITournamentResultData)
extern "C"  TournamentHistoryData_t2695971443  TournamentUtilities_BuildTournamentHistoryData_m1866451443 (Il2CppObject * __this /* static, unused */, GameListData_t2961126766 * ___gameListData0, Il2CppObject * ___tournament1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Utils.TournamentUtilities::.cctor()
extern "C"  void TournamentUtilities__cctor_m1438953032 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
