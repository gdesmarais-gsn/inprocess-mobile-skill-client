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

// UnityEngine.Networking.NetworkSystem.ObjectSpawnSceneMessage
struct ObjectSpawnSceneMessage_t3027639263;
// UnityEngine.Networking.NetworkReader
struct NetworkReader_t3187690923;
// UnityEngine.Networking.NetworkWriter
struct NetworkWriter_t560143343;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netw3187690923.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netwo560143343.h"

// System.Void UnityEngine.Networking.NetworkSystem.ObjectSpawnSceneMessage::.ctor()
extern "C"  void ObjectSpawnSceneMessage__ctor_m1988195775 (ObjectSpawnSceneMessage_t3027639263 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkSystem.ObjectSpawnSceneMessage::Deserialize(UnityEngine.Networking.NetworkReader)
extern "C"  void ObjectSpawnSceneMessage_Deserialize_m2870108378 (ObjectSpawnSceneMessage_t3027639263 * __this, NetworkReader_t3187690923 * ___reader0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkSystem.ObjectSpawnSceneMessage::Serialize(UnityEngine.Networking.NetworkWriter)
extern "C"  void ObjectSpawnSceneMessage_Serialize_m2486713931 (ObjectSpawnSceneMessage_t3027639263 * __this, NetworkWriter_t560143343 * ___writer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
