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

// UnityEngine.Networking.MessageBase
struct MessageBase_t2552428296;
// UnityEngine.Networking.NetworkReader
struct NetworkReader_t3187690923;
// UnityEngine.Networking.NetworkWriter
struct NetworkWriter_t560143343;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netw3187690923.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netwo560143343.h"

// System.Void UnityEngine.Networking.MessageBase::.ctor()
extern "C"  void MessageBase__ctor_m3312033987 (MessageBase_t2552428296 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.MessageBase::Deserialize(UnityEngine.Networking.NetworkReader)
extern "C"  void MessageBase_Deserialize_m3113896700 (MessageBase_t2552428296 * __this, NetworkReader_t3187690923 * ___reader0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.MessageBase::Serialize(UnityEngine.Networking.NetworkWriter)
extern "C"  void MessageBase_Serialize_m2104711687 (MessageBase_t2552428296 * __this, NetworkWriter_t560143343 * ___writer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
