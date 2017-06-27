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

// UnityEngine.Networking.NetworkSystem.ErrorMessage
struct ErrorMessage_t775412683;
// UnityEngine.Networking.NetworkReader
struct NetworkReader_t3187690923;
// UnityEngine.Networking.NetworkWriter
struct NetworkWriter_t560143343;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netw3187690923.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netwo560143343.h"

// System.Void UnityEngine.Networking.NetworkSystem.ErrorMessage::.ctor()
extern "C"  void ErrorMessage__ctor_m3459279015 (ErrorMessage_t775412683 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkSystem.ErrorMessage::Deserialize(UnityEngine.Networking.NetworkReader)
extern "C"  void ErrorMessage_Deserialize_m2953476976 (ErrorMessage_t775412683 * __this, NetworkReader_t3187690923 * ___reader0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkSystem.ErrorMessage::Serialize(UnityEngine.Networking.NetworkWriter)
extern "C"  void ErrorMessage_Serialize_m3212576243 (ErrorMessage_t775412683 * __this, NetworkWriter_t560143343 * ___writer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
