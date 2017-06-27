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

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "AssemblyU2DCSharp_GSN_Skill_Games_Common_VersionIn2993854658.h"

// System.Void GSN.Skill.Games.Common.VersionInfo::AddGameVersion(System.String,System.String,System.String,System.String)
extern "C"  void VersionInfo_AddGameVersion_m61449093 (Il2CppObject * __this /* static, unused */, String_t* ___gameKey0, String_t* ___gameVersion1, String_t* ___sDKVersion2, String_t* ___buildNumber3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GSN.Skill.Games.Common.VersionInfo/GameVersionInfo GSN.Skill.Games.Common.VersionInfo::GetGameVersion(System.String)
extern "C"  GameVersionInfo_t2993854658  VersionInfo_GetGameVersion_m2401145945 (Il2CppObject * __this /* static, unused */, String_t* ___gameKey0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.VersionInfo::.cctor()
extern "C"  void VersionInfo__cctor_m3286010087 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
