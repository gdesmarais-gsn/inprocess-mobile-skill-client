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

// UnityEngine.Networking.NetworkSystem.OwnerMessage
struct OwnerMessage_t225159112;
// UnityEngine.Networking.NetworkReader
struct NetworkReader_t3187690923;
// UnityEngine.Networking.NetworkWriter
struct NetworkWriter_t560143343;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netw3187690923.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netwo560143343.h"

// System.Void UnityEngine.Networking.NetworkSystem.OwnerMessage::.ctor()
extern "C"  void OwnerMessage__ctor_m1308510428 (OwnerMessage_t225159112 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkSystem.OwnerMessage::Deserialize(UnityEngine.Networking.NetworkReader)
extern "C"  void OwnerMessage_Deserialize_m3561473153 (OwnerMessage_t225159112 * __this, NetworkReader_t3187690923 * ___reader0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkSystem.OwnerMessage::Serialize(UnityEngine.Networking.NetworkWriter)
extern "C"  void OwnerMessage_Serialize_m956793488 (OwnerMessage_t225159112 * __this, NetworkWriter_t560143343 * ___writer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
