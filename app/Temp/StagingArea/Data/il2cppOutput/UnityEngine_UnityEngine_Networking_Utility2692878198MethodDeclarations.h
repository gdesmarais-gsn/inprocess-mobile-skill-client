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

// UnityEngine.Networking.Types.NetworkAccessToken
struct NetworkAccessToken_t2931214851;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Networking_Types_SourceID1840552406.h"
#include "UnityEngine_UnityEngine_Networking_Types_NetworkID348058649.h"
#include "UnityEngine_UnityEngine_Networking_Types_NetworkAc2931214851.h"

// UnityEngine.Networking.Types.SourceID UnityEngine.Networking.Utility::GetSourceID()
extern "C"  uint64_t Utility_GetSourceID_m1600761406 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.Utility::SetAccessTokenForNetwork(UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken)
extern "C"  void Utility_SetAccessTokenForNetwork_m3761728699 (Il2CppObject * __this /* static, unused */, uint64_t ___netId0, NetworkAccessToken_t2931214851 * ___accessToken1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.Types.NetworkAccessToken UnityEngine.Networking.Utility::GetAccessTokenForNetwork(UnityEngine.Networking.Types.NetworkID)
extern "C"  NetworkAccessToken_t2931214851 * Utility_GetAccessTokenForNetwork_m3708456730 (Il2CppObject * __this /* static, unused */, uint64_t ___netId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.Utility::.cctor()
extern "C"  void Utility__cctor_m2137785600 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
