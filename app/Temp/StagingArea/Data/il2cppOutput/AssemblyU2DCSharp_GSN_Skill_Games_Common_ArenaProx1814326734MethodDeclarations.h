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

// GSN.Skill.Games.Common.ArenaProxy/MockArenaProxy
struct MockArenaProxy_t1814326734;
// GSN.Skill.Games.Common.ITournamentSessionData
struct ITournamentSessionData_t3594880832;
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_t309261261;
// GSN.Skill.Games.Common.Utils.IGameSession
struct IGameSession_t348500823;
// GSN.Skill.Games.Common.Utils.IDataSafe
struct IDataSafe_t659114092;
// System.Action
struct Action_t3226471752;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "System_Core_System_Action3226471752.h"

// System.Void GSN.Skill.Games.Common.ArenaProxy/MockArenaProxy::.ctor()
extern "C"  void MockArenaProxy__ctor_m3161199293 (MockArenaProxy_t1814326734 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.ArenaProxy/MockArenaProxy::SetClientScore(System.Int32)
extern "C"  void MockArenaProxy_SetClientScore_m3699836159 (MockArenaProxy_t1814326734 * __this, int32_t ___score0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GSN.Skill.Games.Common.ArenaProxy/MockArenaProxy::get_ValidationIsEnabled()
extern "C"  bool MockArenaProxy_get_ValidationIsEnabled_m572697536 (MockArenaProxy_t1814326734 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GSN.Skill.Games.Common.ITournamentSessionData GSN.Skill.Games.Common.ArenaProxy/MockArenaProxy::get_TournamentSessionData()
extern "C"  Il2CppObject * MockArenaProxy_get_TournamentSessionData_m920556809 (MockArenaProxy_t1814326734 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.ArenaProxy/MockArenaProxy::SendEvent(System.String,System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern "C"  void MockArenaProxy_SendEvent_m3887728852 (MockArenaProxy_t1814326734 * __this, String_t* ___eventName0, Dictionary_2_t309261261 * ___data1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GSN.Skill.Games.Common.Utils.IGameSession GSN.Skill.Games.Common.ArenaProxy/MockArenaProxy::get_gameSession()
extern "C"  Il2CppObject * MockArenaProxy_get_gameSession_m715454440 (MockArenaProxy_t1814326734 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.ArenaProxy/MockArenaProxy::set_gameSession(GSN.Skill.Games.Common.Utils.IGameSession)
extern "C"  void MockArenaProxy_set_gameSession_m1041856435 (MockArenaProxy_t1814326734 * __this, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GSN.Skill.Games.Common.Utils.IDataSafe GSN.Skill.Games.Common.ArenaProxy/MockArenaProxy::get_dataSafe()
extern "C"  Il2CppObject * MockArenaProxy_get_dataSafe_m1516811004 (MockArenaProxy_t1814326734 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.ArenaProxy/MockArenaProxy::set_dataSafe(GSN.Skill.Games.Common.Utils.IDataSafe)
extern "C"  void MockArenaProxy_set_dataSafe_m526262411 (MockArenaProxy_t1814326734 * __this, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.ArenaProxy/MockArenaProxy::set_ReturnFromGameAction(System.Action)
extern "C"  void MockArenaProxy_set_ReturnFromGameAction_m1411247837 (MockArenaProxy_t1814326734 * __this, Action_t3226471752 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.ArenaProxy/MockArenaProxy::ReturnFromGame()
extern "C"  void MockArenaProxy_ReturnFromGame_m767886643 (MockArenaProxy_t1814326734 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
