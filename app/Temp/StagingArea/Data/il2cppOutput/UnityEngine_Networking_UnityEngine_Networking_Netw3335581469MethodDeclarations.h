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

// UnityEngine.Networking.NetworkManager
struct NetworkManager_t3335581469;
// System.String
struct String_t;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t1125654279;
// System.Collections.Generic.List`1<UnityEngine.Transform>
struct List_1_t2644239190;
// UnityEngine.Networking.ConnectionConfig
struct ConnectionConfig_t1350910390;
// UnityEngine.Networking.GlobalConfig
struct GlobalConfig_t2977893073;
// System.Collections.Generic.List`1<UnityEngine.Networking.QosType>
struct List_1_t1373013615;
// System.Net.EndPoint
struct EndPoint_t4156119363;
// UnityEngine.Networking.NetworkMigrationManager
struct NetworkMigrationManager_t3750984935;
// UnityEngine.Networking.Match.MatchInfo
struct MatchInfo_t668842927;
// UnityEngine.Networking.NetworkClient
struct NetworkClient_t696867603;
// UnityEngine.Transform
struct Transform_t3275118058;
// UnityEngine.Networking.NetworkMessage
struct NetworkMessage_t2339216573;
// UnityEngine.Networking.NetworkConnection
struct NetworkConnection_t107267906;
// UnityEngine.Networking.NetworkReader
struct NetworkReader_t3187690923;
// UnityEngine.Networking.PlayerController
struct PlayerController_t612925521;
// System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchInfoSnapshot>
struct List_1_t2548232039;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "UnityEngine_Networking_UnityEngine_Networking_LogF2308008460.h"
#include "UnityEngine_UnityEngine_GameObject1756533147.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Play3416202383.h"
#include "System_System_Net_EndPoint4156119363.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netw3750984935.h"
#include "UnityEngine_UnityEngine_Networking_ConnectionConfi1350910390.h"
#include "UnityEngine_UnityEngine_Networking_Match_MatchInfo668842927.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netwo696867603.h"
#include "UnityEngine_UnityEngine_Transform3275118058.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netw2339216573.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netwo107267906.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netw3187690923.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Playe612925521.h"

// System.Void UnityEngine.Networking.NetworkManager::.ctor()
extern "C"  void NetworkManager__ctor_m826152504 (NetworkManager_t3335581469 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Networking.NetworkManager::get_networkPort()
extern "C"  int32_t NetworkManager_get_networkPort_m3779230942 (NetworkManager_t3335581469 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkManager::set_networkPort(System.Int32)
extern "C"  void NetworkManager_set_networkPort_m3091304943 (NetworkManager_t3335581469 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkManager::get_serverBindToIP()
extern "C"  bool NetworkManager_get_serverBindToIP_m3455848755 (NetworkManager_t3335581469 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkManager::set_serverBindToIP(System.Boolean)
extern "C"  void NetworkManager_set_serverBindToIP_m14318494 (NetworkManager_t3335581469 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Networking.NetworkManager::get_serverBindAddress()
extern "C"  String_t* NetworkManager_get_serverBindAddress_m2014955978 (NetworkManager_t3335581469 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkManager::set_serverBindAddress(System.String)
extern "C"  void NetworkManager_set_serverBindAddress_m2752362377 (NetworkManager_t3335581469 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Networking.NetworkManager::get_networkAddress()
extern "C"  String_t* NetworkManager_get_networkAddress_m366249138 (NetworkManager_t3335581469 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkManager::set_networkAddress(System.String)
extern "C"  void NetworkManager_set_networkAddress_m1070987491 (NetworkManager_t3335581469 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkManager::get_dontDestroyOnLoad()
extern "C"  bool NetworkManager_get_dontDestroyOnLoad_m92692933 (NetworkManager_t3335581469 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkManager::set_dontDestroyOnLoad(System.Boolean)
extern "C"  void NetworkManager_set_dontDestroyOnLoad_m3529041412 (NetworkManager_t3335581469 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkManager::get_runInBackground()
extern "C"  bool NetworkManager_get_runInBackground_m4199041705 (NetworkManager_t3335581469 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkManager::set_runInBackground(System.Boolean)
extern "C"  void NetworkManager_set_runInBackground_m5394880 (NetworkManager_t3335581469 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkManager::get_scriptCRCCheck()
extern "C"  bool NetworkManager_get_scriptCRCCheck_m3437376034 (NetworkManager_t3335581469 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkManager::set_scriptCRCCheck(System.Boolean)
extern "C"  void NetworkManager_set_scriptCRCCheck_m31766909 (NetworkManager_t3335581469 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkManager::get_sendPeerInfo()
extern "C"  bool NetworkManager_get_sendPeerInfo_m3922608245 (NetworkManager_t3335581469 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkManager::set_sendPeerInfo(System.Boolean)
extern "C"  void NetworkManager_set_sendPeerInfo_m658075896 (NetworkManager_t3335581469 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Networking.NetworkManager::get_maxDelay()
extern "C"  float NetworkManager_get_maxDelay_m4235397508 (NetworkManager_t3335581469 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkManager::set_maxDelay(System.Single)
extern "C"  void NetworkManager_set_maxDelay_m501762997 (NetworkManager_t3335581469 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.LogFilter/FilterLevel UnityEngine.Networking.NetworkManager::get_logLevel()
extern "C"  int32_t NetworkManager_get_logLevel_m4109710196 (NetworkManager_t3335581469 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkManager::set_logLevel(UnityEngine.Networking.LogFilter/FilterLevel)
extern "C"  void NetworkManager_set_logLevel_m3239470969 (NetworkManager_t3335581469 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.Networking.NetworkManager::get_playerPrefab()
extern "C"  GameObject_t1756533147 * NetworkManager_get_playerPrefab_m1194648067 (NetworkManager_t3335581469 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkManager::set_playerPrefab(UnityEngine.GameObject)
extern "C"  void NetworkManager_set_playerPrefab_m3525536106 (NetworkManager_t3335581469 * __this, GameObject_t1756533147 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkManager::get_autoCreatePlayer()
extern "C"  bool NetworkManager_get_autoCreatePlayer_m2837645861 (NetworkManager_t3335581469 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkManager::set_autoCreatePlayer(System.Boolean)
extern "C"  void NetworkManager_set_autoCreatePlayer_m274037016 (NetworkManager_t3335581469 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.PlayerSpawnMethod UnityEngine.Networking.NetworkManager::get_playerSpawnMethod()
extern "C"  int32_t NetworkManager_get_playerSpawnMethod_m1344302401 (NetworkManager_t3335581469 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkManager::set_playerSpawnMethod(UnityEngine.Networking.PlayerSpawnMethod)
extern "C"  void NetworkManager_set_playerSpawnMethod_m3289498136 (NetworkManager_t3335581469 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Networking.NetworkManager::get_offlineScene()
extern "C"  String_t* NetworkManager_get_offlineScene_m3605383627 (NetworkManager_t3335581469 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkManager::set_offlineScene(System.String)
extern "C"  void NetworkManager_set_offlineScene_m969828416 (NetworkManager_t3335581469 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Networking.NetworkManager::get_onlineScene()
extern "C"  String_t* NetworkManager_get_onlineScene_m3784916541 (NetworkManager_t3335581469 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkManager::set_onlineScene(System.String)
extern "C"  void NetworkManager_set_onlineScene_m118814712 (NetworkManager_t3335581469 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<UnityEngine.GameObject> UnityEngine.Networking.NetworkManager::get_spawnPrefabs()
extern "C"  List_1_t1125654279 * NetworkManager_get_spawnPrefabs_m3919327140 (NetworkManager_t3335581469 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<UnityEngine.Transform> UnityEngine.Networking.NetworkManager::get_startPositions()
extern "C"  List_1_t2644239190 * NetworkManager_get_startPositions_m4012923765 (NetworkManager_t3335581469 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkManager::get_customConfig()
extern "C"  bool NetworkManager_get_customConfig_m1027286278 (NetworkManager_t3335581469 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkManager::set_customConfig(System.Boolean)
extern "C"  void NetworkManager_set_customConfig_m2258671011 (NetworkManager_t3335581469 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.ConnectionConfig UnityEngine.Networking.NetworkManager::get_connectionConfig()
extern "C"  ConnectionConfig_t1350910390 * NetworkManager_get_connectionConfig_m1494958921 (NetworkManager_t3335581469 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.GlobalConfig UnityEngine.Networking.NetworkManager::get_globalConfig()
extern "C"  GlobalConfig_t2977893073 * NetworkManager_get_globalConfig_m1302848905 (NetworkManager_t3335581469 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Networking.NetworkManager::get_maxConnections()
extern "C"  int32_t NetworkManager_get_maxConnections_m2609531580 (NetworkManager_t3335581469 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkManager::set_maxConnections(System.Int32)
extern "C"  void NetworkManager_set_maxConnections_m2473788585 (NetworkManager_t3335581469 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<UnityEngine.Networking.QosType> UnityEngine.Networking.NetworkManager::get_channels()
extern "C"  List_1_t1373013615 * NetworkManager_get_channels_m2378580410 (NetworkManager_t3335581469 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.EndPoint UnityEngine.Networking.NetworkManager::get_secureTunnelEndpoint()
extern "C"  EndPoint_t4156119363 * NetworkManager_get_secureTunnelEndpoint_m3081378815 (NetworkManager_t3335581469 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkManager::set_secureTunnelEndpoint(System.Net.EndPoint)
extern "C"  void NetworkManager_set_secureTunnelEndpoint_m4058953428 (NetworkManager_t3335581469 * __this, EndPoint_t4156119363 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkManager::get_useWebSockets()
extern "C"  bool NetworkManager_get_useWebSockets_m4255395444 (NetworkManager_t3335581469 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkManager::set_useWebSockets(System.Boolean)
extern "C"  void NetworkManager_set_useWebSockets_m3624008975 (NetworkManager_t3335581469 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkManager::get_useSimulator()
extern "C"  bool NetworkManager_get_useSimulator_m734956276 (NetworkManager_t3335581469 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkManager::set_useSimulator(System.Boolean)
extern "C"  void NetworkManager_set_useSimulator_m772776011 (NetworkManager_t3335581469 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Networking.NetworkManager::get_simulatedLatency()
extern "C"  int32_t NetworkManager_get_simulatedLatency_m3474115013 (NetworkManager_t3335581469 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkManager::set_simulatedLatency(System.Int32)
extern "C"  void NetworkManager_set_simulatedLatency_m475627470 (NetworkManager_t3335581469 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Networking.NetworkManager::get_packetLossPercentage()
extern "C"  float NetworkManager_get_packetLossPercentage_m159403886 (NetworkManager_t3335581469 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkManager::set_packetLossPercentage(System.Single)
extern "C"  void NetworkManager_set_packetLossPercentage_m1193601199 (NetworkManager_t3335581469 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Networking.NetworkManager::get_matchHost()
extern "C"  String_t* NetworkManager_get_matchHost_m391448427 (NetworkManager_t3335581469 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkManager::set_matchHost(System.String)
extern "C"  void NetworkManager_set_matchHost_m1048433066 (NetworkManager_t3335581469 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Networking.NetworkManager::get_matchPort()
extern "C"  int32_t NetworkManager_get_matchPort_m222184153 (NetworkManager_t3335581469 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkManager::set_matchPort(System.Int32)
extern "C"  void NetworkManager_set_matchPort_m4213755380 (NetworkManager_t3335581469 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkManager::get_clientLoadedScene()
extern "C"  bool NetworkManager_get_clientLoadedScene_m2196859633 (NetworkManager_t3335581469 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkManager::set_clientLoadedScene(System.Boolean)
extern "C"  void NetworkManager_set_clientLoadedScene_m2681477624 (NetworkManager_t3335581469 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.NetworkMigrationManager UnityEngine.Networking.NetworkManager::get_migrationManager()
extern "C"  NetworkMigrationManager_t3750984935 * NetworkManager_get_migrationManager_m3146129639 (NetworkManager_t3335581469 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Networking.NetworkManager::get_numPlayers()
extern "C"  int32_t NetworkManager_get_numPlayers_m414675341 (NetworkManager_t3335581469 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkManager::Awake()
extern "C"  void NetworkManager_Awake_m1459904109 (NetworkManager_t3335581469 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkManager::InitializeSingleton()
extern "C"  void NetworkManager_InitializeSingleton_m644993571 (NetworkManager_t3335581469 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkManager::OnValidate()
extern "C"  void NetworkManager_OnValidate_m2374944099 (NetworkManager_t3335581469 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkManager::RegisterServerMessages()
extern "C"  void NetworkManager_RegisterServerMessages_m2480762200 (NetworkManager_t3335581469 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkManager::SetupMigrationManager(UnityEngine.Networking.NetworkMigrationManager)
extern "C"  void NetworkManager_SetupMigrationManager_m176910916 (NetworkManager_t3335581469 * __this, NetworkMigrationManager_t3750984935 * ___man0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkManager::StartServer(UnityEngine.Networking.ConnectionConfig,System.Int32)
extern "C"  bool NetworkManager_StartServer_m2346015775 (NetworkManager_t3335581469 * __this, ConnectionConfig_t1350910390 * ___config0, int32_t ___maxConnections1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkManager::StartServer()
extern "C"  bool NetworkManager_StartServer_m262637773 (NetworkManager_t3335581469 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkManager::StartServer(UnityEngine.Networking.Match.MatchInfo)
extern "C"  bool NetworkManager_StartServer_m1849863520 (NetworkManager_t3335581469 * __this, MatchInfo_t668842927 * ___info0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkManager::StartServer(UnityEngine.Networking.Match.MatchInfo,UnityEngine.Networking.ConnectionConfig,System.Int32)
extern "C"  bool NetworkManager_StartServer_m876419280 (NetworkManager_t3335581469 * __this, MatchInfo_t668842927 * ___info0, ConnectionConfig_t1350910390 * ___config1, int32_t ___maxConnections2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkManager::RegisterClientMessages(UnityEngine.Networking.NetworkClient)
extern "C"  void NetworkManager_RegisterClientMessages_m1348839506 (NetworkManager_t3335581469 * __this, NetworkClient_t696867603 * ___client0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkManager::UseExternalClient(UnityEngine.Networking.NetworkClient)
extern "C"  void NetworkManager_UseExternalClient_m2859303071 (NetworkManager_t3335581469 * __this, NetworkClient_t696867603 * ___externalClient0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.NetworkClient UnityEngine.Networking.NetworkManager::StartClient(UnityEngine.Networking.Match.MatchInfo,UnityEngine.Networking.ConnectionConfig)
extern "C"  NetworkClient_t696867603 * NetworkManager_StartClient_m2868951854 (NetworkManager_t3335581469 * __this, MatchInfo_t668842927 * ___info0, ConnectionConfig_t1350910390 * ___config1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.NetworkClient UnityEngine.Networking.NetworkManager::StartClient(UnityEngine.Networking.Match.MatchInfo)
extern "C"  NetworkClient_t696867603 * NetworkManager_StartClient_m691814713 (NetworkManager_t3335581469 * __this, MatchInfo_t668842927 * ___matchInfo0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.NetworkClient UnityEngine.Networking.NetworkManager::StartClient()
extern "C"  NetworkClient_t696867603 * NetworkManager_StartClient_m665259924 (NetworkManager_t3335581469 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.NetworkClient UnityEngine.Networking.NetworkManager::StartHost(UnityEngine.Networking.ConnectionConfig,System.Int32)
extern "C"  NetworkClient_t696867603 * NetworkManager_StartHost_m3212676253 (NetworkManager_t3335581469 * __this, ConnectionConfig_t1350910390 * ___config0, int32_t ___maxConnections1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.NetworkClient UnityEngine.Networking.NetworkManager::StartHost(UnityEngine.Networking.Match.MatchInfo)
extern "C"  NetworkClient_t696867603 * NetworkManager_StartHost_m3104098590 (NetworkManager_t3335581469 * __this, MatchInfo_t668842927 * ___info0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.NetworkClient UnityEngine.Networking.NetworkManager::StartHost()
extern "C"  NetworkClient_t696867603 * NetworkManager_StartHost_m3593816947 (NetworkManager_t3335581469 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.NetworkClient UnityEngine.Networking.NetworkManager::ConnectLocalClient()
extern "C"  NetworkClient_t696867603 * NetworkManager_ConnectLocalClient_m4097430309 (NetworkManager_t3335581469 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkManager::StopHost()
extern "C"  void NetworkManager_StopHost_m3841899104 (NetworkManager_t3335581469 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkManager::StopServer()
extern "C"  void NetworkManager_StopServer_m144115937 (NetworkManager_t3335581469 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkManager::StopClient()
extern "C"  void NetworkManager_StopClient_m4030147885 (NetworkManager_t3335581469 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkManager::ServerChangeScene(System.String)
extern "C"  void NetworkManager_ServerChangeScene_m2890324431 (NetworkManager_t3335581469 * __this, String_t* ___newSceneName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkManager::CleanupNetworkIdentities()
extern "C"  void NetworkManager_CleanupNetworkIdentities_m438725654 (NetworkManager_t3335581469 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkManager::ClientChangeScene(System.String,System.Boolean)
extern "C"  void NetworkManager_ClientChangeScene_m252593204 (NetworkManager_t3335581469 * __this, String_t* ___newSceneName0, bool ___forceReload1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkManager::FinishLoadScene()
extern "C"  void NetworkManager_FinishLoadScene_m3561687155 (NetworkManager_t3335581469 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkManager::UpdateScene()
extern "C"  void NetworkManager_UpdateScene_m1539509171 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkManager::OnDestroy()
extern "C"  void NetworkManager_OnDestroy_m3677445835 (NetworkManager_t3335581469 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkManager::RegisterStartPosition(UnityEngine.Transform)
extern "C"  void NetworkManager_RegisterStartPosition_m3988496439 (Il2CppObject * __this /* static, unused */, Transform_t3275118058 * ___start0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkManager::UnRegisterStartPosition(UnityEngine.Transform)
extern "C"  void NetworkManager_UnRegisterStartPosition_m3189346542 (Il2CppObject * __this /* static, unused */, Transform_t3275118058 * ___start0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkManager::IsClientConnected()
extern "C"  bool NetworkManager_IsClientConnected_m2496550522 (NetworkManager_t3335581469 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkManager::Shutdown()
extern "C"  void NetworkManager_Shutdown_m3901073180 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkManager::OnServerConnectInternal(UnityEngine.Networking.NetworkMessage)
extern "C"  void NetworkManager_OnServerConnectInternal_m1978605187 (NetworkManager_t3335581469 * __this, NetworkMessage_t2339216573 * ___netMsg0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkManager::OnServerDisconnectInternal(UnityEngine.Networking.NetworkMessage)
extern "C"  void NetworkManager_OnServerDisconnectInternal_m4174196357 (NetworkManager_t3335581469 * __this, NetworkMessage_t2339216573 * ___netMsg0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkManager::OnServerReadyMessageInternal(UnityEngine.Networking.NetworkMessage)
extern "C"  void NetworkManager_OnServerReadyMessageInternal_m3287382897 (NetworkManager_t3335581469 * __this, NetworkMessage_t2339216573 * ___netMsg0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkManager::OnServerAddPlayerMessageInternal(UnityEngine.Networking.NetworkMessage)
extern "C"  void NetworkManager_OnServerAddPlayerMessageInternal_m3132598158 (NetworkManager_t3335581469 * __this, NetworkMessage_t2339216573 * ___netMsg0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkManager::OnServerRemovePlayerMessageInternal(UnityEngine.Networking.NetworkMessage)
extern "C"  void NetworkManager_OnServerRemovePlayerMessageInternal_m2192977575 (NetworkManager_t3335581469 * __this, NetworkMessage_t2339216573 * ___netMsg0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkManager::OnServerErrorInternal(UnityEngine.Networking.NetworkMessage)
extern "C"  void NetworkManager_OnServerErrorInternal_m1730633621 (NetworkManager_t3335581469 * __this, NetworkMessage_t2339216573 * ___netMsg0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkManager::OnClientConnectInternal(UnityEngine.Networking.NetworkMessage)
extern "C"  void NetworkManager_OnClientConnectInternal_m3109932807 (NetworkManager_t3335581469 * __this, NetworkMessage_t2339216573 * ___netMsg0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkManager::OnClientDisconnectInternal(UnityEngine.Networking.NetworkMessage)
extern "C"  void NetworkManager_OnClientDisconnectInternal_m1294329081 (NetworkManager_t3335581469 * __this, NetworkMessage_t2339216573 * ___netMsg0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkManager::OnClientNotReadyMessageInternal(UnityEngine.Networking.NetworkMessage)
extern "C"  void NetworkManager_OnClientNotReadyMessageInternal_m359801698 (NetworkManager_t3335581469 * __this, NetworkMessage_t2339216573 * ___netMsg0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkManager::OnClientErrorInternal(UnityEngine.Networking.NetworkMessage)
extern "C"  void NetworkManager_OnClientErrorInternal_m1881877905 (NetworkManager_t3335581469 * __this, NetworkMessage_t2339216573 * ___netMsg0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkManager::OnClientSceneInternal(UnityEngine.Networking.NetworkMessage)
extern "C"  void NetworkManager_OnClientSceneInternal_m2346107091 (NetworkManager_t3335581469 * __this, NetworkMessage_t2339216573 * ___netMsg0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkManager::OnServerConnect(UnityEngine.Networking.NetworkConnection)
extern "C"  void NetworkManager_OnServerConnect_m557158577 (NetworkManager_t3335581469 * __this, NetworkConnection_t107267906 * ___conn0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkManager::OnServerDisconnect(UnityEngine.Networking.NetworkConnection)
extern "C"  void NetworkManager_OnServerDisconnect_m2474606511 (NetworkManager_t3335581469 * __this, NetworkConnection_t107267906 * ___conn0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkManager::OnServerReady(UnityEngine.Networking.NetworkConnection)
extern "C"  void NetworkManager_OnServerReady_m4012546622 (NetworkManager_t3335581469 * __this, NetworkConnection_t107267906 * ___conn0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkManager::OnServerAddPlayer(UnityEngine.Networking.NetworkConnection,System.Int16,UnityEngine.Networking.NetworkReader)
extern "C"  void NetworkManager_OnServerAddPlayer_m13516088 (NetworkManager_t3335581469 * __this, NetworkConnection_t107267906 * ___conn0, int16_t ___playerControllerId1, NetworkReader_t3187690923 * ___extraMessageReader2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkManager::OnServerAddPlayer(UnityEngine.Networking.NetworkConnection,System.Int16)
extern "C"  void NetworkManager_OnServerAddPlayer_m3766101168 (NetworkManager_t3335581469 * __this, NetworkConnection_t107267906 * ___conn0, int16_t ___playerControllerId1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkManager::OnServerAddPlayerInternal(UnityEngine.Networking.NetworkConnection,System.Int16)
extern "C"  void NetworkManager_OnServerAddPlayerInternal_m3247964813 (NetworkManager_t3335581469 * __this, NetworkConnection_t107267906 * ___conn0, int16_t ___playerControllerId1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.Networking.NetworkManager::GetStartPosition()
extern "C"  Transform_t3275118058 * NetworkManager_GetStartPosition_m3047216011 (NetworkManager_t3335581469 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkManager::OnServerRemovePlayer(UnityEngine.Networking.NetworkConnection,UnityEngine.Networking.PlayerController)
extern "C"  void NetworkManager_OnServerRemovePlayer_m1041795706 (NetworkManager_t3335581469 * __this, NetworkConnection_t107267906 * ___conn0, PlayerController_t612925521 * ___player1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkManager::OnServerError(UnityEngine.Networking.NetworkConnection,System.Int32)
extern "C"  void NetworkManager_OnServerError_m1591548926 (NetworkManager_t3335581469 * __this, NetworkConnection_t107267906 * ___conn0, int32_t ___errorCode1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkManager::OnServerSceneChanged(System.String)
extern "C"  void NetworkManager_OnServerSceneChanged_m1791627070 (NetworkManager_t3335581469 * __this, String_t* ___sceneName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkManager::OnClientConnect(UnityEngine.Networking.NetworkConnection)
extern "C"  void NetworkManager_OnClientConnect_m4074260949 (NetworkManager_t3335581469 * __this, NetworkConnection_t107267906 * ___conn0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkManager::OnClientDisconnect(UnityEngine.Networking.NetworkConnection)
extern "C"  void NetworkManager_OnClientDisconnect_m195302515 (NetworkManager_t3335581469 * __this, NetworkConnection_t107267906 * ___conn0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkManager::OnClientError(UnityEngine.Networking.NetworkConnection,System.Int32)
extern "C"  void NetworkManager_OnClientError_m1183845346 (NetworkManager_t3335581469 * __this, NetworkConnection_t107267906 * ___conn0, int32_t ___errorCode1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkManager::OnClientNotReady(UnityEngine.Networking.NetworkConnection)
extern "C"  void NetworkManager_OnClientNotReady_m2156484601 (NetworkManager_t3335581469 * __this, NetworkConnection_t107267906 * ___conn0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkManager::OnClientSceneChanged(UnityEngine.Networking.NetworkConnection)
extern "C"  void NetworkManager_OnClientSceneChanged_m2968003123 (NetworkManager_t3335581469 * __this, NetworkConnection_t107267906 * ___conn0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkManager::StartMatchMaker()
extern "C"  void NetworkManager_StartMatchMaker_m2816664551 (NetworkManager_t3335581469 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkManager::StopMatchMaker()
extern "C"  void NetworkManager_StopMatchMaker_m2890915983 (NetworkManager_t3335581469 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkManager::SetMatchHost(System.String,System.Int32,System.Boolean)
extern "C"  void NetworkManager_SetMatchHost_m1255110073 (NetworkManager_t3335581469 * __this, String_t* ___newHost0, int32_t ___port1, bool ___https2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkManager::OnStartHost()
extern "C"  void NetworkManager_OnStartHost_m3808341189 (NetworkManager_t3335581469 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkManager::OnStartServer()
extern "C"  void NetworkManager_OnStartServer_m492486488 (NetworkManager_t3335581469 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkManager::OnStartClient(UnityEngine.Networking.NetworkClient)
extern "C"  void NetworkManager_OnStartClient_m1628412866 (NetworkManager_t3335581469 * __this, NetworkClient_t696867603 * ___client0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkManager::OnStopServer()
extern "C"  void NetworkManager_OnStopServer_m1904488788 (NetworkManager_t3335581469 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkManager::OnStopClient()
extern "C"  void NetworkManager_OnStopClient_m2391672936 (NetworkManager_t3335581469 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkManager::OnStopHost()
extern "C"  void NetworkManager_OnStopHost_m2170079093 (NetworkManager_t3335581469 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkManager::OnMatchCreate(System.Boolean,System.String,UnityEngine.Networking.Match.MatchInfo)
extern "C"  void NetworkManager_OnMatchCreate_m2186849300 (NetworkManager_t3335581469 * __this, bool ___success0, String_t* ___extendedInfo1, MatchInfo_t668842927 * ___matchInfo2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkManager::OnMatchList(System.Boolean,System.String,System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchInfoSnapshot>)
extern "C"  void NetworkManager_OnMatchList_m1823190326 (NetworkManager_t3335581469 * __this, bool ___success0, String_t* ___extendedInfo1, List_1_t2548232039 * ___matchList2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkManager::OnMatchJoined(System.Boolean,System.String,UnityEngine.Networking.Match.MatchInfo)
extern "C"  void NetworkManager_OnMatchJoined_m3575701823 (NetworkManager_t3335581469 * __this, bool ___success0, String_t* ___extendedInfo1, MatchInfo_t668842927 * ___matchInfo2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkManager::OnDestroyMatch(System.Boolean,System.String)
extern "C"  void NetworkManager_OnDestroyMatch_m1700987685 (NetworkManager_t3335581469 * __this, bool ___success0, String_t* ___extendedInfo1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkManager::OnDropConnection(System.Boolean,System.String)
extern "C"  void NetworkManager_OnDropConnection_m826278371 (NetworkManager_t3335581469 * __this, bool ___success0, String_t* ___extendedInfo1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkManager::OnSetMatchAttributes(System.Boolean,System.String)
extern "C"  void NetworkManager_OnSetMatchAttributes_m1259293794 (NetworkManager_t3335581469 * __this, bool ___success0, String_t* ___extendedInfo1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkManager::.cctor()
extern "C"  void NetworkManager__cctor_m2361896151 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
