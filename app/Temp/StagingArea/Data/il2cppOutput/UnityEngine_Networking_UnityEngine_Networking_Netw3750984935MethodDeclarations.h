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

// UnityEngine.Networking.NetworkMigrationManager
struct NetworkMigrationManager_t3750984935;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.Networking.NetworkClient
struct NetworkClient_t696867603;
// UnityEngine.Networking.Match.MatchInfo
struct MatchInfo_t668842927;
// System.String
struct String_t;
// UnityEngine.Networking.NetworkSystem.PeerInfoMessage[]
struct PeerInfoMessageU5BU5D_t2669814294;
// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Networking.NetworkMigrationManager/ConnectionPendingPlayers>
struct Dictionary_2_t3215677535;
// UnityEngine.Networking.NetworkConnection
struct NetworkConnection_t107267906;
// UnityEngine.Networking.NetworkIdentity
struct NetworkIdentity_t1766639790;
// UnityEngine.Networking.NetworkMessage
struct NetworkMessage_t2339216573;
// UnityEngine.Networking.NetworkReader
struct NetworkReader_t3187690923;
// UnityEngine.Networking.NetworkSystem.PeerListMessage
struct PeerListMessage_t297244123;
// UnityEngine.Networking.NetworkSystem.PeerInfoMessage
struct PeerInfoMessage_t4070066639;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_GameObject1756533147.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Networ33998832.h"
#include "mscorlib_System_String2029220233.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netwo107267906.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netw1766639790.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netwo696867603.h"
#include "UnityEngine_UnityEngine_Networking_Match_MatchInfo668842927.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netw2339216573.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netw1964249276.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netw3187690923.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netwo297244123.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netw4070066639.h"

// System.Void UnityEngine.Networking.NetworkMigrationManager::.ctor()
extern "C"  void NetworkMigrationManager__ctor_m3240155712 (NetworkMigrationManager_t3750984935 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkMigrationManager::AddPendingPlayer(UnityEngine.GameObject,System.Int32,UnityEngine.Networking.NetworkInstanceId,System.Int16)
extern "C"  void NetworkMigrationManager_AddPendingPlayer_m787790202 (NetworkMigrationManager_t3750984935 * __this, GameObject_t1756533147 * ___obj0, int32_t ___connectionId1, NetworkInstanceId_t33998832  ___netId2, int16_t ___playerControllerId3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.Networking.NetworkMigrationManager::FindPendingPlayer(System.Int32,UnityEngine.Networking.NetworkInstanceId,System.Int16)
extern "C"  GameObject_t1756533147 * NetworkMigrationManager_FindPendingPlayer_m1028370721 (NetworkMigrationManager_t3750984935 * __this, int32_t ___connectionId0, NetworkInstanceId_t33998832  ___netId1, int16_t ___playerControllerId2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkMigrationManager::RemovePendingPlayer(System.Int32)
extern "C"  void NetworkMigrationManager_RemovePendingPlayer_m2170392631 (NetworkMigrationManager_t3750984935 * __this, int32_t ___connectionId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkMigrationManager::get_hostMigration()
extern "C"  bool NetworkMigrationManager_get_hostMigration_m90719113 (NetworkMigrationManager_t3750984935 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkMigrationManager::set_hostMigration(System.Boolean)
extern "C"  void NetworkMigrationManager_set_hostMigration_m3876773312 (NetworkMigrationManager_t3750984935 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkMigrationManager::get_showGUI()
extern "C"  bool NetworkMigrationManager_get_showGUI_m1965557073 (NetworkMigrationManager_t3750984935 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkMigrationManager::set_showGUI(System.Boolean)
extern "C"  void NetworkMigrationManager_set_showGUI_m3449781982 (NetworkMigrationManager_t3750984935 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Networking.NetworkMigrationManager::get_offsetX()
extern "C"  int32_t NetworkMigrationManager_get_offsetX_m337334182 (NetworkMigrationManager_t3750984935 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkMigrationManager::set_offsetX(System.Int32)
extern "C"  void NetworkMigrationManager_set_offsetX_m2447492473 (NetworkMigrationManager_t3750984935 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Networking.NetworkMigrationManager::get_offsetY()
extern "C"  int32_t NetworkMigrationManager_get_offsetY_m337334215 (NetworkMigrationManager_t3750984935 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkMigrationManager::set_offsetY(System.Int32)
extern "C"  void NetworkMigrationManager_set_offsetY_m951250996 (NetworkMigrationManager_t3750984935 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.NetworkClient UnityEngine.Networking.NetworkMigrationManager::get_client()
extern "C"  NetworkClient_t696867603 * NetworkMigrationManager_get_client_m2701360715 (NetworkMigrationManager_t3750984935 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkMigrationManager::get_waitingToBecomeNewHost()
extern "C"  bool NetworkMigrationManager_get_waitingToBecomeNewHost_m2273719466 (NetworkMigrationManager_t3750984935 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkMigrationManager::set_waitingToBecomeNewHost(System.Boolean)
extern "C"  void NetworkMigrationManager_set_waitingToBecomeNewHost_m585505309 (NetworkMigrationManager_t3750984935 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkMigrationManager::get_waitingReconnectToNewHost()
extern "C"  bool NetworkMigrationManager_get_waitingReconnectToNewHost_m1443353240 (NetworkMigrationManager_t3750984935 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkMigrationManager::set_waitingReconnectToNewHost(System.Boolean)
extern "C"  void NetworkMigrationManager_set_waitingReconnectToNewHost_m3584126391 (NetworkMigrationManager_t3750984935 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkMigrationManager::get_disconnectedFromHost()
extern "C"  bool NetworkMigrationManager_get_disconnectedFromHost_m974305002 (NetworkMigrationManager_t3750984935 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkMigrationManager::get_hostWasShutdown()
extern "C"  bool NetworkMigrationManager_get_hostWasShutdown_m2923230002 (NetworkMigrationManager_t3750984935 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.Match.MatchInfo UnityEngine.Networking.NetworkMigrationManager::get_matchInfo()
extern "C"  MatchInfo_t668842927 * NetworkMigrationManager_get_matchInfo_m3807509584 (NetworkMigrationManager_t3750984935 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Networking.NetworkMigrationManager::get_oldServerConnectionId()
extern "C"  int32_t NetworkMigrationManager_get_oldServerConnectionId_m1647149192 (NetworkMigrationManager_t3750984935 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Networking.NetworkMigrationManager::get_newHostAddress()
extern "C"  String_t* NetworkMigrationManager_get_newHostAddress_m3377402022 (NetworkMigrationManager_t3750984935 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkMigrationManager::set_newHostAddress(System.String)
extern "C"  void NetworkMigrationManager_set_newHostAddress_m1009859853 (NetworkMigrationManager_t3750984935 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.NetworkSystem.PeerInfoMessage[] UnityEngine.Networking.NetworkMigrationManager::get_peers()
extern "C"  PeerInfoMessageU5BU5D_t2669814294* NetworkMigrationManager_get_peers_m1812273104 (NetworkMigrationManager_t3750984935 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Networking.NetworkMigrationManager/ConnectionPendingPlayers> UnityEngine.Networking.NetworkMigrationManager::get_pendingPlayers()
extern "C"  Dictionary_2_t3215677535 * NetworkMigrationManager_get_pendingPlayers_m2121639023 (NetworkMigrationManager_t3750984935 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkMigrationManager::Start()
extern "C"  void NetworkMigrationManager_Start_m2882874416 (NetworkMigrationManager_t3750984935 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkMigrationManager::Reset(System.Int32)
extern "C"  void NetworkMigrationManager_Reset_m2329893050 (NetworkMigrationManager_t3750984935 * __this, int32_t ___reconnectId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkMigrationManager::AssignAuthorityCallback(UnityEngine.Networking.NetworkConnection,UnityEngine.Networking.NetworkIdentity,System.Boolean)
extern "C"  void NetworkMigrationManager_AssignAuthorityCallback_m3781546720 (NetworkMigrationManager_t3750984935 * __this, NetworkConnection_t107267906 * ___conn0, NetworkIdentity_t1766639790 * ___uv1, bool ___authorityState2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkMigrationManager::Initialize(UnityEngine.Networking.NetworkClient,UnityEngine.Networking.Match.MatchInfo)
extern "C"  void NetworkMigrationManager_Initialize_m2988437903 (NetworkMigrationManager_t3750984935 * __this, NetworkClient_t696867603 * ___newClient0, MatchInfo_t668842927 * ___newMatchInfo1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkMigrationManager::DisablePlayerObjects()
extern "C"  void NetworkMigrationManager_DisablePlayerObjects_m2679784361 (NetworkMigrationManager_t3750984935 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkMigrationManager::SendPeerInfo()
extern "C"  void NetworkMigrationManager_SendPeerInfo_m559841152 (NetworkMigrationManager_t3750984935 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkMigrationManager::OnPeerClientAuthority(UnityEngine.Networking.NetworkMessage)
extern "C"  void NetworkMigrationManager_OnPeerClientAuthority_m1400325105 (NetworkMigrationManager_t3750984935 * __this, NetworkMessage_t2339216573 * ___netMsg0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkMigrationManager::OnPeerInfo(UnityEngine.Networking.NetworkMessage)
extern "C"  void NetworkMigrationManager_OnPeerInfo_m1927626427 (NetworkMigrationManager_t3750984935 * __this, NetworkMessage_t2339216573 * ___netMsg0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkMigrationManager::OnServerReconnectPlayerMessage(UnityEngine.Networking.NetworkMessage)
extern "C"  void NetworkMigrationManager_OnServerReconnectPlayerMessage_m3180451731 (NetworkMigrationManager_t3750984935 * __this, NetworkMessage_t2339216573 * ___netMsg0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkMigrationManager::ReconnectObjectForConnection(UnityEngine.Networking.NetworkConnection,UnityEngine.GameObject,System.Int32)
extern "C"  bool NetworkMigrationManager_ReconnectObjectForConnection_m4046270591 (NetworkMigrationManager_t3750984935 * __this, NetworkConnection_t107267906 * ___newConnection0, GameObject_t1756533147 * ___oldObject1, int32_t ___oldConnectionId2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkMigrationManager::ReconnectPlayerForConnection(UnityEngine.Networking.NetworkConnection,UnityEngine.GameObject,System.Int32,System.Int16)
extern "C"  bool NetworkMigrationManager_ReconnectPlayerForConnection_m648627458 (NetworkMigrationManager_t3750984935 * __this, NetworkConnection_t107267906 * ___newConnection0, GameObject_t1756533147 * ___oldPlayer1, int32_t ___oldConnectionId2, int16_t ___playerControllerId3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkMigrationManager::LostHostOnClient(UnityEngine.Networking.NetworkConnection)
extern "C"  bool NetworkMigrationManager_LostHostOnClient_m3815559303 (NetworkMigrationManager_t3750984935 * __this, NetworkConnection_t107267906 * ___conn0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkMigrationManager::LostHostOnHost()
extern "C"  void NetworkMigrationManager_LostHostOnHost_m1804400181 (NetworkMigrationManager_t3750984935 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkMigrationManager::BecomeNewHost(System.Int32)
extern "C"  bool NetworkMigrationManager_BecomeNewHost_m1971482226 (NetworkMigrationManager_t3750984935 * __this, int32_t ___port0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkMigrationManager::OnClientDisconnectedFromHost(UnityEngine.Networking.NetworkConnection,UnityEngine.Networking.NetworkMigrationManager/SceneChangeOption&)
extern "C"  void NetworkMigrationManager_OnClientDisconnectedFromHost_m768493884 (NetworkMigrationManager_t3750984935 * __this, NetworkConnection_t107267906 * ___conn0, int32_t* ___sceneChange1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkMigrationManager::OnServerHostShutdown()
extern "C"  void NetworkMigrationManager_OnServerHostShutdown_m799098336 (NetworkMigrationManager_t3750984935 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkMigrationManager::OnServerReconnectPlayer(UnityEngine.Networking.NetworkConnection,UnityEngine.GameObject,System.Int32,System.Int16)
extern "C"  void NetworkMigrationManager_OnServerReconnectPlayer_m2371072623 (NetworkMigrationManager_t3750984935 * __this, NetworkConnection_t107267906 * ___newConnection0, GameObject_t1756533147 * ___oldPlayer1, int32_t ___oldConnectionId2, int16_t ___playerControllerId3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkMigrationManager::OnServerReconnectPlayer(UnityEngine.Networking.NetworkConnection,UnityEngine.GameObject,System.Int32,System.Int16,UnityEngine.Networking.NetworkReader)
extern "C"  void NetworkMigrationManager_OnServerReconnectPlayer_m1699107815 (NetworkMigrationManager_t3750984935 * __this, NetworkConnection_t107267906 * ___newConnection0, GameObject_t1756533147 * ___oldPlayer1, int32_t ___oldConnectionId2, int16_t ___playerControllerId3, NetworkReader_t3187690923 * ___extraMessageReader4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkMigrationManager::OnServerReconnectObject(UnityEngine.Networking.NetworkConnection,UnityEngine.GameObject,System.Int32)
extern "C"  void NetworkMigrationManager_OnServerReconnectObject_m2781145004 (NetworkMigrationManager_t3750984935 * __this, NetworkConnection_t107267906 * ___newConnection0, GameObject_t1756533147 * ___oldObject1, int32_t ___oldConnectionId2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkMigrationManager::OnPeersUpdated(UnityEngine.Networking.NetworkSystem.PeerListMessage)
extern "C"  void NetworkMigrationManager_OnPeersUpdated_m2897901880 (NetworkMigrationManager_t3750984935 * __this, PeerListMessage_t297244123 * ___peers0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkMigrationManager::OnAuthorityUpdated(UnityEngine.GameObject,System.Int32,System.Boolean)
extern "C"  void NetworkMigrationManager_OnAuthorityUpdated_m3863123407 (NetworkMigrationManager_t3750984935 * __this, GameObject_t1756533147 * ___go0, int32_t ___connectionId1, bool ___authorityState2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkMigrationManager::FindNewHost(UnityEngine.Networking.NetworkSystem.PeerInfoMessage&,System.Boolean&)
extern "C"  bool NetworkMigrationManager_FindNewHost_m1649495219 (NetworkMigrationManager_t3750984935 * __this, PeerInfoMessage_t4070066639 ** ___newHostInfo0, bool* ___youAreNewHost1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkMigrationManager::OnGUIHost()
extern "C"  void NetworkMigrationManager_OnGUIHost_m3059783878 (NetworkMigrationManager_t3750984935 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkMigrationManager::OnGUIClient()
extern "C"  void NetworkMigrationManager_OnGUIClient_m3870230039 (NetworkMigrationManager_t3750984935 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkMigrationManager::OnGUI()
extern "C"  void NetworkMigrationManager_OnGUI_m921841604 (NetworkMigrationManager_t3750984935 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
