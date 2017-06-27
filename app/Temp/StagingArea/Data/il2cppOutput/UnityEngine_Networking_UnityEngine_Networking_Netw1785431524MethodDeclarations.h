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

// UnityEngine.Networking.NetworkProximityChecker
struct NetworkProximityChecker_t1785431524;
// UnityEngine.Networking.NetworkConnection
struct NetworkConnection_t107267906;
// System.Collections.Generic.HashSet`1<UnityEngine.Networking.NetworkConnection>
struct HashSet_1_t2735696056;
// UnityEngine.GameObject
struct GameObject_t1756533147;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netwo107267906.h"
#include "UnityEngine_UnityEngine_GameObject1756533147.h"

// System.Void UnityEngine.Networking.NetworkProximityChecker::.ctor()
extern "C"  void NetworkProximityChecker__ctor_m2108701439 (NetworkProximityChecker_t1785431524 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkProximityChecker::Update()
extern "C"  void NetworkProximityChecker_Update_m2197615012 (NetworkProximityChecker_t1785431524 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkProximityChecker::OnCheckObserver(UnityEngine.Networking.NetworkConnection)
extern "C"  bool NetworkProximityChecker_OnCheckObserver_m3185903043 (NetworkProximityChecker_t1785431524 * __this, NetworkConnection_t107267906 * ___newObserver0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkProximityChecker::OnRebuildObservers(System.Collections.Generic.HashSet`1<UnityEngine.Networking.NetworkConnection>,System.Boolean)
extern "C"  bool NetworkProximityChecker_OnRebuildObservers_m970729884 (NetworkProximityChecker_t1785431524 * __this, HashSet_1_t2735696056 * ___observers0, bool ___initial1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkProximityChecker::OnSetLocalVisibility(System.Boolean)
extern "C"  void NetworkProximityChecker_OnSetLocalVisibility_m3884719458 (NetworkProximityChecker_t1785431524 * __this, bool ___vis0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkProximityChecker::SetVis(UnityEngine.GameObject,System.Boolean)
extern "C"  void NetworkProximityChecker_SetVis_m1249174188 (Il2CppObject * __this /* static, unused */, GameObject_t1756533147 * ___go0, bool ___vis1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
