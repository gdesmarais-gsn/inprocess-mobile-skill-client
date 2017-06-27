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

// UnityEngine.Networking.UNETWebSocketLib
struct UNETWebSocketLib_t1405657582;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// UnityEngine.Networking.HostTopology
struct HostTopology_t3602650143;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "UnityEngine_UnityEngine_Networking_HostTopology3602650143.h"
#include "UnityEngine_UnityEngine_Networking_NetworkEventTyp3809130132.h"

// System.Void UnityEngine.Networking.UNETWebSocketLib::.ctor()
extern "C"  void UNETWebSocketLib__ctor_m1871282889 (UNETWebSocketLib_t1405657582 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.UNETWebSocketLib::JS_UNETWebSockets_SocketCreate(System.Int32,System.String)
extern "C"  void UNETWebSocketLib_JS_UNETWebSockets_SocketCreate_m2610669722 (Il2CppObject * __this /* static, unused */, int32_t ___hostId0, String_t* ___url1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Networking.UNETWebSocketLib::JS_UNETWebSockets_SocketRecvEvntTypeFromHost(System.Int32)
extern "C"  int32_t UNETWebSocketLib_JS_UNETWebSockets_SocketRecvEvntTypeFromHost_m1189709723 (Il2CppObject * __this /* static, unused */, int32_t ___hostId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Networking.UNETWebSocketLib::JS_UNETWebSockets_SocketRecvEvntBuffLengthFromHost(System.Int32)
extern "C"  int32_t UNETWebSocketLib_JS_UNETWebSockets_SocketRecvEvntBuffLengthFromHost_m3318840596 (Il2CppObject * __this /* static, unused */, int32_t ___hostId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Networking.UNETWebSocketLib::JS_UNETWebSockets_SocketRecvEvntBuffFromHost(System.Int32,System.Byte[],System.Int32)
extern "C"  int32_t UNETWebSocketLib_JS_UNETWebSockets_SocketRecvEvntBuffFromHost_m2663393820 (Il2CppObject * __this /* static, unused */, int32_t ___hostId0, ByteU5BU5D_t3397334013* ___buff1, int32_t ___length2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.UNETWebSocketLib::JS_UNETWebSockets_SocketCleanEvntFromHost(System.Int32)
extern "C"  void UNETWebSocketLib_JS_UNETWebSockets_SocketCleanEvntFromHost_m1777430724 (Il2CppObject * __this /* static, unused */, int32_t ___hostId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.UNETWebSocketLib::JS_UNETWebSockets_SocketClose(System.Int32)
extern "C"  void UNETWebSocketLib_JS_UNETWebSockets_SocketClose_m221772002 (Il2CppObject * __this /* static, unused */, int32_t ___hostId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.UNETWebSocketLib::JS_UNETWebSockets_SocketSend(System.Int32,System.Byte[],System.Int32)
extern "C"  void UNETWebSocketLib_JS_UNETWebSockets_SocketSend_m3867947332 (Il2CppObject * __this /* static, unused */, int32_t ___hostId0, ByteU5BU5D_t3397334013* ___buff1, int32_t ___length2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Networking.UNETWebSocketLib::JS_UNETWebSockets_AddHost()
extern "C"  int32_t UNETWebSocketLib_JS_UNETWebSockets_AddHost_m1785171423 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.UNETWebSocketLib::JS_UNETWebSockets_IsHostCorrect(System.Int32)
extern "C"  bool UNETWebSocketLib_JS_UNETWebSockets_IsHostCorrect_m1058973973 (Il2CppObject * __this /* static, unused */, int32_t ___hostId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.UNETWebSocketLib::JS_UNETWebSockets_IsHostReadyToConnect(System.Int32)
extern "C"  bool UNETWebSocketLib_JS_UNETWebSockets_IsHostReadyToConnect_m3904747893 (Il2CppObject * __this /* static, unused */, int32_t ___hostId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.UNETWebSocketLib::JS_UNETWebSockets_SocketStop()
extern "C"  void UNETWebSocketLib_JS_UNETWebSockets_SocketStop_m4074989861 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.UNETWebSocketLib UnityEngine.Networking.UNETWebSocketLib::get_Instance()
extern "C"  UNETWebSocketLib_t1405657582 * UNETWebSocketLib_get_Instance_m176588069 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Networking.UNETWebSocketLib::AddHost(UnityEngine.Networking.HostTopology,System.Int32)
extern "C"  int32_t UNETWebSocketLib_AddHost_m3527458473 (UNETWebSocketLib_t1405657582 * __this, HostTopology_t3602650143 * ___topology0, int32_t ___port1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Networking.UNETWebSocketLib::Connect(System.Int32,System.String,System.Int32,System.Int32,System.Byte&)
extern "C"  int32_t UNETWebSocketLib_Connect_m3489370441 (UNETWebSocketLib_t1405657582 * __this, int32_t ___hostId0, String_t* ___ip1, int32_t ___port2, int32_t ___exeptionConnectionId3, uint8_t* ___error4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.UNETWebSocketLib::Disconnect(System.Int32,System.Int32,System.Byte&)
extern "C"  bool UNETWebSocketLib_Disconnect_m2127543008 (UNETWebSocketLib_t1405657582 * __this, int32_t ___hostId0, int32_t ___connectionId1, uint8_t* ___error2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.UNETWebSocketLib::Send(System.Int32,System.Int32,System.Int32,System.Byte[],System.Int32,System.Byte&)
extern "C"  bool UNETWebSocketLib_Send_m2238755441 (UNETWebSocketLib_t1405657582 * __this, int32_t ___hostId0, int32_t ___connectionId1, int32_t ___channelId2, ByteU5BU5D_t3397334013* ___buff3, int32_t ___size4, uint8_t* ___error5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.NetworkEventType UnityEngine.Networking.UNETWebSocketLib::ReceiveFromHost(System.Int32,System.Int32&,System.Int32&,System.Byte[],System.Int32,System.Int32&,System.Byte&)
extern "C"  int32_t UNETWebSocketLib_ReceiveFromHost_m2241654441 (UNETWebSocketLib_t1405657582 * __this, int32_t ___hostId0, int32_t* ___connectionId1, int32_t* ___channelId2, ByteU5BU5D_t3397334013* ___buffer3, int32_t ___bufferSize4, int32_t* ___receivedSize5, uint8_t* ___error6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.UNETWebSocketLib::Stop()
extern "C"  void UNETWebSocketLib_Stop_m1303818537 (UNETWebSocketLib_t1405657582 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.UNETWebSocketLib::Dispose()
extern "C"  void UNETWebSocketLib_Dispose_m1156433304 (UNETWebSocketLib_t1405657582 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.UNETWebSocketLib::.cctor()
extern "C"  void UNETWebSocketLib__cctor_m3074600120 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
