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

// GSN.Skill.Games.Common.Client.GameAnalyticSender
struct GameAnalyticSender_t2237101310;
// System.Action`1<System.String>
struct Action_1_t1831019615;
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_t309261261;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"

// System.Void GSN.Skill.Games.Common.Client.GameAnalyticSender::.ctor(System.Action`1<System.String>)
extern "C"  void GameAnalyticSender__ctor_m1936976435 (GameAnalyticSender_t2237101310 * __this, Action_1_t1831019615 * ___logFunction0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GSN.Skill.Games.Common.Client.GameAnalyticSender GSN.Skill.Games.Common.Client.GameAnalyticSender::get_instance()
extern "C"  GameAnalyticSender_t2237101310 * GameAnalyticSender_get_instance_m2342713666 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Client.GameAnalyticSender::SendTabSelected(System.String,System.String,System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern "C"  void GameAnalyticSender_SendTabSelected_m1583506588 (GameAnalyticSender_t2237101310 * __this, String_t* ___from0, String_t* ___to1, Dictionary_2_t309261261 * ___other2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Client.GameAnalyticSender::SendUserGameSettings(System.String,System.String,System.String,System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern "C"  void GameAnalyticSender_SendUserGameSettings_m3972108682 (GameAnalyticSender_t2237101310 * __this, String_t* ___type0, String_t* ___from1, String_t* ___to2, Dictionary_2_t309261261 * ___other3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Client.GameAnalyticSender::SendLevelStart(System.Int32,System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern "C"  void GameAnalyticSender_SendLevelStart_m1144849551 (GameAnalyticSender_t2237101310 * __this, int32_t ___levelID0, Dictionary_2_t309261261 * ___other1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Client.GameAnalyticSender::SendStartScreenLoad(System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern "C"  void GameAnalyticSender_SendStartScreenLoad_m3790621978 (GameAnalyticSender_t2237101310 * __this, Dictionary_2_t309261261 * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Client.GameAnalyticSender::SendStartScreenExit(System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern "C"  void GameAnalyticSender_SendStartScreenExit_m2102062342 (GameAnalyticSender_t2237101310 * __this, Dictionary_2_t309261261 * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Client.GameAnalyticSender::SendGameStart(System.String,System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern "C"  void GameAnalyticSender_SendGameStart_m2846336132 (GameAnalyticSender_t2237101310 * __this, String_t* ___reason0, Dictionary_2_t309261261 * ___other1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Client.GameAnalyticSender::SendLevelEnd(System.Int32,System.Int32,System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern "C"  void GameAnalyticSender_SendLevelEnd_m3039981905 (GameAnalyticSender_t2237101310 * __this, int32_t ___endReason0, int32_t ___totalScore1, Dictionary_2_t309261261 * ___other2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Client.GameAnalyticSender::SendGameEnd(System.Int32,System.Int32,System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern "C"  void GameAnalyticSender_SendGameEnd_m1160727637 (GameAnalyticSender_t2237101310 * __this, int32_t ___endReason0, int32_t ___totalScore1, Dictionary_2_t309261261 * ___other2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GSN.Skill.Games.Common.Client.GameAnalyticSender::getLevelEndReason(System.Int32)
extern "C"  String_t* GameAnalyticSender_getLevelEndReason_m698202962 (GameAnalyticSender_t2237101310 * __this, int32_t ___reason0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GSN.Skill.Games.Common.Client.GameAnalyticSender::getEndGameReason(System.Int32)
extern "C"  String_t* GameAnalyticSender_getEndGameReason_m1835750516 (GameAnalyticSender_t2237101310 * __this, int32_t ___reason0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Client.GameAnalyticSender::SendCheckpoint(System.String,System.String,System.Int32,System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern "C"  void GameAnalyticSender_SendCheckpoint_m2850837435 (GameAnalyticSender_t2237101310 * __this, String_t* ___category0, String_t* ___subcategory1, int32_t ___step2, Dictionary_2_t309261261 * ___other3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Client.GameAnalyticSender::SendGameplayEvent(System.String,System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern "C"  void GameAnalyticSender_SendGameplayEvent_m866337726 (GameAnalyticSender_t2237101310 * __this, String_t* ___subtype0, Dictionary_2_t309261261 * ___other1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
