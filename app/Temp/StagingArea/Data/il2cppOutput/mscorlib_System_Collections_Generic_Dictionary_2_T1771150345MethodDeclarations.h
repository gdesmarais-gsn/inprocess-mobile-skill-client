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

// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,GSN.Skill.Phoenix.Strings.ErrorTranslation,System.Object>
struct Transform_1_t1771150345;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "AssemblyU2DCSharp_GSN_Skill_Phoenix_Strings_ErrorTr918723703.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,GSN.Skill.Phoenix.Strings.ErrorTranslation,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C"  void Transform_1__ctor_m286293632_gshared (Transform_1_t1771150345 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method);
#define Transform_1__ctor_m286293632(__this, ___object0, ___method1, method) ((  void (*) (Transform_1_t1771150345 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m286293632_gshared)(__this, ___object0, ___method1, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,GSN.Skill.Phoenix.Strings.ErrorTranslation,System.Object>::Invoke(TKey,TValue)
extern "C"  Il2CppObject * Transform_1_Invoke_m2780370608_gshared (Transform_1_t1771150345 * __this, Il2CppObject * ___key0, ErrorTranslation_t918723703  ___value1, const MethodInfo* method);
#define Transform_1_Invoke_m2780370608(__this, ___key0, ___value1, method) ((  Il2CppObject * (*) (Transform_1_t1771150345 *, Il2CppObject *, ErrorTranslation_t918723703 , const MethodInfo*))Transform_1_Invoke_m2780370608_gshared)(__this, ___key0, ___value1, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,GSN.Skill.Phoenix.Strings.ErrorTranslation,System.Object>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Transform_1_BeginInvoke_m4096041141_gshared (Transform_1_t1771150345 * __this, Il2CppObject * ___key0, ErrorTranslation_t918723703  ___value1, AsyncCallback_t163412349 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method);
#define Transform_1_BeginInvoke_m4096041141(__this, ___key0, ___value1, ___callback2, ___object3, method) ((  Il2CppObject * (*) (Transform_1_t1771150345 *, Il2CppObject *, ErrorTranslation_t918723703 , AsyncCallback_t163412349 *, Il2CppObject *, const MethodInfo*))Transform_1_BeginInvoke_m4096041141_gshared)(__this, ___key0, ___value1, ___callback2, ___object3, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,GSN.Skill.Phoenix.Strings.ErrorTranslation,System.Object>::EndInvoke(System.IAsyncResult)
extern "C"  Il2CppObject * Transform_1_EndInvoke_m2110796018_gshared (Transform_1_t1771150345 * __this, Il2CppObject * ___result0, const MethodInfo* method);
#define Transform_1_EndInvoke_m2110796018(__this, ___result0, method) ((  Il2CppObject * (*) (Transform_1_t1771150345 *, Il2CppObject *, const MethodInfo*))Transform_1_EndInvoke_m2110796018_gshared)(__this, ___result0, method)
