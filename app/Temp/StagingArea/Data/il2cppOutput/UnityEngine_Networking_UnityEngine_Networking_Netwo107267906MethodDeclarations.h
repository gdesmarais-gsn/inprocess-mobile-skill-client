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

// UnityEngine.Networking.NetworkConnection
struct NetworkConnection_t107267906;
// System.Collections.Generic.HashSet`1<UnityEngine.Networking.NetworkIdentity>
struct HashSet_1_t100100644;
// System.Collections.Generic.List`1<UnityEngine.Networking.PlayerController>
struct List_1_t4277013949;
// System.Collections.Generic.HashSet`1<UnityEngine.Networking.NetworkInstanceId>
struct HashSet_1_t2662426982;
// System.Collections.Generic.Dictionary`2<System.Int16,UnityEngine.Networking.NetworkConnection/PacketStat>
struct Dictionary_2_t4068020013;
// System.String
struct String_t;
// UnityEngine.Networking.HostTopology
struct HostTopology_t3602650143;
// UnityEngine.Networking.NetworkMessageHandlers
struct NetworkMessageHandlers_t1208103348;
// UnityEngine.Networking.NetworkReader
struct NetworkReader_t3187690923;
// UnityEngine.Networking.NetworkMessage
struct NetworkMessage_t2339216573;
// UnityEngine.Networking.NetworkMessageDelegate
struct NetworkMessageDelegate_t1861659952;
// UnityEngine.Networking.PlayerController
struct PlayerController_t612925521;
// UnityEngine.Networking.MessageBase
struct MessageBase_t2552428296;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// UnityEngine.Networking.NetworkWriter
struct NetworkWriter_t560143343;
// UnityEngine.Networking.NetworkIdentity
struct NetworkIdentity_t1766639790;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Networking_NetworkError2010663956.h"
#include "mscorlib_System_String2029220233.h"
#include "UnityEngine_UnityEngine_Networking_HostTopology3602650143.h"
#include "UnityEngine_UnityEngine_Networking_QosType2003892483.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Chann888737962.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netw1208103348.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netw3187690923.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netw2339216573.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netw1861659952.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Playe612925521.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Mess2552428296.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netwo560143343.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netw1766639790.h"

// System.Void UnityEngine.Networking.NetworkConnection::.ctor()
extern "C"  void NetworkConnection__ctor_m755537365 (NetworkConnection_t107267906 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.HashSet`1<UnityEngine.Networking.NetworkIdentity> UnityEngine.Networking.NetworkConnection::get_visList()
extern "C"  HashSet_1_t100100644 * NetworkConnection_get_visList_m3491029772 (NetworkConnection_t107267906 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<UnityEngine.Networking.PlayerController> UnityEngine.Networking.NetworkConnection::get_playerControllers()
extern "C"  List_1_t4277013949 * NetworkConnection_get_playerControllers_m4107742509 (NetworkConnection_t107267906 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.HashSet`1<UnityEngine.Networking.NetworkInstanceId> UnityEngine.Networking.NetworkConnection::get_clientOwnedObjects()
extern "C"  HashSet_1_t2662426982 * NetworkConnection_get_clientOwnedObjects_m3441234744 (NetworkConnection_t107267906 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkConnection::get_isConnected()
extern "C"  bool NetworkConnection_get_isConnected_m1802590017 (NetworkConnection_t107267906 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.NetworkError UnityEngine.Networking.NetworkConnection::get_lastError()
extern "C"  int32_t NetworkConnection_get_lastError_m1491150602 (NetworkConnection_t107267906 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkConnection::set_lastError(UnityEngine.Networking.NetworkError)
extern "C"  void NetworkConnection_set_lastError_m852521459 (NetworkConnection_t107267906 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.Int16,UnityEngine.Networking.NetworkConnection/PacketStat> UnityEngine.Networking.NetworkConnection::get_packetStats()
extern "C"  Dictionary_2_t4068020013 * NetworkConnection_get_packetStats_m3968179060 (NetworkConnection_t107267906 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkConnection::Initialize(System.String,System.Int32,System.Int32,UnityEngine.Networking.HostTopology)
extern "C"  void NetworkConnection_Initialize_m68920709 (NetworkConnection_t107267906 * __this, String_t* ___networkAddress0, int32_t ___networkHostId1, int32_t ___networkConnectionId2, HostTopology_t3602650143 * ___hostTopology3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkConnection::Finalize()
extern "C"  void NetworkConnection_Finalize_m2085271899 (NetworkConnection_t107267906 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkConnection::Dispose()
extern "C"  void NetworkConnection_Dispose_m3845832864 (NetworkConnection_t107267906 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkConnection::Dispose(System.Boolean)
extern "C"  void NetworkConnection_Dispose_m1020351313 (NetworkConnection_t107267906 * __this, bool ___disposing0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkConnection::IsSequencedQoS(UnityEngine.Networking.QosType)
extern "C"  bool NetworkConnection_IsSequencedQoS_m635965507 (Il2CppObject * __this /* static, unused */, int32_t ___qos0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkConnection::IsReliableQoS(UnityEngine.Networking.QosType)
extern "C"  bool NetworkConnection_IsReliableQoS_m3125017300 (Il2CppObject * __this /* static, unused */, int32_t ___qos0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkConnection::SetChannelOption(System.Int32,UnityEngine.Networking.ChannelOption,System.Int32)
extern "C"  bool NetworkConnection_SetChannelOption_m418651778 (NetworkConnection_t107267906 * __this, int32_t ___channelId0, int32_t ___option1, int32_t ___value2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkConnection::Disconnect()
extern "C"  void NetworkConnection_Disconnect_m3732209417 (NetworkConnection_t107267906 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkConnection::SetHandlers(UnityEngine.Networking.NetworkMessageHandlers)
extern "C"  void NetworkConnection_SetHandlers_m1336129893 (NetworkConnection_t107267906 * __this, NetworkMessageHandlers_t1208103348 * ___handlers0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkConnection::CheckHandler(System.Int16)
extern "C"  bool NetworkConnection_CheckHandler_m786216270 (NetworkConnection_t107267906 * __this, int16_t ___msgType0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkConnection::InvokeHandlerNoData(System.Int16)
extern "C"  bool NetworkConnection_InvokeHandlerNoData_m2936001683 (NetworkConnection_t107267906 * __this, int16_t ___msgType0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkConnection::InvokeHandler(System.Int16,UnityEngine.Networking.NetworkReader,System.Int32)
extern "C"  bool NetworkConnection_InvokeHandler_m1615265679 (NetworkConnection_t107267906 * __this, int16_t ___msgType0, NetworkReader_t3187690923 * ___reader1, int32_t ___channelId2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkConnection::InvokeHandler(UnityEngine.Networking.NetworkMessage)
extern "C"  bool NetworkConnection_InvokeHandler_m51691859 (NetworkConnection_t107267906 * __this, NetworkMessage_t2339216573 * ___netMsg0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkConnection::HandleFragment(UnityEngine.Networking.NetworkReader,System.Int32)
extern "C"  void NetworkConnection_HandleFragment_m2630526908 (NetworkConnection_t107267906 * __this, NetworkReader_t3187690923 * ___reader0, int32_t ___channelId1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkConnection::RegisterHandler(System.Int16,UnityEngine.Networking.NetworkMessageDelegate)
extern "C"  void NetworkConnection_RegisterHandler_m3809763160 (NetworkConnection_t107267906 * __this, int16_t ___msgType0, NetworkMessageDelegate_t1861659952 * ___handler1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkConnection::UnregisterHandler(System.Int16)
extern "C"  void NetworkConnection_UnregisterHandler_m1773635448 (NetworkConnection_t107267906 * __this, int16_t ___msgType0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkConnection::SetPlayerController(UnityEngine.Networking.PlayerController)
extern "C"  void NetworkConnection_SetPlayerController_m1899337150 (NetworkConnection_t107267906 * __this, PlayerController_t612925521 * ___player0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkConnection::RemovePlayerController(System.Int16)
extern "C"  void NetworkConnection_RemovePlayerController_m3057834407 (NetworkConnection_t107267906 * __this, int16_t ___playerControllerId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkConnection::GetPlayerController(System.Int16,UnityEngine.Networking.PlayerController&)
extern "C"  bool NetworkConnection_GetPlayerController_m277917721 (NetworkConnection_t107267906 * __this, int16_t ___playerControllerId0, PlayerController_t612925521 ** ___playerController1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkConnection::FlushChannels()
extern "C"  void NetworkConnection_FlushChannels_m2578436925 (NetworkConnection_t107267906 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkConnection::SetMaxDelay(System.Single)
extern "C"  void NetworkConnection_SetMaxDelay_m3464346607 (NetworkConnection_t107267906 * __this, float ___seconds0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkConnection::Send(System.Int16,UnityEngine.Networking.MessageBase)
extern "C"  bool NetworkConnection_Send_m3371406555 (NetworkConnection_t107267906 * __this, int16_t ___msgType0, MessageBase_t2552428296 * ___msg1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkConnection::SendUnreliable(System.Int16,UnityEngine.Networking.MessageBase)
extern "C"  bool NetworkConnection_SendUnreliable_m2517365510 (NetworkConnection_t107267906 * __this, int16_t ___msgType0, MessageBase_t2552428296 * ___msg1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkConnection::SendByChannel(System.Int16,UnityEngine.Networking.MessageBase,System.Int32)
extern "C"  bool NetworkConnection_SendByChannel_m2324733676 (NetworkConnection_t107267906 * __this, int16_t ___msgType0, MessageBase_t2552428296 * ___msg1, int32_t ___channelId2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkConnection::SendBytes(System.Byte[],System.Int32,System.Int32)
extern "C"  bool NetworkConnection_SendBytes_m4035686051 (NetworkConnection_t107267906 * __this, ByteU5BU5D_t3397334013* ___bytes0, int32_t ___numBytes1, int32_t ___channelId2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkConnection::SendWriter(UnityEngine.Networking.NetworkWriter,System.Int32)
extern "C"  bool NetworkConnection_SendWriter_m2517888329 (NetworkConnection_t107267906 * __this, NetworkWriter_t560143343 * ___writer0, int32_t ___channelId1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkConnection::LogSend(System.Byte[])
extern "C"  void NetworkConnection_LogSend_m3284413200 (NetworkConnection_t107267906 * __this, ByteU5BU5D_t3397334013* ___bytes0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkConnection::CheckChannel(System.Int32)
extern "C"  bool NetworkConnection_CheckChannel_m1692419045 (NetworkConnection_t107267906 * __this, int32_t ___channelId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkConnection::ResetStats()
extern "C"  void NetworkConnection_ResetStats_m2371760093 (NetworkConnection_t107267906 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkConnection::HandleBytes(System.Byte[],System.Int32,System.Int32)
extern "C"  void NetworkConnection_HandleBytes_m643836457 (NetworkConnection_t107267906 * __this, ByteU5BU5D_t3397334013* ___buffer0, int32_t ___receivedSize1, int32_t ___channelId2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkConnection::HandleReader(UnityEngine.Networking.NetworkReader,System.Int32,System.Int32)
extern "C"  void NetworkConnection_HandleReader_m3407438780 (NetworkConnection_t107267906 * __this, NetworkReader_t3187690923 * ___reader0, int32_t ___receivedSize1, int32_t ___channelId2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkConnection::GetStatsOut(System.Int32&,System.Int32&,System.Int32&,System.Int32&)
extern "C"  void NetworkConnection_GetStatsOut_m3725049866 (NetworkConnection_t107267906 * __this, int32_t* ___numMsgs0, int32_t* ___numBufferedMsgs1, int32_t* ___numBytes2, int32_t* ___lastBufferedPerSecond3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkConnection::GetStatsIn(System.Int32&,System.Int32&)
extern "C"  void NetworkConnection_GetStatsIn_m3655703129 (NetworkConnection_t107267906 * __this, int32_t* ___numMsgs0, int32_t* ___numBytes1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Networking.NetworkConnection::ToString()
extern "C"  String_t* NetworkConnection_ToString_m41477048 (NetworkConnection_t107267906 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkConnection::AddToVisList(UnityEngine.Networking.NetworkIdentity)
extern "C"  void NetworkConnection_AddToVisList_m2724155412 (NetworkConnection_t107267906 * __this, NetworkIdentity_t1766639790 * ___uv0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkConnection::RemoveFromVisList(UnityEngine.Networking.NetworkIdentity,System.Boolean)
extern "C"  void NetworkConnection_RemoveFromVisList_m1654811255 (NetworkConnection_t107267906 * __this, NetworkIdentity_t1766639790 * ___uv0, bool ___isDestroyed1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkConnection::RemoveObservers()
extern "C"  void NetworkConnection_RemoveObservers_m1651572866 (NetworkConnection_t107267906 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkConnection::TransportRecieve(System.Byte[],System.Int32,System.Int32)
extern "C"  void NetworkConnection_TransportRecieve_m2734306240 (NetworkConnection_t107267906 * __this, ByteU5BU5D_t3397334013* ___bytes0, int32_t ___numBytes1, int32_t ___channelId2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkConnection::TransportSend(System.Byte[],System.Int32,System.Int32,System.Byte&)
extern "C"  bool NetworkConnection_TransportSend_m4115645366 (NetworkConnection_t107267906 * __this, ByteU5BU5D_t3397334013* ___bytes0, int32_t ___numBytes1, int32_t ___channelId2, uint8_t* ___error3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkConnection::AddOwnedObject(UnityEngine.Networking.NetworkIdentity)
extern "C"  void NetworkConnection_AddOwnedObject_m3007917897 (NetworkConnection_t107267906 * __this, NetworkIdentity_t1766639790 * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkConnection::RemoveOwnedObject(UnityEngine.Networking.NetworkIdentity)
extern "C"  void NetworkConnection_RemoveOwnedObject_m3725910990 (NetworkConnection_t107267906 * __this, NetworkIdentity_t1766639790 * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkConnection::OnFragment(UnityEngine.Networking.NetworkMessage)
extern "C"  void NetworkConnection_OnFragment_m4292179302 (Il2CppObject * __this /* static, unused */, NetworkMessage_t2339216573 * ___netMsg0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
