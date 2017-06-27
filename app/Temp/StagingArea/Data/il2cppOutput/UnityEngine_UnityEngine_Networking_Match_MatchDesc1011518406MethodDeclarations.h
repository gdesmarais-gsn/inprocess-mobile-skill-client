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

// UnityEngine.Networking.Match.MatchDesc
struct MatchDesc_t1011518406;
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2<System.String,System.Int64>
struct Dictionary_2_t2823857299;
// System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>
struct List_1_t3119573404;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Networking_Types_NetworkID348058649.h"
#include "mscorlib_System_String2029220233.h"
#include "UnityEngine_UnityEngine_Networking_Types_NodeID3569487935.h"
#include "mscorlib_System_Object2689449295.h"

// System.Void UnityEngine.Networking.Match.MatchDesc::.ctor()
extern "C"  void MatchDesc__ctor_m1959302732 (MatchDesc_t1011518406 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.Types.NetworkID UnityEngine.Networking.Match.MatchDesc::get_networkId()
extern "C"  uint64_t MatchDesc_get_networkId_m1188200356 (MatchDesc_t1011518406 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.Match.MatchDesc::set_networkId(UnityEngine.Networking.Types.NetworkID)
extern "C"  void MatchDesc_set_networkId_m1658558957 (MatchDesc_t1011518406 * __this, uint64_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Networking.Match.MatchDesc::get_name()
extern "C"  String_t* MatchDesc_get_name_m2394635045 (MatchDesc_t1011518406 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.Match.MatchDesc::set_name(System.String)
extern "C"  void MatchDesc_set_name_m551941950 (MatchDesc_t1011518406 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Networking.Match.MatchDesc::get_averageEloScore()
extern "C"  int32_t MatchDesc_get_averageEloScore_m2457580416 (MatchDesc_t1011518406 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.Match.MatchDesc::set_averageEloScore(System.Int32)
extern "C"  void MatchDesc_set_averageEloScore_m8495027 (MatchDesc_t1011518406 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Networking.Match.MatchDesc::get_maxSize()
extern "C"  int32_t MatchDesc_get_maxSize_m2559547620 (MatchDesc_t1011518406 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.Match.MatchDesc::set_maxSize(System.Int32)
extern "C"  void MatchDesc_set_maxSize_m3480085111 (MatchDesc_t1011518406 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Networking.Match.MatchDesc::get_currentSize()
extern "C"  int32_t MatchDesc_get_currentSize_m2937214277 (MatchDesc_t1011518406 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.Match.MatchDesc::set_currentSize(System.Int32)
extern "C"  void MatchDesc_set_currentSize_m667484418 (MatchDesc_t1011518406 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.Match.MatchDesc::get_isPrivate()
extern "C"  bool MatchDesc_get_isPrivate_m3876340196 (MatchDesc_t1011518406 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.Match.MatchDesc::set_isPrivate(System.Boolean)
extern "C"  void MatchDesc_set_isPrivate_m3035302015 (MatchDesc_t1011518406 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.String,System.Int64> UnityEngine.Networking.Match.MatchDesc::get_matchAttributes()
extern "C"  Dictionary_2_t2823857299 * MatchDesc_get_matchAttributes_m1513269879 (MatchDesc_t1011518406 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.Types.NodeID UnityEngine.Networking.Match.MatchDesc::get_hostNodeId()
extern "C"  uint16_t MatchDesc_get_hostNodeId_m1164674262 (MatchDesc_t1011518406 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.Match.MatchDesc::set_hostNodeId(UnityEngine.Networking.Types.NodeID)
extern "C"  void MatchDesc_set_hostNodeId_m3079204193 (MatchDesc_t1011518406 * __this, uint16_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo> UnityEngine.Networking.Match.MatchDesc::get_directConnectInfos()
extern "C"  List_1_t3119573404 * MatchDesc_get_directConnectInfos_m898162610 (MatchDesc_t1011518406 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.Match.MatchDesc::set_directConnectInfos(System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>)
extern "C"  void MatchDesc_set_directConnectInfos_m246711211 (MatchDesc_t1011518406 * __this, List_1_t3119573404 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Networking.Match.MatchDesc::ToString()
extern "C"  String_t* MatchDesc_ToString_m232909029 (MatchDesc_t1011518406 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.Match.MatchDesc::Parse(System.Object)
extern "C"  void MatchDesc_Parse_m3561880469 (MatchDesc_t1011518406 * __this, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
