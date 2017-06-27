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

// GSN.Skill.Games.Common.Model.GameModelBase
struct GameModelBase_t2215752692;
// System.Type[]
struct TypeU5BU5D_t1664964607;
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t3943999495;
// System.Action`1<System.Collections.Generic.Dictionary`2<System.String,System.String>>
struct Action_1_t3745798877;
// GSN.Skill.Games.Common.Tasks.GsnScheduler
struct GsnScheduler_t1299811741;
// GSN.Skill.Games.Common.Events.IInputMessage
struct IInputMessage_t3660278550;
// GSN.Skill.Games.Common.Utils.IDataSafe
struct IDataSafe_t659114092;
// GSN.Skill.Games.Common.Utils.GsnRational
struct GsnRational_t1635961804;
// Newtonsoft.Json.Linq.JToken
struct JToken_t2552644013;
// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,Newtonsoft.Json.Linq.JToken>>
struct List_1_t1593889629;
// System.IO.MemoryStream
struct MemoryStream_t743994179;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "AssemblyU2DCSharp_GSN_Skill_Games_Common_Utils_Gsn1635961804.h"
#include "Json_NET_Newtonsoft_Json_Linq_JToken2552644013.h"
#include "mscorlib_System_IO_MemoryStream743994179.h"

// System.Void GSN.Skill.Games.Common.Model.GameModelBase::.ctor(System.Type[],System.Type[],System.String,System.String)
extern "C"  void GameModelBase__ctor_m1598787893 (GameModelBase_t2215752692 * __this, TypeU5BU5D_t1664964607* ___inputTypeEnums0, TypeU5BU5D_t1664964607* ___eventTypeEnums1, String_t* ___version2, String_t* ___dataPath3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Model.GameModelBase::FetchData(System.Collections.Generic.Dictionary`2<System.String,System.String>,System.Action`1<System.Collections.Generic.Dictionary`2<System.String,System.String>>)
extern "C"  void GameModelBase_FetchData_m2668921515 (GameModelBase_t2215752692 * __this, Dictionary_2_t3943999495 * ___request0, Action_1_t3745798877 * ___doneAction1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GSN.Skill.Games.Common.Tasks.GsnScheduler GSN.Skill.Games.Common.Model.GameModelBase::CreateScheduler()
extern "C"  GsnScheduler_t1299811741 * GameModelBase_CreateScheduler_m539947811 (GameModelBase_t2215752692 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GSN.Skill.Games.Common.Model.GameModelBase::get_Version()
extern "C"  String_t* GameModelBase_get_Version_m3046475031 (GameModelBase_t2215752692 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Model.GameModelBase::Receive(GSN.Skill.Games.Common.Events.IInputMessage,System.Int64)
extern "C"  void GameModelBase_Receive_m1214361174 (GameModelBase_t2215752692 * __this, Il2CppObject * ___msg0, int64_t ___gameTimeMS1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Model.GameModelBase::RunToOrFreeze(System.Int32)
extern "C"  void GameModelBase_RunToOrFreeze_m237969230 (GameModelBase_t2215752692 * __this, int32_t ___time0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Model.GameModelBase::HandleMessage(GSN.Skill.Games.Common.Events.IInputMessage,System.Int32)
extern "C"  void GameModelBase_HandleMessage_m3142165667 (GameModelBase_t2215752692 * __this, Il2CppObject * ___msg0, int32_t ___gameTimeMS1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Model.GameModelBase::endGameNow()
extern "C"  void GameModelBase_endGameNow_m2382321504 (GameModelBase_t2215752692 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Model.GameModelBase::Update(System.Int64)
extern "C"  void GameModelBase_Update_m68243268 (GameModelBase_t2215752692 * __this, int64_t ___sessionTime0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Model.GameModelBase::RollOneFrame(System.Int32)
extern "C"  void GameModelBase_RollOneFrame_m3379737550 (GameModelBase_t2215752692 * __this, int32_t ___rftime0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Model.GameModelBase::set_endGameReason(System.Int32)
extern "C"  void GameModelBase_set_endGameReason_m869291948 (GameModelBase_t2215752692 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GSN.Skill.Games.Common.Model.GameModelBase::get_endGameReason()
extern "C"  int32_t GameModelBase_get_endGameReason_m2089969159 (GameModelBase_t2215752692 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Model.GameModelBase::OnGameSettled()
extern "C"  void GameModelBase_OnGameSettled_m2453798985 (GameModelBase_t2215752692 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Model.GameModelBase::NormalEndGame()
extern "C"  void GameModelBase_NormalEndGame_m2471369851 (GameModelBase_t2215752692 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GSN.Skill.Games.Common.Model.GameModelBase::CoreServer()
extern "C"  int32_t GameModelBase_CoreServer_m829123217 (GameModelBase_t2215752692 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Model.GameModelBase::Configure(System.Collections.Generic.Dictionary`2<System.String,System.String>,System.Collections.Generic.Dictionary`2<System.String,System.String>,GSN.Skill.Games.Common.Utils.IDataSafe)
extern "C"  void GameModelBase_Configure_m389767591 (GameModelBase_t2215752692 * __this, Dictionary_2_t3943999495 * ___startRecord0, Dictionary_2_t3943999495 * ___joinRecord1, Il2CppObject * ___dataSafe2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GSN.Skill.Games.Common.Model.GameModelBase::AddRollForwardTask()
extern "C"  int32_t GameModelBase_AddRollForwardTask_m2413594513 (GameModelBase_t2215752692 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Model.GameModelBase::GetFrameDuration(GSN.Skill.Games.Common.Utils.GsnRational)
extern "C"  void GameModelBase_GetFrameDuration_m2504462890 (GameModelBase_t2215752692 * __this, GsnRational_t1635961804 * ___fd0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GSN.Skill.Games.Common.Model.GameModelBase::GetFrameRate()
extern "C"  int32_t GameModelBase_GetFrameRate_m1203287832 (GameModelBase_t2215752692 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GSN.Skill.Games.Common.Model.GameModelBase::GetStateTime()
extern "C"  int32_t GameModelBase_GetStateTime_m1319221827 (GameModelBase_t2215752692 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Model.GameModelBase::SetupClock(System.Int32,System.Int32)
extern "C"  void GameModelBase_SetupClock_m4169654380 (GameModelBase_t2215752692 * __this, int32_t ___secs0, int32_t ___timeStep1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Model.GameModelBase::ResumeClock(System.Int32)
extern "C"  void GameModelBase_ResumeClock_m2280686517 (GameModelBase_t2215752692 * __this, int32_t ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Model.GameModelBase::PauseClock(System.Int32)
extern "C"  void GameModelBase_PauseClock_m3846834476 (GameModelBase_t2215752692 * __this, int32_t ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Model.GameModelBase::OnTimeExpired(System.Int32)
extern "C"  void GameModelBase_OnTimeExpired_m3191364231 (GameModelBase_t2215752692 * __this, int32_t ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Model.GameModelBase::OnIdle(System.UInt32)
extern "C"  void GameModelBase_OnIdle_m4205655152 (GameModelBase_t2215752692 * __this, uint32_t ___lastRunTime0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Model.GameModelBase::RewindTasks(System.Int32,System.Int32)
extern "C"  void GameModelBase_RewindTasks_m1876859038 (GameModelBase_t2215752692 * __this, int32_t ___stateTimeMS0, int32_t ___clockTaskAccumulatedPauseTime1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Model.GameModelBase::CancelEndGame()
extern "C"  void GameModelBase_CancelEndGame_m2921604528 (GameModelBase_t2215752692 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Model.GameModelBase::ReportMetric(System.String,Newtonsoft.Json.Linq.JToken)
extern "C"  void GameModelBase_ReportMetric_m3934837883 (GameModelBase_t2215752692 * __this, String_t* ___key0, JToken_t2552644013 * ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GSN.Skill.Games.Common.Model.GameModelBase::get_clockPaused()
extern "C"  bool GameModelBase_get_clockPaused_m2068519408 (GameModelBase_t2215752692 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GSN.Skill.Games.Common.Model.GameModelBase::get_msLeft()
extern "C"  int32_t GameModelBase_get_msLeft_m488099619 (GameModelBase_t2215752692 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GSN.Skill.Games.Common.Model.GameModelBase::get_secsLeft()
extern "C"  int32_t GameModelBase_get_secsLeft_m3705755687 (GameModelBase_t2215752692 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GSN.Skill.Games.Common.Model.GameModelBase::get_isGameOver()
extern "C"  bool GameModelBase_get_isGameOver_m2317325294 (GameModelBase_t2215752692 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GSN.Skill.Games.Common.Model.GameModelBase::get_wakeUpTime()
extern "C"  int32_t GameModelBase_get_wakeUpTime_m4041274314 (GameModelBase_t2215752692 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,Newtonsoft.Json.Linq.JToken>> GSN.Skill.Games.Common.Model.GameModelBase::HandleGameLog(System.IO.MemoryStream,System.Int32&)
extern "C"  List_1_t1593889629 * GameModelBase_HandleGameLog_m1963425346 (GameModelBase_t2215752692 * __this, MemoryStream_t743994179 * ___gameLog0, int32_t* ___excessRealTime1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Model.GameModelBase::.cctor()
extern "C"  void GameModelBase__cctor_m1610472624 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
