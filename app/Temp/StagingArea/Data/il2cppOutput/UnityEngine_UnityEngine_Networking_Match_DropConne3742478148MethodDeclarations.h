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

// UnityEngine.Networking.Match.DropConnectionResponse
struct DropConnectionResponse_t3742478148;
// System.String
struct String_t;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Networking_Types_NetworkID348058649.h"
#include "UnityEngine_UnityEngine_Networking_Types_NodeID3569487935.h"
#include "mscorlib_System_Object2689449295.h"

// System.Void UnityEngine.Networking.Match.DropConnectionResponse::.ctor()
extern "C"  void DropConnectionResponse__ctor_m2199966784 (DropConnectionResponse_t3742478148 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.Types.NetworkID UnityEngine.Networking.Match.DropConnectionResponse::get_networkId()
extern "C"  uint64_t DropConnectionResponse_get_networkId_m855397000 (DropConnectionResponse_t3742478148 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.Match.DropConnectionResponse::set_networkId(UnityEngine.Networking.Types.NetworkID)
extern "C"  void DropConnectionResponse_set_networkId_m3142354327 (DropConnectionResponse_t3742478148 * __this, uint64_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.Types.NodeID UnityEngine.Networking.Match.DropConnectionResponse::get_nodeId()
extern "C"  uint16_t DropConnectionResponse_get_nodeId_m2603691968 (DropConnectionResponse_t3742478148 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.Match.DropConnectionResponse::set_nodeId(UnityEngine.Networking.Types.NodeID)
extern "C"  void DropConnectionResponse_set_nodeId_m3220035219 (DropConnectionResponse_t3742478148 * __this, uint16_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Networking.Match.DropConnectionResponse::ToString()
extern "C"  String_t* DropConnectionResponse_ToString_m2177926787 (DropConnectionResponse_t3742478148 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.Match.DropConnectionResponse::Parse(System.Object)
extern "C"  void DropConnectionResponse_Parse_m3893615511 (DropConnectionResponse_t3742478148 * __this, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
