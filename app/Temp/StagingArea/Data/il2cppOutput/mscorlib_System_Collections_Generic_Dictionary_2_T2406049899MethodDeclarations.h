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

// System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Networking.NetworkInstanceId,System.Object,UnityEngine.Networking.NetworkInstanceId>
struct Transform_1_t2406049899;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Networ33998832.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Networking.NetworkInstanceId,System.Object,UnityEngine.Networking.NetworkInstanceId>::.ctor(System.Object,System.IntPtr)
extern "C"  void Transform_1__ctor_m1616193267_gshared (Transform_1_t2406049899 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method);
#define Transform_1__ctor_m1616193267(__this, ___object0, ___method1, method) ((  void (*) (Transform_1_t2406049899 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m1616193267_gshared)(__this, ___object0, ___method1, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Networking.NetworkInstanceId,System.Object,UnityEngine.Networking.NetworkInstanceId>::Invoke(TKey,TValue)
extern "C"  NetworkInstanceId_t33998832  Transform_1_Invoke_m1107617479_gshared (Transform_1_t2406049899 * __this, NetworkInstanceId_t33998832  ___key0, Il2CppObject * ___value1, const MethodInfo* method);
#define Transform_1_Invoke_m1107617479(__this, ___key0, ___value1, method) ((  NetworkInstanceId_t33998832  (*) (Transform_1_t2406049899 *, NetworkInstanceId_t33998832 , Il2CppObject *, const MethodInfo*))Transform_1_Invoke_m1107617479_gshared)(__this, ___key0, ___value1, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Networking.NetworkInstanceId,System.Object,UnityEngine.Networking.NetworkInstanceId>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Transform_1_BeginInvoke_m116375376_gshared (Transform_1_t2406049899 * __this, NetworkInstanceId_t33998832  ___key0, Il2CppObject * ___value1, AsyncCallback_t163412349 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method);
#define Transform_1_BeginInvoke_m116375376(__this, ___key0, ___value1, ___callback2, ___object3, method) ((  Il2CppObject * (*) (Transform_1_t2406049899 *, NetworkInstanceId_t33998832 , Il2CppObject *, AsyncCallback_t163412349 *, Il2CppObject *, const MethodInfo*))Transform_1_BeginInvoke_m116375376_gshared)(__this, ___key0, ___value1, ___callback2, ___object3, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Networking.NetworkInstanceId,System.Object,UnityEngine.Networking.NetworkInstanceId>::EndInvoke(System.IAsyncResult)
extern "C"  NetworkInstanceId_t33998832  Transform_1_EndInvoke_m3045943401_gshared (Transform_1_t2406049899 * __this, Il2CppObject * ___result0, const MethodInfo* method);
#define Transform_1_EndInvoke_m3045943401(__this, ___result0, method) ((  NetworkInstanceId_t33998832  (*) (Transform_1_t2406049899 *, Il2CppObject *, const MethodInfo*))Transform_1_EndInvoke_m3045943401_gshared)(__this, ___result0, method)
