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

// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,UnityEngine.Networking.NetworkBroadcastResult,System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.Networking.NetworkBroadcastResult>>
struct Transform_1_t4292763995;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_22290690628.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netwo646317982.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,UnityEngine.Networking.NetworkBroadcastResult,System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.Networking.NetworkBroadcastResult>>::.ctor(System.Object,System.IntPtr)
extern "C"  void Transform_1__ctor_m853631094_gshared (Transform_1_t4292763995 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method);
#define Transform_1__ctor_m853631094(__this, ___object0, ___method1, method) ((  void (*) (Transform_1_t4292763995 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m853631094_gshared)(__this, ___object0, ___method1, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,UnityEngine.Networking.NetworkBroadcastResult,System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.Networking.NetworkBroadcastResult>>::Invoke(TKey,TValue)
extern "C"  KeyValuePair_2_t2290690628  Transform_1_Invoke_m1858128566_gshared (Transform_1_t4292763995 * __this, Il2CppObject * ___key0, NetworkBroadcastResult_t646317982  ___value1, const MethodInfo* method);
#define Transform_1_Invoke_m1858128566(__this, ___key0, ___value1, method) ((  KeyValuePair_2_t2290690628  (*) (Transform_1_t4292763995 *, Il2CppObject *, NetworkBroadcastResult_t646317982 , const MethodInfo*))Transform_1_Invoke_m1858128566_gshared)(__this, ___key0, ___value1, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,UnityEngine.Networking.NetworkBroadcastResult,System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.Networking.NetworkBroadcastResult>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Transform_1_BeginInvoke_m384309599_gshared (Transform_1_t4292763995 * __this, Il2CppObject * ___key0, NetworkBroadcastResult_t646317982  ___value1, AsyncCallback_t163412349 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method);
#define Transform_1_BeginInvoke_m384309599(__this, ___key0, ___value1, ___callback2, ___object3, method) ((  Il2CppObject * (*) (Transform_1_t4292763995 *, Il2CppObject *, NetworkBroadcastResult_t646317982 , AsyncCallback_t163412349 *, Il2CppObject *, const MethodInfo*))Transform_1_BeginInvoke_m384309599_gshared)(__this, ___key0, ___value1, ___callback2, ___object3, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,UnityEngine.Networking.NetworkBroadcastResult,System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.Networking.NetworkBroadcastResult>>::EndInvoke(System.IAsyncResult)
extern "C"  KeyValuePair_2_t2290690628  Transform_1_EndInvoke_m2263950988_gshared (Transform_1_t4292763995 * __this, Il2CppObject * ___result0, const MethodInfo* method);
#define Transform_1_EndInvoke_m2263950988(__this, ___result0, method) ((  KeyValuePair_2_t2290690628  (*) (Transform_1_t4292763995 *, Il2CppObject *, const MethodInfo*))Transform_1_EndInvoke_m2263950988_gshared)(__this, ___result0, method)
