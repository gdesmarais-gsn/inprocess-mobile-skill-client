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

// UnityEngine.Networking.Match.MatchInfo
struct MatchInfo_t668842927;
// UnityEngine.Networking.Match.CreateMatchResponse
struct CreateMatchResponse_t1656355148;
// UnityEngine.Networking.Match.JoinMatchResponse
struct JoinMatchResponse_t1256242636;
// System.String
struct String_t;
// UnityEngine.Networking.Types.NetworkAccessToken
struct NetworkAccessToken_t2931214851;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Networking_Match_CreateMat1656355148.h"
#include "UnityEngine_UnityEngine_Networking_Match_JoinMatch1256242636.h"
#include "mscorlib_System_String2029220233.h"
#include "UnityEngine_UnityEngine_Networking_Types_NetworkID348058649.h"
#include "UnityEngine_UnityEngine_Networking_Types_NetworkAc2931214851.h"
#include "UnityEngine_UnityEngine_Networking_Types_NodeID3569487935.h"

// System.Void UnityEngine.Networking.Match.MatchInfo::.ctor(UnityEngine.Networking.Match.CreateMatchResponse)
extern "C"  void MatchInfo__ctor_m1756781343 (MatchInfo_t668842927 * __this, CreateMatchResponse_t1656355148 * ___matchResponse0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.Match.MatchInfo::.ctor(UnityEngine.Networking.Match.JoinMatchResponse)
extern "C"  void MatchInfo__ctor_m1742749089 (MatchInfo_t668842927 * __this, JoinMatchResponse_t1256242636 * ___matchResponse0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Networking.Match.MatchInfo::get_address()
extern "C"  String_t* MatchInfo_get_address_m2574261207 (MatchInfo_t668842927 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.Match.MatchInfo::set_address(System.String)
extern "C"  void MatchInfo_set_address_m3301906734 (MatchInfo_t668842927 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Networking.Match.MatchInfo::get_port()
extern "C"  int32_t MatchInfo_get_port_m867859579 (MatchInfo_t668842927 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.Match.MatchInfo::set_port(System.Int32)
extern "C"  void MatchInfo_set_port_m2467072660 (MatchInfo_t668842927 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Networking.Match.MatchInfo::get_domain()
extern "C"  int32_t MatchInfo_get_domain_m988189370 (MatchInfo_t668842927 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.Match.MatchInfo::set_domain(System.Int32)
extern "C"  void MatchInfo_set_domain_m2161308421 (MatchInfo_t668842927 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.Types.NetworkID UnityEngine.Networking.Match.MatchInfo::get_networkId()
extern "C"  uint64_t MatchInfo_get_networkId_m3301969681 (MatchInfo_t668842927 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.Match.MatchInfo::set_networkId(UnityEngine.Networking.Types.NetworkID)
extern "C"  void MatchInfo_set_networkId_m1172774282 (MatchInfo_t668842927 * __this, uint64_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.Match.MatchInfo::set_accessToken(UnityEngine.Networking.Types.NetworkAccessToken)
extern "C"  void MatchInfo_set_accessToken_m2952352860 (MatchInfo_t668842927 * __this, NetworkAccessToken_t2931214851 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.Types.NodeID UnityEngine.Networking.Match.MatchInfo::get_nodeId()
extern "C"  uint16_t MatchInfo_get_nodeId_m945269889 (MatchInfo_t668842927 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.Match.MatchInfo::set_nodeId(UnityEngine.Networking.Types.NodeID)
extern "C"  void MatchInfo_set_nodeId_m746689840 (MatchInfo_t668842927 * __this, uint16_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.Match.MatchInfo::get_usingRelay()
extern "C"  bool MatchInfo_get_usingRelay_m1369735469 (MatchInfo_t668842927 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.Match.MatchInfo::set_usingRelay(System.Boolean)
extern "C"  void MatchInfo_set_usingRelay_m4017000106 (MatchInfo_t668842927 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Networking.Match.MatchInfo::ToString()
extern "C"  String_t* MatchInfo_ToString_m3562310618 (MatchInfo_t668842927 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
