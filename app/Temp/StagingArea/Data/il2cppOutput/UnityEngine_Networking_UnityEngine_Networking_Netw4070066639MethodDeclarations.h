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

// UnityEngine.Networking.NetworkSystem.PeerInfoMessage
struct PeerInfoMessage_t4070066639;
// UnityEngine.Networking.NetworkReader
struct NetworkReader_t3187690923;
// UnityEngine.Networking.NetworkWriter
struct NetworkWriter_t560143343;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netw3187690923.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netwo560143343.h"

// System.Void UnityEngine.Networking.NetworkSystem.PeerInfoMessage::.ctor()
extern "C"  void PeerInfoMessage__ctor_m1573702223 (PeerInfoMessage_t4070066639 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkSystem.PeerInfoMessage::Deserialize(UnityEngine.Networking.NetworkReader)
extern "C"  void PeerInfoMessage_Deserialize_m255566448 (PeerInfoMessage_t4070066639 * __this, NetworkReader_t3187690923 * ___reader0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkSystem.PeerInfoMessage::Serialize(UnityEngine.Networking.NetworkWriter)
extern "C"  void PeerInfoMessage_Serialize_m551499627 (PeerInfoMessage_t4070066639 * __this, NetworkWriter_t560143343 * ___writer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Networking.NetworkSystem.PeerInfoMessage::ToString()
extern "C"  String_t* PeerInfoMessage_ToString_m1348615708 (PeerInfoMessage_t4070066639 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
