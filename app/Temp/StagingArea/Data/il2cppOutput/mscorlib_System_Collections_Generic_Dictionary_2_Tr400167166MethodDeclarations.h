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

// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,GSN.Skill.Phoenix.Model.Data.GameData,GSN.Skill.Phoenix.Model.Data.GameData>
struct Transform_1_t400167166;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "AssemblyU2DCSharp_GSN_Skill_Phoenix_Model_Data_Gam1843813920.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,GSN.Skill.Phoenix.Model.Data.GameData,GSN.Skill.Phoenix.Model.Data.GameData>::.ctor(System.Object,System.IntPtr)
extern "C"  void Transform_1__ctor_m2160537050_gshared (Transform_1_t400167166 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method);
#define Transform_1__ctor_m2160537050(__this, ___object0, ___method1, method) ((  void (*) (Transform_1_t400167166 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m2160537050_gshared)(__this, ___object0, ___method1, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,GSN.Skill.Phoenix.Model.Data.GameData,GSN.Skill.Phoenix.Model.Data.GameData>::Invoke(TKey,TValue)
extern "C"  GameData_t1843813920  Transform_1_Invoke_m4241425538_gshared (Transform_1_t400167166 * __this, int32_t ___key0, GameData_t1843813920  ___value1, const MethodInfo* method);
#define Transform_1_Invoke_m4241425538(__this, ___key0, ___value1, method) ((  GameData_t1843813920  (*) (Transform_1_t400167166 *, int32_t, GameData_t1843813920 , const MethodInfo*))Transform_1_Invoke_m4241425538_gshared)(__this, ___key0, ___value1, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,GSN.Skill.Phoenix.Model.Data.GameData,GSN.Skill.Phoenix.Model.Data.GameData>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Transform_1_BeginInvoke_m1174955659_gshared (Transform_1_t400167166 * __this, int32_t ___key0, GameData_t1843813920  ___value1, AsyncCallback_t163412349 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method);
#define Transform_1_BeginInvoke_m1174955659(__this, ___key0, ___value1, ___callback2, ___object3, method) ((  Il2CppObject * (*) (Transform_1_t400167166 *, int32_t, GameData_t1843813920 , AsyncCallback_t163412349 *, Il2CppObject *, const MethodInfo*))Transform_1_BeginInvoke_m1174955659_gshared)(__this, ___key0, ___value1, ___callback2, ___object3, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,GSN.Skill.Phoenix.Model.Data.GameData,GSN.Skill.Phoenix.Model.Data.GameData>::EndInvoke(System.IAsyncResult)
extern "C"  GameData_t1843813920  Transform_1_EndInvoke_m2951412656_gshared (Transform_1_t400167166 * __this, Il2CppObject * ___result0, const MethodInfo* method);
#define Transform_1_EndInvoke_m2951412656(__this, ___result0, method) ((  GameData_t1843813920  (*) (Transform_1_t400167166 *, Il2CppObject *, const MethodInfo*))Transform_1_EndInvoke_m2951412656_gshared)(__this, ___result0, method)
