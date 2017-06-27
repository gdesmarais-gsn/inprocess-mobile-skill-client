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

// UnityEngine.Networking.NetworkSystem.StringMessage
struct StringMessage_t3906797298;
// System.String
struct String_t;
// UnityEngine.Networking.NetworkReader
struct NetworkReader_t3187690923;
// UnityEngine.Networking.NetworkWriter
struct NetworkWriter_t560143343;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netw3187690923.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netwo560143343.h"

// System.Void UnityEngine.Networking.NetworkSystem.StringMessage::.ctor()
extern "C"  void StringMessage__ctor_m616117392 (StringMessage_t3906797298 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkSystem.StringMessage::.ctor(System.String)
extern "C"  void StringMessage__ctor_m105420602 (StringMessage_t3906797298 * __this, String_t* ___v0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkSystem.StringMessage::Deserialize(UnityEngine.Networking.NetworkReader)
extern "C"  void StringMessage_Deserialize_m3236902697 (StringMessage_t3906797298 * __this, NetworkReader_t3187690923 * ___reader0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkSystem.StringMessage::Serialize(UnityEngine.Networking.NetworkWriter)
extern "C"  void StringMessage_Serialize_m1309154196 (StringMessage_t3906797298 * __this, NetworkWriter_t560143343 * ___writer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
