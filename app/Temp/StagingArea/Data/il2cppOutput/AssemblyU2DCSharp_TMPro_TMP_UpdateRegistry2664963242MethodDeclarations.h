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

// TMPro.TMP_UpdateRegistry
struct TMP_UpdateRegistry_t2664963242;
// UnityEngine.UI.ICanvasElement
struct ICanvasElement_t986520779;

#include "codegen/il2cpp-codegen.h"

// System.Void TMPro.TMP_UpdateRegistry::.ctor()
extern "C"  void TMP_UpdateRegistry__ctor_m3737665083 (TMP_UpdateRegistry_t2664963242 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// TMPro.TMP_UpdateRegistry TMPro.TMP_UpdateRegistry::get_instance()
extern "C"  TMP_UpdateRegistry_t2664963242 * TMP_UpdateRegistry_get_instance_m2588740946 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.TMP_UpdateRegistry::RegisterCanvasElementForLayoutRebuild(UnityEngine.UI.ICanvasElement)
extern "C"  void TMP_UpdateRegistry_RegisterCanvasElementForLayoutRebuild_m3252199054 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___element0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean TMPro.TMP_UpdateRegistry::InternalRegisterCanvasElementForLayoutRebuild(UnityEngine.UI.ICanvasElement)
extern "C"  bool TMP_UpdateRegistry_InternalRegisterCanvasElementForLayoutRebuild_m4257127389 (TMP_UpdateRegistry_t2664963242 * __this, Il2CppObject * ___element0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.TMP_UpdateRegistry::RegisterCanvasElementForGraphicRebuild(UnityEngine.UI.ICanvasElement)
extern "C"  void TMP_UpdateRegistry_RegisterCanvasElementForGraphicRebuild_m1828400280 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___element0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean TMPro.TMP_UpdateRegistry::InternalRegisterCanvasElementForGraphicRebuild(UnityEngine.UI.ICanvasElement)
extern "C"  bool TMP_UpdateRegistry_InternalRegisterCanvasElementForGraphicRebuild_m4231243129 (TMP_UpdateRegistry_t2664963242 * __this, Il2CppObject * ___element0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.TMP_UpdateRegistry::PerformUpdateForCanvasRendererObjects()
extern "C"  void TMP_UpdateRegistry_PerformUpdateForCanvasRendererObjects_m1875380039 (TMP_UpdateRegistry_t2664963242 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.TMP_UpdateRegistry::PerformUpdateForMeshRendererObjects()
extern "C"  void TMP_UpdateRegistry_PerformUpdateForMeshRendererObjects_m2846157432 (TMP_UpdateRegistry_t2664963242 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.TMP_UpdateRegistry::UnRegisterCanvasElementForRebuild(UnityEngine.UI.ICanvasElement)
extern "C"  void TMP_UpdateRegistry_UnRegisterCanvasElementForRebuild_m1094020671 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___element0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.TMP_UpdateRegistry::InternalUnRegisterCanvasElementForLayoutRebuild(UnityEngine.UI.ICanvasElement)
extern "C"  void TMP_UpdateRegistry_InternalUnRegisterCanvasElementForLayoutRebuild_m2217337920 (TMP_UpdateRegistry_t2664963242 * __this, Il2CppObject * ___element0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.TMP_UpdateRegistry::InternalUnRegisterCanvasElementForGraphicRebuild(UnityEngine.UI.ICanvasElement)
extern "C"  void TMP_UpdateRegistry_InternalUnRegisterCanvasElementForGraphicRebuild_m371059358 (TMP_UpdateRegistry_t2664963242 * __this, Il2CppObject * ___element0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
