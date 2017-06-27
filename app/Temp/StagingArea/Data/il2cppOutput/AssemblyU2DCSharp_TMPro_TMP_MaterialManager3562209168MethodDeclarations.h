﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// UnityEngine.Camera
struct Camera_t189460977;
// UnityEngine.Material
struct Material_t193706927;
// UnityEngine.GameObject
struct GameObject_t1756533147;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Camera189460977.h"
#include "UnityEngine_UnityEngine_Material193706927.h"
#include "UnityEngine_UnityEngine_GameObject1756533147.h"

// System.Void TMPro.TMP_MaterialManager::.cctor()
extern "C"  void TMP_MaterialManager__cctor_m1407679464 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.TMP_MaterialManager::OnPreRender(UnityEngine.Camera)
extern "C"  void TMP_MaterialManager_OnPreRender_m1635107377 (Il2CppObject * __this /* static, unused */, Camera_t189460977 * ___cam0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.TMP_MaterialManager::OnPreRenderCanvas()
extern "C"  void TMP_MaterialManager_OnPreRenderCanvas_m2729636395 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material TMPro.TMP_MaterialManager::GetStencilMaterial(UnityEngine.Material,System.Int32)
extern "C"  Material_t193706927 * TMP_MaterialManager_GetStencilMaterial_m2788103568 (Il2CppObject * __this /* static, unused */, Material_t193706927 * ___baseMaterial0, int32_t ___stencilID1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.TMP_MaterialManager::ReleaseStencilMaterial(UnityEngine.Material)
extern "C"  void TMP_MaterialManager_ReleaseStencilMaterial_m453342659 (Il2CppObject * __this /* static, unused */, Material_t193706927 * ___stencilMaterial0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material TMPro.TMP_MaterialManager::GetBaseMaterial(UnityEngine.Material)
extern "C"  Material_t193706927 * TMP_MaterialManager_GetBaseMaterial_m2633699442 (Il2CppObject * __this /* static, unused */, Material_t193706927 * ___stencilMaterial0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material TMPro.TMP_MaterialManager::SetStencil(UnityEngine.Material,System.Int32)
extern "C"  Material_t193706927 * TMP_MaterialManager_SetStencil_m1566039713 (Il2CppObject * __this /* static, unused */, Material_t193706927 * ___material0, int32_t ___stencilID1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.TMP_MaterialManager::AddMaskingMaterial(UnityEngine.Material,UnityEngine.Material,System.Int32)
extern "C"  void TMP_MaterialManager_AddMaskingMaterial_m313484 (Il2CppObject * __this /* static, unused */, Material_t193706927 * ___baseMaterial0, Material_t193706927 * ___stencilMaterial1, int32_t ___stencilID2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.TMP_MaterialManager::RemoveStencilMaterial(UnityEngine.Material)
extern "C"  void TMP_MaterialManager_RemoveStencilMaterial_m431163078 (Il2CppObject * __this /* static, unused */, Material_t193706927 * ___stencilMaterial0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.TMP_MaterialManager::ReleaseBaseMaterial(UnityEngine.Material)
extern "C"  void TMP_MaterialManager_ReleaseBaseMaterial_m3444548298 (Il2CppObject * __this /* static, unused */, Material_t193706927 * ___baseMaterial0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.TMP_MaterialManager::ClearMaterials()
extern "C"  void TMP_MaterialManager_ClearMaterials_m1563387972 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 TMPro.TMP_MaterialManager::GetStencilID(UnityEngine.GameObject)
extern "C"  int32_t TMP_MaterialManager_GetStencilID_m2066815492 (Il2CppObject * __this /* static, unused */, GameObject_t1756533147 * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material TMPro.TMP_MaterialManager::GetFallbackMaterial(UnityEngine.Material,UnityEngine.Material)
extern "C"  Material_t193706927 * TMP_MaterialManager_GetFallbackMaterial_m1804234669 (Il2CppObject * __this /* static, unused */, Material_t193706927 * ___sourceMaterial0, Material_t193706927 * ___targetMaterial1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.TMP_MaterialManager::AddFallbackMaterialReference(UnityEngine.Material)
extern "C"  void TMP_MaterialManager_AddFallbackMaterialReference_m2584402550 (Il2CppObject * __this /* static, unused */, Material_t193706927 * ___targetMaterial0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.TMP_MaterialManager::RemoveFallbackMaterialReference(UnityEngine.Material)
extern "C"  void TMP_MaterialManager_RemoveFallbackMaterialReference_m696451025 (Il2CppObject * __this /* static, unused */, Material_t193706927 * ___targetMaterial0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.TMP_MaterialManager::CleanupFallbackMaterials()
extern "C"  void TMP_MaterialManager_CleanupFallbackMaterials_m1770882035 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.TMP_MaterialManager::ReleaseFallbackMaterial(UnityEngine.Material)
extern "C"  void TMP_MaterialManager_ReleaseFallbackMaterial_m4227769801 (Il2CppObject * __this /* static, unused */, Material_t193706927 * ___fallackMaterial0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.TMP_MaterialManager::CopyMaterialPresetProperties(UnityEngine.Material,UnityEngine.Material)
extern "C"  void TMP_MaterialManager_CopyMaterialPresetProperties_m3574707813 (Il2CppObject * __this /* static, unused */, Material_t193706927 * ___source0, Material_t193706927 * ___destination1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
