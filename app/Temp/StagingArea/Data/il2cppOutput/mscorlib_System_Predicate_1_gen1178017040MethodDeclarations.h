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

// System.Predicate`1<GSN.Skill.Phoenix.RewardEvent/Reward>
struct Predicate_1_t1178017040;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "AssemblyU2DCSharp_GSN_Skill_Phoenix_RewardEvent_Re2735046925.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void System.Predicate`1<GSN.Skill.Phoenix.RewardEvent/Reward>::.ctor(System.Object,System.IntPtr)
extern "C"  void Predicate_1__ctor_m2881453428_gshared (Predicate_1_t1178017040 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method);
#define Predicate_1__ctor_m2881453428(__this, ___object0, ___method1, method) ((  void (*) (Predicate_1_t1178017040 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m2881453428_gshared)(__this, ___object0, ___method1, method)
// System.Boolean System.Predicate`1<GSN.Skill.Phoenix.RewardEvent/Reward>::Invoke(T)
extern "C"  bool Predicate_1_Invoke_m3195309096_gshared (Predicate_1_t1178017040 * __this, Reward_t2735046925  ___obj0, const MethodInfo* method);
#define Predicate_1_Invoke_m3195309096(__this, ___obj0, method) ((  bool (*) (Predicate_1_t1178017040 *, Reward_t2735046925 , const MethodInfo*))Predicate_1_Invoke_m3195309096_gshared)(__this, ___obj0, method)
// System.IAsyncResult System.Predicate`1<GSN.Skill.Phoenix.RewardEvent/Reward>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Predicate_1_BeginInvoke_m1368505865_gshared (Predicate_1_t1178017040 * __this, Reward_t2735046925  ___obj0, AsyncCallback_t163412349 * ___callback1, Il2CppObject * ___object2, const MethodInfo* method);
#define Predicate_1_BeginInvoke_m1368505865(__this, ___obj0, ___callback1, ___object2, method) ((  Il2CppObject * (*) (Predicate_1_t1178017040 *, Reward_t2735046925 , AsyncCallback_t163412349 *, Il2CppObject *, const MethodInfo*))Predicate_1_BeginInvoke_m1368505865_gshared)(__this, ___obj0, ___callback1, ___object2, method)
// System.Boolean System.Predicate`1<GSN.Skill.Phoenix.RewardEvent/Reward>::EndInvoke(System.IAsyncResult)
extern "C"  bool Predicate_1_EndInvoke_m2517372870_gshared (Predicate_1_t1178017040 * __this, Il2CppObject * ___result0, const MethodInfo* method);
#define Predicate_1_EndInvoke_m2517372870(__this, ___result0, method) ((  bool (*) (Predicate_1_t1178017040 *, Il2CppObject *, const MethodInfo*))Predicate_1_EndInvoke_m2517372870_gshared)(__this, ___result0, method)
