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

// UnityEngine.Networking.NetworkSystem.PeerListMessage
struct PeerListMessage_t297244123;
// UnityEngine.Networking.NetworkReader
struct NetworkReader_t3187690923;
// UnityEngine.Networking.NetworkWriter
struct NetworkWriter_t560143343;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netw3187690923.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netwo560143343.h"

// System.Void UnityEngine.Networking.NetworkSystem.PeerListMessage::.ctor()
extern "C"  void PeerListMessage__ctor_m1019056867 (PeerListMessage_t297244123 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkSystem.PeerListMessage::Deserialize(UnityEngine.Networking.NetworkReader)
extern "C"  void PeerListMessage_Deserialize_m2044523740 (PeerListMessage_t297244123 * __this, NetworkReader_t3187690923 * ___reader0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkSystem.PeerListMessage::Serialize(UnityEngine.Networking.NetworkWriter)
extern "C"  void PeerListMessage_Serialize_m2203204135 (PeerListMessage_t297244123 * __this, NetworkWriter_t560143343 * ___writer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
