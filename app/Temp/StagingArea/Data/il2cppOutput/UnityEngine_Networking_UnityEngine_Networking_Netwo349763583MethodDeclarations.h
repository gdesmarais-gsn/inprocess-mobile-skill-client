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

// UnityEngine.Networking.NetworkSystem.AnimationParametersMessage
struct AnimationParametersMessage_t349763583;
// UnityEngine.Networking.NetworkReader
struct NetworkReader_t3187690923;
// UnityEngine.Networking.NetworkWriter
struct NetworkWriter_t560143343;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netw3187690923.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netwo560143343.h"

// System.Void UnityEngine.Networking.NetworkSystem.AnimationParametersMessage::.ctor()
extern "C"  void AnimationParametersMessage__ctor_m1726267611 (AnimationParametersMessage_t349763583 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkSystem.AnimationParametersMessage::Deserialize(UnityEngine.Networking.NetworkReader)
extern "C"  void AnimationParametersMessage_Deserialize_m2699097796 (AnimationParametersMessage_t349763583 * __this, NetworkReader_t3187690923 * ___reader0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkSystem.AnimationParametersMessage::Serialize(UnityEngine.Networking.NetworkWriter)
extern "C"  void AnimationParametersMessage_Serialize_m832256215 (AnimationParametersMessage_t349763583 * __this, NetworkWriter_t560143343 * ___writer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
