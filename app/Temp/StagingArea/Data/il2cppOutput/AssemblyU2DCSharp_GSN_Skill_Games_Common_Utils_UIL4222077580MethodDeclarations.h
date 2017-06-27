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

// GSN.Skill.Games.Common.Utils.UILoadData
struct UILoadData_t4222077580;
// GSN.Skill.Games.Common.Utils.UILoadData/LoadCompleteHandler
struct LoadCompleteHandler_t1319707260;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_GSN_Skill_Games_Common_Utils_UIL1319707260.h"
#include "mscorlib_System_String2029220233.h"

// System.Void GSN.Skill.Games.Common.Utils.UILoadData::.ctor()
extern "C"  void UILoadData__ctor_m3952636227 (UILoadData_t4222077580 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Utils.UILoadData::add_OnLoadingComplete(GSN.Skill.Games.Common.Utils.UILoadData/LoadCompleteHandler)
extern "C"  void UILoadData_add_OnLoadingComplete_m3736983107 (UILoadData_t4222077580 * __this, LoadCompleteHandler_t1319707260 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Utils.UILoadData::remove_OnLoadingComplete(GSN.Skill.Games.Common.Utils.UILoadData/LoadCompleteHandler)
extern "C"  void UILoadData_remove_OnLoadingComplete_m615784268 (UILoadData_t4222077580 * __this, LoadCompleteHandler_t1319707260 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Utils.UILoadData::ResetLoadProgress()
extern "C"  void UILoadData_ResetLoadProgress_m1379403189 (UILoadData_t4222077580 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single GSN.Skill.Games.Common.Utils.UILoadData::get_PercentDone()
extern "C"  float UILoadData_get_PercentDone_m3779633947 (UILoadData_t4222077580 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GSN.Skill.Games.Common.Utils.UILoadData::Dump()
extern "C"  String_t* UILoadData_Dump_m3802156012 (UILoadData_t4222077580 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Utils.UILoadData::LoadComplete()
extern "C"  void UILoadData_LoadComplete_m3075306006 (UILoadData_t4222077580 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Utils.UILoadData::LoadNextScene(System.String,System.String)
extern "C"  void UILoadData_LoadNextScene_m2045330128 (UILoadData_t4222077580 * __this, String_t* ___NextSceneName0, String_t* ___loadScene1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GSN.Skill.Games.Common.Utils.UILoadData::destroyOnGameComplete()
extern "C"  bool UILoadData_destroyOnGameComplete_m591473375 (UILoadData_t4222077580 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Utils.UILoadData::set_PrefabLoadProgress(System.Single)
extern "C"  void UILoadData_set_PrefabLoadProgress_m412924878 (UILoadData_t4222077580 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Utils.UILoadData::set_PreloaderProgress(System.Single)
extern "C"  void UILoadData_set_PreloaderProgress_m1681494524 (UILoadData_t4222077580 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Utils.UILoadData::set_SceneProgress(System.Single)
extern "C"  void UILoadData_set_SceneProgress_m613867526 (UILoadData_t4222077580 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
