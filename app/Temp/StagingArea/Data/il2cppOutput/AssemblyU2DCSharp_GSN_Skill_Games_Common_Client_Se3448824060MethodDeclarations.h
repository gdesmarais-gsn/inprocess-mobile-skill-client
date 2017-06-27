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

// GSN.Skill.Games.Common.Client.Session.GameSession
struct GameSession_t3448824060;
// GSN.Skill.Games.Common.Utils.RequestWrapper
struct RequestWrapper_t293827378;
// GSN.Skill.Games.Common.Utils.IDataSafe
struct IDataSafe_t659114092;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t3943999495;
// System.String
struct String_t;
// GSN.Skill.Games.Common.Utils.RequestWrapper/requestCustomizer
struct requestCustomizer_t2087322079;
// System.Action
struct Action_t3226471752;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// GSN.Skill.Games.Common.Utils.Job
struct Job_t4002496073;
// GSN.Skill.Games.Common.Utils.FakeWebResponse
struct FakeWebResponse_t2637957952;
// System.Net.WebRequest
struct WebRequest_t1365124353;
// System.IO.Stream
struct Stream_t3255436806;
// System.Action`1<System.Collections.Generic.Dictionary`2<System.String,System.String>>
struct Action_1_t3745798877;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_GSN_Skill_Games_Common_Utils_Requ293827378.h"
#include "AssemblyU2DCSharp_GSN_Skill_Games_Common_Client_Se1578491093.h"
#include "mscorlib_System_String2029220233.h"
#include "AssemblyU2DCSharp_GSN_Skill_Games_Common_Utils_Req2087322079.h"
#include "AssemblyU2DCSharp_GSN_Skill_Games_Common_Utils_Game186645125.h"
#include "AssemblyU2DCSharp_GSN_Skill_Games_Common_Utils_Game783480378.h"
#include "AssemblyU2DCSharp_GSN_Skill_Games_Common_Client_Se3113334386.h"
#include "System_Core_System_Action3226471752.h"
#include "System_System_Net_WebRequest1365124353.h"
#include "mscorlib_System_IO_Stream3255436806.h"

// System.Void GSN.Skill.Games.Common.Client.Session.GameSession::.ctor()
extern "C"  void GameSession__ctor_m1450705715 (GameSession_t3448824060 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GSN.Skill.Games.Common.Utils.RequestWrapper GSN.Skill.Games.Common.Client.Session.GameSession::get_ErrorRequestWrapper()
extern "C"  RequestWrapper_t293827378 * GameSession_get_ErrorRequestWrapper_m3311876987 (GameSession_t3448824060 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Client.Session.GameSession::set_ErrorRequestWrapper(GSN.Skill.Games.Common.Utils.RequestWrapper)
extern "C"  void GameSession_set_ErrorRequestWrapper_m1009867564 (GameSession_t3448824060 * __this, RequestWrapper_t293827378 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GSN.Skill.Games.Common.Client.Session.GameSession::get_Done()
extern "C"  bool GameSession_get_Done_m1048134260 (GameSession_t3448824060 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Client.Session.GameSession::set_Done(System.Boolean)
extern "C"  void GameSession_set_Done_m248817661 (GameSession_t3448824060 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GSN.Skill.Games.Common.Utils.IDataSafe GSN.Skill.Games.Common.Client.Session.GameSession::get_DataSafe()
extern "C"  Il2CppObject * GameSession_get_DataSafe_m927950760 (GameSession_t3448824060 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.String,System.String> GSN.Skill.Games.Common.Client.Session.GameSession::get_JoinBody()
extern "C"  Dictionary_2_t3943999495 * GameSession_get_JoinBody_m3085988300 (GameSession_t3448824060 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Client.Session.GameSession::set_JoinBody(System.Collections.Generic.Dictionary`2<System.String,System.String>)
extern "C"  void GameSession_set_JoinBody_m1678301951 (GameSession_t3448824060 * __this, Dictionary_2_t3943999495 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.String,System.String> GSN.Skill.Games.Common.Client.Session.GameSession::get_JoinRecord()
extern "C"  Dictionary_2_t3943999495 * GameSession_get_JoinRecord_m3248453017 (GameSession_t3448824060 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Client.Session.GameSession::set_JoinRecord(System.Collections.Generic.Dictionary`2<System.String,System.String>)
extern "C"  void GameSession_set_JoinRecord_m623890222 (GameSession_t3448824060 * __this, Dictionary_2_t3943999495 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.String,System.String> GSN.Skill.Games.Common.Client.Session.GameSession::get_StartBody()
extern "C"  Dictionary_2_t3943999495 * GameSession_get_StartBody_m1090239962 (GameSession_t3448824060 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Client.Session.GameSession::set_StartBody(System.Collections.Generic.Dictionary`2<System.String,System.String>)
extern "C"  void GameSession_set_StartBody_m2669895289 (GameSession_t3448824060 * __this, Dictionary_2_t3943999495 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.String,System.String> GSN.Skill.Games.Common.Client.Session.GameSession::get_StartRecord()
extern "C"  Dictionary_2_t3943999495 * GameSession_get_StartRecord_m275863059 (GameSession_t3448824060 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Client.Session.GameSession::set_StartRecord(System.Collections.Generic.Dictionary`2<System.String,System.String>)
extern "C"  void GameSession_set_StartRecord_m853499812 (GameSession_t3448824060 * __this, Dictionary_2_t3943999495 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.String,System.String> GSN.Skill.Games.Common.Client.Session.GameSession::get_ValidationResponse()
extern "C"  Dictionary_2_t3943999495 * GameSession_get_ValidationResponse_m3731016 (GameSession_t3448824060 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Client.Session.GameSession::set_ValidationResponse(System.Collections.Generic.Dictionary`2<System.String,System.String>)
extern "C"  void GameSession_set_ValidationResponse_m440022653 (GameSession_t3448824060 * __this, Dictionary_2_t3943999495 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GSN.Skill.Games.Common.Client.Session.GameSession::get_Success()
extern "C"  bool GameSession_get_Success_m677579017 (GameSession_t3448824060 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Client.Session.GameSession::set_Success(System.Boolean)
extern "C"  void GameSession_set_Success_m122488646 (GameSession_t3448824060 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GSN.Skill.Games.Common.Client.Session.GameSessionBase/FailReasons GSN.Skill.Games.Common.Client.Session.GameSession::get_FailReason()
extern "C"  int32_t GameSession_get_FailReason_m3591554610 (GameSession_t3448824060 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Client.Session.GameSession::set_FailReason(GSN.Skill.Games.Common.Client.Session.GameSessionBase/FailReasons)
extern "C"  void GameSession_set_FailReason_m2633257875 (GameSession_t3448824060 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GSN.Skill.Games.Common.Client.Session.GameSession::get_Timeout()
extern "C"  int32_t GameSession_get_Timeout_m1500052563 (GameSession_t3448824060 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Client.Session.GameSession::set_Timeout(System.Int32)
extern "C"  void GameSession_set_Timeout_m2513372534 (GameSession_t3448824060 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Client.Session.GameSession::set_Url(System.String)
extern "C"  void GameSession_set_Url_m3097341239 (GameSession_t3448824060 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GSN.Skill.Games.Common.Client.Session.GameSession::get_Url()
extern "C"  String_t* GameSession_get_Url_m138061452 (GameSession_t3448824060 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GSN.Skill.Games.Common.Client.Session.GameSession::get_TxSessionID()
extern "C"  String_t* GameSession_get_TxSessionID_m811960764 (GameSession_t3448824060 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Client.Session.GameSession::set_TxSessionID(System.String)
extern "C"  void GameSession_set_TxSessionID_m2141760939 (GameSession_t3448824060 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GSN.Skill.Games.Common.Client.Session.GameSession::get_TournamentId()
extern "C"  String_t* GameSession_get_TournamentId_m3136620679 (GameSession_t3448824060 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Client.Session.GameSession::set_TournamentId(System.String)
extern "C"  void GameSession_set_TournamentId_m215197130 (GameSession_t3448824060 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GSN.Skill.Games.Common.Client.Session.GameSession::get_GameId()
extern "C"  String_t* GameSession_get_GameId_m330210198 (GameSession_t3448824060 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Client.Session.GameSession::set_GameId(System.String)
extern "C"  void GameSession_set_GameId_m1144084019 (GameSession_t3448824060 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GSN.Skill.Games.Common.Client.Session.GameSession::get_ClientId()
extern "C"  String_t* GameSession_get_ClientId_m3045018687 (GameSession_t3448824060 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Client.Session.GameSession::set_ClientId(System.String)
extern "C"  void GameSession_set_ClientId_m268503682 (GameSession_t3448824060 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GSN.Skill.Games.Common.Client.Session.GameSession::get_UserId()
extern "C"  String_t* GameSession_get_UserId_m2722342175 (GameSession_t3448824060 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Client.Session.GameSession::set_UserId(System.String)
extern "C"  void GameSession_set_UserId_m2695144594 (GameSession_t3448824060 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GSN.Skill.Games.Common.Client.Session.GameSession::get_NotaryCompression()
extern "C"  String_t* GameSession_get_NotaryCompression_m1790312060 (GameSession_t3448824060 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Client.Session.GameSession::set_NotaryCompression(System.String)
extern "C"  void GameSession_set_NotaryCompression_m4168118289 (GameSession_t3448824060 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GSN.Skill.Games.Common.Utils.RequestWrapper/requestCustomizer GSN.Skill.Games.Common.Client.Session.GameSession::get_customizeRequest()
extern "C"  requestCustomizer_t2087322079 * GameSession_get_customizeRequest_m1339248948 (GameSession_t3448824060 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Client.Session.GameSession::set_customizeRequest(GSN.Skill.Games.Common.Utils.RequestWrapper/requestCustomizer)
extern "C"  void GameSession_set_customizeRequest_m2904185271 (GameSession_t3448824060 * __this, requestCustomizer_t2087322079 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GSN.Skill.Games.Common.Utils.GameSessionExitMode GSN.Skill.Games.Common.Client.Session.GameSession::get_ExitMode()
extern "C"  int32_t GameSession_get_ExitMode_m1658293687 (GameSession_t3448824060 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Client.Session.GameSession::set_ExitMode(GSN.Skill.Games.Common.Utils.GameSessionExitMode)
extern "C"  void GameSession_set_ExitMode_m2730609738 (GameSession_t3448824060 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GSN.Skill.Games.Common.Utils.GameValidationResult GSN.Skill.Games.Common.Client.Session.GameSession::get_ValidationResult()
extern "C"  int32_t GameSession_get_ValidationResult_m3910100549 (GameSession_t3448824060 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Client.Session.GameSession::set_ValidationResult(GSN.Skill.Games.Common.Utils.GameValidationResult)
extern "C"  void GameSession_set_ValidationResult_m3055585638 (GameSession_t3448824060 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Client.Session.GameSession::JoinTournament(GSN.Skill.Games.Common.Client.Session.GameSession/GameSetupOptions,System.Action)
extern "C"  void GameSession_JoinTournament_m2465353315 (GameSession_t3448824060 * __this, GameSetupOptions_t3113334386  ___gameSetupOptions0, Action_t3226471752 * ___doneAction1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Client.Session.GameSession::StartGame(System.Action)
extern "C"  void GameSession_StartGame_m2907129104 (GameSession_t3448824060 * __this, Action_t3226471752 * ___doneAction0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Client.Session.GameSession::AddRecord(System.String,System.Byte[],System.Int32)
extern "C"  void GameSession_AddRecord_m2027068571 (GameSession_t3448824060 * __this, String_t* ___type0, ByteU5BU5D_t3397334013* ___s1, int32_t ___time2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Client.Session.GameSession::AddData(System.Byte[])
extern "C"  void GameSession_AddData_m4003199985 (GameSession_t3448824060 * __this, ByteU5BU5D_t3397334013* ___data0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Client.Session.GameSession::Validate(System.Action)
extern "C"  void GameSession_Validate_m3782177448 (GameSession_t3448824060 * __this, Action_t3226471752 * ___doneAction0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Client.Session.GameSession::AbortValidate()
extern "C"  void GameSession_AbortValidate_m2389715003 (GameSession_t3448824060 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Client.Session.GameSession::Retire()
extern "C"  void GameSession_Retire_m4059230776 (GameSession_t3448824060 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Client.Session.GameSession::Abandon()
extern "C"  void GameSession_Abandon_m353101750 (GameSession_t3448824060 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GSN.Skill.Games.Common.Utils.Job GSN.Skill.Games.Common.Client.Session.GameSession::get_ValidateJob()
extern "C"  Job_t4002496073 * GameSession_get_ValidateJob_m2353879661 (GameSession_t3448824060 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GSN.Skill.Games.Common.Utils.FakeWebResponse GSN.Skill.Games.Common.Client.Session.GameSession::MakeFakeJoinResponse(System.Net.WebRequest,System.Byte[],System.IO.Stream)
extern "C"  FakeWebResponse_t2637957952 * GameSession_MakeFakeJoinResponse_m659970185 (GameSession_t3448824060 * __this, WebRequest_t1365124353 * ___request0, ByteU5BU5D_t3397334013* ___postBytes1, Stream_t3255436806 * ___postStream2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GSN.Skill.Games.Common.Utils.FakeWebResponse GSN.Skill.Games.Common.Client.Session.GameSession::MakeFakeStartResponse(System.Net.WebRequest,System.Byte[],System.IO.Stream)
extern "C"  FakeWebResponse_t2637957952 * GameSession_MakeFakeStartResponse_m2459757691 (GameSession_t3448824060 * __this, WebRequest_t1365124353 * ___request0, ByteU5BU5D_t3397334013* ___postBytes1, Stream_t3255436806 * ___postStream2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Client.Session.GameSession::FetchData(System.Collections.Generic.Dictionary`2<System.String,System.String>,System.Action`1<System.Collections.Generic.Dictionary`2<System.String,System.String>>)
extern "C"  void GameSession_FetchData_m459806317 (GameSession_t3448824060 * __this, Dictionary_2_t3943999495 * ___request0, Action_1_t3745798877 * ___doneAction1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
