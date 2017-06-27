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

// UnityEngine.Networking.NetworkIdentity/ClientAuthorityCallback
struct ClientAuthorityCallback_t482382839;
// System.Object
struct Il2CppObject;
// UnityEngine.Networking.NetworkConnection
struct NetworkConnection_t107267906;
// UnityEngine.Networking.NetworkIdentity
struct NetworkIdentity_t1766639790;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netwo107267906.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netw1766639790.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void UnityEngine.Networking.NetworkIdentity/ClientAuthorityCallback::.ctor(System.Object,System.IntPtr)
extern "C"  void ClientAuthorityCallback__ctor_m1870435571 (ClientAuthorityCallback_t482382839 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkIdentity/ClientAuthorityCallback::Invoke(UnityEngine.Networking.NetworkConnection,UnityEngine.Networking.NetworkIdentity,System.Boolean)
extern "C"  void ClientAuthorityCallback_Invoke_m1453688498 (ClientAuthorityCallback_t482382839 * __this, NetworkConnection_t107267906 * ___conn0, NetworkIdentity_t1766639790 * ___uv1, bool ___authorityState2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult UnityEngine.Networking.NetworkIdentity/ClientAuthorityCallback::BeginInvoke(UnityEngine.Networking.NetworkConnection,UnityEngine.Networking.NetworkIdentity,System.Boolean,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * ClientAuthorityCallback_BeginInvoke_m2208269695 (ClientAuthorityCallback_t482382839 * __this, NetworkConnection_t107267906 * ___conn0, NetworkIdentity_t1766639790 * ___uv1, bool ___authorityState2, AsyncCallback_t163412349 * ___callback3, Il2CppObject * ___object4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkIdentity/ClientAuthorityCallback::EndInvoke(System.IAsyncResult)
extern "C"  void ClientAuthorityCallback_EndInvoke_m3070166333 (ClientAuthorityCallback_t482382839 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
