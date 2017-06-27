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

// UnityEngine.Networking.SyncList`1/SyncListChanged<System.UInt32>
struct SyncListChanged_t515952471;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Sync1883411365.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void UnityEngine.Networking.SyncList`1/SyncListChanged<System.UInt32>::.ctor(System.Object,System.IntPtr)
extern "C"  void SyncListChanged__ctor_m368823015_gshared (SyncListChanged_t515952471 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method);
#define SyncListChanged__ctor_m368823015(__this, ___object0, ___method1, method) ((  void (*) (SyncListChanged_t515952471 *, Il2CppObject *, IntPtr_t, const MethodInfo*))SyncListChanged__ctor_m368823015_gshared)(__this, ___object0, ___method1, method)
// System.Void UnityEngine.Networking.SyncList`1/SyncListChanged<System.UInt32>::Invoke(UnityEngine.Networking.SyncList`1/Operation<T>,System.Int32)
extern "C"  void SyncListChanged_Invoke_m1252266753_gshared (SyncListChanged_t515952471 * __this, int32_t ___op0, int32_t ___itemIndex1, const MethodInfo* method);
#define SyncListChanged_Invoke_m1252266753(__this, ___op0, ___itemIndex1, method) ((  void (*) (SyncListChanged_t515952471 *, int32_t, int32_t, const MethodInfo*))SyncListChanged_Invoke_m1252266753_gshared)(__this, ___op0, ___itemIndex1, method)
// System.IAsyncResult UnityEngine.Networking.SyncList`1/SyncListChanged<System.UInt32>::BeginInvoke(UnityEngine.Networking.SyncList`1/Operation<T>,System.Int32,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * SyncListChanged_BeginInvoke_m488249864_gshared (SyncListChanged_t515952471 * __this, int32_t ___op0, int32_t ___itemIndex1, AsyncCallback_t163412349 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method);
#define SyncListChanged_BeginInvoke_m488249864(__this, ___op0, ___itemIndex1, ___callback2, ___object3, method) ((  Il2CppObject * (*) (SyncListChanged_t515952471 *, int32_t, int32_t, AsyncCallback_t163412349 *, Il2CppObject *, const MethodInfo*))SyncListChanged_BeginInvoke_m488249864_gshared)(__this, ___op0, ___itemIndex1, ___callback2, ___object3, method)
// System.Void UnityEngine.Networking.SyncList`1/SyncListChanged<System.UInt32>::EndInvoke(System.IAsyncResult)
extern "C"  void SyncListChanged_EndInvoke_m566727093_gshared (SyncListChanged_t515952471 * __this, Il2CppObject * ___result0, const MethodInfo* method);
#define SyncListChanged_EndInvoke_m566727093(__this, ___result0, method) ((  void (*) (SyncListChanged_t515952471 *, Il2CppObject *, const MethodInfo*))SyncListChanged_EndInvoke_m566727093_gshared)(__this, ___result0, method)
