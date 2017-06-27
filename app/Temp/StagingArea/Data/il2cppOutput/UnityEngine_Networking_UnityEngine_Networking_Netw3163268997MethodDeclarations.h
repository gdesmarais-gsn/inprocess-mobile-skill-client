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

// UnityEngine.Networking.NetworkServerSimple
struct NetworkServerSimple_t3163268997;
// UnityEngine.Networking.HostTopology
struct HostTopology_t3602650143;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Networking.NetworkConnection>
struct ReadOnlyCollection_1_t293053598;
// System.Collections.Generic.Dictionary`2<System.Int16,UnityEngine.Networking.NetworkMessageDelegate>
struct Dictionary_2_t943369209;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// UnityEngine.Networking.NetworkReader
struct NetworkReader_t3187690923;
// System.Type
struct Type_t;
// UnityEngine.Networking.ConnectionConfig
struct ConnectionConfig_t1350910390;
// System.String
struct String_t;
// UnityEngine.Networking.NetworkMessageDelegate
struct NetworkMessageDelegate_t1861659952;
// UnityEngine.Networking.NetworkConnection
struct NetworkConnection_t107267906;
// UnityEngine.Networking.NetworkWriter
struct NetworkWriter_t560143343;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Networking_ConnectionConfi1350910390.h"
#include "UnityEngine_UnityEngine_Networking_HostTopology3602650143.h"
#include "mscorlib_System_String2029220233.h"
#include "UnityEngine_UnityEngine_Networking_Types_NetworkID348058649.h"
#include "UnityEngine_UnityEngine_Networking_Types_SourceID1840552406.h"
#include "UnityEngine_UnityEngine_Networking_Types_NodeID3569487935.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netw1861659952.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netwo107267906.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netwo560143343.h"

// System.Void UnityEngine.Networking.NetworkServerSimple::.ctor()
extern "C"  void NetworkServerSimple__ctor_m2859676678 (NetworkServerSimple_t3163268997 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Networking.NetworkServerSimple::get_listenPort()
extern "C"  int32_t NetworkServerSimple_get_listenPort_m3892074195 (NetworkServerSimple_t3163268997 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkServerSimple::set_listenPort(System.Int32)
extern "C"  void NetworkServerSimple_set_listenPort_m3970520672 (NetworkServerSimple_t3163268997 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Networking.NetworkServerSimple::get_serverHostId()
extern "C"  int32_t NetworkServerSimple_get_serverHostId_m573254531 (NetworkServerSimple_t3163268997 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkServerSimple::set_serverHostId(System.Int32)
extern "C"  void NetworkServerSimple_set_serverHostId_m3803670268 (NetworkServerSimple_t3163268997 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.HostTopology UnityEngine.Networking.NetworkServerSimple::get_hostTopology()
extern "C"  HostTopology_t3602650143 * NetworkServerSimple_get_hostTopology_m40833605 (NetworkServerSimple_t3163268997 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkServerSimple::get_useWebSockets()
extern "C"  bool NetworkServerSimple_get_useWebSockets_m1534267410 (NetworkServerSimple_t3163268997 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkServerSimple::set_useWebSockets(System.Boolean)
extern "C"  void NetworkServerSimple_set_useWebSockets_m3499625055 (NetworkServerSimple_t3163268997 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Networking.NetworkConnection> UnityEngine.Networking.NetworkServerSimple::get_connections()
extern "C"  ReadOnlyCollection_1_t293053598 * NetworkServerSimple_get_connections_m281336879 (NetworkServerSimple_t3163268997 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.Int16,UnityEngine.Networking.NetworkMessageDelegate> UnityEngine.Networking.NetworkServerSimple::get_handlers()
extern "C"  Dictionary_2_t943369209 * NetworkServerSimple_get_handlers_m2864515836 (NetworkServerSimple_t3163268997 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] UnityEngine.Networking.NetworkServerSimple::get_messageBuffer()
extern "C"  ByteU5BU5D_t3397334013* NetworkServerSimple_get_messageBuffer_m3894544296 (NetworkServerSimple_t3163268997 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.NetworkReader UnityEngine.Networking.NetworkServerSimple::get_messageReader()
extern "C"  NetworkReader_t3187690923 * NetworkServerSimple_get_messageReader_m2182528344 (NetworkServerSimple_t3163268997 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type UnityEngine.Networking.NetworkServerSimple::get_networkConnectionClass()
extern "C"  Type_t * NetworkServerSimple_get_networkConnectionClass_m2515039219 (NetworkServerSimple_t3163268997 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkServerSimple::Initialize()
extern "C"  void NetworkServerSimple_Initialize_m527064926 (NetworkServerSimple_t3163268997 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkServerSimple::Configure(UnityEngine.Networking.ConnectionConfig,System.Int32)
extern "C"  bool NetworkServerSimple_Configure_m3924615452 (NetworkServerSimple_t3163268997 * __this, ConnectionConfig_t1350910390 * ___config0, int32_t ___maxConnections1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkServerSimple::Configure(UnityEngine.Networking.HostTopology)
extern "C"  bool NetworkServerSimple_Configure_m420063654 (NetworkServerSimple_t3163268997 * __this, HostTopology_t3602650143 * ___topology0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkServerSimple::Listen(System.String,System.Int32)
extern "C"  bool NetworkServerSimple_Listen_m1939559202 (NetworkServerSimple_t3163268997 * __this, String_t* ___ipAddress0, int32_t ___serverListenPort1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkServerSimple::Listen(System.Int32)
extern "C"  bool NetworkServerSimple_Listen_m70598358 (NetworkServerSimple_t3163268997 * __this, int32_t ___serverListenPort0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkServerSimple::Listen(System.Int32,UnityEngine.Networking.HostTopology)
extern "C"  bool NetworkServerSimple_Listen_m2461511120 (NetworkServerSimple_t3163268997 * __this, int32_t ___serverListenPort0, HostTopology_t3602650143 * ___topology1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkServerSimple::ListenRelay(System.String,System.Int32,UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.SourceID,UnityEngine.Networking.Types.NodeID)
extern "C"  void NetworkServerSimple_ListenRelay_m3519462269 (NetworkServerSimple_t3163268997 * __this, String_t* ___relayIp0, int32_t ___relayPort1, uint64_t ___netGuid2, uint64_t ___sourceId3, uint16_t ___nodeId4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkServerSimple::Stop()
extern "C"  void NetworkServerSimple_Stop_m943052244 (NetworkServerSimple_t3163268997 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkServerSimple::RegisterHandlerSafe(System.Int16,UnityEngine.Networking.NetworkMessageDelegate)
extern "C"  void NetworkServerSimple_RegisterHandlerSafe_m3380352366 (NetworkServerSimple_t3163268997 * __this, int16_t ___msgType0, NetworkMessageDelegate_t1861659952 * ___handler1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkServerSimple::RegisterHandler(System.Int16,UnityEngine.Networking.NetworkMessageDelegate)
extern "C"  void NetworkServerSimple_RegisterHandler_m2778563567 (NetworkServerSimple_t3163268997 * __this, int16_t ___msgType0, NetworkMessageDelegate_t1861659952 * ___handler1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkServerSimple::UnregisterHandler(System.Int16)
extern "C"  void NetworkServerSimple_UnregisterHandler_m2815297129 (NetworkServerSimple_t3163268997 * __this, int16_t ___msgType0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkServerSimple::ClearHandlers()
extern "C"  void NetworkServerSimple_ClearHandlers_m3084553858 (NetworkServerSimple_t3163268997 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkServerSimple::UpdateConnections()
extern "C"  void NetworkServerSimple_UpdateConnections_m802839504 (NetworkServerSimple_t3163268997 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkServerSimple::Update()
extern "C"  void NetworkServerSimple_Update_m1096305393 (NetworkServerSimple_t3163268997 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.NetworkConnection UnityEngine.Networking.NetworkServerSimple::FindConnection(System.Int32)
extern "C"  NetworkConnection_t107267906 * NetworkServerSimple_FindConnection_m1034983320 (NetworkServerSimple_t3163268997 * __this, int32_t ___connectionId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkServerSimple::SetConnectionAtIndex(UnityEngine.Networking.NetworkConnection)
extern "C"  bool NetworkServerSimple_SetConnectionAtIndex_m834561040 (NetworkServerSimple_t3163268997 * __this, NetworkConnection_t107267906 * ___conn0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkServerSimple::RemoveConnectionAtIndex(System.Int32)
extern "C"  bool NetworkServerSimple_RemoveConnectionAtIndex_m1682604408 (NetworkServerSimple_t3163268997 * __this, int32_t ___connectionId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkServerSimple::HandleConnect(System.Int32,System.Byte)
extern "C"  void NetworkServerSimple_HandleConnect_m3978257598 (NetworkServerSimple_t3163268997 * __this, int32_t ___connectionId0, uint8_t ___error1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkServerSimple::HandleDisconnect(System.Int32,System.Byte)
extern "C"  void NetworkServerSimple_HandleDisconnect_m3981869876 (NetworkServerSimple_t3163268997 * __this, int32_t ___connectionId0, uint8_t ___error1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkServerSimple::HandleData(System.Int32,System.Int32,System.Int32,System.Byte)
extern "C"  void NetworkServerSimple_HandleData_m3040738244 (NetworkServerSimple_t3163268997 * __this, int32_t ___connectionId0, int32_t ___channelId1, int32_t ___receivedSize2, uint8_t ___error3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkServerSimple::SendBytesTo(System.Int32,System.Byte[],System.Int32,System.Int32)
extern "C"  void NetworkServerSimple_SendBytesTo_m1994559368 (NetworkServerSimple_t3163268997 * __this, int32_t ___connectionId0, ByteU5BU5D_t3397334013* ___bytes1, int32_t ___numBytes2, int32_t ___channelId3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkServerSimple::SendWriterTo(System.Int32,UnityEngine.Networking.NetworkWriter,System.Int32)
extern "C"  void NetworkServerSimple_SendWriterTo_m1655535262 (NetworkServerSimple_t3163268997 * __this, int32_t ___connectionId0, NetworkWriter_t560143343 * ___writer1, int32_t ___channelId2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkServerSimple::Disconnect(System.Int32)
extern "C"  void NetworkServerSimple_Disconnect_m2043643585 (NetworkServerSimple_t3163268997 * __this, int32_t ___connectionId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkServerSimple::DisconnectAllConnections()
extern "C"  void NetworkServerSimple_DisconnectAllConnections_m3888651894 (NetworkServerSimple_t3163268997 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkServerSimple::OnConnectError(System.Int32,System.Byte)
extern "C"  void NetworkServerSimple_OnConnectError_m1792375331 (NetworkServerSimple_t3163268997 * __this, int32_t ___connectionId0, uint8_t ___error1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkServerSimple::OnDataError(UnityEngine.Networking.NetworkConnection,System.Byte)
extern "C"  void NetworkServerSimple_OnDataError_m2790554431 (NetworkServerSimple_t3163268997 * __this, NetworkConnection_t107267906 * ___conn0, uint8_t ___error1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkServerSimple::OnDisconnectError(UnityEngine.Networking.NetworkConnection,System.Byte)
extern "C"  void NetworkServerSimple_OnDisconnectError_m2419442643 (NetworkServerSimple_t3163268997 * __this, NetworkConnection_t107267906 * ___conn0, uint8_t ___error1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkServerSimple::OnConnected(UnityEngine.Networking.NetworkConnection)
extern "C"  void NetworkServerSimple_OnConnected_m619931541 (NetworkServerSimple_t3163268997 * __this, NetworkConnection_t107267906 * ___conn0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkServerSimple::OnDisconnected(UnityEngine.Networking.NetworkConnection)
extern "C"  void NetworkServerSimple_OnDisconnected_m1198362055 (NetworkServerSimple_t3163268997 * __this, NetworkConnection_t107267906 * ___conn0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkServerSimple::OnData(UnityEngine.Networking.NetworkConnection,System.Int32,System.Int32)
extern "C"  void NetworkServerSimple_OnData_m4073271404 (NetworkServerSimple_t3163268997 * __this, NetworkConnection_t107267906 * ___conn0, int32_t ___receivedSize1, int32_t ___channelId2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
