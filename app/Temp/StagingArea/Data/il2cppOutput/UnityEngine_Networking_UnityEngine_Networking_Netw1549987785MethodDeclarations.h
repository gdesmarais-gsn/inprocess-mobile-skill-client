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

// UnityEngine.Networking.NetworkSystem.CRCMessage
struct CRCMessage_t1549987785;
// UnityEngine.Networking.NetworkReader
struct NetworkReader_t3187690923;
// UnityEngine.Networking.NetworkWriter
struct NetworkWriter_t560143343;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netw3187690923.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netwo560143343.h"

// System.Void UnityEngine.Networking.NetworkSystem.CRCMessage::.ctor()
extern "C"  void CRCMessage__ctor_m1937446349 (CRCMessage_t1549987785 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkSystem.CRCMessage::Deserialize(UnityEngine.Networking.NetworkReader)
extern "C"  void CRCMessage_Deserialize_m3676171280 (CRCMessage_t1549987785 * __this, NetworkReader_t3187690923 * ___reader0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkSystem.CRCMessage::Serialize(UnityEngine.Networking.NetworkWriter)
extern "C"  void CRCMessage_Serialize_m3794975933 (CRCMessage_t1549987785 * __this, NetworkWriter_t560143343 * ___writer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
