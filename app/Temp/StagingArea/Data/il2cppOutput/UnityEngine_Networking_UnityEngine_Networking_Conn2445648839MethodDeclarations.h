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

// UnityEngine.Networking.ConnectionArray
struct ConnectionArray_t2445648839;
// System.Collections.Generic.List`1<UnityEngine.Networking.NetworkConnection>
struct List_1_t3771356334;
// UnityEngine.Networking.NetworkConnection
struct NetworkConnection_t107267906;
// UnityEngine.GameObject
struct GameObject_t1756533147;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netwo107267906.h"
#include "UnityEngine_UnityEngine_GameObject1756533147.h"

// System.Void UnityEngine.Networking.ConnectionArray::.ctor()
extern "C"  void ConnectionArray__ctor_m2295548428 (ConnectionArray_t2445648839 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<UnityEngine.Networking.NetworkConnection> UnityEngine.Networking.ConnectionArray::get_localConnections()
extern "C"  List_1_t3771356334 * ConnectionArray_get_localConnections_m3740687193 (ConnectionArray_t2445648839 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<UnityEngine.Networking.NetworkConnection> UnityEngine.Networking.ConnectionArray::get_connections()
extern "C"  List_1_t3771356334 * ConnectionArray_get_connections_m3558922278 (ConnectionArray_t2445648839 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Networking.ConnectionArray::get_Count()
extern "C"  int32_t ConnectionArray_get_Count_m2295920484 (ConnectionArray_t2445648839 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Networking.ConnectionArray::get_LocalIndex()
extern "C"  int32_t ConnectionArray_get_LocalIndex_m3857927638 (ConnectionArray_t2445648839 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Networking.ConnectionArray::Add(System.Int32,UnityEngine.Networking.NetworkConnection)
extern "C"  int32_t ConnectionArray_Add_m3576665855 (ConnectionArray_t2445648839 * __this, int32_t ___connId0, NetworkConnection_t107267906 * ___conn1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.NetworkConnection UnityEngine.Networking.ConnectionArray::Get(System.Int32)
extern "C"  NetworkConnection_t107267906 * ConnectionArray_Get_m1171722969 (ConnectionArray_t2445648839 * __this, int32_t ___connId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.NetworkConnection UnityEngine.Networking.ConnectionArray::GetUnsafe(System.Int32)
extern "C"  NetworkConnection_t107267906 * ConnectionArray_GetUnsafe_m3649349135 (ConnectionArray_t2445648839 * __this, int32_t ___connId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.ConnectionArray::Remove(System.Int32)
extern "C"  void ConnectionArray_Remove_m848164917 (ConnectionArray_t2445648839 * __this, int32_t ___connId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Networking.ConnectionArray::AddLocal(UnityEngine.Networking.NetworkConnection)
extern "C"  int32_t ConnectionArray_AddLocal_m2779237575 (ConnectionArray_t2445648839 * __this, NetworkConnection_t107267906 * ___conn0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.ConnectionArray::ContainsPlayer(UnityEngine.GameObject,UnityEngine.Networking.NetworkConnection&)
extern "C"  bool ConnectionArray_ContainsPlayer_m1872509035 (ConnectionArray_t2445648839 * __this, GameObject_t1756533147 * ___player0, NetworkConnection_t107267906 ** ___conn1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
