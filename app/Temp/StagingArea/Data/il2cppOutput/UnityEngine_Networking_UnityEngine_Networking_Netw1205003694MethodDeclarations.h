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

// UnityEngine.Networking.NetworkSystem.PeerAuthorityMessage
struct PeerAuthorityMessage_t1205003694;
// UnityEngine.Networking.NetworkReader
struct NetworkReader_t3187690923;
// UnityEngine.Networking.NetworkWriter
struct NetworkWriter_t560143343;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netw3187690923.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netwo560143343.h"

// System.Void UnityEngine.Networking.NetworkSystem.PeerAuthorityMessage::.ctor()
extern "C"  void PeerAuthorityMessage__ctor_m1670069394 (PeerAuthorityMessage_t1205003694 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkSystem.PeerAuthorityMessage::Deserialize(UnityEngine.Networking.NetworkReader)
extern "C"  void PeerAuthorityMessage_Deserialize_m334527919 (PeerAuthorityMessage_t1205003694 * __this, NetworkReader_t3187690923 * ___reader0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkSystem.PeerAuthorityMessage::Serialize(UnityEngine.Networking.NetworkWriter)
extern "C"  void PeerAuthorityMessage_Serialize_m912281634 (PeerAuthorityMessage_t1205003694 * __this, NetworkWriter_t560143343 * ___writer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
