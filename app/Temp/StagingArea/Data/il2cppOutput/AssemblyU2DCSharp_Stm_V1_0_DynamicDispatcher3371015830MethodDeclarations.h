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

// Stm.V1_0.DynamicDispatcher
struct DynamicDispatcher_t3371015830;
// System.String
struct String_t;
// Stm.V1_0.Dispatcher/Callback
struct Callback_t2944324525;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t1158329972;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "AssemblyU2DCSharp_Stm_V1_0_Dispatcher_Callback2944324525.h"
#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// System.Void Stm.V1_0.DynamicDispatcher::.ctor()
extern "C"  void DynamicDispatcher__ctor_m4279760619 (DynamicDispatcher_t3371015830 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Stm.V1_0.DynamicDispatcher::Subscribe(System.String,Stm.V1_0.Dispatcher/Callback,UnityEngine.MonoBehaviour)
extern "C"  void DynamicDispatcher_Subscribe_m3143455739 (DynamicDispatcher_t3371015830 * __this, String_t* ___key0, Callback_t2944324525 * ___val1, MonoBehaviour_t1158329972 * ___callee2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Stm.V1_0.DynamicDispatcher::Unsubscribe(System.String,Stm.V1_0.Dispatcher/Callback)
extern "C"  void DynamicDispatcher_Unsubscribe_m2087386933 (DynamicDispatcher_t3371015830 * __this, String_t* ___key0, Callback_t2944324525 * ___val1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Stm.V1_0.DynamicDispatcher::UnsubscribeAll(System.String)
extern "C"  void DynamicDispatcher_UnsubscribeAll_m3581575603 (DynamicDispatcher_t3371015830 * __this, String_t* ___key0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Stm.V1_0.DynamicDispatcher::Raise(System.String)
extern "C"  void DynamicDispatcher_Raise_m4188258253 (DynamicDispatcher_t3371015830 * __this, String_t* ___key0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Stm.V1_0.DynamicDispatcher::Awake()
extern "C"  void DynamicDispatcher_Awake_m2391553704 (DynamicDispatcher_t3371015830 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
