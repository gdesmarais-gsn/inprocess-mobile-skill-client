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

// UnityEngine.Networking.SpawnDelegate
struct SpawnDelegate_t3327865986;
// System.Object
struct Il2CppObject;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netwo835211239.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void UnityEngine.Networking.SpawnDelegate::.ctor(System.Object,System.IntPtr)
extern "C"  void SpawnDelegate__ctor_m3364472041 (SpawnDelegate_t3327865986 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.Networking.SpawnDelegate::Invoke(UnityEngine.Vector3,UnityEngine.Networking.NetworkHash128)
extern "C"  GameObject_t1756533147 * SpawnDelegate_Invoke_m2982755079 (SpawnDelegate_t3327865986 * __this, Vector3_t2243707580  ___position0, NetworkHash128_t835211239  ___assetId1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult UnityEngine.Networking.SpawnDelegate::BeginInvoke(UnityEngine.Vector3,UnityEngine.Networking.NetworkHash128,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * SpawnDelegate_BeginInvoke_m3961668931 (SpawnDelegate_t3327865986 * __this, Vector3_t2243707580  ___position0, NetworkHash128_t835211239  ___assetId1, AsyncCallback_t163412349 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.Networking.SpawnDelegate::EndInvoke(System.IAsyncResult)
extern "C"  GameObject_t1756533147 * SpawnDelegate_EndInvoke_m121287180 (SpawnDelegate_t3327865986 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
