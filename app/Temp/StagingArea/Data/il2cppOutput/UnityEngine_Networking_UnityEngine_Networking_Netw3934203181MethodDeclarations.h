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

// UnityEngine.Networking.NetworkSystem.AnimationMessage
struct AnimationMessage_t3934203181;
// UnityEngine.Networking.NetworkReader
struct NetworkReader_t3187690923;
// UnityEngine.Networking.NetworkWriter
struct NetworkWriter_t560143343;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netw3187690923.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netwo560143343.h"

// System.Void UnityEngine.Networking.NetworkSystem.AnimationMessage::.ctor()
extern "C"  void AnimationMessage__ctor_m3560754469 (AnimationMessage_t3934203181 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkSystem.AnimationMessage::Deserialize(UnityEngine.Networking.NetworkReader)
extern "C"  void AnimationMessage_Deserialize_m2106919076 (AnimationMessage_t3934203181 * __this, NetworkReader_t3187690923 * ___reader0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkSystem.AnimationMessage::Serialize(UnityEngine.Networking.NetworkWriter)
extern "C"  void AnimationMessage_Serialize_m2553187061 (AnimationMessage_t3934203181 * __this, NetworkWriter_t560143343 * ___writer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
