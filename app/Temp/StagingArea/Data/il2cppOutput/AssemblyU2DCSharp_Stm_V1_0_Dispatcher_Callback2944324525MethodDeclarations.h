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

// Stm.V1_0.Dispatcher/Callback
struct Callback_t2944324525;
// System.Object
struct Il2CppObject;
// Stm.V1_0.Dispatcher
struct Dispatcher_t2840725577;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "AssemblyU2DCSharp_Stm_V1_0_Dispatcher2840725577.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void Stm.V1_0.Dispatcher/Callback::.ctor(System.Object,System.IntPtr)
extern "C"  void Callback__ctor_m2258464560 (Callback_t2944324525 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Stm.V1_0.Dispatcher/Callback::Invoke(Stm.V1_0.Dispatcher)
extern "C"  void Callback_Invoke_m1857891989 (Callback_t2944324525 * __this, Dispatcher_t2840725577 * ___sender0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult Stm.V1_0.Dispatcher/Callback::BeginInvoke(Stm.V1_0.Dispatcher,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Callback_BeginInvoke_m2202971872 (Callback_t2944324525 * __this, Dispatcher_t2840725577 * ___sender0, AsyncCallback_t163412349 * ___callback1, Il2CppObject * ___object2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Stm.V1_0.Dispatcher/Callback::EndInvoke(System.IAsyncResult)
extern "C"  void Callback_EndInvoke_m1661508514 (Callback_t2944324525 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
