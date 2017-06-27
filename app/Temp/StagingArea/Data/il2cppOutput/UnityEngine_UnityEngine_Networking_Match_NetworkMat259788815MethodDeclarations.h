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

// UnityEngine.Networking.Match.NetworkMatch
struct NetworkMatch_t259788815;
// System.Uri
struct Uri_t19570940;
// UnityEngine.Coroutine
struct Coroutine_t2299508840;
// System.String
struct String_t;
// UnityEngine.Networking.Match.NetworkMatch/DataResponseDelegate`1<UnityEngine.Networking.Match.MatchInfo>
struct DataResponseDelegate_1_t3220115103;
// UnityEngine.Networking.Match.CreateMatchRequest
struct CreateMatchRequest_t2247754072;
// UnityEngine.Networking.Match.CreateMatchResponse
struct CreateMatchResponse_t1656355148;
// UnityEngine.Networking.Match.JoinMatchRequest
struct JoinMatchRequest_t2675294872;
// UnityEngine.Networking.Match.JoinMatchResponse
struct JoinMatchResponse_t1256242636;
// UnityEngine.Networking.Match.NetworkMatch/BasicResponseDelegate
struct BasicResponseDelegate_t1347328110;
// UnityEngine.Networking.Match.DropConnectionRequest
struct DropConnectionRequest_t3261607412;
// UnityEngine.Networking.Match.DropConnectionResponse
struct DropConnectionResponse_t3742478148;
// UnityEngine.Networking.Match.NetworkMatch/DataResponseDelegate`1<System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchInfoSnapshot>>
struct DataResponseDelegate_1_t804536919;
// UnityEngine.Networking.Match.ListMatchRequest
struct ListMatchRequest_t746807584;
// UnityEngine.Networking.Match.ListMatchResponse
struct ListMatchResponse_t2092237412;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Uri19570940.h"
#include "mscorlib_System_String2029220233.h"
#include "UnityEngine_UnityEngine_Networking_Match_CreateMat2247754072.h"
#include "UnityEngine_UnityEngine_Networking_Match_CreateMat1656355148.h"
#include "UnityEngine_UnityEngine_Networking_Types_NetworkID348058649.h"
#include "UnityEngine_UnityEngine_Networking_Match_JoinMatch2675294872.h"
#include "UnityEngine_UnityEngine_Networking_Match_JoinMatch1256242636.h"
#include "UnityEngine_UnityEngine_Networking_Types_NodeID3569487935.h"
#include "UnityEngine_UnityEngine_Networking_Match_NetworkMa1347328110.h"
#include "UnityEngine_UnityEngine_Networking_Match_DropConne3261607412.h"
#include "UnityEngine_UnityEngine_Networking_Match_DropConne3742478148.h"
#include "UnityEngine_UnityEngine_Networking_Match_ListMatchR746807584.h"
#include "UnityEngine_UnityEngine_Networking_Match_ListMatch2092237412.h"

// System.Uri UnityEngine.Networking.Match.NetworkMatch::get_baseUri()
extern "C"  Uri_t19570940 * NetworkMatch_get_baseUri_m375696653 (NetworkMatch_t259788815 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.Match.NetworkMatch::set_baseUri(System.Uri)
extern "C"  void NetworkMatch_set_baseUri_m2002544894 (NetworkMatch_t259788815 * __this, Uri_t19570940 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Coroutine UnityEngine.Networking.Match.NetworkMatch::CreateMatch(System.String,System.UInt32,System.Boolean,System.String,System.String,System.String,System.Int32,System.Int32,UnityEngine.Networking.Match.NetworkMatch/DataResponseDelegate`1<UnityEngine.Networking.Match.MatchInfo>)
extern "C"  Coroutine_t2299508840 * NetworkMatch_CreateMatch_m3619166887 (NetworkMatch_t259788815 * __this, String_t* ___matchName0, uint32_t ___matchSize1, bool ___matchAdvertise2, String_t* ___matchPassword3, String_t* ___publicClientAddress4, String_t* ___privateClientAddress5, int32_t ___eloScoreForMatch6, int32_t ___requestDomain7, DataResponseDelegate_1_t3220115103 * ___callback8, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Coroutine UnityEngine.Networking.Match.NetworkMatch::CreateMatch(UnityEngine.Networking.Match.CreateMatchRequest,UnityEngine.Networking.Match.NetworkMatch/DataResponseDelegate`1<UnityEngine.Networking.Match.MatchInfo>)
extern "C"  Coroutine_t2299508840 * NetworkMatch_CreateMatch_m1571777142 (NetworkMatch_t259788815 * __this, CreateMatchRequest_t2247754072 * ___req0, DataResponseDelegate_1_t3220115103 * ___callback1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.Match.NetworkMatch::OnMatchCreate(UnityEngine.Networking.Match.CreateMatchResponse,UnityEngine.Networking.Match.NetworkMatch/DataResponseDelegate`1<UnityEngine.Networking.Match.MatchInfo>)
extern "C"  void NetworkMatch_OnMatchCreate_m3738202429 (NetworkMatch_t259788815 * __this, CreateMatchResponse_t1656355148 * ___response0, DataResponseDelegate_1_t3220115103 * ___userCallback1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Coroutine UnityEngine.Networking.Match.NetworkMatch::JoinMatch(UnityEngine.Networking.Types.NetworkID,System.String,System.String,System.String,System.Int32,System.Int32,UnityEngine.Networking.Match.NetworkMatch/DataResponseDelegate`1<UnityEngine.Networking.Match.MatchInfo>)
extern "C"  Coroutine_t2299508840 * NetworkMatch_JoinMatch_m4137052469 (NetworkMatch_t259788815 * __this, uint64_t ___netId0, String_t* ___matchPassword1, String_t* ___publicClientAddress2, String_t* ___privateClientAddress3, int32_t ___eloScoreForClient4, int32_t ___requestDomain5, DataResponseDelegate_1_t3220115103 * ___callback6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Coroutine UnityEngine.Networking.Match.NetworkMatch::JoinMatch(UnityEngine.Networking.Match.JoinMatchRequest,UnityEngine.Networking.Match.NetworkMatch/DataResponseDelegate`1<UnityEngine.Networking.Match.MatchInfo>)
extern "C"  Coroutine_t2299508840 * NetworkMatch_JoinMatch_m2610417450 (NetworkMatch_t259788815 * __this, JoinMatchRequest_t2675294872 * ___req0, DataResponseDelegate_1_t3220115103 * ___callback1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.Match.NetworkMatch::OnMatchJoined(UnityEngine.Networking.Match.JoinMatchResponse,UnityEngine.Networking.Match.NetworkMatch/DataResponseDelegate`1<UnityEngine.Networking.Match.MatchInfo>)
extern "C"  void NetworkMatch_OnMatchJoined_m3704147126 (NetworkMatch_t259788815 * __this, JoinMatchResponse_t1256242636 * ___response0, DataResponseDelegate_1_t3220115103 * ___userCallback1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Coroutine UnityEngine.Networking.Match.NetworkMatch::DropConnection(UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NodeID,System.Int32,UnityEngine.Networking.Match.NetworkMatch/BasicResponseDelegate)
extern "C"  Coroutine_t2299508840 * NetworkMatch_DropConnection_m3409100241 (NetworkMatch_t259788815 * __this, uint64_t ___netId0, uint16_t ___dropNodeId1, int32_t ___requestDomain2, BasicResponseDelegate_t1347328110 * ___callback3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Coroutine UnityEngine.Networking.Match.NetworkMatch::DropConnection(UnityEngine.Networking.Match.DropConnectionRequest,UnityEngine.Networking.Match.NetworkMatch/BasicResponseDelegate)
extern "C"  Coroutine_t2299508840 * NetworkMatch_DropConnection_m147546110 (NetworkMatch_t259788815 * __this, DropConnectionRequest_t3261607412 * ___req0, BasicResponseDelegate_t1347328110 * ___callback1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.Match.NetworkMatch::OnDropConnection(UnityEngine.Networking.Match.DropConnectionResponse,UnityEngine.Networking.Match.NetworkMatch/BasicResponseDelegate)
extern "C"  void NetworkMatch_OnDropConnection_m700656343 (NetworkMatch_t259788815 * __this, DropConnectionResponse_t3742478148 * ___response0, BasicResponseDelegate_t1347328110 * ___userCallback1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Coroutine UnityEngine.Networking.Match.NetworkMatch::ListMatches(System.Int32,System.Int32,System.String,System.Boolean,System.Int32,System.Int32,UnityEngine.Networking.Match.NetworkMatch/DataResponseDelegate`1<System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchInfoSnapshot>>)
extern "C"  Coroutine_t2299508840 * NetworkMatch_ListMatches_m4261638383 (NetworkMatch_t259788815 * __this, int32_t ___startPageNumber0, int32_t ___resultPageSize1, String_t* ___matchNameFilter2, bool ___filterOutPrivateMatchesFromResults3, int32_t ___eloScoreTarget4, int32_t ___requestDomain5, DataResponseDelegate_1_t804536919 * ___callback6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Coroutine UnityEngine.Networking.Match.NetworkMatch::ListMatches(UnityEngine.Networking.Match.ListMatchRequest,UnityEngine.Networking.Match.NetworkMatch/DataResponseDelegate`1<System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchInfoSnapshot>>)
extern "C"  Coroutine_t2299508840 * NetworkMatch_ListMatches_m4018841948 (NetworkMatch_t259788815 * __this, ListMatchRequest_t746807584 * ___req0, DataResponseDelegate_1_t804536919 * ___callback1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.Match.NetworkMatch::OnMatchList(UnityEngine.Networking.Match.ListMatchResponse,UnityEngine.Networking.Match.NetworkMatch/DataResponseDelegate`1<System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchInfoSnapshot>>)
extern "C"  void NetworkMatch_OnMatchList_m2363607231 (NetworkMatch_t259788815 * __this, ListMatchResponse_t2092237412 * ___response0, DataResponseDelegate_1_t804536919 * ___userCallback1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
