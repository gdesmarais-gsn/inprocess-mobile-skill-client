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

// UnityEngine.Networking.NetworkMessageDelegate
struct NetworkMessageDelegate_t1861659952;
// System.Object
struct Il2CppObject;
// UnityEngine.Networking.NetworkMessage
struct NetworkMessage_t2339216573;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netw2339216573.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void UnityEngine.Networking.NetworkMessageDelegate::.ctor(System.Object,System.IntPtr)
extern "C"  void NetworkMessageDelegate__ctor_m1077308327 (NetworkMessageDelegate_t1861659952 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkMessageDelegate::Invoke(UnityEngine.Networking.NetworkMessage)
extern "C"  void NetworkMessageDelegate_Invoke_m4067771529 (NetworkMessageDelegate_t1861659952 * __this, NetworkMessage_t2339216573 * ___netMsg0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult UnityEngine.Networking.NetworkMessageDelegate::BeginInvoke(UnityEngine.Networking.NetworkMessage,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * NetworkMessageDelegate_BeginInvoke_m2010158584 (NetworkMessageDelegate_t1861659952 * __this, NetworkMessage_t2339216573 * ___netMsg0, AsyncCallback_t163412349 * ___callback1, Il2CppObject * ___object2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkMessageDelegate::EndInvoke(System.IAsyncResult)
extern "C"  void NetworkMessageDelegate_EndInvoke_m2927366125 (NetworkMessageDelegate_t1861659952 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
