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

// UnityEngine.Networking.NetworkSystem.ClientAuthorityMessage
struct ClientAuthorityMessage_t648218179;
// UnityEngine.Networking.NetworkReader
struct NetworkReader_t3187690923;
// UnityEngine.Networking.NetworkWriter
struct NetworkWriter_t560143343;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netw3187690923.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netwo560143343.h"

// System.Void UnityEngine.Networking.NetworkSystem.ClientAuthorityMessage::.ctor()
extern "C"  void ClientAuthorityMessage__ctor_m1934349363 (ClientAuthorityMessage_t648218179 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkSystem.ClientAuthorityMessage::Deserialize(UnityEngine.Networking.NetworkReader)
extern "C"  void ClientAuthorityMessage_Deserialize_m2788454690 (ClientAuthorityMessage_t648218179 * __this, NetworkReader_t3187690923 * ___reader0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkSystem.ClientAuthorityMessage::Serialize(UnityEngine.Networking.NetworkWriter)
extern "C"  void ClientAuthorityMessage_Serialize_m22594975 (ClientAuthorityMessage_t648218179 * __this, NetworkWriter_t560143343 * ___writer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
