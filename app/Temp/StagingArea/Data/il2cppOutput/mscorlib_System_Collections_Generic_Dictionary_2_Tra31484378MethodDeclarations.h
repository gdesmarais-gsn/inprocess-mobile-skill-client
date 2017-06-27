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

// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,UnityEngine.Networking.NetworkMigrationManager/ConnectionPendingPlayers,System.Int32>
struct Transform_1_t31484378;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netw4207851900.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,UnityEngine.Networking.NetworkMigrationManager/ConnectionPendingPlayers,System.Int32>::.ctor(System.Object,System.IntPtr)
extern "C"  void Transform_1__ctor_m2106548477_gshared (Transform_1_t31484378 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method);
#define Transform_1__ctor_m2106548477(__this, ___object0, ___method1, method) ((  void (*) (Transform_1_t31484378 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m2106548477_gshared)(__this, ___object0, ___method1, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,UnityEngine.Networking.NetworkMigrationManager/ConnectionPendingPlayers,System.Int32>::Invoke(TKey,TValue)
extern "C"  int32_t Transform_1_Invoke_m833578017_gshared (Transform_1_t31484378 * __this, int32_t ___key0, ConnectionPendingPlayers_t4207851900  ___value1, const MethodInfo* method);
#define Transform_1_Invoke_m833578017(__this, ___key0, ___value1, method) ((  int32_t (*) (Transform_1_t31484378 *, int32_t, ConnectionPendingPlayers_t4207851900 , const MethodInfo*))Transform_1_Invoke_m833578017_gshared)(__this, ___key0, ___value1, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,UnityEngine.Networking.NetworkMigrationManager/ConnectionPendingPlayers,System.Int32>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Transform_1_BeginInvoke_m3318710078_gshared (Transform_1_t31484378 * __this, int32_t ___key0, ConnectionPendingPlayers_t4207851900  ___value1, AsyncCallback_t163412349 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method);
#define Transform_1_BeginInvoke_m3318710078(__this, ___key0, ___value1, ___callback2, ___object3, method) ((  Il2CppObject * (*) (Transform_1_t31484378 *, int32_t, ConnectionPendingPlayers_t4207851900 , AsyncCallback_t163412349 *, Il2CppObject *, const MethodInfo*))Transform_1_BeginInvoke_m3318710078_gshared)(__this, ___key0, ___value1, ___callback2, ___object3, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,UnityEngine.Networking.NetworkMigrationManager/ConnectionPendingPlayers,System.Int32>::EndInvoke(System.IAsyncResult)
extern "C"  int32_t Transform_1_EndInvoke_m3584232955_gshared (Transform_1_t31484378 * __this, Il2CppObject * ___result0, const MethodInfo* method);
#define Transform_1_EndInvoke_m3584232955(__this, ___result0, method) ((  int32_t (*) (Transform_1_t31484378 *, Il2CppObject *, const MethodInfo*))Transform_1_EndInvoke_m3584232955_gshared)(__this, ___result0, method)
