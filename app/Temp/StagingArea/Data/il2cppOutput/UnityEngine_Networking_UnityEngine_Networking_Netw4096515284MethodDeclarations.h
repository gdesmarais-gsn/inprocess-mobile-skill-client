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

// UnityEngine.Networking.NetworkBehaviour/EventDelegate
struct EventDelegate_t4096515284;
// System.Object
struct Il2CppObject;
// System.Collections.Generic.List`1<System.Delegate>
struct List_1_t2391597423;
// UnityEngine.Networking.NetworkReader
struct NetworkReader_t3187690923;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netw3187690923.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void UnityEngine.Networking.NetworkBehaviour/EventDelegate::.ctor(System.Object,System.IntPtr)
extern "C"  void EventDelegate__ctor_m1669092228 (EventDelegate_t4096515284 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkBehaviour/EventDelegate::Invoke(System.Collections.Generic.List`1<System.Delegate>,UnityEngine.Networking.NetworkReader)
extern "C"  void EventDelegate_Invoke_m102524892 (EventDelegate_t4096515284 * __this, List_1_t2391597423 * ___targets0, NetworkReader_t3187690923 * ___reader1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult UnityEngine.Networking.NetworkBehaviour/EventDelegate::BeginInvoke(System.Collections.Generic.List`1<System.Delegate>,UnityEngine.Networking.NetworkReader,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * EventDelegate_BeginInvoke_m1781864163 (EventDelegate_t4096515284 * __this, List_1_t2391597423 * ___targets0, NetworkReader_t3187690923 * ___reader1, AsyncCallback_t163412349 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkBehaviour/EventDelegate::EndInvoke(System.IAsyncResult)
extern "C"  void EventDelegate_EndInvoke_m3884873726 (EventDelegate_t4096515284 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
