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

// UnityEngine.Networking.Match.MatchDirectConnectInfo
struct MatchDirectConnectInfo_t3750452272;
// System.String
struct String_t;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Networking_Types_NodeID3569487935.h"
#include "mscorlib_System_String2029220233.h"
#include "UnityEngine_UnityEngine_Networking_Types_HostPrior2800759508.h"
#include "mscorlib_System_Object2689449295.h"

// System.Void UnityEngine.Networking.Match.MatchDirectConnectInfo::.ctor()
extern "C"  void MatchDirectConnectInfo__ctor_m736662328 (MatchDirectConnectInfo_t3750452272 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.Types.NodeID UnityEngine.Networking.Match.MatchDirectConnectInfo::get_nodeId()
extern "C"  uint16_t MatchDirectConnectInfo_get_nodeId_m1163824888 (MatchDirectConnectInfo_t3750452272 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.Match.MatchDirectConnectInfo::set_nodeId(UnityEngine.Networking.Types.NodeID)
extern "C"  void MatchDirectConnectInfo_set_nodeId_m418973993 (MatchDirectConnectInfo_t3750452272 * __this, uint16_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Networking.Match.MatchDirectConnectInfo::get_publicAddress()
extern "C"  String_t* MatchDirectConnectInfo_get_publicAddress_m117834629 (MatchDirectConnectInfo_t3750452272 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.Match.MatchDirectConnectInfo::set_publicAddress(System.String)
extern "C"  void MatchDirectConnectInfo_set_publicAddress_m1582044946 (MatchDirectConnectInfo_t3750452272 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Networking.Match.MatchDirectConnectInfo::get_privateAddress()
extern "C"  String_t* MatchDirectConnectInfo_get_privateAddress_m3261342997 (MatchDirectConnectInfo_t3750452272 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.Match.MatchDirectConnectInfo::set_privateAddress(System.String)
extern "C"  void MatchDirectConnectInfo_set_privateAddress_m2918970276 (MatchDirectConnectInfo_t3750452272 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.Types.HostPriority UnityEngine.Networking.Match.MatchDirectConnectInfo::get_hostPriority()
extern "C"  int32_t MatchDirectConnectInfo_get_hostPriority_m498734328 (MatchDirectConnectInfo_t3750452272 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.Match.MatchDirectConnectInfo::set_hostPriority(UnityEngine.Networking.Types.HostPriority)
extern "C"  void MatchDirectConnectInfo_set_hostPriority_m1825173577 (MatchDirectConnectInfo_t3750452272 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Networking.Match.MatchDirectConnectInfo::ToString()
extern "C"  String_t* MatchDirectConnectInfo_ToString_m989823961 (MatchDirectConnectInfo_t3750452272 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.Match.MatchDirectConnectInfo::Parse(System.Object)
extern "C"  void MatchDirectConnectInfo_Parse_m3357112397 (MatchDirectConnectInfo_t3750452272 * __this, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
