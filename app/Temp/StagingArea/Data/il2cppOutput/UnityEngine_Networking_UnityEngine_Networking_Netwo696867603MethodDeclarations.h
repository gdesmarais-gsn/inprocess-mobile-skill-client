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

// UnityEngine.Networking.NetworkClient
struct NetworkClient_t696867603;
// UnityEngine.Networking.NetworkConnection
struct NetworkConnection_t107267906;
// System.Collections.Generic.List`1<UnityEngine.Networking.NetworkClient>
struct List_1_t65988735;
// System.String
struct String_t;
// UnityEngine.Networking.NetworkSystem.PeerInfoMessage[]
struct PeerInfoMessageU5BU5D_t2669814294;
// System.Collections.Generic.Dictionary`2<System.Int16,UnityEngine.Networking.NetworkMessageDelegate>
struct Dictionary_2_t943369209;
// UnityEngine.Networking.HostTopology
struct HostTopology_t3602650143;
// System.Type
struct Type_t;
// UnityEngine.Networking.ConnectionConfig
struct ConnectionConfig_t1350910390;
// UnityEngine.Networking.Match.MatchInfo
struct MatchInfo_t668842927;
// System.Net.EndPoint
struct EndPoint_t4156119363;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// UnityEngine.Networking.MessageBase
struct MessageBase_t2552428296;
// UnityEngine.Networking.NetworkWriter
struct NetworkWriter_t560143343;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.Collections.Generic.Dictionary`2<System.Int16,UnityEngine.Networking.NetworkConnection/PacketStat>
struct Dictionary_2_t4068020013;
// UnityEngine.Networking.NetworkMessage
struct NetworkMessage_t2339216573;
// UnityEngine.Networking.NetworkMessageDelegate
struct NetworkMessageDelegate_t1861659952;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netwo107267906.h"
#include "UnityEngine_UnityEngine_Networking_ConnectionConfi1350910390.h"
#include "UnityEngine_UnityEngine_Networking_HostTopology3602650143.h"
#include "UnityEngine_UnityEngine_Networking_Match_MatchInfo668842927.h"
#include "mscorlib_System_String2029220233.h"
#include "System_System_Net_EndPoint4156119363.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Mess2552428296.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netwo560143343.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netw2339216573.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netw1861659952.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netwo696867603.h"

// System.Void UnityEngine.Networking.NetworkClient::.ctor()
extern "C"  void NetworkClient__ctor_m3711706540 (NetworkClient_t696867603 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkClient::.ctor(UnityEngine.Networking.NetworkConnection)
extern "C"  void NetworkClient__ctor_m997165481 (NetworkClient_t696867603 * __this, NetworkConnection_t107267906 * ___conn0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<UnityEngine.Networking.NetworkClient> UnityEngine.Networking.NetworkClient::get_allClients()
extern "C"  List_1_t65988735 * NetworkClient_get_allClients_m2332003541 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkClient::get_active()
extern "C"  bool NetworkClient_get_active_m1622797787 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkClient::SetHandlers(UnityEngine.Networking.NetworkConnection)
extern "C"  void NetworkClient_SetHandlers_m1015092574 (NetworkClient_t696867603 * __this, NetworkConnection_t107267906 * ___conn0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Networking.NetworkClient::get_serverIp()
extern "C"  String_t* NetworkClient_get_serverIp_m3648421940 (NetworkClient_t696867603 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Networking.NetworkClient::get_serverPort()
extern "C"  int32_t NetworkClient_get_serverPort_m3829556241 (NetworkClient_t696867603 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.NetworkConnection UnityEngine.Networking.NetworkClient::get_connection()
extern "C"  NetworkConnection_t107267906 * NetworkClient_get_connection_m2050363925 (NetworkClient_t696867603 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.NetworkSystem.PeerInfoMessage[] UnityEngine.Networking.NetworkClient::get_peers()
extern "C"  PeerInfoMessageU5BU5D_t2669814294* NetworkClient_get_peers_m1983588636 (NetworkClient_t696867603 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Networking.NetworkClient::get_hostId()
extern "C"  int32_t NetworkClient_get_hostId_m564968084 (NetworkClient_t696867603 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.Int16,UnityEngine.Networking.NetworkMessageDelegate> UnityEngine.Networking.NetworkClient::get_handlers()
extern "C"  Dictionary_2_t943369209 * NetworkClient_get_handlers_m996377430 (NetworkClient_t696867603 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Networking.NetworkClient::get_numChannels()
extern "C"  int32_t NetworkClient_get_numChannels_m456480103 (NetworkClient_t696867603 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.HostTopology UnityEngine.Networking.NetworkClient::get_hostTopology()
extern "C"  HostTopology_t3602650143 * NetworkClient_get_hostTopology_m2401824447 (NetworkClient_t696867603 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkClient::get_isConnected()
extern "C"  bool NetworkClient_get_isConnected_m3837288908 (NetworkClient_t696867603 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type UnityEngine.Networking.NetworkClient::get_networkConnectionClass()
extern "C"  Type_t * NetworkClient_get_networkConnectionClass_m2036203033 (NetworkClient_t696867603 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkClient::Configure(UnityEngine.Networking.ConnectionConfig,System.Int32)
extern "C"  bool NetworkClient_Configure_m1120250318 (NetworkClient_t696867603 * __this, ConnectionConfig_t1350910390 * ___config0, int32_t ___maxConnections1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkClient::Configure(UnityEngine.Networking.HostTopology)
extern "C"  bool NetworkClient_Configure_m3875556408 (NetworkClient_t696867603 * __this, HostTopology_t3602650143 * ___topology0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkClient::Connect(UnityEngine.Networking.Match.MatchInfo)
extern "C"  void NetworkClient_Connect_m1111437015 (NetworkClient_t696867603 * __this, MatchInfo_t668842927 * ___matchInfo0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkClient::ReconnectToNewHost(System.String,System.Int32)
extern "C"  bool NetworkClient_ReconnectToNewHost_m2875090783 (NetworkClient_t696867603 * __this, String_t* ___serverIp0, int32_t ___serverPort1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkClient::ReconnectToNewHost(System.Net.EndPoint)
extern "C"  bool NetworkClient_ReconnectToNewHost_m252663029 (NetworkClient_t696867603 * __this, EndPoint_t4156119363 * ___secureTunnelEndPoint0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkClient::ConnectWithSimulator(System.String,System.Int32,System.Int32,System.Single)
extern "C"  void NetworkClient_ConnectWithSimulator_m486402807 (NetworkClient_t696867603 * __this, String_t* ___serverIp0, int32_t ___serverPort1, int32_t ___latency2, float ___packetLoss3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkClient::IsValidIpV6(System.String)
extern "C"  bool NetworkClient_IsValidIpV6_m3417909057 (Il2CppObject * __this /* static, unused */, String_t* ___address0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkClient::Connect(System.String,System.Int32)
extern "C"  void NetworkClient_Connect_m3400589375 (NetworkClient_t696867603 * __this, String_t* ___serverIp0, int32_t ___serverPort1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkClient::Connect(System.Net.EndPoint)
extern "C"  void NetworkClient_Connect_m3756010389 (NetworkClient_t696867603 * __this, EndPoint_t4156119363 * ___secureTunnelEndPoint0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkClient::PrepareForConnect()
extern "C"  void NetworkClient_PrepareForConnect_m3345087684 (NetworkClient_t696867603 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkClient::PrepareForConnect(System.Boolean)
extern "C"  void NetworkClient_PrepareForConnect_m861894477 (NetworkClient_t696867603 * __this, bool ___usePlatformSpecificProtocols0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkClient::GetHostAddressesCallback(System.IAsyncResult)
extern "C"  void NetworkClient_GetHostAddressesCallback_m1916727388 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___ar0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkClient::ContinueConnect()
extern "C"  void NetworkClient_ContinueConnect_m4069177821 (NetworkClient_t696867603 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkClient::ConnectWithRelay(UnityEngine.Networking.Match.MatchInfo)
extern "C"  void NetworkClient_ConnectWithRelay_m2881787306 (NetworkClient_t696867603 * __this, MatchInfo_t668842927 * ___info0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkClient::Disconnect()
extern "C"  void NetworkClient_Disconnect_m1215369128 (NetworkClient_t696867603 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkClient::Send(System.Int16,UnityEngine.Networking.MessageBase)
extern "C"  bool NetworkClient_Send_m347006652 (NetworkClient_t696867603 * __this, int16_t ___msgType0, MessageBase_t2552428296 * ___msg1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkClient::SendWriter(UnityEngine.Networking.NetworkWriter,System.Int32)
extern "C"  bool NetworkClient_SendWriter_m3026818032 (NetworkClient_t696867603 * __this, NetworkWriter_t560143343 * ___writer0, int32_t ___channelId1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkClient::SendBytes(System.Byte[],System.Int32,System.Int32)
extern "C"  bool NetworkClient_SendBytes_m1214648742 (NetworkClient_t696867603 * __this, ByteU5BU5D_t3397334013* ___data0, int32_t ___numBytes1, int32_t ___channelId2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkClient::SendUnreliable(System.Int16,UnityEngine.Networking.MessageBase)
extern "C"  bool NetworkClient_SendUnreliable_m2478983763 (NetworkClient_t696867603 * __this, int16_t ___msgType0, MessageBase_t2552428296 * ___msg1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkClient::SendByChannel(System.Int16,UnityEngine.Networking.MessageBase,System.Int32)
extern "C"  bool NetworkClient_SendByChannel_m3350542969 (NetworkClient_t696867603 * __this, int16_t ___msgType0, MessageBase_t2552428296 * ___msg1, int32_t ___channelId2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkClient::SetMaxDelay(System.Single)
extern "C"  void NetworkClient_SetMaxDelay_m681928498 (NetworkClient_t696867603 * __this, float ___seconds0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkClient::Shutdown()
extern "C"  void NetworkClient_Shutdown_m3471609456 (NetworkClient_t696867603 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkClient::Update()
extern "C"  void NetworkClient_Update_m3929415511 (NetworkClient_t696867603 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkClient::GenerateConnectError(System.Int32)
extern "C"  void NetworkClient_GenerateConnectError_m1059135116 (NetworkClient_t696867603 * __this, int32_t ___error0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkClient::GenerateDataError(System.Int32)
extern "C"  void NetworkClient_GenerateDataError_m1536797374 (NetworkClient_t696867603 * __this, int32_t ___error0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkClient::GenerateDisconnectError(System.Int32)
extern "C"  void NetworkClient_GenerateDisconnectError_m716607776 (NetworkClient_t696867603 * __this, int32_t ___error0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkClient::GenerateError(System.Int32)
extern "C"  void NetworkClient_GenerateError_m3435510894 (NetworkClient_t696867603 * __this, int32_t ___error0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkClient::GetStatsOut(System.Int32&,System.Int32&,System.Int32&,System.Int32&)
extern "C"  void NetworkClient_GetStatsOut_m3400990567 (NetworkClient_t696867603 * __this, int32_t* ___numMsgs0, int32_t* ___numBufferedMsgs1, int32_t* ___numBytes2, int32_t* ___lastBufferedPerSecond3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkClient::GetStatsIn(System.Int32&,System.Int32&)
extern "C"  void NetworkClient_GetStatsIn_m3362677868 (NetworkClient_t696867603 * __this, int32_t* ___numMsgs0, int32_t* ___numBytes1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.Int16,UnityEngine.Networking.NetworkConnection/PacketStat> UnityEngine.Networking.NetworkClient::GetConnectionStats()
extern "C"  Dictionary_2_t4068020013 * NetworkClient_GetConnectionStats_m689890474 (NetworkClient_t696867603 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkClient::ResetConnectionStats()
extern "C"  void NetworkClient_ResetConnectionStats_m3660055896 (NetworkClient_t696867603 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Networking.NetworkClient::GetRTT()
extern "C"  int32_t NetworkClient_GetRTT_m3277288880 (NetworkClient_t696867603 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkClient::RegisterSystemHandlers(System.Boolean)
extern "C"  void NetworkClient_RegisterSystemHandlers_m504257506 (NetworkClient_t696867603 * __this, bool ___localClient0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkClient::OnCRC(UnityEngine.Networking.NetworkMessage)
extern "C"  void NetworkClient_OnCRC_m114607883 (NetworkClient_t696867603 * __this, NetworkMessage_t2339216573 * ___netMsg0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkClient::RegisterHandler(System.Int16,UnityEngine.Networking.NetworkMessageDelegate)
extern "C"  void NetworkClient_RegisterHandler_m516253205 (NetworkClient_t696867603 * __this, int16_t ___msgType0, NetworkMessageDelegate_t1861659952 * ___handler1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkClient::RegisterHandlerSafe(System.Int16,UnityEngine.Networking.NetworkMessageDelegate)
extern "C"  void NetworkClient_RegisterHandlerSafe_m2802760404 (NetworkClient_t696867603 * __this, int16_t ___msgType0, NetworkMessageDelegate_t1861659952 * ___handler1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkClient::UnregisterHandler(System.Int16)
extern "C"  void NetworkClient_UnregisterHandler_m3818564035 (NetworkClient_t696867603 * __this, int16_t ___msgType0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.Int16,UnityEngine.Networking.NetworkConnection/PacketStat> UnityEngine.Networking.NetworkClient::GetTotalConnectionStats()
extern "C"  Dictionary_2_t4068020013 * NetworkClient_GetTotalConnectionStats_m3037574568 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkClient::AddClient(UnityEngine.Networking.NetworkClient)
extern "C"  void NetworkClient_AddClient_m743046322 (Il2CppObject * __this /* static, unused */, NetworkClient_t696867603 * ___client0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkClient::RemoveClient(UnityEngine.Networking.NetworkClient)
extern "C"  bool NetworkClient_RemoveClient_m2714640709 (Il2CppObject * __this /* static, unused */, NetworkClient_t696867603 * ___client0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkClient::UpdateClients()
extern "C"  void NetworkClient_UpdateClients_m3019586081 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkClient::ShutdownAll()
extern "C"  void NetworkClient_ShutdownAll_m3664130407 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkClient::SetActive(System.Boolean)
extern "C"  void NetworkClient_SetActive_m1718370875 (Il2CppObject * __this /* static, unused */, bool ___state0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkClient::.cctor()
extern "C"  void NetworkClient__cctor_m143491585 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
