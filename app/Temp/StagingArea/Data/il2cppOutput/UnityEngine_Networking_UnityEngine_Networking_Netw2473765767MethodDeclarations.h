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

// UnityEngine.Networking.NetworkLobbyManager
struct NetworkLobbyManager_t2473765767;
// UnityEngine.Networking.NetworkLobbyPlayer
struct NetworkLobbyPlayer_t2123032571;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// System.String
struct String_t;
// UnityEngine.Networking.NetworkConnection
struct NetworkConnection_t107267906;
// UnityEngine.Networking.PlayerController
struct PlayerController_t612925521;
// UnityEngine.Networking.NetworkMessage
struct NetworkMessage_t2339216573;
// UnityEngine.Networking.NetworkClient
struct NetworkClient_t696867603;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netw2123032571.h"
#include "UnityEngine_UnityEngine_GameObject1756533147.h"
#include "mscorlib_System_String2029220233.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netwo107267906.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Playe612925521.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netw2339216573.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netwo696867603.h"

// System.Void UnityEngine.Networking.NetworkLobbyManager::.ctor()
extern "C"  void NetworkLobbyManager__ctor_m755132244 (NetworkLobbyManager_t2473765767 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkLobbyManager::get_showLobbyGUI()
extern "C"  bool NetworkLobbyManager_get_showLobbyGUI_m3452866497 (NetworkLobbyManager_t2473765767 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkLobbyManager::set_showLobbyGUI(System.Boolean)
extern "C"  void NetworkLobbyManager_set_showLobbyGUI_m2551393680 (NetworkLobbyManager_t2473765767 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Networking.NetworkLobbyManager::get_maxPlayers()
extern "C"  int32_t NetworkLobbyManager_get_maxPlayers_m4242774541 (NetworkLobbyManager_t2473765767 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkLobbyManager::set_maxPlayers(System.Int32)
extern "C"  void NetworkLobbyManager_set_maxPlayers_m548473042 (NetworkLobbyManager_t2473765767 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Networking.NetworkLobbyManager::get_maxPlayersPerConnection()
extern "C"  int32_t NetworkLobbyManager_get_maxPlayersPerConnection_m140589116 (NetworkLobbyManager_t2473765767 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkLobbyManager::set_maxPlayersPerConnection(System.Int32)
extern "C"  void NetworkLobbyManager_set_maxPlayersPerConnection_m956265591 (NetworkLobbyManager_t2473765767 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Networking.NetworkLobbyManager::get_minPlayers()
extern "C"  int32_t NetworkLobbyManager_get_minPlayers_m3911567787 (NetworkLobbyManager_t2473765767 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkLobbyManager::set_minPlayers(System.Int32)
extern "C"  void NetworkLobbyManager_set_minPlayers_m1824543576 (NetworkLobbyManager_t2473765767 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.NetworkLobbyPlayer UnityEngine.Networking.NetworkLobbyManager::get_lobbyPlayerPrefab()
extern "C"  NetworkLobbyPlayer_t2123032571 * NetworkLobbyManager_get_lobbyPlayerPrefab_m1193838115 (NetworkLobbyManager_t2473765767 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkLobbyManager::set_lobbyPlayerPrefab(UnityEngine.Networking.NetworkLobbyPlayer)
extern "C"  void NetworkLobbyManager_set_lobbyPlayerPrefab_m3427817832 (NetworkLobbyManager_t2473765767 * __this, NetworkLobbyPlayer_t2123032571 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.Networking.NetworkLobbyManager::get_gamePlayerPrefab()
extern "C"  GameObject_t1756533147 * NetworkLobbyManager_get_gamePlayerPrefab_m1716730811 (NetworkLobbyManager_t2473765767 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkLobbyManager::set_gamePlayerPrefab(UnityEngine.GameObject)
extern "C"  void NetworkLobbyManager_set_gamePlayerPrefab_m623604500 (NetworkLobbyManager_t2473765767 * __this, GameObject_t1756533147 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Networking.NetworkLobbyManager::get_lobbyScene()
extern "C"  String_t* NetworkLobbyManager_get_lobbyScene_m292641062 (NetworkLobbyManager_t2473765767 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkLobbyManager::set_lobbyScene(System.String)
extern "C"  void NetworkLobbyManager_set_lobbyScene_m1172459657 (NetworkLobbyManager_t2473765767 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Networking.NetworkLobbyManager::get_playScene()
extern "C"  String_t* NetworkLobbyManager_get_playScene_m4070307442 (NetworkLobbyManager_t2473765767 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkLobbyManager::set_playScene(System.String)
extern "C"  void NetworkLobbyManager_set_playScene_m90714155 (NetworkLobbyManager_t2473765767 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkLobbyManager::OnValidate()
extern "C"  void NetworkLobbyManager_OnValidate_m2564028021 (NetworkLobbyManager_t2473765767 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte UnityEngine.Networking.NetworkLobbyManager::FindSlot()
extern "C"  uint8_t NetworkLobbyManager_FindSlot_m3495869137 (NetworkLobbyManager_t2473765767 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkLobbyManager::SceneLoadedForPlayer(UnityEngine.Networking.NetworkConnection,UnityEngine.GameObject)
extern "C"  void NetworkLobbyManager_SceneLoadedForPlayer_m2891514584 (NetworkLobbyManager_t2473765767 * __this, NetworkConnection_t107267906 * ___conn0, GameObject_t1756533147 * ___lobbyPlayerGameObject1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Networking.NetworkLobbyManager::CheckConnectionIsReadyToBegin(UnityEngine.Networking.NetworkConnection)
extern "C"  int32_t NetworkLobbyManager_CheckConnectionIsReadyToBegin_m3537997652 (Il2CppObject * __this /* static, unused */, NetworkConnection_t107267906 * ___conn0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkLobbyManager::CheckReadyToBegin()
extern "C"  void NetworkLobbyManager_CheckReadyToBegin_m505390947 (NetworkLobbyManager_t2473765767 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkLobbyManager::ServerReturnToLobby()
extern "C"  void NetworkLobbyManager_ServerReturnToLobby_m947657660 (NetworkLobbyManager_t2473765767 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkLobbyManager::CallOnClientEnterLobby()
extern "C"  void NetworkLobbyManager_CallOnClientEnterLobby_m2769647034 (NetworkLobbyManager_t2473765767 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkLobbyManager::CallOnClientExitLobby()
extern "C"  void NetworkLobbyManager_CallOnClientExitLobby_m1808673434 (NetworkLobbyManager_t2473765767 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkLobbyManager::SendReturnToLobby()
extern "C"  bool NetworkLobbyManager_SendReturnToLobby_m3922237761 (NetworkLobbyManager_t2473765767 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkLobbyManager::OnServerConnect(UnityEngine.Networking.NetworkConnection)
extern "C"  void NetworkLobbyManager_OnServerConnect_m442150855 (NetworkLobbyManager_t2473765767 * __this, NetworkConnection_t107267906 * ___conn0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkLobbyManager::OnServerDisconnect(UnityEngine.Networking.NetworkConnection)
extern "C"  void NetworkLobbyManager_OnServerDisconnect_m2398178037 (NetworkLobbyManager_t2473765767 * __this, NetworkConnection_t107267906 * ___conn0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkLobbyManager::OnServerAddPlayer(UnityEngine.Networking.NetworkConnection,System.Int16)
extern "C"  void NetworkLobbyManager_OnServerAddPlayer_m2723495172 (NetworkLobbyManager_t2473765767 * __this, NetworkConnection_t107267906 * ___conn0, int16_t ___playerControllerId1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkLobbyManager::OnServerRemovePlayer(UnityEngine.Networking.NetworkConnection,UnityEngine.Networking.PlayerController)
extern "C"  void NetworkLobbyManager_OnServerRemovePlayer_m347678854 (NetworkLobbyManager_t2473765767 * __this, NetworkConnection_t107267906 * ___conn0, PlayerController_t612925521 * ___player1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkLobbyManager::ServerChangeScene(System.String)
extern "C"  void NetworkLobbyManager_ServerChangeScene_m4040031109 (NetworkLobbyManager_t2473765767 * __this, String_t* ___sceneName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkLobbyManager::OnServerSceneChanged(System.String)
extern "C"  void NetworkLobbyManager_OnServerSceneChanged_m10673414 (NetworkLobbyManager_t2473765767 * __this, String_t* ___sceneName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkLobbyManager::OnServerReadyToBeginMessage(UnityEngine.Networking.NetworkMessage)
extern "C"  void NetworkLobbyManager_OnServerReadyToBeginMessage_m2411246806 (NetworkLobbyManager_t2473765767 * __this, NetworkMessage_t2339216573 * ___netMsg0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkLobbyManager::OnServerSceneLoadedMessage(UnityEngine.Networking.NetworkMessage)
extern "C"  void NetworkLobbyManager_OnServerSceneLoadedMessage_m817279854 (NetworkLobbyManager_t2473765767 * __this, NetworkMessage_t2339216573 * ___netMsg0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkLobbyManager::OnServerReturnToLobbyMessage(UnityEngine.Networking.NetworkMessage)
extern "C"  void NetworkLobbyManager_OnServerReturnToLobbyMessage_m3349082798 (NetworkLobbyManager_t2473765767 * __this, NetworkMessage_t2339216573 * ___netMsg0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkLobbyManager::OnStartServer()
extern "C"  void NetworkLobbyManager_OnStartServer_m2323052724 (NetworkLobbyManager_t2473765767 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkLobbyManager::OnStartHost()
extern "C"  void NetworkLobbyManager_OnStartHost_m3575191607 (NetworkLobbyManager_t2473765767 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkLobbyManager::OnStopHost()
extern "C"  void NetworkLobbyManager_OnStopHost_m4203358963 (NetworkLobbyManager_t2473765767 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkLobbyManager::OnStartClient(UnityEngine.Networking.NetworkClient)
extern "C"  void NetworkLobbyManager_OnStartClient_m1157070042 (NetworkLobbyManager_t2473765767 * __this, NetworkClient_t696867603 * ___lobbyClient0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkLobbyManager::OnClientConnect(UnityEngine.Networking.NetworkConnection)
extern "C"  void NetworkLobbyManager_OnClientConnect_m1369337987 (NetworkLobbyManager_t2473765767 * __this, NetworkConnection_t107267906 * ___conn0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkLobbyManager::OnClientDisconnect(UnityEngine.Networking.NetworkConnection)
extern "C"  void NetworkLobbyManager_OnClientDisconnect_m2724371473 (NetworkLobbyManager_t2473765767 * __this, NetworkConnection_t107267906 * ___conn0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkLobbyManager::OnStopClient()
extern "C"  void NetworkLobbyManager_OnStopClient_m1163971344 (NetworkLobbyManager_t2473765767 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkLobbyManager::OnClientSceneChanged(UnityEngine.Networking.NetworkConnection)
extern "C"  void NetworkLobbyManager_OnClientSceneChanged_m25082473 (NetworkLobbyManager_t2473765767 * __this, NetworkConnection_t107267906 * ___conn0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkLobbyManager::OnClientReadyToBegin(UnityEngine.Networking.NetworkMessage)
extern "C"  void NetworkLobbyManager_OnClientReadyToBegin_m1119323175 (NetworkLobbyManager_t2473765767 * __this, NetworkMessage_t2339216573 * ___netMsg0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkLobbyManager::OnClientAddPlayerFailedMessage(UnityEngine.Networking.NetworkMessage)
extern "C"  void NetworkLobbyManager_OnClientAddPlayerFailedMessage_m1774129752 (NetworkLobbyManager_t2473765767 * __this, NetworkMessage_t2339216573 * ___netMsg0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkLobbyManager::OnLobbyStartHost()
extern "C"  void NetworkLobbyManager_OnLobbyStartHost_m3265573937 (NetworkLobbyManager_t2473765767 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkLobbyManager::OnLobbyStopHost()
extern "C"  void NetworkLobbyManager_OnLobbyStopHost_m2131326121 (NetworkLobbyManager_t2473765767 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkLobbyManager::OnLobbyStartServer()
extern "C"  void NetworkLobbyManager_OnLobbyStartServer_m3050347244 (NetworkLobbyManager_t2473765767 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkLobbyManager::OnLobbyServerConnect(UnityEngine.Networking.NetworkConnection)
extern "C"  void NetworkLobbyManager_OnLobbyServerConnect_m1550411173 (NetworkLobbyManager_t2473765767 * __this, NetworkConnection_t107267906 * ___conn0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkLobbyManager::OnLobbyServerDisconnect(UnityEngine.Networking.NetworkConnection)
extern "C"  void NetworkLobbyManager_OnLobbyServerDisconnect_m2991549511 (NetworkLobbyManager_t2473765767 * __this, NetworkConnection_t107267906 * ___conn0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkLobbyManager::OnLobbyServerSceneChanged(System.String)
extern "C"  void NetworkLobbyManager_OnLobbyServerSceneChanged_m647981350 (NetworkLobbyManager_t2473765767 * __this, String_t* ___sceneName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.Networking.NetworkLobbyManager::OnLobbyServerCreateLobbyPlayer(UnityEngine.Networking.NetworkConnection,System.Int16)
extern "C"  GameObject_t1756533147 * NetworkLobbyManager_OnLobbyServerCreateLobbyPlayer_m2572108020 (NetworkLobbyManager_t2473765767 * __this, NetworkConnection_t107267906 * ___conn0, int16_t ___playerControllerId1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.Networking.NetworkLobbyManager::OnLobbyServerCreateGamePlayer(UnityEngine.Networking.NetworkConnection,System.Int16)
extern "C"  GameObject_t1756533147 * NetworkLobbyManager_OnLobbyServerCreateGamePlayer_m979672194 (NetworkLobbyManager_t2473765767 * __this, NetworkConnection_t107267906 * ___conn0, int16_t ___playerControllerId1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkLobbyManager::OnLobbyServerPlayerRemoved(UnityEngine.Networking.NetworkConnection,System.Int16)
extern "C"  void NetworkLobbyManager_OnLobbyServerPlayerRemoved_m1924962681 (NetworkLobbyManager_t2473765767 * __this, NetworkConnection_t107267906 * ___conn0, int16_t ___playerControllerId1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkLobbyManager::OnLobbyServerSceneLoadedForPlayer(UnityEngine.GameObject,UnityEngine.GameObject)
extern "C"  bool NetworkLobbyManager_OnLobbyServerSceneLoadedForPlayer_m3467463605 (NetworkLobbyManager_t2473765767 * __this, GameObject_t1756533147 * ___lobbyPlayer0, GameObject_t1756533147 * ___gamePlayer1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkLobbyManager::OnLobbyServerPlayersReady()
extern "C"  void NetworkLobbyManager_OnLobbyServerPlayersReady_m1210906723 (NetworkLobbyManager_t2473765767 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkLobbyManager::OnLobbyClientEnter()
extern "C"  void NetworkLobbyManager_OnLobbyClientEnter_m3537379024 (NetworkLobbyManager_t2473765767 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkLobbyManager::OnLobbyClientExit()
extern "C"  void NetworkLobbyManager_OnLobbyClientExit_m3448501452 (NetworkLobbyManager_t2473765767 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkLobbyManager::OnLobbyClientConnect(UnityEngine.Networking.NetworkConnection)
extern "C"  void NetworkLobbyManager_OnLobbyClientConnect_m2291912233 (NetworkLobbyManager_t2473765767 * __this, NetworkConnection_t107267906 * ___conn0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkLobbyManager::OnLobbyClientDisconnect(UnityEngine.Networking.NetworkConnection)
extern "C"  void NetworkLobbyManager_OnLobbyClientDisconnect_m294868395 (NetworkLobbyManager_t2473765767 * __this, NetworkConnection_t107267906 * ___conn0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkLobbyManager::OnLobbyStartClient(UnityEngine.Networking.NetworkClient)
extern "C"  void NetworkLobbyManager_OnLobbyStartClient_m4244979126 (NetworkLobbyManager_t2473765767 * __this, NetworkClient_t696867603 * ___lobbyClient0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkLobbyManager::OnLobbyStopClient()
extern "C"  void NetworkLobbyManager_OnLobbyStopClient_m3763731092 (NetworkLobbyManager_t2473765767 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkLobbyManager::OnLobbyClientSceneChanged(UnityEngine.Networking.NetworkConnection)
extern "C"  void NetworkLobbyManager_OnLobbyClientSceneChanged_m2113548235 (NetworkLobbyManager_t2473765767 * __this, NetworkConnection_t107267906 * ___conn0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkLobbyManager::OnLobbyClientAddPlayerFailed()
extern "C"  void NetworkLobbyManager_OnLobbyClientAddPlayerFailed_m2984326957 (NetworkLobbyManager_t2473765767 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkLobbyManager::OnGUI()
extern "C"  void NetworkLobbyManager_OnGUI_m1723305588 (NetworkLobbyManager_t2473765767 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkLobbyManager::TryToAddPlayer()
extern "C"  void NetworkLobbyManager_TryToAddPlayer_m1604671428 (NetworkLobbyManager_t2473765767 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkLobbyManager::.cctor()
extern "C"  void NetworkLobbyManager__cctor_m2821657941 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
