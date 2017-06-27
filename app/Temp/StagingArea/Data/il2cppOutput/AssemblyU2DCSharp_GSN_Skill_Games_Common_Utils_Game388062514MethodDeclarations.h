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

// GSN.Skill.Games.Common.Utils.GameLog
struct GameLog_t388062514;
// System.String
struct String_t;
// GSN.Skill.Games.Common.Utils.RequestWrapper/requestCustomizer
struct requestCustomizer_t2087322079;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// GSN.Skill.Games.Common.Utils.SecureHunk
struct SecureHunk_t3302567905;
// System.Action`1<System.Boolean>
struct Action_1_t3627374100;
// System.IO.MemoryStream
struct MemoryStream_t743994179;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t3943999495;
// GSN.Skill.Games.Common.Utils.FakeWebResponse
struct FakeWebResponse_t2637957952;
// System.Net.WebRequest
struct WebRequest_t1365124353;
// System.IO.Stream
struct Stream_t3255436806;
// System.Action
struct Action_t3226471752;
// GSN.Skill.Games.Common.Utils.WebRequestDispatcher
struct WebRequestDispatcher_t345378452;
// GSN.Skill.Requests.IWebRequest
struct IWebRequest_t216132554;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "AssemblyU2DCSharp_GSN_Skill_Games_Common_Utils_Req2087322079.h"
#include "AssemblyU2DCSharp_GSN_Skill_Games_Common_Utils_Sec3302567905.h"
#include "mscorlib_System_IO_MemoryStream743994179.h"
#include "System_System_Net_WebRequest1365124353.h"
#include "mscorlib_System_IO_Stream3255436806.h"
#include "System_Core_System_Action3226471752.h"
#include "AssemblyU2DCSharp_GSN_Skill_Games_Common_Utils_WebR345378452.h"

// System.Void GSN.Skill.Games.Common.Utils.GameLog::.ctor(System.String,GSN.Skill.Games.Common.Utils.RequestWrapper/requestCustomizer,System.Boolean)
extern "C"  void GameLog__ctor_m2159432067 (GameLog_t388062514 * __this, String_t* ___url0, requestCustomizer_t2087322079 * ___customizeWrapper1, bool ___mocking2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Utils.GameLog::.cctor()
extern "C"  void GameLog__cctor_m2238994962 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Utils.GameLog::SetBytesPerNotarize(System.Int32)
extern "C"  void GameLog_SetBytesPerNotarize_m2592891604 (Il2CppObject * __this /* static, unused */, int32_t ___n0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Utils.GameLog::set_InitialHash(System.Byte[])
extern "C"  void GameLog_set_InitialHash_m3062491117 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] GSN.Skill.Games.Common.Utils.GameLog::get_InitialHash()
extern "C"  ByteU5BU5D_t3397334013* GameLog_get_InitialHash_m2867287436 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Utils.GameLog::set_JoinResponse(System.Byte[])
extern "C"  void GameLog_set_JoinResponse_m1243736428 (GameLog_t388062514 * __this, ByteU5BU5D_t3397334013* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] GSN.Skill.Games.Common.Utils.GameLog::get_JoinResponse()
extern "C"  ByteU5BU5D_t3397334013* GameLog_get_JoinResponse_m774981319 (GameLog_t388062514 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Utils.GameLog::set_StartResponse(System.Byte[])
extern "C"  void GameLog_set_StartResponse_m2311113474 (GameLog_t388062514 * __this, ByteU5BU5D_t3397334013* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] GSN.Skill.Games.Common.Utils.GameLog::get_StartResponse()
extern "C"  ByteU5BU5D_t3397334013* GameLog_get_StartResponse_m1832470045 (GameLog_t388062514 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GSN.Skill.Games.Common.Utils.SecureHunk GSN.Skill.Games.Common.Utils.GameLog::get_JoinHunk()
extern "C"  SecureHunk_t3302567905 * GameLog_get_JoinHunk_m926888176 (GameLog_t388062514 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Utils.GameLog::set_JoinHunk(GSN.Skill.Games.Common.Utils.SecureHunk)
extern "C"  void GameLog_set_JoinHunk_m3913492889 (GameLog_t388062514 * __this, SecureHunk_t3302567905 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GSN.Skill.Games.Common.Utils.SecureHunk GSN.Skill.Games.Common.Utils.GameLog::get_StartHunk()
extern "C"  SecureHunk_t3302567905 * GameLog_get_StartHunk_m469975534 (GameLog_t388062514 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Utils.GameLog::set_StartHunk(GSN.Skill.Games.Common.Utils.SecureHunk)
extern "C"  void GameLog_set_StartHunk_m1803256967 (GameLog_t388062514 * __this, SecureHunk_t3302567905 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GSN.Skill.Games.Common.Utils.GameLog::get_NotarizeOutstanding()
extern "C"  int32_t GameLog_get_NotarizeOutstanding_m1140401550 (GameLog_t388062514 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GSN.Skill.Games.Common.Utils.GameLog GSN.Skill.Games.Common.Utils.GameLog::GetDeferredGameLog(System.String,GSN.Skill.Games.Common.Utils.RequestWrapper/requestCustomizer)
extern "C"  GameLog_t388062514 * GameLog_GetDeferredGameLog_m1093280374 (Il2CppObject * __this /* static, unused */, String_t* ___url0, requestCustomizer_t2087322079 * ___customizeWrapper1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Utils.GameLog::SaveLog(System.String,System.Boolean)
extern "C"  void GameLog_SaveLog_m4277152991 (GameLog_t388062514 * __this, String_t* ___overrideName0, bool ___text1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Utils.GameLog::ReadGameLogFromFile(System.String)
extern "C"  void GameLog_ReadGameLogFromFile_m1191036873 (GameLog_t388062514 * __this, String_t* ___fn0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Utils.GameLog::ClearLog()
extern "C"  void GameLog_ClearLog_m2302753774 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Utils.GameLog::Add(System.String,System.Byte[],System.Int32)
extern "C"  void GameLog_Add_m1512846626 (GameLog_t388062514 * __this, String_t* ___type0, ByteU5BU5D_t3397334013* ___body1, int32_t ___time2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Utils.GameLog::AddData(System.Byte[])
extern "C"  void GameLog_AddData_m28823249 (GameLog_t388062514 * __this, ByteU5BU5D_t3397334013* ___data0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Utils.GameLog::Notarize(System.Action`1<System.Boolean>,System.Boolean)
extern "C"  void GameLog_Notarize_m1689891013 (GameLog_t388062514 * __this, Action_1_t3627374100 * ___doneAction0, bool ___addSync1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Utils.GameLog::FinalNotarizeSync(System.Action`1<System.Boolean>)
extern "C"  void GameLog_FinalNotarizeSync_m1715313673 (GameLog_t388062514 * __this, Action_1_t3627374100 * ___doneAction0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.MemoryStream GSN.Skill.Games.Common.Utils.GameLog::GetSerializedGameLog(System.Boolean)
extern "C"  MemoryStream_t743994179 * GameLog_GetSerializedGameLog_m1061263539 (GameLog_t388062514 * __this, bool ___attachUnnotarized0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Utils.GameLog::resetLogRecords(System.Boolean)
extern "C"  void GameLog_resetLogRecords_m2531839179 (GameLog_t388062514 * __this, bool ___addSync0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Utils.GameLog::AddSync(System.Int32)
extern "C"  void GameLog_AddSync_m1277930422 (GameLog_t388062514 * __this, int32_t ___gameTime0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GSN.Skill.Games.Common.Utils.SecureHunk GSN.Skill.Games.Common.Utils.GameLog::MakeDataHistoryHunk()
extern "C"  SecureHunk_t3302567905 * GameLog_MakeDataHistoryHunk_m2692835381 (GameLog_t388062514 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GSN.Skill.Games.Common.Utils.SecureHunk GSN.Skill.Games.Common.Utils.GameLog::GetNextHunk(System.IO.MemoryStream,System.Byte[])
extern "C"  SecureHunk_t3302567905 * GameLog_GetNextHunk_m4122719429 (Il2CppObject * __this /* static, unused */, MemoryStream_t743994179 * ___logStream0, ByteU5BU5D_t3397334013* ___priorHash1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GSN.Skill.Games.Common.Utils.SecureHunk GSN.Skill.Games.Common.Utils.GameLog::GetHunkOfType(System.Byte[],System.IO.MemoryStream,System.Byte[])
extern "C"  SecureHunk_t3302567905 * GameLog_GetHunkOfType_m726251384 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___type0, MemoryStream_t743994179 * ___logStream1, ByteU5BU5D_t3397334013* ___priorHash2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] GSN.Skill.Games.Common.Utils.GameLog::GetJoinAndStartRecords(System.IO.MemoryStream,System.Collections.Generic.Dictionary`2<System.String,System.String>&,System.Collections.Generic.Dictionary`2<System.String,System.String>&,System.UInt32&)
extern "C"  ByteU5BU5D_t3397334013* GameLog_GetJoinAndStartRecords_m3268887722 (Il2CppObject * __this /* static, unused */, MemoryStream_t743994179 * ___logStream0, Dictionary_2_t3943999495 ** ___join1, Dictionary_2_t3943999495 ** ___start2, uint32_t* ___startTime3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GSN.Skill.Games.Common.Utils.FakeWebResponse GSN.Skill.Games.Common.Utils.GameLog::MakeFakeValidateResponse(System.Net.WebRequest,System.Byte[],System.IO.Stream)
extern "C"  FakeWebResponse_t2637957952 * GameLog_MakeFakeValidateResponse_m1421695049 (GameLog_t388062514 * __this, WebRequest_t1365124353 * ___request0, ByteU5BU5D_t3397334013* ___postBytes1, Stream_t3255436806 * ___postStream2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Utils.GameLog::ValidateSync(System.Action)
extern "C"  void GameLog_ValidateSync_m1614562287 (GameLog_t388062514 * __this, Action_t3226471752 * ___doneAction0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Utils.GameLog::failValidation(System.String)
extern "C"  void GameLog_failValidation_m676244990 (GameLog_t388062514 * __this, String_t* ___why0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Utils.GameLog::validate2(System.Boolean,System.Action)
extern "C"  void GameLog_validate2_m1380397737 (GameLog_t388062514 * __this, bool ___failed0, Action_t3226471752 * ___doneAction1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Utils.GameLog::validate3(System.Action)
extern "C"  void GameLog_validate3_m4040938195 (GameLog_t388062514 * __this, Action_t3226471752 * ___doneAction0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Utils.GameLog::validate4(System.Boolean,System.Action)
extern "C"  void GameLog_validate4_m1594526063 (GameLog_t388062514 * __this, bool ___validationAccepted0, Action_t3226471752 * ___doneAction1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GSN.Skill.Games.Common.Utils.GameLog::CheckValidateResponse(GSN.Skill.Games.Common.Utils.WebRequestDispatcher)
extern "C"  bool GameLog_CheckValidateResponse_m2161930508 (GameLog_t388062514 * __this, WebRequestDispatcher_t345378452 * ___wrd0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] GSN.Skill.Games.Common.Utils.GameLog::GetSHA512Hash(System.Byte[])
extern "C"  ByteU5BU5D_t3397334013* GameLog_GetSHA512Hash_m3456871416 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___input0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] GSN.Skill.Games.Common.Utils.GameLog::GetSHA512Hash(System.IO.Stream)
extern "C"  ByteU5BU5D_t3397334013* GameLog_GetSHA512Hash_m2448268314 (Il2CppObject * __this /* static, unused */, Stream_t3255436806 * ___input0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GSN.Skill.Games.Common.Utils.GameLog::ToHexString(System.Byte[])
extern "C"  String_t* GameLog_ToHexString_m587994678 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___input0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] GSN.Skill.Games.Common.Utils.GameLog::HexToBytes(System.String)
extern "C"  ByteU5BU5D_t3397334013* GameLog_HexToBytes_m1672936930 (Il2CppObject * __this /* static, unused */, String_t* ___input0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Utils.GameLog::PrintByteArray(System.Byte[])
extern "C"  void GameLog_PrintByteArray_m2164563692 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___array0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GSN.Skill.Games.Common.Utils.GameLog::WrapJson(System.String,System.String)
extern "C"  String_t* GameLog_WrapJson_m1889980562 (Il2CppObject * __this /* static, unused */, String_t* ___wrapperKey0, String_t* ___json1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Utils.GameLog::<validate2>m__0(GSN.Skill.Requests.IWebRequest)
extern "C"  void GameLog_U3Cvalidate2U3Em__0_m3025363779 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___request0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Utils.GameLog::<validate2>m__1(GSN.Skill.Requests.IWebRequest)
extern "C"  void GameLog_U3Cvalidate2U3Em__1_m3262590980 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___request0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
