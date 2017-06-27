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

// UnityEngine.Networking.Match.NetworkMatch/InternalResponseDelegate`2<System.Object,System.Object>
struct InternalResponseDelegate_2_t3073640404;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void UnityEngine.Networking.Match.NetworkMatch/InternalResponseDelegate`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C"  void InternalResponseDelegate_2__ctor_m3764815497_gshared (InternalResponseDelegate_2_t3073640404 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method);
#define InternalResponseDelegate_2__ctor_m3764815497(__this, ___object0, ___method1, method) ((  void (*) (InternalResponseDelegate_2_t3073640404 *, Il2CppObject *, IntPtr_t, const MethodInfo*))InternalResponseDelegate_2__ctor_m3764815497_gshared)(__this, ___object0, ___method1, method)
// System.Void UnityEngine.Networking.Match.NetworkMatch/InternalResponseDelegate`2<System.Object,System.Object>::Invoke(T,U)
extern "C"  void InternalResponseDelegate_2_Invoke_m3415191514_gshared (InternalResponseDelegate_2_t3073640404 * __this, Il2CppObject * ___response0, Il2CppObject * ___userCallback1, const MethodInfo* method);
#define InternalResponseDelegate_2_Invoke_m3415191514(__this, ___response0, ___userCallback1, method) ((  void (*) (InternalResponseDelegate_2_t3073640404 *, Il2CppObject *, Il2CppObject *, const MethodInfo*))InternalResponseDelegate_2_Invoke_m3415191514_gshared)(__this, ___response0, ___userCallback1, method)
// System.IAsyncResult UnityEngine.Networking.Match.NetworkMatch/InternalResponseDelegate`2<System.Object,System.Object>::BeginInvoke(T,U,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * InternalResponseDelegate_2_BeginInvoke_m2722812275_gshared (InternalResponseDelegate_2_t3073640404 * __this, Il2CppObject * ___response0, Il2CppObject * ___userCallback1, AsyncCallback_t163412349 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method);
#define InternalResponseDelegate_2_BeginInvoke_m2722812275(__this, ___response0, ___userCallback1, ___callback2, ___object3, method) ((  Il2CppObject * (*) (InternalResponseDelegate_2_t3073640404 *, Il2CppObject *, Il2CppObject *, AsyncCallback_t163412349 *, Il2CppObject *, const MethodInfo*))InternalResponseDelegate_2_BeginInvoke_m2722812275_gshared)(__this, ___response0, ___userCallback1, ___callback2, ___object3, method)
// System.Void UnityEngine.Networking.Match.NetworkMatch/InternalResponseDelegate`2<System.Object,System.Object>::EndInvoke(System.IAsyncResult)
extern "C"  void InternalResponseDelegate_2_EndInvoke_m769238843_gshared (InternalResponseDelegate_2_t3073640404 * __this, Il2CppObject * ___result0, const MethodInfo* method);
#define InternalResponseDelegate_2_EndInvoke_m769238843(__this, ___result0, method) ((  void (*) (InternalResponseDelegate_2_t3073640404 *, Il2CppObject *, const MethodInfo*))InternalResponseDelegate_2_EndInvoke_m769238843_gshared)(__this, ___result0, method)
