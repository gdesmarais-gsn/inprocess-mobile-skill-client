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

// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,GSN.Skill.Phoenix.TournamentListEvent/TournamentData,GSN.Skill.Phoenix.TournamentListEvent/TournamentData>
struct Transform_1_t2948237186;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "AssemblyU2DCSharp_GSN_Skill_Phoenix_TournamentListE614597255.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,GSN.Skill.Phoenix.TournamentListEvent/TournamentData,GSN.Skill.Phoenix.TournamentListEvent/TournamentData>::.ctor(System.Object,System.IntPtr)
extern "C"  void Transform_1__ctor_m2427274476_gshared (Transform_1_t2948237186 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method);
#define Transform_1__ctor_m2427274476(__this, ___object0, ___method1, method) ((  void (*) (Transform_1_t2948237186 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m2427274476_gshared)(__this, ___object0, ___method1, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,GSN.Skill.Phoenix.TournamentListEvent/TournamentData,GSN.Skill.Phoenix.TournamentListEvent/TournamentData>::Invoke(TKey,TValue)
extern "C"  TournamentData_t614597255  Transform_1_Invoke_m1817080612_gshared (Transform_1_t2948237186 * __this, int32_t ___key0, TournamentData_t614597255  ___value1, const MethodInfo* method);
#define Transform_1_Invoke_m1817080612(__this, ___key0, ___value1, method) ((  TournamentData_t614597255  (*) (Transform_1_t2948237186 *, int32_t, TournamentData_t614597255 , const MethodInfo*))Transform_1_Invoke_m1817080612_gshared)(__this, ___key0, ___value1, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,GSN.Skill.Phoenix.TournamentListEvent/TournamentData,GSN.Skill.Phoenix.TournamentListEvent/TournamentData>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Transform_1_BeginInvoke_m1851748119_gshared (Transform_1_t2948237186 * __this, int32_t ___key0, TournamentData_t614597255  ___value1, AsyncCallback_t163412349 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method);
#define Transform_1_BeginInvoke_m1851748119(__this, ___key0, ___value1, ___callback2, ___object3, method) ((  Il2CppObject * (*) (Transform_1_t2948237186 *, int32_t, TournamentData_t614597255 , AsyncCallback_t163412349 *, Il2CppObject *, const MethodInfo*))Transform_1_BeginInvoke_m1851748119_gshared)(__this, ___key0, ___value1, ___callback2, ___object3, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,GSN.Skill.Phoenix.TournamentListEvent/TournamentData,GSN.Skill.Phoenix.TournamentListEvent/TournamentData>::EndInvoke(System.IAsyncResult)
extern "C"  TournamentData_t614597255  Transform_1_EndInvoke_m458611138_gshared (Transform_1_t2948237186 * __this, Il2CppObject * ___result0, const MethodInfo* method);
#define Transform_1_EndInvoke_m458611138(__this, ___result0, method) ((  TournamentData_t614597255  (*) (Transform_1_t2948237186 *, Il2CppObject *, const MethodInfo*))Transform_1_EndInvoke_m458611138_gshared)(__this, ___result0, method)
