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

// UnityEngine.Networking.NetworkSystem.IntegerMessage
struct IntegerMessage_t2422550789;
// UnityEngine.Networking.NetworkReader
struct NetworkReader_t3187690923;
// UnityEngine.Networking.NetworkWriter
struct NetworkWriter_t560143343;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netw3187690923.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netwo560143343.h"

// System.Void UnityEngine.Networking.NetworkSystem.IntegerMessage::.ctor()
extern "C"  void IntegerMessage__ctor_m2644145353 (IntegerMessage_t2422550789 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkSystem.IntegerMessage::.ctor(System.Int32)
extern "C"  void IntegerMessage__ctor_m717346120 (IntegerMessage_t2422550789 * __this, int32_t ___v0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkSystem.IntegerMessage::Deserialize(UnityEngine.Networking.NetworkReader)
extern "C"  void IntegerMessage_Deserialize_m4009115980 (IntegerMessage_t2422550789 * __this, NetworkReader_t3187690923 * ___reader0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkSystem.IntegerMessage::Serialize(UnityEngine.Networking.NetworkWriter)
extern "C"  void IntegerMessage_Serialize_m2906164361 (IntegerMessage_t2422550789 * __this, NetworkWriter_t560143343 * ___writer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
