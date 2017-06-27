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

// UnityEngine.Networking.NetworkScene
struct NetworkScene_t2622094906;
// System.Collections.Generic.Dictionary`2<UnityEngine.Networking.NetworkInstanceId,UnityEngine.Networking.NetworkIdentity>
struct Dictionary_2_t3938121;
// System.Collections.Generic.Dictionary`2<UnityEngine.Networking.NetworkHash128,UnityEngine.GameObject>
struct Dictionary_2_t493977219;
// System.Collections.Generic.Dictionary`2<UnityEngine.Networking.NetworkHash128,UnityEngine.Networking.SpawnDelegate>
struct Dictionary_2_t2065310058;
// System.Collections.Generic.Dictionary`2<UnityEngine.Networking.NetworkHash128,UnityEngine.Networking.UnSpawnDelegate>
struct Dictionary_2_t2361903191;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.Networking.NetworkIdentity
struct NetworkIdentity_t1766639790;
// UnityEngine.Networking.SpawnDelegate
struct SpawnDelegate_t3327865986;
// UnityEngine.Networking.UnSpawnDelegate
struct UnSpawnDelegate_t3624459119;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Networ33998832.h"
#include "UnityEngine_UnityEngine_GameObject1756533147.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netw1766639790.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netwo835211239.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Spaw3327865986.h"
#include "UnityEngine_Networking_UnityEngine_Networking_UnSp3624459119.h"

// System.Void UnityEngine.Networking.NetworkScene::.ctor()
extern "C"  void NetworkScene__ctor_m1366371609 (NetworkScene_t2622094906 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<UnityEngine.Networking.NetworkInstanceId,UnityEngine.Networking.NetworkIdentity> UnityEngine.Networking.NetworkScene::get_localObjects()
extern "C"  Dictionary_2_t3938121 * NetworkScene_get_localObjects_m267229257 (NetworkScene_t2622094906 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<UnityEngine.Networking.NetworkHash128,UnityEngine.GameObject> UnityEngine.Networking.NetworkScene::get_guidToPrefab()
extern "C"  Dictionary_2_t493977219 * NetworkScene_get_guidToPrefab_m3725557024 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<UnityEngine.Networking.NetworkHash128,UnityEngine.Networking.SpawnDelegate> UnityEngine.Networking.NetworkScene::get_spawnHandlers()
extern "C"  Dictionary_2_t2065310058 * NetworkScene_get_spawnHandlers_m3643837111 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<UnityEngine.Networking.NetworkHash128,UnityEngine.Networking.UnSpawnDelegate> UnityEngine.Networking.NetworkScene::get_unspawnHandlers()
extern "C"  Dictionary_2_t2361903191 * NetworkScene_get_unspawnHandlers_m1877026039 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkScene::Shutdown()
extern "C"  void NetworkScene_Shutdown_m3424068397 (NetworkScene_t2622094906 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkScene::SetLocalObject(UnityEngine.Networking.NetworkInstanceId,UnityEngine.GameObject,System.Boolean,System.Boolean)
extern "C"  void NetworkScene_SetLocalObject_m1281976226 (NetworkScene_t2622094906 * __this, NetworkInstanceId_t33998832  ___netId0, GameObject_t1756533147 * ___obj1, bool ___isClient2, bool ___isServer3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.Networking.NetworkScene::FindLocalObject(UnityEngine.Networking.NetworkInstanceId)
extern "C"  GameObject_t1756533147 * NetworkScene_FindLocalObject_m3102808110 (NetworkScene_t2622094906 * __this, NetworkInstanceId_t33998832  ___netId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkScene::GetNetworkIdentity(UnityEngine.Networking.NetworkInstanceId,UnityEngine.Networking.NetworkIdentity&)
extern "C"  bool NetworkScene_GetNetworkIdentity_m3957999083 (NetworkScene_t2622094906 * __this, NetworkInstanceId_t33998832  ___netId0, NetworkIdentity_t1766639790 ** ___uv1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkScene::RemoveLocalObject(UnityEngine.Networking.NetworkInstanceId)
extern "C"  bool NetworkScene_RemoveLocalObject_m295635956 (NetworkScene_t2622094906 * __this, NetworkInstanceId_t33998832  ___netId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkScene::RemoveLocalObjectAndDestroy(UnityEngine.Networking.NetworkInstanceId)
extern "C"  bool NetworkScene_RemoveLocalObjectAndDestroy_m2805740627 (NetworkScene_t2622094906 * __this, NetworkInstanceId_t33998832  ___netId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkScene::ClearLocalObjects()
extern "C"  void NetworkScene_ClearLocalObjects_m2432550175 (NetworkScene_t2622094906 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkScene::RegisterPrefab(UnityEngine.GameObject,UnityEngine.Networking.NetworkHash128)
extern "C"  void NetworkScene_RegisterPrefab_m1806156902 (Il2CppObject * __this /* static, unused */, GameObject_t1756533147 * ___prefab0, NetworkHash128_t835211239  ___newAssetId1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkScene::RegisterPrefab(UnityEngine.GameObject)
extern "C"  void NetworkScene_RegisterPrefab_m77595528 (Il2CppObject * __this /* static, unused */, GameObject_t1756533147 * ___prefab0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkScene::GetPrefab(UnityEngine.Networking.NetworkHash128,UnityEngine.GameObject&)
extern "C"  bool NetworkScene_GetPrefab_m1152200255 (Il2CppObject * __this /* static, unused */, NetworkHash128_t835211239  ___assetId0, GameObject_t1756533147 ** ___prefab1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkScene::ClearSpawners()
extern "C"  void NetworkScene_ClearSpawners_m3047024995 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkScene::UnregisterSpawnHandler(UnityEngine.Networking.NetworkHash128)
extern "C"  void NetworkScene_UnregisterSpawnHandler_m2579436606 (Il2CppObject * __this /* static, unused */, NetworkHash128_t835211239  ___assetId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkScene::RegisterSpawnHandler(UnityEngine.Networking.NetworkHash128,UnityEngine.Networking.SpawnDelegate,UnityEngine.Networking.UnSpawnDelegate)
extern "C"  void NetworkScene_RegisterSpawnHandler_m3264320014 (Il2CppObject * __this /* static, unused */, NetworkHash128_t835211239  ___assetId0, SpawnDelegate_t3327865986 * ___spawnHandler1, UnSpawnDelegate_t3624459119 * ___unspawnHandler2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkScene::UnregisterPrefab(UnityEngine.GameObject)
extern "C"  void NetworkScene_UnregisterPrefab_m657014641 (Il2CppObject * __this /* static, unused */, GameObject_t1756533147 * ___prefab0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkScene::RegisterPrefab(UnityEngine.GameObject,UnityEngine.Networking.SpawnDelegate,UnityEngine.Networking.UnSpawnDelegate)
extern "C"  void NetworkScene_RegisterPrefab_m644020985 (Il2CppObject * __this /* static, unused */, GameObject_t1756533147 * ___prefab0, SpawnDelegate_t3327865986 * ___spawnHandler1, UnSpawnDelegate_t3624459119 * ___unspawnHandler2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkScene::GetSpawnHandler(UnityEngine.Networking.NetworkHash128,UnityEngine.Networking.SpawnDelegate&)
extern "C"  bool NetworkScene_GetSpawnHandler_m3780735933 (Il2CppObject * __this /* static, unused */, NetworkHash128_t835211239  ___assetId0, SpawnDelegate_t3327865986 ** ___handler1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkScene::InvokeUnSpawnHandler(UnityEngine.Networking.NetworkHash128,UnityEngine.GameObject)
extern "C"  bool NetworkScene_InvokeUnSpawnHandler_m3059725677 (Il2CppObject * __this /* static, unused */, NetworkHash128_t835211239  ___assetId0, GameObject_t1756533147 * ___obj1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkScene::DestroyAllClientObjects()
extern "C"  void NetworkScene_DestroyAllClientObjects_m3918046909 (NetworkScene_t2622094906 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkScene::DumpAllClientObjects()
extern "C"  void NetworkScene_DumpAllClientObjects_m3629483535 (NetworkScene_t2622094906 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkScene::.cctor()
extern "C"  void NetworkScene__cctor_m2381470984 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
