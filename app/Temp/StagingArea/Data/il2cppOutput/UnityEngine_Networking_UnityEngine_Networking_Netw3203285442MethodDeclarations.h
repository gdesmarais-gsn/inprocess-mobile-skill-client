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

// UnityEngine.Networking.NetworkSystem.EmptyMessage
struct EmptyMessage_t3203285442;
// UnityEngine.Networking.NetworkReader
struct NetworkReader_t3187690923;
// UnityEngine.Networking.NetworkWriter
struct NetworkWriter_t560143343;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netw3187690923.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netwo560143343.h"

// System.Void UnityEngine.Networking.NetworkSystem.EmptyMessage::.ctor()
extern "C"  void EmptyMessage__ctor_m473100066 (EmptyMessage_t3203285442 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkSystem.EmptyMessage::Deserialize(UnityEngine.Networking.NetworkReader)
extern "C"  void EmptyMessage_Deserialize_m2123934013 (EmptyMessage_t3203285442 * __this, NetworkReader_t3187690923 * ___reader0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkSystem.EmptyMessage::Serialize(UnityEngine.Networking.NetworkWriter)
extern "C"  void EmptyMessage_Serialize_m1536709678 (EmptyMessage_t3203285442 * __this, NetworkWriter_t560143343 * ___writer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
