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

// UnityEngine.Networking.ULocalConnectionToServer
struct ULocalConnectionToServer_t2986899766;
// UnityEngine.Networking.NetworkServer
struct NetworkServer_t3779449791;
// UnityEngine.Networking.MessageBase
struct MessageBase_t2552428296;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// UnityEngine.Networking.NetworkWriter
struct NetworkWriter_t560143343;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netw3779449791.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Mess2552428296.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netwo560143343.h"

// System.Void UnityEngine.Networking.ULocalConnectionToServer::.ctor(UnityEngine.Networking.NetworkServer)
extern "C"  void ULocalConnectionToServer__ctor_m2557591497 (ULocalConnectionToServer_t2986899766 * __this, NetworkServer_t3779449791 * ___localServer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.ULocalConnectionToServer::Send(System.Int16,UnityEngine.Networking.MessageBase)
extern "C"  bool ULocalConnectionToServer_Send_m6404507 (ULocalConnectionToServer_t2986899766 * __this, int16_t ___msgType0, MessageBase_t2552428296 * ___msg1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.ULocalConnectionToServer::SendUnreliable(System.Int16,UnityEngine.Networking.MessageBase)
extern "C"  bool ULocalConnectionToServer_SendUnreliable_m1321167388 (ULocalConnectionToServer_t2986899766 * __this, int16_t ___msgType0, MessageBase_t2552428296 * ___msg1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.ULocalConnectionToServer::SendByChannel(System.Int16,UnityEngine.Networking.MessageBase,System.Int32)
extern "C"  bool ULocalConnectionToServer_SendByChannel_m3330996814 (ULocalConnectionToServer_t2986899766 * __this, int16_t ___msgType0, MessageBase_t2552428296 * ___msg1, int32_t ___channelId2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.ULocalConnectionToServer::SendBytes(System.Byte[],System.Int32,System.Int32)
extern "C"  bool ULocalConnectionToServer_SendBytes_m2308173035 (ULocalConnectionToServer_t2986899766 * __this, ByteU5BU5D_t3397334013* ___bytes0, int32_t ___numBytes1, int32_t ___channelId2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.ULocalConnectionToServer::SendWriter(UnityEngine.Networking.NetworkWriter,System.Int32)
extern "C"  bool ULocalConnectionToServer_SendWriter_m421637293 (ULocalConnectionToServer_t2986899766 * __this, NetworkWriter_t560143343 * ___writer0, int32_t ___channelId1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.ULocalConnectionToServer::GetStatsOut(System.Int32&,System.Int32&,System.Int32&,System.Int32&)
extern "C"  void ULocalConnectionToServer_GetStatsOut_m4235174312 (ULocalConnectionToServer_t2986899766 * __this, int32_t* ___numMsgs0, int32_t* ___numBufferedMsgs1, int32_t* ___numBytes2, int32_t* ___lastBufferedPerSecond3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.ULocalConnectionToServer::GetStatsIn(System.Int32&,System.Int32&)
extern "C"  void ULocalConnectionToServer_GetStatsIn_m27736981 (ULocalConnectionToServer_t2986899766 * __this, int32_t* ___numMsgs0, int32_t* ___numBytes1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
