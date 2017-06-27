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

// GSN.Skill.TriPeaks.Requests.Game.TriPeaksStartGameRequestData
struct TriPeaksStartGameRequestData_t2523146402;
// System.String
struct String_t;
// Newtonsoft.Json.Linq.JContainer
struct JContainer_t3538280255;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_GSN_Skill_TriPeaks_Requests_Game1272356965.h"
#include "mscorlib_System_String2029220233.h"

// System.Void GSN.Skill.TriPeaks.Requests.Game.TriPeaksStartGameRequestData::.ctor()
extern "C"  void TriPeaksStartGameRequestData__ctor_m3263518245 (TriPeaksStartGameRequestData_t2523146402 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GSN.Skill.TriPeaks.Requests.Game.TriPeaksStartGameData GSN.Skill.TriPeaks.Requests.Game.TriPeaksStartGameRequestData::get_Response()
extern "C"  TriPeaksStartGameData_t1272356965  TriPeaksStartGameRequestData_get_Response_m3806587887 (TriPeaksStartGameRequestData_t2523146402 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.TriPeaks.Requests.Game.TriPeaksStartGameRequestData::set_Response(GSN.Skill.TriPeaks.Requests.Game.TriPeaksStartGameData)
extern "C"  void TriPeaksStartGameRequestData_set_Response_m3600906092 (TriPeaksStartGameRequestData_t2523146402 * __this, TriPeaksStartGameData_t1272356965  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.TriPeaks.Requests.Game.TriPeaksStartGameRequestData::SetTriPeaksStartGameData(System.String,System.String,System.String,System.String,System.String)
extern "C"  void TriPeaksStartGameRequestData_SetTriPeaksStartGameData_m2873980720 (TriPeaksStartGameRequestData_t2523146402 * __this, String_t* ___txSession_id0, String_t* ___client_id1, String_t* ___user_id2, String_t* ___game_id3, String_t* ___tournament_id4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Linq.JContainer GSN.Skill.TriPeaks.Requests.Game.TriPeaksStartGameRequestData::get_RequestBody()
extern "C"  JContainer_t3538280255 * TriPeaksStartGameRequestData_get_RequestBody_m4134682036 (TriPeaksStartGameRequestData_t2523146402 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
