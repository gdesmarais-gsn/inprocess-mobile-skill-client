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

// UnityEngine.Networking.LocalClient
struct LocalClient_t4139140194;
// UnityEngine.Networking.PlayerController
struct PlayerController_t612925521;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// UnityEngine.Networking.MessageBase
struct MessageBase_t2552428296;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Playe612925521.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Mess2552428296.h"

// System.Void UnityEngine.Networking.LocalClient::.ctor()
extern "C"  void LocalClient__ctor_m2692993733 (LocalClient_t4139140194 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.LocalClient::Disconnect()
extern "C"  void LocalClient_Disconnect_m1710563785 (LocalClient_t4139140194 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.LocalClient::InternalConnectLocalServer(System.Boolean)
extern "C"  void LocalClient_InternalConnectLocalServer_m3072600415 (LocalClient_t4139140194 * __this, bool ___generateConnectMsg0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.LocalClient::Update()
extern "C"  void LocalClient_Update_m3607549818 (LocalClient_t4139140194 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.LocalClient::AddLocalPlayer(UnityEngine.Networking.PlayerController)
extern "C"  void LocalClient_AddLocalPlayer_m3959245166 (LocalClient_t4139140194 * __this, PlayerController_t612925521 * ___localPlayer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.LocalClient::PostInternalMessage(System.Byte[],System.Int32)
extern "C"  void LocalClient_PostInternalMessage_m916277271 (LocalClient_t4139140194 * __this, ByteU5BU5D_t3397334013* ___buffer0, int32_t ___channelId1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.LocalClient::PostInternalMessage(System.Int16)
extern "C"  void LocalClient_PostInternalMessage_m348756250 (LocalClient_t4139140194 * __this, int16_t ___msgType0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.LocalClient::ProcessInternalMessages()
extern "C"  void LocalClient_ProcessInternalMessages_m1175847769 (LocalClient_t4139140194 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.LocalClient::InvokeHandlerOnClient(System.Int16,UnityEngine.Networking.MessageBase,System.Int32)
extern "C"  void LocalClient_InvokeHandlerOnClient_m2648441406 (LocalClient_t4139140194 * __this, int16_t ___msgType0, MessageBase_t2552428296 * ___msg1, int32_t ___channelId2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.LocalClient::InvokeBytesOnClient(System.Byte[],System.Int32)
extern "C"  void LocalClient_InvokeBytesOnClient_m413375152 (LocalClient_t4139140194 * __this, ByteU5BU5D_t3397334013* ___buffer0, int32_t ___channelId1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
