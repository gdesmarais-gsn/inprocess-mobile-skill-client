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

// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,UnityEngine.Networking.NetworkMigrationManager/ConnectionPendingPlayers,UnityEngine.Networking.NetworkMigrationManager/ConnectionPendingPlayers>
struct Transform_1_t2167458830;
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

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,UnityEngine.Networking.NetworkMigrationManager/ConnectionPendingPlayers,UnityEngine.Networking.NetworkMigrationManager/ConnectionPendingPlayers>::.ctor(System.Object,System.IntPtr)
extern "C"  void Transform_1__ctor_m3040252090_gshared (Transform_1_t2167458830 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method);
#define Transform_1__ctor_m3040252090(__this, ___object0, ___method1, method) ((  void (*) (Transform_1_t2167458830 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m3040252090_gshared)(__this, ___object0, ___method1, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,UnityEngine.Networking.NetworkMigrationManager/ConnectionPendingPlayers,UnityEngine.Networking.NetworkMigrationManager/ConnectionPendingPlayers>::Invoke(TKey,TValue)
extern "C"  ConnectionPendingPlayers_t4207851900  Transform_1_Invoke_m2198417442_gshared (Transform_1_t2167458830 * __this, int32_t ___key0, ConnectionPendingPlayers_t4207851900  ___value1, const MethodInfo* method);
#define Transform_1_Invoke_m2198417442(__this, ___key0, ___value1, method) ((  ConnectionPendingPlayers_t4207851900  (*) (Transform_1_t2167458830 *, int32_t, ConnectionPendingPlayers_t4207851900 , const MethodInfo*))Transform_1_Invoke_m2198417442_gshared)(__this, ___key0, ___value1, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,UnityEngine.Networking.NetworkMigrationManager/ConnectionPendingPlayers,UnityEngine.Networking.NetworkMigrationManager/ConnectionPendingPlayers>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Transform_1_BeginInvoke_m2889419499_gshared (Transform_1_t2167458830 * __this, int32_t ___key0, ConnectionPendingPlayers_t4207851900  ___value1, AsyncCallback_t163412349 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method);
#define Transform_1_BeginInvoke_m2889419499(__this, ___key0, ___value1, ___callback2, ___object3, method) ((  Il2CppObject * (*) (Transform_1_t2167458830 *, int32_t, ConnectionPendingPlayers_t4207851900 , AsyncCallback_t163412349 *, Il2CppObject *, const MethodInfo*))Transform_1_BeginInvoke_m2889419499_gshared)(__this, ___key0, ___value1, ___callback2, ___object3, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,UnityEngine.Networking.NetworkMigrationManager/ConnectionPendingPlayers,UnityEngine.Networking.NetworkMigrationManager/ConnectionPendingPlayers>::EndInvoke(System.IAsyncResult)
extern "C"  ConnectionPendingPlayers_t4207851900  Transform_1_EndInvoke_m4112728208_gshared (Transform_1_t2167458830 * __this, Il2CppObject * ___result0, const MethodInfo* method);
#define Transform_1_EndInvoke_m4112728208(__this, ___result0, method) ((  ConnectionPendingPlayers_t4207851900  (*) (Transform_1_t2167458830 *, Il2CppObject *, const MethodInfo*))Transform_1_EndInvoke_m4112728208_gshared)(__this, ___result0, method)
