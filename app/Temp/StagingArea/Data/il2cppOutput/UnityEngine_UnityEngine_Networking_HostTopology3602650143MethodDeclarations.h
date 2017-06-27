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

// UnityEngine.Networking.HostTopology
struct HostTopology_t3602650143;
// UnityEngine.Networking.ConnectionConfig
struct ConnectionConfig_t1350910390;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Networking_ConnectionConfi1350910390.h"

// System.Void UnityEngine.Networking.HostTopology::.ctor(UnityEngine.Networking.ConnectionConfig,System.Int32)
extern "C"  void HostTopology__ctor_m97899102 (HostTopology_t3602650143 * __this, ConnectionConfig_t1350910390 * ___defaultConfig0, int32_t ___maxDefaultConnections1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.HostTopology::.ctor()
extern "C"  void HostTopology__ctor_m3952046088 (HostTopology_t3602650143 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.ConnectionConfig UnityEngine.Networking.HostTopology::get_DefaultConfig()
extern "C"  ConnectionConfig_t1350910390 * HostTopology_get_DefaultConfig_m2060597096 (HostTopology_t3602650143 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
