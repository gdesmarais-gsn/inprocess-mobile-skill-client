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

// GSN.Skill.Games.Common.Client.Session.MockGameSession
struct MockGameSession_t1302467586;
// System.String
struct String_t;
// GSN.Skill.Games.Common.Utils.IDataSafe
struct IDataSafe_t659114092;
// GSN.Skill.Games.Common.Utils.RequestWrapper
struct RequestWrapper_t293827378;
// GSN.Skill.Games.Common.Utils.RequestWrapper/requestCustomizer
struct requestCustomizer_t2087322079;
// System.Action
struct Action_t3226471752;
// GSN.Skill.Games.Common.Utils.Job
struct Job_t4002496073;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t3943999495;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.Object
struct Il2CppObject;
// System.Security.Cryptography.X509Certificates.X509Certificate
struct X509Certificate_t283079845;
// System.Security.Cryptography.X509Certificates.X509Chain
struct X509Chain_t777637347;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_GSN_Skill_Games_Common_Utils_Requ293827378.h"
#include "mscorlib_System_String2029220233.h"
#include "AssemblyU2DCSharp_GSN_Skill_Games_Common_Utils_Req2087322079.h"
#include "AssemblyU2DCSharp_GSN_Skill_Games_Common_Client_Se1578491093.h"
#include "AssemblyU2DCSharp_GSN_Skill_Games_Common_Utils_Game186645125.h"
#include "AssemblyU2DCSharp_GSN_Skill_Games_Common_Utils_Game783480378.h"
#include "AssemblyU2DCSharp_GSN_Skill_Games_Common_Client_Se3113334386.h"
#include "System_Core_System_Action3226471752.h"
#include "UnityEngine_UnityEngine_LogType1559732862.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_Security_Cryptography_X509Certifica283079845.h"
#include "System_System_Security_Cryptography_X509Certificate777637347.h"
#include "System_System_Net_Security_SslPolicyErrors1928581431.h"

// System.Void GSN.Skill.Games.Common.Client.Session.MockGameSession::.ctor()
extern "C"  void MockGameSession__ctor_m2543289525 (MockGameSession_t1302467586 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GSN.Skill.Games.Common.Client.Session.MockGameSession::UnixTimeStamp()
extern "C"  String_t* MockGameSession_UnixTimeStamp_m480551366 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GSN.Skill.Games.Common.Utils.IDataSafe GSN.Skill.Games.Common.Client.Session.MockGameSession::get_DataSafe()
extern "C"  Il2CppObject * MockGameSession_get_DataSafe_m1224560894 (MockGameSession_t1302467586 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GSN.Skill.Games.Common.Utils.RequestWrapper GSN.Skill.Games.Common.Client.Session.MockGameSession::get_ErrorRequestWrapper()
extern "C"  RequestWrapper_t293827378 * MockGameSession_get_ErrorRequestWrapper_m3747942729 (MockGameSession_t1302467586 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Client.Session.MockGameSession::set_ErrorRequestWrapper(GSN.Skill.Games.Common.Utils.RequestWrapper)
extern "C"  void MockGameSession_set_ErrorRequestWrapper_m2837518762 (MockGameSession_t1302467586 * __this, RequestWrapper_t293827378 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GSN.Skill.Games.Common.Client.Session.MockGameSession::get_TournamentId()
extern "C"  String_t* MockGameSession_get_TournamentId_m2589290117 (MockGameSession_t1302467586 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Client.Session.MockGameSession::set_TournamentId(System.String)
extern "C"  void MockGameSession_set_TournamentId_m1080547416 (MockGameSession_t1302467586 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GSN.Skill.Games.Common.Client.Session.MockGameSession::get_GameId()
extern "C"  String_t* MockGameSession_get_GameId_m1351391692 (MockGameSession_t1302467586 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Client.Session.MockGameSession::set_GameId(System.String)
extern "C"  void MockGameSession_set_GameId_m177719257 (MockGameSession_t1302467586 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GSN.Skill.Games.Common.Utils.RequestWrapper/requestCustomizer GSN.Skill.Games.Common.Client.Session.MockGameSession::get_customizeRequest()
extern "C"  requestCustomizer_t2087322079 * MockGameSession_get_customizeRequest_m596707422 (MockGameSession_t1302467586 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Client.Session.MockGameSession::set_customizeRequest(GSN.Skill.Games.Common.Utils.RequestWrapper/requestCustomizer)
extern "C"  void MockGameSession_set_customizeRequest_m3779922353 (MockGameSession_t1302467586 * __this, requestCustomizer_t2087322079 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Client.Session.MockGameSession::set_Url(System.String)
extern "C"  void MockGameSession_set_Url_m3952616013 (MockGameSession_t1302467586 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GSN.Skill.Games.Common.Client.Session.MockGameSession::get_Url()
extern "C"  String_t* MockGameSession_get_Url_m208570694 (MockGameSession_t1302467586 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GSN.Skill.Games.Common.Client.Session.MockGameSession::get_NotaryCompression()
extern "C"  String_t* MockGameSession_get_NotaryCompression_m76247410 (MockGameSession_t1302467586 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Client.Session.MockGameSession::set_NotaryCompression(System.String)
extern "C"  void MockGameSession_set_NotaryCompression_m2066511083 (MockGameSession_t1302467586 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GSN.Skill.Games.Common.Client.Session.MockGameSession::get_Timeout()
extern "C"  int32_t MockGameSession_get_Timeout_m3497309885 (MockGameSession_t1302467586 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Client.Session.MockGameSession::set_Timeout(System.Int32)
extern "C"  void MockGameSession_set_Timeout_m2011611640 (MockGameSession_t1302467586 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GSN.Skill.Games.Common.Client.Session.MockGameSession::get_Success()
extern "C"  bool MockGameSession_get_Success_m1512350747 (MockGameSession_t1302467586 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Client.Session.MockGameSession::set_Success(System.Boolean)
extern "C"  void MockGameSession_set_Success_m2566462144 (MockGameSession_t1302467586 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GSN.Skill.Games.Common.Client.Session.GameSessionBase/FailReasons GSN.Skill.Games.Common.Client.Session.MockGameSession::get_FailReason()
extern "C"  int32_t MockGameSession_get_FailReason_m3121022396 (MockGameSession_t1302467586 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Client.Session.MockGameSession::set_FailReason(GSN.Skill.Games.Common.Client.Session.GameSessionBase/FailReasons)
extern "C"  void MockGameSession_set_FailReason_m2256271021 (MockGameSession_t1302467586 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GSN.Skill.Games.Common.Utils.GameSessionExitMode GSN.Skill.Games.Common.Client.Session.MockGameSession::get_ExitMode()
extern "C"  int32_t MockGameSession_get_ExitMode_m3619162301 (MockGameSession_t1302467586 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Client.Session.MockGameSession::set_ExitMode(GSN.Skill.Games.Common.Utils.GameSessionExitMode)
extern "C"  void MockGameSession_set_ExitMode_m3965402968 (MockGameSession_t1302467586 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GSN.Skill.Games.Common.Utils.GameValidationResult GSN.Skill.Games.Common.Client.Session.MockGameSession::get_ValidationResult()
extern "C"  int32_t MockGameSession_get_ValidationResult_m4136025327 (MockGameSession_t1302467586 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Client.Session.MockGameSession::set_ValidationResult(GSN.Skill.Games.Common.Utils.GameValidationResult)
extern "C"  void MockGameSession_set_ValidationResult_m349416864 (MockGameSession_t1302467586 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Client.Session.MockGameSession::JoinTournament(GSN.Skill.Games.Common.Client.Session.GameSession/GameSetupOptions,System.Action)
extern "C"  void MockGameSession_JoinTournament_m606769145 (MockGameSession_t1302467586 * __this, GameSetupOptions_t3113334386  ___gameSetupOptions0, Action_t3226471752 * ___doneAction1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Client.Session.MockGameSession::StartGame(System.Action)
extern "C"  void MockGameSession_StartGame_m3536752678 (MockGameSession_t1302467586 * __this, Action_t3226471752 * ___doneAction0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GSN.Skill.Games.Common.Utils.Job GSN.Skill.Games.Common.Client.Session.MockGameSession::get_ValidateJob()
extern "C"  Job_t4002496073 * MockGameSession_get_ValidateJob_m1774542047 (MockGameSession_t1302467586 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Client.Session.MockGameSession::EndBullish()
extern "C"  void MockGameSession_EndBullish_m3665228383 (MockGameSession_t1302467586 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Client.Session.MockGameSession::FinishedWithGameLog(System.String,System.String,System.Action)
extern "C"  void MockGameSession_FinishedWithGameLog_m3922610562 (MockGameSession_t1302467586 * __this, String_t* ___header0, String_t* ___body1, Action_t3226471752 * ___doneAction2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Client.Session.MockGameSession::WriteGameLogToFile(System.String,System.Boolean)
extern "C"  void MockGameSession_WriteGameLogToFile_m4083175994 (MockGameSession_t1302467586 * __this, String_t* ___fn0, bool ___text1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GSN.Skill.Games.Common.Client.Session.MockGameSession::checkReplayParams()
extern "C"  bool MockGameSession_checkReplayParams_m9330654 (MockGameSession_t1302467586 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Client.Session.MockGameSession::SendReplayByMail(System.String,System.String,System.String)
extern "C"  void MockGameSession_SendReplayByMail_m1366338140 (MockGameSession_t1302467586 * __this, String_t* ___filePath0, String_t* ___header1, String_t* ___body2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Client.Session.MockGameSession::HandleLog(System.String,System.String,UnityEngine.LogType)
extern "C"  void MockGameSession_HandleLog_m3056464076 (MockGameSession_t1302467586 * __this, String_t* ___logString0, String_t* ___stackTrace1, int32_t ___type2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GSN.Skill.Games.Common.Client.Session.MockGameSession::EscapeURL(System.String)
extern "C"  String_t* MockGameSession_EscapeURL_m2688826326 (Il2CppObject * __this /* static, unused */, String_t* ___url0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Client.Session.MockGameSession::AbortValidate()
extern "C"  void MockGameSession_AbortValidate_m3638994633 (MockGameSession_t1302467586 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.String,System.String> GSN.Skill.Games.Common.Client.Session.MockGameSession::get_joinRecord()
extern "C"  Dictionary_2_t3943999495 * MockGameSession_get_joinRecord_m2959799687 (MockGameSession_t1302467586 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.String,System.String> GSN.Skill.Games.Common.Client.Session.MockGameSession::get_startRecord()
extern "C"  Dictionary_2_t3943999495 * MockGameSession_get_startRecord_m1040593989 (MockGameSession_t1302467586 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Client.Session.MockGameSession::AddRecord(System.String,System.Byte[],System.Int32)
extern "C"  void MockGameSession_AddRecord_m3597541033 (MockGameSession_t1302467586 * __this, String_t* ___type0, ByteU5BU5D_t3397334013* ___s1, int32_t ___gameTime2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Client.Session.MockGameSession::AddData(System.Byte[])
extern "C"  void MockGameSession_AddData_m2305040179 (MockGameSession_t1302467586 * __this, ByteU5BU5D_t3397334013* ___data0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Client.Session.MockGameSession::Notarize()
extern "C"  void MockGameSession_Notarize_m3081460105 (MockGameSession_t1302467586 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Client.Session.MockGameSession::Validate(System.Action)
extern "C"  void MockGameSession_Validate_m4241290014 (MockGameSession_t1302467586 * __this, Action_t3226471752 * ___doneAction0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Client.Session.MockGameSession::Abandon()
extern "C"  void MockGameSession_Abandon_m2386563420 (MockGameSession_t1302467586 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Client.Session.MockGameSession::.cctor()
extern "C"  void MockGameSession__cctor_m3561320960 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GSN.Skill.Games.Common.Client.Session.MockGameSession::<SendReplayByMail>m__0(System.Object,System.Security.Cryptography.X509Certificates.X509Certificate,System.Security.Cryptography.X509Certificates.X509Chain,System.Net.Security.SslPolicyErrors)
extern "C"  bool MockGameSession_U3CSendReplayByMailU3Em__0_m703785148 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___s0, X509Certificate_t283079845 * ___certificate1, X509Chain_t777637347 * ___chain2, int32_t ___sslPolicyErrors3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Client.Session.MockGameSession::<HandleLog>m__1()
extern "C"  void MockGameSession_U3CHandleLogU3Em__1_m2771938953 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Client.Session.MockGameSession::<Validate>m__2()
extern "C"  void MockGameSession_U3CValidateU3Em__2_m2713985972 (MockGameSession_t1302467586 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Client.Session.MockGameSession::<Validate>m__3()
extern "C"  void MockGameSession_U3CValidateU3Em__3_m2713986067 (MockGameSession_t1302467586 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Client.Session.MockGameSession::<Validate>m__4()
extern "C"  void MockGameSession_U3CValidateU3Em__4_m2713986038 (MockGameSession_t1302467586 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
