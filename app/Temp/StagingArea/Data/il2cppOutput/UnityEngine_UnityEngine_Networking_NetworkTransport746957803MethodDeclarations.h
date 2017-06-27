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

// UnityEngine.Networking.HostTopology
struct HostTopology_t3602650143;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// UnityEngine.Networking.ConnectionSimulatorConfig
struct ConnectionSimulatorConfig_t3039400316;
// UnityEngine.Networking.GlobalConfig
struct GlobalConfig_t2977893073;
// System.Net.EndPoint
struct EndPoint_t4156119363;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Networking_HostTopology3602650143.h"
#include "mscorlib_System_String2029220233.h"
#include "UnityEngine_UnityEngine_Networking_NetworkEventTyp3809130132.h"
#include "UnityEngine_UnityEngine_Networking_Types_NetworkID348058649.h"
#include "UnityEngine_UnityEngine_Networking_Types_SourceID1840552406.h"
#include "UnityEngine_UnityEngine_Networking_Types_NodeID3569487935.h"
#include "UnityEngine_UnityEngine_Networking_ConnectionSimul3039400316.h"
#include "UnityEngine_UnityEngine_Networking_GlobalConfig2977893073.h"
#include "System_System_Net_EndPoint4156119363.h"

// System.Int32 UnityEngine.Networking.NetworkTransport::AddHost(UnityEngine.Networking.HostTopology,System.Int32)
extern "C"  int32_t NetworkTransport_AddHost_m2536181746 (Il2CppObject * __this /* static, unused */, HostTopology_t3602650143 * ___topology0, int32_t ___port1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Networking.NetworkTransport::AddHost(UnityEngine.Networking.HostTopology,System.Int32,System.String)
extern "C"  int32_t NetworkTransport_AddHost_m3613535902 (Il2CppObject * __this /* static, unused */, HostTopology_t3602650143 * ___topology0, int32_t ___port1, String_t* ___ip2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Networking.NetworkTransport::AddWebsocketHost(UnityEngine.Networking.HostTopology,System.Int32)
extern "C"  int32_t NetworkTransport_AddWebsocketHost_m3519798877 (Il2CppObject * __this /* static, unused */, HostTopology_t3602650143 * ___topology0, int32_t ___port1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkTransport::Init()
extern "C"  void NetworkTransport_Init_m2152737456 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkTransport::Shutdown()
extern "C"  void NetworkTransport_Shutdown_m3478757760 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Networking.NetworkTransport::Connect(System.Int32,System.String,System.Int32,System.Int32,System.Byte&)
extern "C"  int32_t NetworkTransport_Connect_m3435102832 (Il2CppObject * __this /* static, unused */, int32_t ___hostId0, String_t* ___address1, int32_t ___port2, int32_t ___exeptionConnectionId3, uint8_t* ___error4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkTransport::Disconnect(System.Int32,System.Int32,System.Byte&)
extern "C"  bool NetworkTransport_Disconnect_m3608612447 (Il2CppObject * __this /* static, unused */, int32_t ___hostId0, int32_t ___connectionId1, uint8_t* ___error2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkTransport::Send(System.Int32,System.Int32,System.Int32,System.Byte[],System.Int32,System.Byte&)
extern "C"  bool NetworkTransport_Send_m835059816 (Il2CppObject * __this /* static, unused */, int32_t ___hostId0, int32_t ___connectionId1, int32_t ___channelId2, ByteU5BU5D_t3397334013* ___buffer3, int32_t ___size4, uint8_t* ___error5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.NetworkEventType UnityEngine.Networking.NetworkTransport::ReceiveFromHost(System.Int32,System.Int32&,System.Int32&,System.Byte[],System.Int32,System.Int32&,System.Byte&)
extern "C"  int32_t NetworkTransport_ReceiveFromHost_m3839023694 (Il2CppObject * __this /* static, unused */, int32_t ___hostId0, int32_t* ___connectionId1, int32_t* ___channelId2, ByteU5BU5D_t3397334013* ___buffer3, int32_t ___bufferSize4, int32_t* ___receivedSize5, uint8_t* ___error6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkTransport::RemoveHost(System.Int32)
extern "C"  bool NetworkTransport_RemoveHost_m4269184683 (Il2CppObject * __this /* static, unused */, int32_t ___hostId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkTransport::ConnectAsNetworkHost(System.Int32,System.String,System.Int32,UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.SourceID,UnityEngine.Networking.Types.NodeID,System.Byte&)
extern "C"  void NetworkTransport_ConnectAsNetworkHost_m432787567 (Il2CppObject * __this /* static, unused */, int32_t ___hostId0, String_t* ___address1, int32_t ___port2, uint64_t ___network3, uint64_t ___source4, uint16_t ___node5, uint8_t* ___error6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.NetworkEventType UnityEngine.Networking.NetworkTransport::ReceiveRelayEventFromHost(System.Int32,System.Byte&)
extern "C"  int32_t NetworkTransport_ReceiveRelayEventFromHost_m43363376 (Il2CppObject * __this /* static, unused */, int32_t ___hostId0, uint8_t* ___error1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Networking.NetworkTransport::ConnectToNetworkPeer(System.Int32,System.String,System.Int32,System.Int32,System.Int32,UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.SourceID,UnityEngine.Networking.Types.NodeID,System.Byte&)
extern "C"  int32_t NetworkTransport_ConnectToNetworkPeer_m3098233362 (Il2CppObject * __this /* static, unused */, int32_t ___hostId0, String_t* ___address1, int32_t ___port2, int32_t ___exceptionConnectionId3, int32_t ___relaySlotId4, uint64_t ___network5, uint64_t ___source6, uint16_t ___node7, uint8_t* ___error8, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Networking.NetworkTransport::GetCurrentRtt(System.Int32,System.Int32,System.Byte&)
extern "C"  int32_t NetworkTransport_GetCurrentRtt_m2676109270 (Il2CppObject * __this /* static, unused */, int32_t ___hostId0, int32_t ___connectionId1, uint8_t* ___error2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkTransport::GetConnectionInfo(System.Int32,System.Int32,System.String&,System.Int32&,UnityEngine.Networking.Types.NetworkID&,UnityEngine.Networking.Types.NodeID&,System.Byte&)
extern "C"  void NetworkTransport_GetConnectionInfo_m2483380624 (Il2CppObject * __this /* static, unused */, int32_t ___hostId0, int32_t ___connectionId1, String_t** ___address2, int32_t* ___port3, uint64_t* ___network4, uint16_t* ___dstNode5, uint8_t* ___error6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkTransport::get_IsStarted()
extern "C"  bool NetworkTransport_get_IsStarted_m1785658594 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Networking.NetworkTransport::ConnectWithSimulator(System.Int32,System.String,System.Int32,System.Int32,System.Byte&,UnityEngine.Networking.ConnectionSimulatorConfig)
extern "C"  int32_t NetworkTransport_ConnectWithSimulator_m3376974561 (Il2CppObject * __this /* static, unused */, int32_t ___hostId0, String_t* ___address1, int32_t ___port2, int32_t ___exeptionConnectionId3, uint8_t* ___error4, ConnectionSimulatorConfig_t3039400316 * ___conf5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkTransport::Init(UnityEngine.Networking.GlobalConfig)
extern "C"  void NetworkTransport_Init_m2987205822 (Il2CppObject * __this /* static, unused */, GlobalConfig_t2977893073 * ___config0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Networking.NetworkTransport::AddWebsocketHost(UnityEngine.Networking.HostTopology,System.Int32,System.String)
extern "C"  int32_t NetworkTransport_AddWebsocketHost_m2609731655 (Il2CppObject * __this /* static, unused */, HostTopology_t3602650143 * ___topology0, int32_t ___port1, String_t* ___ip2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Networking.NetworkTransport::AddHostWithSimulator(UnityEngine.Networking.HostTopology,System.Int32,System.Int32,System.Int32)
extern "C"  int32_t NetworkTransport_AddHostWithSimulator_m3300211470 (Il2CppObject * __this /* static, unused */, HostTopology_t3602650143 * ___topology0, int32_t ___minTimeout1, int32_t ___maxTimeout2, int32_t ___port3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Networking.NetworkTransport::AddHostWithSimulator(UnityEngine.Networking.HostTopology,System.Int32,System.Int32,System.Int32,System.String)
extern "C"  int32_t NetworkTransport_AddHostWithSimulator_m2416329794 (Il2CppObject * __this /* static, unused */, HostTopology_t3602650143 * ___topology0, int32_t ___minTimeout1, int32_t ___maxTimeout2, int32_t ___port3, String_t* ___ip4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Networking.NetworkTransport::ConnectEndPoint(System.Int32,System.Net.EndPoint,System.Int32,System.Byte&)
extern "C"  int32_t NetworkTransport_ConnectEndPoint_m1873224625 (Il2CppObject * __this /* static, unused */, int32_t ___hostId0, EndPoint_t4156119363 * ___xboxOneEndPoint1, int32_t ___exceptionConnectionId2, uint8_t* ___error3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkTransport::DoesEndPointUsePlatformProtocols(System.Net.EndPoint)
extern "C"  bool NetworkTransport_DoesEndPointUsePlatformProtocols_m499644742 (Il2CppObject * __this /* static, unused */, EndPoint_t4156119363 * ___endPoint0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkTransport::StartBroadcastDiscovery(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Byte[],System.Int32,System.Int32,System.Byte&)
extern "C"  bool NetworkTransport_StartBroadcastDiscovery_m3530247076 (Il2CppObject * __this /* static, unused */, int32_t ___hostId0, int32_t ___broadcastPort1, int32_t ___key2, int32_t ___version3, int32_t ___subversion4, ByteU5BU5D_t3397334013* ___buffer5, int32_t ___size6, int32_t ___timeout7, uint8_t* ___error8, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkTransport::StopBroadcastDiscovery()
extern "C"  void NetworkTransport_StopBroadcastDiscovery_m3823011333 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkTransport::GetBroadcastConnectionInfo(System.Int32,System.String&,System.Int32&,System.Byte&)
extern "C"  void NetworkTransport_GetBroadcastConnectionInfo_m618777420 (Il2CppObject * __this /* static, unused */, int32_t ___hostId0, String_t** ___address1, int32_t* ___port2, uint8_t* ___error3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkTransport::GetBroadcastConnectionMessage(System.Int32,System.Byte[],System.Int32,System.Int32&,System.Byte&)
extern "C"  void NetworkTransport_GetBroadcastConnectionMessage_m497273299 (Il2CppObject * __this /* static, unused */, int32_t ___hostId0, ByteU5BU5D_t3397334013* ___buffer1, int32_t ___bufferSize2, int32_t* ___receivedSize3, uint8_t* ___error4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkTransport::SetBroadcastCredentials(System.Int32,System.Int32,System.Int32,System.Int32,System.Byte&)
extern "C"  void NetworkTransport_SetBroadcastCredentials_m416622866 (Il2CppObject * __this /* static, unused */, int32_t ___hostId0, int32_t ___key1, int32_t ___version2, int32_t ___subversion3, uint8_t* ___error4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkTransport::.cctor()
extern "C"  void NetworkTransport__cctor_m500635307 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
