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

// UnityEngine.Networking.NetworkMessageHandlers
struct NetworkMessageHandlers_t1208103348;
// UnityEngine.Networking.NetworkMessageDelegate
struct NetworkMessageDelegate_t1861659952;
// System.Collections.Generic.Dictionary`2<System.Int16,UnityEngine.Networking.NetworkMessageDelegate>
struct Dictionary_2_t943369209;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netw1861659952.h"

// System.Void UnityEngine.Networking.NetworkMessageHandlers::.ctor()
extern "C"  void NetworkMessageHandlers__ctor_m1433408051 (NetworkMessageHandlers_t1208103348 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkMessageHandlers::RegisterHandlerSafe(System.Int16,UnityEngine.Networking.NetworkMessageDelegate)
extern "C"  void NetworkMessageHandlers_RegisterHandlerSafe_m340871289 (NetworkMessageHandlers_t1208103348 * __this, int16_t ___msgType0, NetworkMessageDelegate_t1861659952 * ___handler1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkMessageHandlers::RegisterHandler(System.Int16,UnityEngine.Networking.NetworkMessageDelegate)
extern "C"  void NetworkMessageHandlers_RegisterHandler_m1618458846 (NetworkMessageHandlers_t1208103348 * __this, int16_t ___msgType0, NetworkMessageDelegate_t1861659952 * ___handler1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkMessageHandlers::UnregisterHandler(System.Int16)
extern "C"  void NetworkMessageHandlers_UnregisterHandler_m865894470 (NetworkMessageHandlers_t1208103348 * __this, int16_t ___msgType0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.NetworkMessageDelegate UnityEngine.Networking.NetworkMessageHandlers::GetHandler(System.Int16)
extern "C"  NetworkMessageDelegate_t1861659952 * NetworkMessageHandlers_GetHandler_m4271415060 (NetworkMessageHandlers_t1208103348 * __this, int16_t ___msgType0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.Int16,UnityEngine.Networking.NetworkMessageDelegate> UnityEngine.Networking.NetworkMessageHandlers::GetHandlers()
extern "C"  Dictionary_2_t943369209 * NetworkMessageHandlers_GetHandlers_m3804578390 (NetworkMessageHandlers_t1208103348 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkMessageHandlers::ClearMessageHandlers()
extern "C"  void NetworkMessageHandlers_ClearMessageHandlers_m1525852522 (NetworkMessageHandlers_t1208103348 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
