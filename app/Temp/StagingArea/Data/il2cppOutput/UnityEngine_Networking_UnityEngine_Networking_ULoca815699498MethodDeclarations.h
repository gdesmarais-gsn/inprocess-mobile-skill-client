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

// UnityEngine.Networking.ULocalConnectionToClient
struct ULocalConnectionToClient_t815699498;
// UnityEngine.Networking.LocalClient
struct LocalClient_t4139140194;
// UnityEngine.Networking.MessageBase
struct MessageBase_t2552428296;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// UnityEngine.Networking.NetworkWriter
struct NetworkWriter_t560143343;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Loca4139140194.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Mess2552428296.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netwo560143343.h"

// System.Void UnityEngine.Networking.ULocalConnectionToClient::.ctor(UnityEngine.Networking.LocalClient)
extern "C"  void ULocalConnectionToClient__ctor_m3549333974 (ULocalConnectionToClient_t815699498 * __this, LocalClient_t4139140194 * ___localClient0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.LocalClient UnityEngine.Networking.ULocalConnectionToClient::get_localClient()
extern "C"  LocalClient_t4139140194 * ULocalConnectionToClient_get_localClient_m1218963872 (ULocalConnectionToClient_t815699498 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.ULocalConnectionToClient::Send(System.Int16,UnityEngine.Networking.MessageBase)
extern "C"  bool ULocalConnectionToClient_Send_m2707515671 (ULocalConnectionToClient_t815699498 * __this, int16_t ___msgType0, MessageBase_t2552428296 * ___msg1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.ULocalConnectionToClient::SendUnreliable(System.Int16,UnityEngine.Networking.MessageBase)
extern "C"  bool ULocalConnectionToClient_SendUnreliable_m3901565392 (ULocalConnectionToClient_t815699498 * __this, int16_t ___msgType0, MessageBase_t2552428296 * ___msg1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.ULocalConnectionToClient::SendByChannel(System.Int16,UnityEngine.Networking.MessageBase,System.Int32)
extern "C"  bool ULocalConnectionToClient_SendByChannel_m1783721962 (ULocalConnectionToClient_t815699498 * __this, int16_t ___msgType0, MessageBase_t2552428296 * ___msg1, int32_t ___channelId2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.ULocalConnectionToClient::SendBytes(System.Byte[],System.Int32,System.Int32)
extern "C"  bool ULocalConnectionToClient_SendBytes_m4248679743 (ULocalConnectionToClient_t815699498 * __this, ByteU5BU5D_t3397334013* ___bytes0, int32_t ___numBytes1, int32_t ___channelId2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.ULocalConnectionToClient::SendWriter(UnityEngine.Networking.NetworkWriter,System.Int32)
extern "C"  bool ULocalConnectionToClient_SendWriter_m2180731105 (ULocalConnectionToClient_t815699498 * __this, NetworkWriter_t560143343 * ___writer0, int32_t ___channelId1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.ULocalConnectionToClient::GetStatsOut(System.Int32&,System.Int32&,System.Int32&,System.Int32&)
extern "C"  void ULocalConnectionToClient_GetStatsOut_m3401242428 (ULocalConnectionToClient_t815699498 * __this, int32_t* ___numMsgs0, int32_t* ___numBufferedMsgs1, int32_t* ___numBytes2, int32_t* ___lastBufferedPerSecond3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.ULocalConnectionToClient::GetStatsIn(System.Int32&,System.Int32&)
extern "C"  void ULocalConnectionToClient_GetStatsIn_m138910833 (ULocalConnectionToClient_t815699498 * __this, int32_t* ___numMsgs0, int32_t* ___numBytes1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
