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

// UnityEngine.Networking.Match.MatchInfoSnapshot
struct MatchInfoSnapshot_t3179110907;
// UnityEngine.Networking.Match.MatchDesc
struct MatchDesc_t1011518406;
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2<System.String,System.Int64>
struct Dictionary_2_t2823857299;
// System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchInfoSnapshot/MatchInfoDirectConnectSnapshot>
struct List_1_t1370459572;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Networking_Match_MatchDesc1011518406.h"
#include "UnityEngine_UnityEngine_Networking_Types_NetworkID348058649.h"
#include "UnityEngine_UnityEngine_Networking_Types_NodeID3569487935.h"
#include "mscorlib_System_String2029220233.h"

// System.Void UnityEngine.Networking.Match.MatchInfoSnapshot::.ctor(UnityEngine.Networking.Match.MatchDesc)
extern "C"  void MatchInfoSnapshot__ctor_m1883543705 (MatchInfoSnapshot_t3179110907 * __this, MatchDesc_t1011518406 * ___matchDesc0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.Types.NetworkID UnityEngine.Networking.Match.MatchInfoSnapshot::get_networkId()
extern "C"  uint64_t MatchInfoSnapshot_get_networkId_m940548281 (MatchInfoSnapshot_t3179110907 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.Match.MatchInfoSnapshot::set_networkId(UnityEngine.Networking.Types.NetworkID)
extern "C"  void MatchInfoSnapshot_set_networkId_m2837083878 (MatchInfoSnapshot_t3179110907 * __this, uint64_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.Match.MatchInfoSnapshot::set_hostNodeId(UnityEngine.Networking.Types.NodeID)
extern "C"  void MatchInfoSnapshot_set_hostNodeId_m3839679358 (MatchInfoSnapshot_t3179110907 * __this, uint16_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Networking.Match.MatchInfoSnapshot::get_name()
extern "C"  String_t* MatchInfoSnapshot_get_name_m2408180236 (MatchInfoSnapshot_t3179110907 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.Match.MatchInfoSnapshot::set_name(System.String)
extern "C"  void MatchInfoSnapshot_set_name_m2034006497 (MatchInfoSnapshot_t3179110907 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.Match.MatchInfoSnapshot::set_averageEloScore(System.Int32)
extern "C"  void MatchInfoSnapshot_set_averageEloScore_m3689243506 (MatchInfoSnapshot_t3179110907 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.Match.MatchInfoSnapshot::set_maxSize(System.Int32)
extern "C"  void MatchInfoSnapshot_set_maxSize_m2743994366 (MatchInfoSnapshot_t3179110907 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.Match.MatchInfoSnapshot::set_currentSize(System.Int32)
extern "C"  void MatchInfoSnapshot_set_currentSize_m1326232609 (MatchInfoSnapshot_t3179110907 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.Match.MatchInfoSnapshot::set_isPrivate(System.Boolean)
extern "C"  void MatchInfoSnapshot_set_isPrivate_m4103124386 (MatchInfoSnapshot_t3179110907 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.Match.MatchInfoSnapshot::set_matchAttributes(System.Collections.Generic.Dictionary`2<System.String,System.Int64>)
extern "C"  void MatchInfoSnapshot_set_matchAttributes_m1891948603 (MatchInfoSnapshot_t3179110907 * __this, Dictionary_2_t2823857299 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchInfoSnapshot/MatchInfoDirectConnectSnapshot> UnityEngine.Networking.Match.MatchInfoSnapshot::get_directConnectInfos()
extern "C"  List_1_t1370459572 * MatchInfoSnapshot_get_directConnectInfos_m2550996041 (MatchInfoSnapshot_t3179110907 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.Match.MatchInfoSnapshot::set_directConnectInfos(System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchInfoSnapshot/MatchInfoDirectConnectSnapshot>)
extern "C"  void MatchInfoSnapshot_set_directConnectInfos_m724039592 (MatchInfoSnapshot_t3179110907 * __this, List_1_t1370459572 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
