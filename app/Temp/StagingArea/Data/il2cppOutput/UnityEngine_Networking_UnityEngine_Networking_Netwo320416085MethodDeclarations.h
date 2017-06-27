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

// UnityEngine.Networking.NetworkSystem.ObjectSpawnMessage
struct ObjectSpawnMessage_t320416085;
// UnityEngine.Networking.NetworkReader
struct NetworkReader_t3187690923;
// UnityEngine.Networking.NetworkWriter
struct NetworkWriter_t560143343;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netw3187690923.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netwo560143343.h"

// System.Void UnityEngine.Networking.NetworkSystem.ObjectSpawnMessage::.ctor()
extern "C"  void ObjectSpawnMessage__ctor_m941995749 (ObjectSpawnMessage_t320416085 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkSystem.ObjectSpawnMessage::Deserialize(UnityEngine.Networking.NetworkReader)
extern "C"  void ObjectSpawnMessage_Deserialize_m92426780 (ObjectSpawnMessage_t320416085 * __this, NetworkReader_t3187690923 * ___reader0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkSystem.ObjectSpawnMessage::Serialize(UnityEngine.Networking.NetworkWriter)
extern "C"  void ObjectSpawnMessage_Serialize_m4233479789 (ObjectSpawnMessage_t320416085 * __this, NetworkWriter_t560143343 * ___writer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
