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

// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,UnityEngine.Networking.NetworkMigrationManager/ConnectionPendingPlayers,System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.Networking.NetworkMigrationManager/ConnectionPendingPlayers>>
struct Transform_1_t3227596983;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_973022757.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netw4207851900.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,UnityEngine.Networking.NetworkMigrationManager/ConnectionPendingPlayers,System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.Networking.NetworkMigrationManager/ConnectionPendingPlayers>>::.ctor(System.Object,System.IntPtr)
extern "C"  void Transform_1__ctor_m1222293626_gshared (Transform_1_t3227596983 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method);
#define Transform_1__ctor_m1222293626(__this, ___object0, ___method1, method) ((  void (*) (Transform_1_t3227596983 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m1222293626_gshared)(__this, ___object0, ___method1, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,UnityEngine.Networking.NetworkMigrationManager/ConnectionPendingPlayers,System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.Networking.NetworkMigrationManager/ConnectionPendingPlayers>>::Invoke(TKey,TValue)
extern "C"  KeyValuePair_2_t973022757  Transform_1_Invoke_m1323989530_gshared (Transform_1_t3227596983 * __this, int32_t ___key0, ConnectionPendingPlayers_t4207851900  ___value1, const MethodInfo* method);
#define Transform_1_Invoke_m1323989530(__this, ___key0, ___value1, method) ((  KeyValuePair_2_t973022757  (*) (Transform_1_t3227596983 *, int32_t, ConnectionPendingPlayers_t4207851900 , const MethodInfo*))Transform_1_Invoke_m1323989530_gshared)(__this, ___key0, ___value1, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,UnityEngine.Networking.NetworkMigrationManager/ConnectionPendingPlayers,System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.Networking.NetworkMigrationManager/ConnectionPendingPlayers>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Transform_1_BeginInvoke_m117071951_gshared (Transform_1_t3227596983 * __this, int32_t ___key0, ConnectionPendingPlayers_t4207851900  ___value1, AsyncCallback_t163412349 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method);
#define Transform_1_BeginInvoke_m117071951(__this, ___key0, ___value1, ___callback2, ___object3, method) ((  Il2CppObject * (*) (Transform_1_t3227596983 *, int32_t, ConnectionPendingPlayers_t4207851900 , AsyncCallback_t163412349 *, Il2CppObject *, const MethodInfo*))Transform_1_BeginInvoke_m117071951_gshared)(__this, ___key0, ___value1, ___callback2, ___object3, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,UnityEngine.Networking.NetworkMigrationManager/ConnectionPendingPlayers,System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.Networking.NetworkMigrationManager/ConnectionPendingPlayers>>::EndInvoke(System.IAsyncResult)
extern "C"  KeyValuePair_2_t973022757  Transform_1_EndInvoke_m1708870724_gshared (Transform_1_t3227596983 * __this, Il2CppObject * ___result0, const MethodInfo* method);
#define Transform_1_EndInvoke_m1708870724(__this, ___result0, method) ((  KeyValuePair_2_t973022757  (*) (Transform_1_t3227596983 *, Il2CppObject *, const MethodInfo*))Transform_1_EndInvoke_m1708870724_gshared)(__this, ___result0, method)
