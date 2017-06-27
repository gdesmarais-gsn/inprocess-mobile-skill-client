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

// UnityEngine.Networking.NetworkServer
struct NetworkServer_t3779449791;
// System.Collections.Generic.List`1<UnityEngine.Networking.NetworkConnection>
struct List_1_t3771356334;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Networking.NetworkConnection>
struct ReadOnlyCollection_1_t293053598;
// System.Collections.Generic.Dictionary`2<System.Int16,UnityEngine.Networking.NetworkMessageDelegate>
struct Dictionary_2_t943369209;
// UnityEngine.Networking.HostTopology
struct HostTopology_t3602650143;
// System.Collections.Generic.Dictionary`2<UnityEngine.Networking.NetworkInstanceId,UnityEngine.Networking.NetworkIdentity>
struct Dictionary_2_t3938121;
// System.Type
struct Type_t;
// UnityEngine.Networking.ConnectionConfig
struct ConnectionConfig_t1350910390;
// UnityEngine.Networking.Match.MatchInfo
struct MatchInfo_t668842927;
// System.String
struct String_t;
// UnityEngine.Networking.NetworkClient
struct NetworkClient_t696867603;
// UnityEngine.Networking.NetworkSystem.PeerInfoMessage[]
struct PeerInfoMessageU5BU5D_t2669814294;
// UnityEngine.Networking.LocalClient
struct LocalClient_t4139140194;
// UnityEngine.Networking.NetworkConnection
struct NetworkConnection_t107267906;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.Networking.MessageBase
struct MessageBase_t2552428296;
// UnityEngine.Networking.NetworkWriter
struct NetworkWriter_t560143343;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// UnityEngine.Networking.NetworkMessageDelegate
struct NetworkMessageDelegate_t1861659952;
// UnityEngine.Networking.NetworkIdentity
struct NetworkIdentity_t1766639790;
// UnityEngine.Networking.PlayerController
struct PlayerController_t612925521;
// UnityEngine.Networking.NetworkMessage
struct NetworkMessage_t2339216573;
// UnityEngine.Networking.ULocalConnectionToServer
struct ULocalConnectionToServer_t2986899766;
// System.Collections.Generic.Dictionary`2<System.Int16,UnityEngine.Networking.NetworkConnection/PacketStat>
struct Dictionary_2_t4068020013;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Networking_ConnectionConfi1350910390.h"
#include "UnityEngine_UnityEngine_Networking_HostTopology3602650143.h"
#include "UnityEngine_UnityEngine_Networking_Match_MatchInfo668842927.h"
#include "mscorlib_System_String2029220233.h"
#include "UnityEngine_UnityEngine_Networking_Types_NetworkID348058649.h"
#include "UnityEngine_UnityEngine_Networking_Types_SourceID1840552406.h"
#include "UnityEngine_UnityEngine_Networking_Types_NodeID3569487935.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netwo696867603.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Loca4139140194.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netwo107267906.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Networ33998832.h"
#include "UnityEngine_UnityEngine_GameObject1756533147.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Mess2552428296.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netwo560143343.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netw1861659952.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netwo835211239.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netw1766639790.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Playe612925521.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netw2339216573.h"
#include "UnityEngine_Networking_UnityEngine_Networking_ULoc2986899766.h"

// System.Void UnityEngine.Networking.NetworkServer::.ctor()
extern "C"  void NetworkServer__ctor_m56994264 (NetworkServer_t3779449791 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<UnityEngine.Networking.NetworkConnection> UnityEngine.Networking.NetworkServer::get_localConnections()
extern "C"  List_1_t3771356334 * NetworkServer_get_localConnections_m678979489 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Networking.NetworkServer::get_listenPort()
extern "C"  int32_t NetworkServer_get_listenPort_m2731259581 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Networking.NetworkServer::get_serverHostId()
extern "C"  int32_t NetworkServer_get_serverHostId_m2611223657 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Networking.NetworkConnection> UnityEngine.Networking.NetworkServer::get_connections()
extern "C"  ReadOnlyCollection_1_t293053598 * NetworkServer_get_connections_m2326618173 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.Int16,UnityEngine.Networking.NetworkMessageDelegate> UnityEngine.Networking.NetworkServer::get_handlers()
extern "C"  Dictionary_2_t943369209 * NetworkServer_get_handlers_m797963522 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.HostTopology UnityEngine.Networking.NetworkServer::get_hostTopology()
extern "C"  HostTopology_t3602650143 * NetworkServer_get_hostTopology_m3279188067 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<UnityEngine.Networking.NetworkInstanceId,UnityEngine.Networking.NetworkIdentity> UnityEngine.Networking.NetworkServer::get_objects()
extern "C"  Dictionary_2_t3938121 * NetworkServer_get_objects_m4141685487 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkServer::get_sendPeerInfo()
extern "C"  bool NetworkServer_get_sendPeerInfo_m1994575691 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkServer::set_sendPeerInfo(System.Boolean)
extern "C"  void NetworkServer_set_sendPeerInfo_m3907098664 (Il2CppObject * __this /* static, unused */, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkServer::get_dontListen()
extern "C"  bool NetworkServer_get_dontListen_m90423303 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkServer::set_dontListen(System.Boolean)
extern "C"  void NetworkServer_set_dontListen_m3885394186 (Il2CppObject * __this /* static, unused */, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkServer::get_useWebSockets()
extern "C"  bool NetworkServer_get_useWebSockets_m2954125632 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkServer::set_useWebSockets(System.Boolean)
extern "C"  void NetworkServer_set_useWebSockets_m2655831689 (Il2CppObject * __this /* static, unused */, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.NetworkServer UnityEngine.Networking.NetworkServer::get_instance()
extern "C"  NetworkServer_t3779449791 * NetworkServer_get_instance_m3472442485 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkServer::get_active()
extern "C"  bool NetworkServer_get_active_m3093993255 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkServer::get_localClientActive()
extern "C"  bool NetworkServer_get_localClientActive_m1508216391 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Networking.NetworkServer::get_numChannels()
extern "C"  int32_t NetworkServer_get_numChannels_m328227467 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Networking.NetworkServer::get_maxDelay()
extern "C"  float NetworkServer_get_maxDelay_m1909264796 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkServer::set_maxDelay(System.Single)
extern "C"  void NetworkServer_set_maxDelay_m2248798027 (Il2CppObject * __this /* static, unused */, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type UnityEngine.Networking.NetworkServer::get_networkConnectionClass()
extern "C"  Type_t * NetworkServer_get_networkConnectionClass_m2563412685 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkServer::Configure(UnityEngine.Networking.ConnectionConfig,System.Int32)
extern "C"  bool NetworkServer_Configure_m3563973706 (Il2CppObject * __this /* static, unused */, ConnectionConfig_t1350910390 * ___config0, int32_t ___maxConnections1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkServer::Configure(UnityEngine.Networking.HostTopology)
extern "C"  bool NetworkServer_Configure_m497579460 (Il2CppObject * __this /* static, unused */, HostTopology_t3602650143 * ___topology0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkServer::Reset()
extern "C"  void NetworkServer_Reset_m2448122379 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkServer::Shutdown()
extern "C"  void NetworkServer_Shutdown_m2256122940 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkServer::Listen(UnityEngine.Networking.Match.MatchInfo,System.Int32)
extern "C"  bool NetworkServer_Listen_m694862625 (Il2CppObject * __this /* static, unused */, MatchInfo_t668842927 * ___matchInfo0, int32_t ___listenPort1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkServer::RegisterMessageHandlers()
extern "C"  void NetworkServer_RegisterMessageHandlers_m4289121219 (NetworkServer_t3779449791 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkServer::ListenRelay(System.String,System.Int32,UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.SourceID,UnityEngine.Networking.Types.NodeID)
extern "C"  void NetworkServer_ListenRelay_m25032803 (Il2CppObject * __this /* static, unused */, String_t* ___relayIp0, int32_t ___relayPort1, uint64_t ___netGuid2, uint64_t ___sourceId3, uint16_t ___nodeId4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkServer::InternalListenRelay(System.String,System.Int32,UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.SourceID,UnityEngine.Networking.Types.NodeID)
extern "C"  void NetworkServer_InternalListenRelay_m1010809566 (NetworkServer_t3779449791 * __this, String_t* ___relayIp0, int32_t ___relayPort1, uint64_t ___netGuid2, uint64_t ___sourceId3, uint16_t ___nodeId4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkServer::Listen(System.Int32)
extern "C"  bool NetworkServer_Listen_m2093886644 (Il2CppObject * __this /* static, unused */, int32_t ___serverPort0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkServer::Listen(System.String,System.Int32)
extern "C"  bool NetworkServer_Listen_m4045279708 (Il2CppObject * __this /* static, unused */, String_t* ___ipAddress0, int32_t ___serverPort1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkServer::InternalListen(System.String,System.Int32)
extern "C"  bool NetworkServer_InternalListen_m404175303 (NetworkServer_t3779449791 * __this, String_t* ___ipAddress0, int32_t ___serverPort1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.NetworkClient UnityEngine.Networking.NetworkServer::BecomeHost(UnityEngine.Networking.NetworkClient,System.Int32,UnityEngine.Networking.Match.MatchInfo,System.Int32,UnityEngine.Networking.NetworkSystem.PeerInfoMessage[])
extern "C"  NetworkClient_t696867603 * NetworkServer_BecomeHost_m3733655780 (Il2CppObject * __this /* static, unused */, NetworkClient_t696867603 * ___oldClient0, int32_t ___port1, MatchInfo_t668842927 * ___matchInfo2, int32_t ___oldConnectionId3, PeerInfoMessageU5BU5D_t2669814294* ___peers4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.NetworkClient UnityEngine.Networking.NetworkServer::BecomeHostInternal(UnityEngine.Networking.NetworkClient,System.Int32,UnityEngine.Networking.Match.MatchInfo,System.Int32,UnityEngine.Networking.NetworkSystem.PeerInfoMessage[])
extern "C"  NetworkClient_t696867603 * NetworkServer_BecomeHostInternal_m1938581133 (NetworkServer_t3779449791 * __this, NetworkClient_t696867603 * ___oldClient0, int32_t ___port1, MatchInfo_t668842927 * ___matchInfo2, int32_t ___oldConnectionId3, PeerInfoMessageU5BU5D_t2669814294* ___peers4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkServer::InternalSetMaxDelay(System.Single)
extern "C"  void NetworkServer_InternalSetMaxDelay_m2768738727 (NetworkServer_t3779449791 * __this, float ___seconds0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Networking.NetworkServer::AddLocalClient(UnityEngine.Networking.LocalClient)
extern "C"  int32_t NetworkServer_AddLocalClient_m777526110 (NetworkServer_t3779449791 * __this, LocalClient_t4139140194 * ___localClient0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkServer::RemoveLocalClient(UnityEngine.Networking.NetworkConnection)
extern "C"  void NetworkServer_RemoveLocalClient_m2004210155 (NetworkServer_t3779449791 * __this, NetworkConnection_t107267906 * ___localClientConnection0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkServer::SetLocalObjectOnServer(UnityEngine.Networking.NetworkInstanceId,UnityEngine.GameObject)
extern "C"  void NetworkServer_SetLocalObjectOnServer_m3230118877 (NetworkServer_t3779449791 * __this, NetworkInstanceId_t33998832  ___netId0, GameObject_t1756533147 * ___obj1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkServer::ActivateLocalClientScene()
extern "C"  void NetworkServer_ActivateLocalClientScene_m3495811373 (NetworkServer_t3779449791 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkServer::SendToAll(System.Int16,UnityEngine.Networking.MessageBase)
extern "C"  bool NetworkServer_SendToAll_m626685226 (Il2CppObject * __this /* static, unused */, int16_t ___msgType0, MessageBase_t2552428296 * ___msg1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkServer::SendToObservers(UnityEngine.GameObject,System.Int16,UnityEngine.Networking.MessageBase)
extern "C"  bool NetworkServer_SendToObservers_m2317134634 (Il2CppObject * __this /* static, unused */, GameObject_t1756533147 * ___contextObj0, int16_t ___msgType1, MessageBase_t2552428296 * ___msg2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkServer::SendToReady(UnityEngine.GameObject,System.Int16,UnityEngine.Networking.MessageBase)
extern "C"  bool NetworkServer_SendToReady_m1139946670 (Il2CppObject * __this /* static, unused */, GameObject_t1756533147 * ___contextObj0, int16_t ___msgType1, MessageBase_t2552428296 * ___msg2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkServer::SendWriterToReady(UnityEngine.GameObject,UnityEngine.Networking.NetworkWriter,System.Int32)
extern "C"  void NetworkServer_SendWriterToReady_m3464733118 (Il2CppObject * __this /* static, unused */, GameObject_t1756533147 * ___contextObj0, NetworkWriter_t560143343 * ___writer1, int32_t ___channelId2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkServer::SendBytesToReady(UnityEngine.GameObject,System.Byte[],System.Int32,System.Int32)
extern "C"  void NetworkServer_SendBytesToReady_m2796975856 (Il2CppObject * __this /* static, unused */, GameObject_t1756533147 * ___contextObj0, ByteU5BU5D_t3397334013* ___buffer1, int32_t ___numBytes2, int32_t ___channelId3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkServer::SendBytesToPlayer(UnityEngine.GameObject,System.Byte[],System.Int32,System.Int32)
extern "C"  void NetworkServer_SendBytesToPlayer_m2269936072 (Il2CppObject * __this /* static, unused */, GameObject_t1756533147 * ___player0, ByteU5BU5D_t3397334013* ___buffer1, int32_t ___numBytes2, int32_t ___channelId3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkServer::SendUnreliableToAll(System.Int16,UnityEngine.Networking.MessageBase)
extern "C"  bool NetworkServer_SendUnreliableToAll_m2336399941 (Il2CppObject * __this /* static, unused */, int16_t ___msgType0, MessageBase_t2552428296 * ___msg1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkServer::SendUnreliableToReady(UnityEngine.GameObject,System.Int16,UnityEngine.Networking.MessageBase)
extern "C"  bool NetworkServer_SendUnreliableToReady_m1844976387 (Il2CppObject * __this /* static, unused */, GameObject_t1756533147 * ___contextObj0, int16_t ___msgType1, MessageBase_t2552428296 * ___msg2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkServer::SendByChannelToAll(System.Int16,UnityEngine.Networking.MessageBase,System.Int32)
extern "C"  bool NetworkServer_SendByChannelToAll_m202632199 (Il2CppObject * __this /* static, unused */, int16_t ___msgType0, MessageBase_t2552428296 * ___msg1, int32_t ___channelId2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkServer::SendByChannelToReady(UnityEngine.GameObject,System.Int16,UnityEngine.Networking.MessageBase,System.Int32)
extern "C"  bool NetworkServer_SendByChannelToReady_m366139953 (Il2CppObject * __this /* static, unused */, GameObject_t1756533147 * ___contextObj0, int16_t ___msgType1, MessageBase_t2552428296 * ___msg2, int32_t ___channelId3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkServer::DisconnectAll()
extern "C"  void NetworkServer_DisconnectAll_m344390003 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkServer::InternalDisconnectAll()
extern "C"  void NetworkServer_InternalDisconnectAll_m3481300394 (NetworkServer_t3779449791 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkServer::Update()
extern "C"  void NetworkServer_Update_m421156019 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkServer::UpdateServerObjects()
extern "C"  void NetworkServer_UpdateServerObjects_m3228211058 (NetworkServer_t3779449791 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkServer::CheckForNullObjects()
extern "C"  void NetworkServer_CheckForNullObjects_m130752062 (NetworkServer_t3779449791 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkServer::InternalUpdate()
extern "C"  void NetworkServer_InternalUpdate_m3259468658 (NetworkServer_t3779449791 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkServer::OnConnected(UnityEngine.Networking.NetworkConnection)
extern "C"  void NetworkServer_OnConnected_m1055855383 (NetworkServer_t3779449791 * __this, NetworkConnection_t107267906 * ___conn0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkServer::OnDisconnected(UnityEngine.Networking.NetworkConnection)
extern "C"  void NetworkServer_OnDisconnected_m744011581 (NetworkServer_t3779449791 * __this, NetworkConnection_t107267906 * ___conn0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkServer::OnData(UnityEngine.Networking.NetworkConnection,System.Int32,System.Int32)
extern "C"  void NetworkServer_OnData_m2344884346 (NetworkServer_t3779449791 * __this, NetworkConnection_t107267906 * ___conn0, int32_t ___receivedSize1, int32_t ___channelId2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkServer::GenerateConnectError(System.Int32)
extern "C"  void NetworkServer_GenerateConnectError_m129185256 (NetworkServer_t3779449791 * __this, int32_t ___error0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkServer::GenerateDataError(UnityEngine.Networking.NetworkConnection,System.Int32)
extern "C"  void NetworkServer_GenerateDataError_m3967174955 (NetworkServer_t3779449791 * __this, NetworkConnection_t107267906 * ___conn0, int32_t ___error1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkServer::GenerateDisconnectError(UnityEngine.Networking.NetworkConnection,System.Int32)
extern "C"  void NetworkServer_GenerateDisconnectError_m3076146055 (NetworkServer_t3779449791 * __this, NetworkConnection_t107267906 * ___conn0, int32_t ___error1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkServer::GenerateError(UnityEngine.Networking.NetworkConnection,System.Int32)
extern "C"  void NetworkServer_GenerateError_m4293441979 (NetworkServer_t3779449791 * __this, NetworkConnection_t107267906 * ___conn0, int32_t ___error1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkServer::RegisterHandler(System.Int16,UnityEngine.Networking.NetworkMessageDelegate)
extern "C"  void NetworkServer_RegisterHandler_m1278836305 (Il2CppObject * __this /* static, unused */, int16_t ___msgType0, NetworkMessageDelegate_t1861659952 * ___handler1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkServer::UnregisterHandler(System.Int16)
extern "C"  void NetworkServer_UnregisterHandler_m3924143087 (Il2CppObject * __this /* static, unused */, int16_t ___msgType0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkServer::ClearHandlers()
extern "C"  void NetworkServer_ClearHandlers_m1435453528 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkServer::ClearSpawners()
extern "C"  void NetworkServer_ClearSpawners_m506290168 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkServer::GetStatsOut(System.Int32&,System.Int32&,System.Int32&,System.Int32&)
extern "C"  void NetworkServer_GetStatsOut_m3733655363 (Il2CppObject * __this /* static, unused */, int32_t* ___numMsgs0, int32_t* ___numBufferedMsgs1, int32_t* ___numBytes2, int32_t* ___lastBufferedPerSecond3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkServer::GetStatsIn(System.Int32&,System.Int32&)
extern "C"  void NetworkServer_GetStatsIn_m4241713120 (Il2CppObject * __this /* static, unused */, int32_t* ___numMsgs0, int32_t* ___numBytes1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkServer::SendToClientOfPlayer(UnityEngine.GameObject,System.Int16,UnityEngine.Networking.MessageBase)
extern "C"  void NetworkServer_SendToClientOfPlayer_m3750855614 (Il2CppObject * __this /* static, unused */, GameObject_t1756533147 * ___player0, int16_t ___msgType1, MessageBase_t2552428296 * ___msg2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkServer::SendToClient(System.Int32,System.Int16,UnityEngine.Networking.MessageBase)
extern "C"  void NetworkServer_SendToClient_m2387741135 (Il2CppObject * __this /* static, unused */, int32_t ___connectionId0, int16_t ___msgType1, MessageBase_t2552428296 * ___msg2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkServer::ReplacePlayerForConnection(UnityEngine.Networking.NetworkConnection,UnityEngine.GameObject,System.Int16,UnityEngine.Networking.NetworkHash128)
extern "C"  bool NetworkServer_ReplacePlayerForConnection_m109844586 (Il2CppObject * __this /* static, unused */, NetworkConnection_t107267906 * ___conn0, GameObject_t1756533147 * ___player1, int16_t ___playerControllerId2, NetworkHash128_t835211239  ___assetId3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkServer::ReplacePlayerForConnection(UnityEngine.Networking.NetworkConnection,UnityEngine.GameObject,System.Int16)
extern "C"  bool NetworkServer_ReplacePlayerForConnection_m1100908988 (Il2CppObject * __this /* static, unused */, NetworkConnection_t107267906 * ___conn0, GameObject_t1756533147 * ___player1, int16_t ___playerControllerId2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkServer::AddPlayerForConnection(UnityEngine.Networking.NetworkConnection,UnityEngine.GameObject,System.Int16,UnityEngine.Networking.NetworkHash128)
extern "C"  bool NetworkServer_AddPlayerForConnection_m3517783337 (Il2CppObject * __this /* static, unused */, NetworkConnection_t107267906 * ___conn0, GameObject_t1756533147 * ___player1, int16_t ___playerControllerId2, NetworkHash128_t835211239  ___assetId3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkServer::AddPlayerForConnection(UnityEngine.Networking.NetworkConnection,UnityEngine.GameObject,System.Int16)
extern "C"  bool NetworkServer_AddPlayerForConnection_m3191130397 (Il2CppObject * __this /* static, unused */, NetworkConnection_t107267906 * ___conn0, GameObject_t1756533147 * ___player1, int16_t ___playerControllerId2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkServer::InternalAddPlayerForConnection(UnityEngine.Networking.NetworkConnection,UnityEngine.GameObject,System.Int16)
extern "C"  bool NetworkServer_InternalAddPlayerForConnection_m1964123176 (NetworkServer_t3779449791 * __this, NetworkConnection_t107267906 * ___conn0, GameObject_t1756533147 * ___playerGameObject1, int16_t ___playerControllerId2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkServer::CheckPlayerControllerIdForConnection(UnityEngine.Networking.NetworkConnection,System.Int16)
extern "C"  bool NetworkServer_CheckPlayerControllerIdForConnection_m2944766111 (Il2CppObject * __this /* static, unused */, NetworkConnection_t107267906 * ___conn0, int16_t ___playerControllerId1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkServer::SetupLocalPlayerForConnection(UnityEngine.Networking.NetworkConnection,UnityEngine.Networking.NetworkIdentity,UnityEngine.Networking.PlayerController)
extern "C"  bool NetworkServer_SetupLocalPlayerForConnection_m262087514 (NetworkServer_t3779449791 * __this, NetworkConnection_t107267906 * ___conn0, NetworkIdentity_t1766639790 * ___uv1, PlayerController_t612925521 * ___newPlayerController2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkServer::FinishPlayerForConnection(UnityEngine.Networking.NetworkConnection,UnityEngine.Networking.NetworkIdentity,UnityEngine.GameObject)
extern "C"  void NetworkServer_FinishPlayerForConnection_m834846183 (Il2CppObject * __this /* static, unused */, NetworkConnection_t107267906 * ___conn0, NetworkIdentity_t1766639790 * ___uv1, GameObject_t1756533147 * ___playerGameObject2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkServer::InternalReplacePlayerForConnection(UnityEngine.Networking.NetworkConnection,UnityEngine.GameObject,System.Int16)
extern "C"  bool NetworkServer_InternalReplacePlayerForConnection_m918800371 (NetworkServer_t3779449791 * __this, NetworkConnection_t107267906 * ___conn0, GameObject_t1756533147 * ___playerGameObject1, int16_t ___playerControllerId2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkServer::GetNetworkIdentity(UnityEngine.GameObject,UnityEngine.Networking.NetworkIdentity&)
extern "C"  bool NetworkServer_GetNetworkIdentity_m98283025 (Il2CppObject * __this /* static, unused */, GameObject_t1756533147 * ___go0, NetworkIdentity_t1766639790 ** ___view1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkServer::SetClientReady(UnityEngine.Networking.NetworkConnection)
extern "C"  void NetworkServer_SetClientReady_m3321198165 (Il2CppObject * __this /* static, unused */, NetworkConnection_t107267906 * ___conn0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkServer::SetClientReadyInternal(UnityEngine.Networking.NetworkConnection)
extern "C"  void NetworkServer_SetClientReadyInternal_m1327702942 (NetworkServer_t3779449791 * __this, NetworkConnection_t107267906 * ___conn0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkServer::ShowForConnection(UnityEngine.Networking.NetworkIdentity,UnityEngine.Networking.NetworkConnection)
extern "C"  void NetworkServer_ShowForConnection_m3547814066 (Il2CppObject * __this /* static, unused */, NetworkIdentity_t1766639790 * ___uv0, NetworkConnection_t107267906 * ___conn1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkServer::HideForConnection(UnityEngine.Networking.NetworkIdentity,UnityEngine.Networking.NetworkConnection)
extern "C"  void NetworkServer_HideForConnection_m116321683 (Il2CppObject * __this /* static, unused */, NetworkIdentity_t1766639790 * ___uv0, NetworkConnection_t107267906 * ___conn1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkServer::SetAllClientsNotReady()
extern "C"  void NetworkServer_SetAllClientsNotReady_m1586225281 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkServer::SetClientNotReady(UnityEngine.Networking.NetworkConnection)
extern "C"  void NetworkServer_SetClientNotReady_m2459072540 (Il2CppObject * __this /* static, unused */, NetworkConnection_t107267906 * ___conn0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkServer::InternalSetClientNotReady(UnityEngine.Networking.NetworkConnection)
extern "C"  void NetworkServer_InternalSetClientNotReady_m4120566843 (NetworkServer_t3779449791 * __this, NetworkConnection_t107267906 * ___conn0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkServer::OnClientReadyMessage(UnityEngine.Networking.NetworkMessage)
extern "C"  void NetworkServer_OnClientReadyMessage_m1326795916 (Il2CppObject * __this /* static, unused */, NetworkMessage_t2339216573 * ___netMsg0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkServer::OnRemovePlayerMessage(UnityEngine.Networking.NetworkMessage)
extern "C"  void NetworkServer_OnRemovePlayerMessage_m532861023 (Il2CppObject * __this /* static, unused */, NetworkMessage_t2339216573 * ___netMsg0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkServer::OnCommandMessage(UnityEngine.Networking.NetworkMessage)
extern "C"  void NetworkServer_OnCommandMessage_m1997634893 (Il2CppObject * __this /* static, unused */, NetworkMessage_t2339216573 * ___netMsg0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkServer::SpawnObject(UnityEngine.GameObject)
extern "C"  void NetworkServer_SpawnObject_m1090209594 (NetworkServer_t3779449791 * __this, GameObject_t1756533147 * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkServer::SendSpawnMessage(UnityEngine.Networking.NetworkIdentity,UnityEngine.Networking.NetworkConnection)
extern "C"  void NetworkServer_SendSpawnMessage_m3411703732 (NetworkServer_t3779449791 * __this, NetworkIdentity_t1766639790 * ___uv0, NetworkConnection_t107267906 * ___conn1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkServer::DestroyPlayersForConnection(UnityEngine.Networking.NetworkConnection)
extern "C"  void NetworkServer_DestroyPlayersForConnection_m1333546636 (Il2CppObject * __this /* static, unused */, NetworkConnection_t107267906 * ___conn0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkServer::UnSpawnObject(UnityEngine.GameObject)
extern "C"  void NetworkServer_UnSpawnObject_m1319517919 (Il2CppObject * __this /* static, unused */, GameObject_t1756533147 * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkServer::UnSpawnObject(UnityEngine.Networking.NetworkIdentity)
extern "C"  void NetworkServer_UnSpawnObject_m2832226552 (Il2CppObject * __this /* static, unused */, NetworkIdentity_t1766639790 * ___uv0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkServer::DestroyObject(UnityEngine.GameObject)
extern "C"  void NetworkServer_DestroyObject_m1470744433 (Il2CppObject * __this /* static, unused */, GameObject_t1756533147 * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkServer::DestroyObject(UnityEngine.Networking.NetworkIdentity,System.Boolean)
extern "C"  void NetworkServer_DestroyObject_m730103485 (Il2CppObject * __this /* static, unused */, NetworkIdentity_t1766639790 * ___uv0, bool ___destroyServerObject1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkServer::ClearLocalObjects()
extern "C"  void NetworkServer_ClearLocalObjects_m41191896 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkServer::Spawn(UnityEngine.GameObject)
extern "C"  void NetworkServer_Spawn_m1772265421 (Il2CppObject * __this /* static, unused */, GameObject_t1756533147 * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkServer::SpawnWithClientAuthority(UnityEngine.GameObject,UnityEngine.GameObject)
extern "C"  bool NetworkServer_SpawnWithClientAuthority_m1508450431 (Il2CppObject * __this /* static, unused */, GameObject_t1756533147 * ___obj0, GameObject_t1756533147 * ___player1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkServer::SpawnWithClientAuthority(UnityEngine.GameObject,UnityEngine.Networking.NetworkConnection)
extern "C"  bool NetworkServer_SpawnWithClientAuthority_m3785011510 (Il2CppObject * __this /* static, unused */, GameObject_t1756533147 * ___obj0, NetworkConnection_t107267906 * ___conn1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkServer::SpawnWithClientAuthority(UnityEngine.GameObject,UnityEngine.Networking.NetworkHash128,UnityEngine.Networking.NetworkConnection)
extern "C"  bool NetworkServer_SpawnWithClientAuthority_m2190290672 (Il2CppObject * __this /* static, unused */, GameObject_t1756533147 * ___obj0, NetworkHash128_t835211239  ___assetId1, NetworkConnection_t107267906 * ___conn2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkServer::Spawn(UnityEngine.GameObject,UnityEngine.Networking.NetworkHash128)
extern "C"  void NetworkServer_Spawn_m889866585 (Il2CppObject * __this /* static, unused */, GameObject_t1756533147 * ___obj0, NetworkHash128_t835211239  ___assetId1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkServer::Destroy(UnityEngine.GameObject)
extern "C"  void NetworkServer_Destroy_m602326436 (Il2CppObject * __this /* static, unused */, GameObject_t1756533147 * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkServer::UnSpawn(UnityEngine.GameObject)
extern "C"  void NetworkServer_UnSpawn_m1867180032 (Il2CppObject * __this /* static, unused */, GameObject_t1756533147 * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkServer::InvokeBytes(UnityEngine.Networking.ULocalConnectionToServer,System.Byte[],System.Int32,System.Int32)
extern "C"  bool NetworkServer_InvokeBytes_m1902111035 (NetworkServer_t3779449791 * __this, ULocalConnectionToServer_t2986899766 * ___conn0, ByteU5BU5D_t3397334013* ___buffer1, int32_t ___numBytes2, int32_t ___channelId3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkServer::InvokeHandlerOnServer(UnityEngine.Networking.ULocalConnectionToServer,System.Int16,UnityEngine.Networking.MessageBase,System.Int32)
extern "C"  bool NetworkServer_InvokeHandlerOnServer_m375988860 (NetworkServer_t3779449791 * __this, ULocalConnectionToServer_t2986899766 * ___conn0, int16_t ___msgType1, MessageBase_t2552428296 * ___msg2, int32_t ___channelId3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.Networking.NetworkServer::FindLocalObject(UnityEngine.Networking.NetworkInstanceId)
extern "C"  GameObject_t1756533147 * NetworkServer_FindLocalObject_m1797437085 (Il2CppObject * __this /* static, unused */, NetworkInstanceId_t33998832  ___netId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.Int16,UnityEngine.Networking.NetworkConnection/PacketStat> UnityEngine.Networking.NetworkServer::GetConnectionStats()
extern "C"  Dictionary_2_t4068020013 * NetworkServer_GetConnectionStats_m3779280278 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkServer::ResetConnectionStats()
extern "C"  void NetworkServer_ResetConnectionStats_m4102233132 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkServer::AddExternalConnection(UnityEngine.Networking.NetworkConnection)
extern "C"  bool NetworkServer_AddExternalConnection_m2068003527 (Il2CppObject * __this /* static, unused */, NetworkConnection_t107267906 * ___conn0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkServer::AddExternalConnectionInternal(UnityEngine.Networking.NetworkConnection)
extern "C"  bool NetworkServer_AddExternalConnectionInternal_m2605069622 (NetworkServer_t3779449791 * __this, NetworkConnection_t107267906 * ___conn0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkServer::RemoveExternalConnection(System.Int32)
extern "C"  void NetworkServer_RemoveExternalConnection_m109434040 (Il2CppObject * __this /* static, unused */, int32_t ___connectionId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkServer::RemoveExternalConnectionInternal(System.Int32)
extern "C"  bool NetworkServer_RemoveExternalConnectionInternal_m4026092521 (NetworkServer_t3779449791 * __this, int32_t ___connectionId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkServer::SpawnObjects()
extern "C"  bool NetworkServer_SpawnObjects_m1980437355 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkServer::SendCrc(UnityEngine.Networking.NetworkConnection)
extern "C"  void NetworkServer_SendCrc_m3880481183 (Il2CppObject * __this /* static, unused */, NetworkConnection_t107267906 * ___targetConnection0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkServer::SendNetworkInfo(UnityEngine.Networking.NetworkConnection)
extern "C"  void NetworkServer_SendNetworkInfo_m1513418457 (NetworkServer_t3779449791 * __this, NetworkConnection_t107267906 * ___targetConnection0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkServer::.cctor()
extern "C"  void NetworkServer__cctor_m1804907773 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
