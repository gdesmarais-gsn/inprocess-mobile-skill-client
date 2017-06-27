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

// GSN.Skill.Games.Common.Client.Session.ReplayGameSession
struct ReplayGameSession_t2987204361;
// GSN.Skill.Games.Common.Utils.IDataSafe
struct IDataSafe_t659114092;
// GSN.Skill.Games.Common.Utils.RequestWrapper
struct RequestWrapper_t293827378;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t3943999495;
// System.String
struct String_t;
// GSN.Skill.Games.Common.Utils.RequestWrapper/requestCustomizer
struct requestCustomizer_t2087322079;
// System.IO.MemoryStream
struct MemoryStream_t743994179;
// System.Action
struct Action_t3226471752;
// GSN.Skill.Games.Common.Utils.Job
struct Job_t4002496073;
// System.Byte[]
struct ByteU5BU5D_t3397334013;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_GSN_Skill_Games_Common_Utils_Requ293827378.h"
#include "mscorlib_System_String2029220233.h"
#include "AssemblyU2DCSharp_GSN_Skill_Games_Common_Utils_Req2087322079.h"
#include "mscorlib_System_IO_MemoryStream743994179.h"
#include "AssemblyU2DCSharp_GSN_Skill_Games_Common_Utils_Game186645125.h"
#include "AssemblyU2DCSharp_GSN_Skill_Games_Common_Utils_Game783480378.h"
#include "AssemblyU2DCSharp_GSN_Skill_Games_Common_Client_Se1578491093.h"
#include "AssemblyU2DCSharp_GSN_Skill_Games_Common_Client_Se3113334386.h"
#include "System_Core_System_Action3226471752.h"

// System.Void GSN.Skill.Games.Common.Client.Session.ReplayGameSession::.ctor()
extern "C"  void ReplayGameSession__ctor_m174636036 (ReplayGameSession_t2987204361 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GSN.Skill.Games.Common.Utils.IDataSafe GSN.Skill.Games.Common.Client.Session.ReplayGameSession::get_DataSafe()
extern "C"  Il2CppObject * ReplayGameSession_get_DataSafe_m1267256809 (ReplayGameSession_t2987204361 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Client.Session.ReplayGameSession::set_DataSafe(GSN.Skill.Games.Common.Utils.IDataSafe)
extern "C"  void ReplayGameSession_set_DataSafe_m905486768 (ReplayGameSession_t2987204361 * __this, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GSN.Skill.Games.Common.Utils.RequestWrapper GSN.Skill.Games.Common.Client.Session.ReplayGameSession::get_ErrorRequestWrapper()
extern "C"  RequestWrapper_t293827378 * ReplayGameSession_get_ErrorRequestWrapper_m2650681448 (ReplayGameSession_t2987204361 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Client.Session.ReplayGameSession::set_ErrorRequestWrapper(GSN.Skill.Games.Common.Utils.RequestWrapper)
extern "C"  void ReplayGameSession_set_ErrorRequestWrapper_m2522639035 (ReplayGameSession_t2987204361 * __this, RequestWrapper_t293827378 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.String,System.String> GSN.Skill.Games.Common.Client.Session.ReplayGameSession::get_Setup()
extern "C"  Dictionary_2_t3943999495 * ReplayGameSession_get_Setup_m1296480068 (ReplayGameSession_t2987204361 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Client.Session.ReplayGameSession::set_Setup(System.Collections.Generic.Dictionary`2<System.String,System.String>)
extern "C"  void ReplayGameSession_set_Setup_m1727100029 (ReplayGameSession_t2987204361 * __this, Dictionary_2_t3943999495 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.String,System.String> GSN.Skill.Games.Common.Client.Session.ReplayGameSession::get_Options()
extern "C"  Dictionary_2_t3943999495 * ReplayGameSession_get_Options_m4204128593 (ReplayGameSession_t2987204361 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Client.Session.ReplayGameSession::set_Options(System.Collections.Generic.Dictionary`2<System.String,System.String>)
extern "C"  void ReplayGameSession_set_Options_m1632426480 (ReplayGameSession_t2987204361 * __this, Dictionary_2_t3943999495 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GSN.Skill.Games.Common.Client.Session.ReplayGameSession::get_TournamentId()
extern "C"  String_t* ReplayGameSession_get_TournamentId_m1069505462 (ReplayGameSession_t2987204361 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Client.Session.ReplayGameSession::set_TournamentId(System.String)
extern "C"  void ReplayGameSession_set_TournamentId_m930748887 (ReplayGameSession_t2987204361 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GSN.Skill.Games.Common.Client.Session.ReplayGameSession::get_GameId()
extern "C"  String_t* ReplayGameSession_get_GameId_m3562249827 (ReplayGameSession_t2987204361 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Client.Session.ReplayGameSession::set_GameId(System.String)
extern "C"  void ReplayGameSession_set_GameId_m2521103906 (ReplayGameSession_t2987204361 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.String,System.String> GSN.Skill.Games.Common.Client.Session.ReplayGameSession::get_JoinBody()
extern "C"  Dictionary_2_t3943999495 * ReplayGameSession_get_JoinBody_m1473937655 (ReplayGameSession_t2987204361 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.String,System.String> GSN.Skill.Games.Common.Client.Session.ReplayGameSession::get_JoinRecord()
extern "C"  Dictionary_2_t3943999495 * ReplayGameSession_get_JoinRecord_m1765394660 (ReplayGameSession_t2987204361 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GSN.Skill.Games.Common.Utils.RequestWrapper/requestCustomizer GSN.Skill.Games.Common.Client.Session.ReplayGameSession::get_customizeRequest()
extern "C"  requestCustomizer_t2087322079 * ReplayGameSession_get_customizeRequest_m4053337287 (ReplayGameSession_t2987204361 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Client.Session.ReplayGameSession::set_customizeRequest(GSN.Skill.Games.Common.Utils.RequestWrapper/requestCustomizer)
extern "C"  void ReplayGameSession_set_customizeRequest_m3606101640 (ReplayGameSession_t2987204361 * __this, requestCustomizer_t2087322079 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Client.Session.ReplayGameSession::set_Url(System.String)
extern "C"  void ReplayGameSession_set_Url_m836462468 (ReplayGameSession_t2987204361 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GSN.Skill.Games.Common.Client.Session.ReplayGameSession::get_Url()
extern "C"  String_t* ReplayGameSession_get_Url_m3962249407 (ReplayGameSession_t2987204361 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.String,System.String> GSN.Skill.Games.Common.Client.Session.ReplayGameSession::get_StartBody()
extern "C"  Dictionary_2_t3943999495 * ReplayGameSession_get_StartBody_m2447033401 (ReplayGameSession_t2987204361 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.String,System.String> GSN.Skill.Games.Common.Client.Session.ReplayGameSession::get_StartRecord()
extern "C"  Dictionary_2_t3943999495 * ReplayGameSession_get_StartRecord_m484617320 (ReplayGameSession_t2987204361 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Client.Session.ReplayGameSession::set_logStream(System.IO.MemoryStream)
extern "C"  void ReplayGameSession_set_logStream_m2035587639 (ReplayGameSession_t2987204361 * __this, MemoryStream_t743994179 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.MemoryStream GSN.Skill.Games.Common.Client.Session.ReplayGameSession::get_logStream()
extern "C"  MemoryStream_t743994179 * ReplayGameSession_get_logStream_m1633811624 (ReplayGameSession_t2987204361 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GSN.Skill.Games.Common.Client.Session.ReplayGameSession::get_NotaryCompression()
extern "C"  String_t* ReplayGameSession_get_NotaryCompression_m2503722281 (ReplayGameSession_t2987204361 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Client.Session.ReplayGameSession::set_NotaryCompression(System.String)
extern "C"  void ReplayGameSession_set_NotaryCompression_m3686962020 (ReplayGameSession_t2987204361 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GSN.Skill.Games.Common.Utils.GameSessionExitMode GSN.Skill.Games.Common.Client.Session.ReplayGameSession::get_ExitMode()
extern "C"  int32_t ReplayGameSession_get_ExitMode_m2646455224 (ReplayGameSession_t2987204361 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Client.Session.ReplayGameSession::set_ExitMode(GSN.Skill.Games.Common.Utils.GameSessionExitMode)
extern "C"  void ReplayGameSession_set_ExitMode_m1719964279 (ReplayGameSession_t2987204361 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GSN.Skill.Games.Common.Utils.GameValidationResult GSN.Skill.Games.Common.Client.Session.ReplayGameSession::get_ValidationResult()
extern "C"  int32_t ReplayGameSession_get_ValidationResult_m4052547734 (ReplayGameSession_t2987204361 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Client.Session.ReplayGameSession::set_ValidationResult(GSN.Skill.Games.Common.Utils.GameValidationResult)
extern "C"  void ReplayGameSession_set_ValidationResult_m1667996441 (ReplayGameSession_t2987204361 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GSN.Skill.Games.Common.Client.Session.ReplayGameSession::get_Success()
extern "C"  bool ReplayGameSession_get_Success_m3396138110 (ReplayGameSession_t2987204361 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GSN.Skill.Games.Common.Client.Session.GameSessionBase/FailReasons GSN.Skill.Games.Common.Client.Session.ReplayGameSession::get_FailReason()
extern "C"  int32_t ReplayGameSession_get_FailReason_m1489844195 (ReplayGameSession_t2987204361 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Client.Session.ReplayGameSession::set_FailReason(GSN.Skill.Games.Common.Client.Session.GameSessionBase/FailReasons)
extern "C"  void ReplayGameSession_set_FailReason_m2280718406 (ReplayGameSession_t2987204361 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GSN.Skill.Games.Common.Client.Session.ReplayGameSession::get_Timeout()
extern "C"  int32_t ReplayGameSession_get_Timeout_m3215885618 (ReplayGameSession_t2987204361 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Client.Session.ReplayGameSession::set_Timeout(System.Int32)
extern "C"  void ReplayGameSession_set_Timeout_m1735564935 (ReplayGameSession_t2987204361 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Client.Session.ReplayGameSession::JoinTournament(GSN.Skill.Games.Common.Client.Session.GameSession/GameSetupOptions,System.Action)
extern "C"  void ReplayGameSession_JoinTournament_m1280393490 (ReplayGameSession_t2987204361 * __this, GameSetupOptions_t3113334386  ___gameSetupOptions0, Action_t3226471752 * ___doneAction1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Client.Session.ReplayGameSession::StartGame(System.Action)
extern "C"  void ReplayGameSession_StartGame_m2663080639 (ReplayGameSession_t2987204361 * __this, Action_t3226471752 * ___doneAction0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Client.Session.ReplayGameSession::Validate(System.Action)
extern "C"  void ReplayGameSession_Validate_m4200714327 (ReplayGameSession_t2987204361 * __this, Action_t3226471752 * ___doneAction0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GSN.Skill.Games.Common.Utils.Job GSN.Skill.Games.Common.Client.Session.ReplayGameSession::get_ValidateJob()
extern "C"  Job_t4002496073 * ReplayGameSession_get_ValidateJob_m2374798476 (ReplayGameSession_t2987204361 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Client.Session.ReplayGameSession::EndBullish()
extern "C"  void ReplayGameSession_EndBullish_m3903041126 (ReplayGameSession_t2987204361 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Client.Session.ReplayGameSession::WriteGameLogToFile(System.String,System.Boolean)
extern "C"  void ReplayGameSession_WriteGameLogToFile_m2612369643 (ReplayGameSession_t2987204361 * __this, String_t* ___fn0, bool ___text1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Client.Session.ReplayGameSession::AbortValidate()
extern "C"  void ReplayGameSession_AbortValidate_m2343967272 (ReplayGameSession_t2987204361 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.String,System.String> GSN.Skill.Games.Common.Client.Session.ReplayGameSession::get_joinRecord()
extern "C"  Dictionary_2_t3943999495 * ReplayGameSession_get_joinRecord_m584293572 (ReplayGameSession_t2987204361 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.String,System.String> GSN.Skill.Games.Common.Client.Session.ReplayGameSession::get_startRecord()
extern "C"  Dictionary_2_t3943999495 * ReplayGameSession_get_startRecord_m546933832 (ReplayGameSession_t2987204361 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Client.Session.ReplayGameSession::AddRecord(System.String,System.Byte[],System.Int32)
extern "C"  void ReplayGameSession_AddRecord_m2528311656 (ReplayGameSession_t2987204361 * __this, String_t* ___type0, ByteU5BU5D_t3397334013* ___s1, int32_t ___gameTime2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Client.Session.ReplayGameSession::AddData(System.Byte[])
extern "C"  void ReplayGameSession_AddData_m322761858 (ReplayGameSession_t2987204361 * __this, ByteU5BU5D_t3397334013* ___data0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Client.Session.ReplayGameSession::Notarize()
extern "C"  void ReplayGameSession_Notarize_m600117458 (ReplayGameSession_t2987204361 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Client.Session.ReplayGameSession::Abandon()
extern "C"  void ReplayGameSession_Abandon_m1497460709 (ReplayGameSession_t2987204361 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
