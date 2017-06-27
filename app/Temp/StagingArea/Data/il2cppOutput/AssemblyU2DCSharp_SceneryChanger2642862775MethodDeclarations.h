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

// SceneryChanger
struct SceneryChanger_t2642862775;
// Delegates/Action
struct Action_t1511407763;
// System.String
struct String_t;
// SceneryChanger/Scenery
struct Scenery_t2624549033;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_t2321347278;
// Stm.V1_0.Dispatcher
struct Dispatcher_t2840725577;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Delegates_Action1511407763.h"
#include "AssemblyU2DCSharp_SceneryChanger_Scenery2624549033.h"
#include "UnityEngine_UnityEngine_GameObject1756533147.h"
#include "AssemblyU2DCSharp_Stm_V1_0_Dispatcher2840725577.h"
#include "mscorlib_System_String2029220233.h"

// System.Void SceneryChanger::.ctor()
extern "C"  void SceneryChanger__ctor_m3396189052 (SceneryChanger_t2642862775 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SceneryChanger::add_onAfterSetScene(Delegates/Action)
extern "C"  void SceneryChanger_add_onAfterSetScene_m1844317700 (SceneryChanger_t2642862775 * __this, Action_t1511407763 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SceneryChanger::remove_onAfterSetScene(Delegates/Action)
extern "C"  void SceneryChanger_remove_onAfterSetScene_m3073897675 (SceneryChanger_t2642862775 * __this, Action_t1511407763 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SceneryChanger::OnDestroy()
extern "C"  void SceneryChanger_OnDestroy_m3826658293 (SceneryChanger_t2642862775 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SceneryChanger::Awake()
extern "C"  void SceneryChanger_Awake_m1510326519 (SceneryChanger_t2642862775 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String SceneryChanger::GetParentSceneName()
extern "C"  String_t* SceneryChanger_GetParentSceneName_m2658555124 (SceneryChanger_t2642862775 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String SceneryChanger::GetCurrentSceneName()
extern "C"  String_t* SceneryChanger_GetCurrentSceneName_m4261480881 (SceneryChanger_t2642862775 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SceneryChanger::SetScene(SceneryChanger/Scenery)
extern "C"  void SceneryChanger_SetScene_m1681324421 (SceneryChanger_t2642862775 * __this, Scenery_t2624549033 * ___scenery0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SceneryChanger::ReapplyScene()
extern "C"  void SceneryChanger_ReapplyScene_m1413817511 (SceneryChanger_t2642862775 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SceneryChanger::ReapplyTo(UnityEngine.GameObject)
extern "C"  void SceneryChanger_ReapplyTo_m3472155116 (SceneryChanger_t2642862775 * __this, GameObject_t1756533147 * ___go0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SceneryChanger::UnapplyTo(UnityEngine.GameObject)
extern "C"  void SceneryChanger_UnapplyTo_m713637426 (SceneryChanger_t2642862775 * __this, GameObject_t1756533147 * ___go0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SceneryChanger::SetCurrentSceneBGM()
extern "C"  void SceneryChanger_SetCurrentSceneBGM_m3670847195 (SceneryChanger_t2642862775 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<System.String> SceneryChanger::Stm.V1_0.IDynamicActor.ListDynamicActions()
extern "C"  Il2CppObject* SceneryChanger_Stm_V1_0_IDynamicActor_ListDynamicActions_m1949612169 (SceneryChanger_t2642862775 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SceneryChanger::Stm.V1_0.IDynamicActor.DoAction(Stm.V1_0.Dispatcher,System.String)
extern "C"  void SceneryChanger_Stm_V1_0_IDynamicActor_DoAction_m1703633667 (SceneryChanger_t2642862775 * __this, Dispatcher_t2840725577 * ___sender0, String_t* ___action1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SceneryChanger::Action(System.String)
extern "C"  void SceneryChanger_Action_m1794302682 (SceneryChanger_t2642862775 * __this, String_t* ___action0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SceneryChanger::ForceAddToChange(UnityEngine.GameObject)
extern "C"  void SceneryChanger_ForceAddToChange_m151094975 (SceneryChanger_t2642862775 * __this, GameObject_t1756533147 * ___go0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
