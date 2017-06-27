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

// UnityEngine.Networking.ClientScene
struct ClientScene_t3650307179;
// UnityEngine.Networking.NetworkSystem.PeerInfoMessage[]
struct PeerInfoMessageU5BU5D_t2669814294;
// System.Collections.Generic.List`1<UnityEngine.Networking.PlayerController>
struct List_1_t4277013949;
// UnityEngine.Networking.NetworkConnection
struct NetworkConnection_t107267906;
// System.Collections.Generic.Dictionary`2<UnityEngine.Networking.NetworkInstanceId,UnityEngine.Networking.NetworkIdentity>
struct Dictionary_2_t3938121;
// System.Collections.Generic.Dictionary`2<UnityEngine.Networking.NetworkHash128,UnityEngine.GameObject>
struct Dictionary_2_t493977219;
// System.Collections.Generic.Dictionary`2<UnityEngine.Networking.NetworkSceneId,UnityEngine.Networking.NetworkIdentity>
struct Dictionary_2_t2517038154;
// UnityEngine.Networking.PlayerController
struct PlayerController_t612925521;
// UnityEngine.Networking.NetworkIdentity
struct NetworkIdentity_t1766639790;
// UnityEngine.Networking.MessageBase
struct MessageBase_t2552428296;
// UnityEngine.Networking.NetworkClient
struct NetworkClient_t696867603;
// System.String
struct String_t;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.Networking.SpawnDelegate
struct SpawnDelegate_t3327865986;
// UnityEngine.Networking.UnSpawnDelegate
struct UnSpawnDelegate_t3624459119;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// UnityEngine.Networking.NetworkMessage
struct NetworkMessage_t2339216573;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Playe612925521.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netw1766639790.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netwo107267906.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Mess2552428296.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netw2931030083.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netwo696867603.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netwo835211239.h"
#include "UnityEngine_UnityEngine_GameObject1756533147.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Spaw3327865986.h"
#include "UnityEngine_Networking_UnityEngine_Networking_UnSp3624459119.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Networ33998832.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netw2339216573.h"

// System.Void UnityEngine.Networking.ClientScene::.ctor()
extern "C"  void ClientScene__ctor_m3246382076 (ClientScene_t3650307179 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.ClientScene::hasMigrationPending()
extern "C"  bool ClientScene_hasMigrationPending_m3826055399 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.ClientScene::SetReconnectId(System.Int32,UnityEngine.Networking.NetworkSystem.PeerInfoMessage[])
extern "C"  void ClientScene_SetReconnectId_m2168909808 (Il2CppObject * __this /* static, unused */, int32_t ___newReconnectId0, PeerInfoMessageU5BU5D_t2669814294* ___peers1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.ClientScene::SetNotReady()
extern "C"  void ClientScene_SetNotReady_m3586843404 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<UnityEngine.Networking.PlayerController> UnityEngine.Networking.ClientScene::get_localPlayers()
extern "C"  List_1_t4277013949 * ClientScene_get_localPlayers_m1491002963 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.ClientScene::get_ready()
extern "C"  bool ClientScene_get_ready_m347083436 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.NetworkConnection UnityEngine.Networking.ClientScene::get_readyConnection()
extern "C"  NetworkConnection_t107267906 * ClientScene_get_readyConnection_m954166678 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Networking.ClientScene::get_reconnectId()
extern "C"  int32_t ClientScene_get_reconnectId_m2953750869 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<UnityEngine.Networking.NetworkInstanceId,UnityEngine.Networking.NetworkIdentity> UnityEngine.Networking.ClientScene::get_objects()
extern "C"  Dictionary_2_t3938121 * ClientScene_get_objects_m1683192739 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<UnityEngine.Networking.NetworkHash128,UnityEngine.GameObject> UnityEngine.Networking.ClientScene::get_prefabs()
extern "C"  Dictionary_2_t493977219 * ClientScene_get_prefabs_m1357210626 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<UnityEngine.Networking.NetworkSceneId,UnityEngine.Networking.NetworkIdentity> UnityEngine.Networking.ClientScene::get_spawnableObjects()
extern "C"  Dictionary_2_t2517038154 * ClientScene_get_spawnableObjects_m1809687725 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.ClientScene::Shutdown()
extern "C"  void ClientScene_Shutdown_m1206569000 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.ClientScene::GetPlayerController(System.Int16,UnityEngine.Networking.PlayerController&)
extern "C"  bool ClientScene_GetPlayerController_m2227102910 (Il2CppObject * __this /* static, unused */, int16_t ___playerControllerId0, PlayerController_t612925521 ** ___player1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.ClientScene::InternalAddPlayer(UnityEngine.Networking.NetworkIdentity,System.Int16)
extern "C"  void ClientScene_InternalAddPlayer_m1668417603 (Il2CppObject * __this /* static, unused */, NetworkIdentity_t1766639790 * ___view0, int16_t ___playerControllerId1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.ClientScene::AddPlayer(System.Int16)
extern "C"  bool ClientScene_AddPlayer_m1894519783 (Il2CppObject * __this /* static, unused */, int16_t ___playerControllerId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.ClientScene::AddPlayer(UnityEngine.Networking.NetworkConnection,System.Int16)
extern "C"  bool ClientScene_AddPlayer_m2513533082 (Il2CppObject * __this /* static, unused */, NetworkConnection_t107267906 * ___readyConn0, int16_t ___playerControllerId1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.ClientScene::AddPlayer(UnityEngine.Networking.NetworkConnection,System.Int16,UnityEngine.Networking.MessageBase)
extern "C"  bool ClientScene_AddPlayer_m3343148097 (Il2CppObject * __this /* static, unused */, NetworkConnection_t107267906 * ___readyConn0, int16_t ___playerControllerId1, MessageBase_t2552428296 * ___extraMessage2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.ClientScene::SendReconnectMessage(UnityEngine.Networking.MessageBase)
extern "C"  bool ClientScene_SendReconnectMessage_m589363217 (Il2CppObject * __this /* static, unused */, MessageBase_t2552428296 * ___extraMessage0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.ClientScene::RemovePlayer(System.Int16)
extern "C"  bool ClientScene_RemovePlayer_m2941628016 (Il2CppObject * __this /* static, unused */, int16_t ___playerControllerId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.ClientScene::Ready(UnityEngine.Networking.NetworkConnection)
extern "C"  bool ClientScene_Ready_m2325508596 (Il2CppObject * __this /* static, unused */, NetworkConnection_t107267906 * ___conn0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.NetworkClient UnityEngine.Networking.ClientScene::ConnectLocalServer()
extern "C"  NetworkClient_t696867603 * ClientScene_ConnectLocalServer_m3214984091 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.NetworkClient UnityEngine.Networking.ClientScene::ReconnectLocalServer()
extern "C"  NetworkClient_t696867603 * ClientScene_ReconnectLocalServer_m3407314138 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.ClientScene::ClearLocalPlayers()
extern "C"  void ClientScene_ClearLocalPlayers_m3419130102 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.ClientScene::HandleClientDisconnect(UnityEngine.Networking.NetworkConnection)
extern "C"  void ClientScene_HandleClientDisconnect_m3668488398 (Il2CppObject * __this /* static, unused */, NetworkConnection_t107267906 * ___conn0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.ClientScene::PrepareToSpawnSceneObjects()
extern "C"  void ClientScene_PrepareToSpawnSceneObjects_m1529099071 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.NetworkIdentity UnityEngine.Networking.ClientScene::SpawnSceneObject(UnityEngine.Networking.NetworkSceneId)
extern "C"  NetworkIdentity_t1766639790 * ClientScene_SpawnSceneObject_m3454620256 (Il2CppObject * __this /* static, unused */, NetworkSceneId_t2931030083  ___sceneId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.ClientScene::RegisterSystemHandlers(UnityEngine.Networking.NetworkClient,System.Boolean)
extern "C"  void ClientScene_RegisterSystemHandlers_m3138937692 (Il2CppObject * __this /* static, unused */, NetworkClient_t696867603 * ___client0, bool ___localClient1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Networking.ClientScene::GetStringForAssetId(UnityEngine.Networking.NetworkHash128)
extern "C"  String_t* ClientScene_GetStringForAssetId_m3141330806 (Il2CppObject * __this /* static, unused */, NetworkHash128_t835211239  ___assetId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.ClientScene::RegisterPrefab(UnityEngine.GameObject,UnityEngine.Networking.NetworkHash128)
extern "C"  void ClientScene_RegisterPrefab_m2298062185 (Il2CppObject * __this /* static, unused */, GameObject_t1756533147 * ___prefab0, NetworkHash128_t835211239  ___newAssetId1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.ClientScene::RegisterPrefab(UnityEngine.GameObject)
extern "C"  void ClientScene_RegisterPrefab_m2778346701 (Il2CppObject * __this /* static, unused */, GameObject_t1756533147 * ___prefab0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.ClientScene::RegisterPrefab(UnityEngine.GameObject,UnityEngine.Networking.SpawnDelegate,UnityEngine.Networking.UnSpawnDelegate)
extern "C"  void ClientScene_RegisterPrefab_m1596195918 (Il2CppObject * __this /* static, unused */, GameObject_t1756533147 * ___prefab0, SpawnDelegate_t3327865986 * ___spawnHandler1, UnSpawnDelegate_t3624459119 * ___unspawnHandler2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.ClientScene::UnregisterPrefab(UnityEngine.GameObject)
extern "C"  void ClientScene_UnregisterPrefab_m3840887932 (Il2CppObject * __this /* static, unused */, GameObject_t1756533147 * ___prefab0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.ClientScene::RegisterSpawnHandler(UnityEngine.Networking.NetworkHash128,UnityEngine.Networking.SpawnDelegate,UnityEngine.Networking.UnSpawnDelegate)
extern "C"  void ClientScene_RegisterSpawnHandler_m1356384131 (Il2CppObject * __this /* static, unused */, NetworkHash128_t835211239  ___assetId0, SpawnDelegate_t3327865986 * ___spawnHandler1, UnSpawnDelegate_t3624459119 * ___unspawnHandler2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.ClientScene::UnregisterSpawnHandler(UnityEngine.Networking.NetworkHash128)
extern "C"  void ClientScene_UnregisterSpawnHandler_m2987660875 (Il2CppObject * __this /* static, unused */, NetworkHash128_t835211239  ___assetId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.ClientScene::ClearSpawners()
extern "C"  void ClientScene_ClearSpawners_m4190394164 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.ClientScene::DestroyAllClientObjects()
extern "C"  void ClientScene_DestroyAllClientObjects_m3638284702 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.ClientScene::SetLocalObject(UnityEngine.Networking.NetworkInstanceId,UnityEngine.GameObject)
extern "C"  void ClientScene_SetLocalObject_m71766021 (Il2CppObject * __this /* static, unused */, NetworkInstanceId_t33998832  ___netId0, GameObject_t1756533147 * ___obj1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.Networking.ClientScene::FindLocalObject(UnityEngine.Networking.NetworkInstanceId)
extern "C"  GameObject_t1756533147 * ClientScene_FindLocalObject_m2367266257 (Il2CppObject * __this /* static, unused */, NetworkInstanceId_t33998832  ___netId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.ClientScene::ApplySpawnPayload(UnityEngine.Networking.NetworkIdentity,UnityEngine.Vector3,System.Byte[],UnityEngine.Networking.NetworkInstanceId,UnityEngine.GameObject)
extern "C"  void ClientScene_ApplySpawnPayload_m2712426171 (Il2CppObject * __this /* static, unused */, NetworkIdentity_t1766639790 * ___uv0, Vector3_t2243707580  ___position1, ByteU5BU5D_t3397334013* ___payload2, NetworkInstanceId_t33998832  ___netId3, GameObject_t1756533147 * ___newGameObject4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.ClientScene::OnObjectSpawn(UnityEngine.Networking.NetworkMessage)
extern "C"  void ClientScene_OnObjectSpawn_m4119805631 (Il2CppObject * __this /* static, unused */, NetworkMessage_t2339216573 * ___netMsg0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.ClientScene::OnObjectSpawnScene(UnityEngine.Networking.NetworkMessage)
extern "C"  void ClientScene_OnObjectSpawnScene_m1881810505 (Il2CppObject * __this /* static, unused */, NetworkMessage_t2339216573 * ___netMsg0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.ClientScene::OnObjectSpawnFinished(UnityEngine.Networking.NetworkMessage)
extern "C"  void ClientScene_OnObjectSpawnFinished_m3116918129 (Il2CppObject * __this /* static, unused */, NetworkMessage_t2339216573 * ___netMsg0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.ClientScene::OnObjectDestroy(UnityEngine.Networking.NetworkMessage)
extern "C"  void ClientScene_OnObjectDestroy_m2082445190 (Il2CppObject * __this /* static, unused */, NetworkMessage_t2339216573 * ___netMsg0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.ClientScene::OnLocalClientObjectDestroy(UnityEngine.Networking.NetworkMessage)
extern "C"  void ClientScene_OnLocalClientObjectDestroy_m2101920338 (Il2CppObject * __this /* static, unused */, NetworkMessage_t2339216573 * ___netMsg0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.ClientScene::OnLocalClientObjectHide(UnityEngine.Networking.NetworkMessage)
extern "C"  void ClientScene_OnLocalClientObjectHide_m2516037750 (Il2CppObject * __this /* static, unused */, NetworkMessage_t2339216573 * ___netMsg0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.ClientScene::OnLocalClientObjectSpawn(UnityEngine.Networking.NetworkMessage)
extern "C"  void ClientScene_OnLocalClientObjectSpawn_m3824541151 (Il2CppObject * __this /* static, unused */, NetworkMessage_t2339216573 * ___netMsg0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.ClientScene::OnLocalClientObjectSpawnScene(UnityEngine.Networking.NetworkMessage)
extern "C"  void ClientScene_OnLocalClientObjectSpawnScene_m2269409713 (Il2CppObject * __this /* static, unused */, NetworkMessage_t2339216573 * ___netMsg0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.ClientScene::OnUpdateVarsMessage(UnityEngine.Networking.NetworkMessage)
extern "C"  void ClientScene_OnUpdateVarsMessage_m3437570885 (Il2CppObject * __this /* static, unused */, NetworkMessage_t2339216573 * ___netMsg0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.ClientScene::OnRPCMessage(UnityEngine.Networking.NetworkMessage)
extern "C"  void ClientScene_OnRPCMessage_m1936939047 (Il2CppObject * __this /* static, unused */, NetworkMessage_t2339216573 * ___netMsg0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.ClientScene::OnSyncEventMessage(UnityEngine.Networking.NetworkMessage)
extern "C"  void ClientScene_OnSyncEventMessage_m629856801 (Il2CppObject * __this /* static, unused */, NetworkMessage_t2339216573 * ___netMsg0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.ClientScene::OnSyncListMessage(UnityEngine.Networking.NetworkMessage)
extern "C"  void ClientScene_OnSyncListMessage_m1263996215 (Il2CppObject * __this /* static, unused */, NetworkMessage_t2339216573 * ___netMsg0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.ClientScene::OnClientAuthority(UnityEngine.Networking.NetworkMessage)
extern "C"  void ClientScene_OnClientAuthority_m3018053421 (Il2CppObject * __this /* static, unused */, NetworkMessage_t2339216573 * ___netMsg0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.ClientScene::OnOwnerMessage(UnityEngine.Networking.NetworkMessage)
extern "C"  void ClientScene_OnOwnerMessage_m2965399807 (Il2CppObject * __this /* static, unused */, NetworkMessage_t2339216573 * ___netMsg0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.ClientScene::CheckForOwner(UnityEngine.Networking.NetworkIdentity)
extern "C"  void ClientScene_CheckForOwner_m1569316917 (Il2CppObject * __this /* static, unused */, NetworkIdentity_t1766639790 * ___uv0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.ClientScene::.cctor()
extern "C"  void ClientScene__cctor_m524988625 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
