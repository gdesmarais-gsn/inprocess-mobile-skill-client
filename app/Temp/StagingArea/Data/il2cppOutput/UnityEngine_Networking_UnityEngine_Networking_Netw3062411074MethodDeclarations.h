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

// UnityEngine.Networking.NetworkSystem.ReconnectMessage
struct ReconnectMessage_t3062411074;
// UnityEngine.Networking.NetworkReader
struct NetworkReader_t3187690923;
// UnityEngine.Networking.NetworkWriter
struct NetworkWriter_t560143343;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netw3187690923.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netwo560143343.h"

// System.Void UnityEngine.Networking.NetworkSystem.ReconnectMessage::.ctor()
extern "C"  void ReconnectMessage__ctor_m1068231598 (ReconnectMessage_t3062411074 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkSystem.ReconnectMessage::Deserialize(UnityEngine.Networking.NetworkReader)
extern "C"  void ReconnectMessage_Deserialize_m1536840957 (ReconnectMessage_t3062411074 * __this, NetworkReader_t3187690923 * ___reader0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkSystem.ReconnectMessage::Serialize(UnityEngine.Networking.NetworkWriter)
extern "C"  void ReconnectMessage_Serialize_m2582326490 (ReconnectMessage_t3062411074 * __this, NetworkWriter_t560143343 * ___writer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
