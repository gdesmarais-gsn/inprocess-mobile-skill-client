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

// UnityEngine.Networking.NetworkSystem.ObjectSpawnFinishedMessage
struct ObjectSpawnFinishedMessage_t3823788215;
// UnityEngine.Networking.NetworkReader
struct NetworkReader_t3187690923;
// UnityEngine.Networking.NetworkWriter
struct NetworkWriter_t560143343;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netw3187690923.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netwo560143343.h"

// System.Void UnityEngine.Networking.NetworkSystem.ObjectSpawnFinishedMessage::.ctor()
extern "C"  void ObjectSpawnFinishedMessage__ctor_m651508519 (ObjectSpawnFinishedMessage_t3823788215 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkSystem.ObjectSpawnFinishedMessage::Deserialize(UnityEngine.Networking.NetworkReader)
extern "C"  void ObjectSpawnFinishedMessage_Deserialize_m438247990 (ObjectSpawnFinishedMessage_t3823788215 * __this, NetworkReader_t3187690923 * ___reader0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkSystem.ObjectSpawnFinishedMessage::Serialize(UnityEngine.Networking.NetworkWriter)
extern "C"  void ObjectSpawnFinishedMessage_Serialize_m153317347 (ObjectSpawnFinishedMessage_t3823788215 * __this, NetworkWriter_t560143343 * ___writer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
