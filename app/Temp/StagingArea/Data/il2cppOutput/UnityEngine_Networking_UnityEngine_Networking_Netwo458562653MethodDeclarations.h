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

// UnityEngine.Networking.NetworkServer/ServerSimpleWrapper
struct ServerSimpleWrapper_t458562653;
// UnityEngine.Networking.NetworkServer
struct NetworkServer_t3779449791;
// UnityEngine.Networking.NetworkConnection
struct NetworkConnection_t107267906;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netw3779449791.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netwo107267906.h"

// System.Void UnityEngine.Networking.NetworkServer/ServerSimpleWrapper::.ctor(UnityEngine.Networking.NetworkServer)
extern "C"  void ServerSimpleWrapper__ctor_m2875453173 (ServerSimpleWrapper_t458562653 * __this, NetworkServer_t3779449791 * ___server0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkServer/ServerSimpleWrapper::OnConnectError(System.Int32,System.Byte)
extern "C"  void ServerSimpleWrapper_OnConnectError_m1162891808 (ServerSimpleWrapper_t458562653 * __this, int32_t ___connectionId0, uint8_t ___error1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkServer/ServerSimpleWrapper::OnDataError(UnityEngine.Networking.NetworkConnection,System.Byte)
extern "C"  void ServerSimpleWrapper_OnDataError_m3394061714 (ServerSimpleWrapper_t458562653 * __this, NetworkConnection_t107267906 * ___conn0, uint8_t ___error1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkServer/ServerSimpleWrapper::OnDisconnectError(UnityEngine.Networking.NetworkConnection,System.Byte)
extern "C"  void ServerSimpleWrapper_OnDisconnectError_m181521952 (ServerSimpleWrapper_t458562653 * __this, NetworkConnection_t107267906 * ___conn0, uint8_t ___error1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkServer/ServerSimpleWrapper::OnConnected(UnityEngine.Networking.NetworkConnection)
extern "C"  void ServerSimpleWrapper_OnConnected_m135670686 (ServerSimpleWrapper_t458562653 * __this, NetworkConnection_t107267906 * ___conn0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkServer/ServerSimpleWrapper::OnDisconnected(UnityEngine.Networking.NetworkConnection)
extern "C"  void ServerSimpleWrapper_OnDisconnected_m3319372156 (ServerSimpleWrapper_t458562653 * __this, NetworkConnection_t107267906 * ___conn0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkServer/ServerSimpleWrapper::OnData(UnityEngine.Networking.NetworkConnection,System.Int32,System.Int32)
extern "C"  void ServerSimpleWrapper_OnData_m2614907991 (ServerSimpleWrapper_t458562653 * __this, NetworkConnection_t107267906 * ___conn0, int32_t ___receivedSize1, int32_t ___channelId2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
