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

// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,GSN.Skill.Phoenix.TournamentListEvent/TournamentData,System.Collections.Generic.KeyValuePair`2<System.Int32,GSN.Skill.Phoenix.TournamentListEvent/TournamentData>>
struct Transform_1_t4008375339;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_21674735408.h"
#include "AssemblyU2DCSharp_GSN_Skill_Phoenix_TournamentListE614597255.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,GSN.Skill.Phoenix.TournamentListEvent/TournamentData,System.Collections.Generic.KeyValuePair`2<System.Int32,GSN.Skill.Phoenix.TournamentListEvent/TournamentData>>::.ctor(System.Object,System.IntPtr)
extern "C"  void Transform_1__ctor_m232727094_gshared (Transform_1_t4008375339 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method);
#define Transform_1__ctor_m232727094(__this, ___object0, ___method1, method) ((  void (*) (Transform_1_t4008375339 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m232727094_gshared)(__this, ___object0, ___method1, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,GSN.Skill.Phoenix.TournamentListEvent/TournamentData,System.Collections.Generic.KeyValuePair`2<System.Int32,GSN.Skill.Phoenix.TournamentListEvent/TournamentData>>::Invoke(TKey,TValue)
extern "C"  KeyValuePair_2_t1674735408  Transform_1_Invoke_m1834665910_gshared (Transform_1_t4008375339 * __this, int32_t ___key0, TournamentData_t614597255  ___value1, const MethodInfo* method);
#define Transform_1_Invoke_m1834665910(__this, ___key0, ___value1, method) ((  KeyValuePair_2_t1674735408  (*) (Transform_1_t4008375339 *, int32_t, TournamentData_t614597255 , const MethodInfo*))Transform_1_Invoke_m1834665910_gshared)(__this, ___key0, ___value1, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,GSN.Skill.Phoenix.TournamentListEvent/TournamentData,System.Collections.Generic.KeyValuePair`2<System.Int32,GSN.Skill.Phoenix.TournamentListEvent/TournamentData>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Transform_1_BeginInvoke_m808791391_gshared (Transform_1_t4008375339 * __this, int32_t ___key0, TournamentData_t614597255  ___value1, AsyncCallback_t163412349 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method);
#define Transform_1_BeginInvoke_m808791391(__this, ___key0, ___value1, ___callback2, ___object3, method) ((  Il2CppObject * (*) (Transform_1_t4008375339 *, int32_t, TournamentData_t614597255 , AsyncCallback_t163412349 *, Il2CppObject *, const MethodInfo*))Transform_1_BeginInvoke_m808791391_gshared)(__this, ___key0, ___value1, ___callback2, ___object3, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,GSN.Skill.Phoenix.TournamentListEvent/TournamentData,System.Collections.Generic.KeyValuePair`2<System.Int32,GSN.Skill.Phoenix.TournamentListEvent/TournamentData>>::EndInvoke(System.IAsyncResult)
extern "C"  KeyValuePair_2_t1674735408  Transform_1_EndInvoke_m1485012876_gshared (Transform_1_t4008375339 * __this, Il2CppObject * ___result0, const MethodInfo* method);
#define Transform_1_EndInvoke_m1485012876(__this, ___result0, method) ((  KeyValuePair_2_t1674735408  (*) (Transform_1_t4008375339 *, Il2CppObject *, const MethodInfo*))Transform_1_EndInvoke_m1485012876_gshared)(__this, ___result0, method)
