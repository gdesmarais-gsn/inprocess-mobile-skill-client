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

// UnityEngine.Networking.NetworkSystem.ObjectDestroyMessage
struct ObjectDestroyMessage_t3106274748;
// UnityEngine.Networking.NetworkReader
struct NetworkReader_t3187690923;
// UnityEngine.Networking.NetworkWriter
struct NetworkWriter_t560143343;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netw3187690923.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netwo560143343.h"

// System.Void UnityEngine.Networking.NetworkSystem.ObjectDestroyMessage::.ctor()
extern "C"  void ObjectDestroyMessage__ctor_m2508862184 (ObjectDestroyMessage_t3106274748 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkSystem.ObjectDestroyMessage::Deserialize(UnityEngine.Networking.NetworkReader)
extern "C"  void ObjectDestroyMessage_Deserialize_m4200717007 (ObjectDestroyMessage_t3106274748 * __this, NetworkReader_t3187690923 * ___reader0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkSystem.ObjectDestroyMessage::Serialize(UnityEngine.Networking.NetworkWriter)
extern "C"  void ObjectDestroyMessage_Serialize_m1070748288 (ObjectDestroyMessage_t3106274748 * __this, NetworkWriter_t560143343 * ___writer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
