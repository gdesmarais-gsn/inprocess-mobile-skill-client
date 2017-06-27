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
// GSN.Skill.Games.Common.VersionInfo/GameVersionInfo
struct GameVersionInfo_t2993854658;
struct GameVersionInfo_t2993854658_marshaled_pinvoke;
struct GameVersionInfo_t2993854658_marshaled_com;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_GSN_Skill_Games_Common_VersionIn2993854658.h"
#include "mscorlib_System_String2029220233.h"

// System.Void GSN.Skill.Games.Common.VersionInfo/GameVersionInfo::.ctor(System.String,System.String,System.String)
extern "C"  void GameVersionInfo__ctor_m640757071 (GameVersionInfo_t2993854658 * __this, String_t* ___inGameVersion0, String_t* ___inSDKVersion1, String_t* ___inBuildNumber2, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct GameVersionInfo_t2993854658;
struct GameVersionInfo_t2993854658_marshaled_pinvoke;

extern "C" void GameVersionInfo_t2993854658_marshal_pinvoke(const GameVersionInfo_t2993854658& unmarshaled, GameVersionInfo_t2993854658_marshaled_pinvoke& marshaled);
extern "C" void GameVersionInfo_t2993854658_marshal_pinvoke_back(const GameVersionInfo_t2993854658_marshaled_pinvoke& marshaled, GameVersionInfo_t2993854658& unmarshaled);
extern "C" void GameVersionInfo_t2993854658_marshal_pinvoke_cleanup(GameVersionInfo_t2993854658_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct GameVersionInfo_t2993854658;
struct GameVersionInfo_t2993854658_marshaled_com;

extern "C" void GameVersionInfo_t2993854658_marshal_com(const GameVersionInfo_t2993854658& unmarshaled, GameVersionInfo_t2993854658_marshaled_com& marshaled);
extern "C" void GameVersionInfo_t2993854658_marshal_com_back(const GameVersionInfo_t2993854658_marshaled_com& marshaled, GameVersionInfo_t2993854658& unmarshaled);
extern "C" void GameVersionInfo_t2993854658_marshal_com_cleanup(GameVersionInfo_t2993854658_marshaled_com& marshaled);
