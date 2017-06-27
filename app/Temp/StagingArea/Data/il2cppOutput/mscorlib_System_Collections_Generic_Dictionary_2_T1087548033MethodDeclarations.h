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

// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,GSN.Skill.Phoenix.TournamentListEvent/TournamentData,System.Collections.DictionaryEntry>
struct Transform_1_t1087548033;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "mscorlib_System_Collections_DictionaryEntry3048875398.h"
#include "AssemblyU2DCSharp_GSN_Skill_Phoenix_TournamentListE614597255.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,GSN.Skill.Phoenix.TournamentListEvent/TournamentData,System.Collections.DictionaryEntry>::.ctor(System.Object,System.IntPtr)
extern "C"  void Transform_1__ctor_m2100712925_gshared (Transform_1_t1087548033 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method);
#define Transform_1__ctor_m2100712925(__this, ___object0, ___method1, method) ((  void (*) (Transform_1_t1087548033 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m2100712925_gshared)(__this, ___object0, ___method1, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,GSN.Skill.Phoenix.TournamentListEvent/TournamentData,System.Collections.DictionaryEntry>::Invoke(TKey,TValue)
extern "C"  DictionaryEntry_t3048875398  Transform_1_Invoke_m2921586345_gshared (Transform_1_t1087548033 * __this, int32_t ___key0, TournamentData_t614597255  ___value1, const MethodInfo* method);
#define Transform_1_Invoke_m2921586345(__this, ___key0, ___value1, method) ((  DictionaryEntry_t3048875398  (*) (Transform_1_t1087548033 *, int32_t, TournamentData_t614597255 , const MethodInfo*))Transform_1_Invoke_m2921586345_gshared)(__this, ___key0, ___value1, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,GSN.Skill.Phoenix.TournamentListEvent/TournamentData,System.Collections.DictionaryEntry>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Transform_1_BeginInvoke_m252238576_gshared (Transform_1_t1087548033 * __this, int32_t ___key0, TournamentData_t614597255  ___value1, AsyncCallback_t163412349 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method);
#define Transform_1_BeginInvoke_m252238576(__this, ___key0, ___value1, ___callback2, ___object3, method) ((  Il2CppObject * (*) (Transform_1_t1087548033 *, int32_t, TournamentData_t614597255 , AsyncCallback_t163412349 *, Il2CppObject *, const MethodInfo*))Transform_1_BeginInvoke_m252238576_gshared)(__this, ___key0, ___value1, ___callback2, ___object3, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,GSN.Skill.Phoenix.TournamentListEvent/TournamentData,System.Collections.DictionaryEntry>::EndInvoke(System.IAsyncResult)
extern "C"  DictionaryEntry_t3048875398  Transform_1_EndInvoke_m754360671_gshared (Transform_1_t1087548033 * __this, Il2CppObject * ___result0, const MethodInfo* method);
#define Transform_1_EndInvoke_m754360671(__this, ___result0, method) ((  DictionaryEntry_t3048875398  (*) (Transform_1_t1087548033 *, Il2CppObject *, const MethodInfo*))Transform_1_EndInvoke_m754360671_gshared)(__this, ___result0, method)
