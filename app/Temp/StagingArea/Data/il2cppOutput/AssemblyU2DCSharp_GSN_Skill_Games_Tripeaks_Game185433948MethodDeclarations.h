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

// GSN.Skill.Games.Tripeaks.Game
struct Game_t185433948;
// System.String
struct String_t;
// GSN.Skill.Games.Common.Model.GameModelBase
struct GameModelBase_t2215752692;
// GSN.Skill.Games.Common.Client.Game.ViewBase
struct ViewBase_t3608972958;
// GSN.Skill.Games.Common.Client.Game.ControllerBase
struct ControllerBase_t4247623737;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"

// System.Void GSN.Skill.Games.Tripeaks.Game::.ctor()
extern "C"  void Game__ctor_m616942188 (Game_t185433948 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Tripeaks.Game::Awake()
extern "C"  void Game_Awake_m724561573 (Game_t185433948 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GSN.Skill.Games.Tripeaks.Game::GetGameName()
extern "C"  String_t* Game_GetGameName_m1096039972 (Game_t185433948 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GSN.Skill.Games.Common.Model.GameModelBase GSN.Skill.Games.Tripeaks.Game::CreateModel(System.String)
extern "C"  GameModelBase_t2215752692 * Game_CreateModel_m3569831038 (Game_t185433948 * __this, String_t* ___dataPath0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GSN.Skill.Games.Common.Client.Game.ViewBase GSN.Skill.Games.Tripeaks.Game::CreateView()
extern "C"  ViewBase_t3608972958 * Game_CreateView_m883855384 (Game_t185433948 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GSN.Skill.Games.Common.Client.Game.ControllerBase GSN.Skill.Games.Tripeaks.Game::CreateController()
extern "C"  ControllerBase_t4247623737 * Game_CreateController_m3859249656 (Game_t185433948 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Tripeaks.Game::CreateAnalyticsSender()
extern "C"  void Game_CreateAnalyticsSender_m3916266469 (Game_t185433948 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Tripeaks.Game::CreateGameModelProxy()
extern "C"  void Game_CreateGameModelProxy_m2278845245 (Game_t185433948 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
