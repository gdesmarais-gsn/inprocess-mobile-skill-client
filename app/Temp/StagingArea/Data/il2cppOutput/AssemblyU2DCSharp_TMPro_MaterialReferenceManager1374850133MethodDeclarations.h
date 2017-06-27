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

// TMPro.MaterialReferenceManager
struct MaterialReferenceManager_t1374850133;
// TMPro.TMP_FontAsset
struct TMP_FontAsset_t2530419979;
// TMPro.TMP_SpriteAsset
struct TMP_SpriteAsset_t2641813093;
// UnityEngine.Material
struct Material_t193706927;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_TMPro_TMP_FontAsset2530419979.h"
#include "AssemblyU2DCSharp_TMPro_TMP_SpriteAsset2641813093.h"
#include "UnityEngine_UnityEngine_Material193706927.h"

// System.Void TMPro.MaterialReferenceManager::.ctor()
extern "C"  void MaterialReferenceManager__ctor_m802509892 (MaterialReferenceManager_t1374850133 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// TMPro.MaterialReferenceManager TMPro.MaterialReferenceManager::get_instance()
extern "C"  MaterialReferenceManager_t1374850133 * MaterialReferenceManager_get_instance_m2993930412 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.MaterialReferenceManager::AddFontAsset(TMPro.TMP_FontAsset)
extern "C"  void MaterialReferenceManager_AddFontAsset_m3991510543 (Il2CppObject * __this /* static, unused */, TMP_FontAsset_t2530419979 * ___fontAsset0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.MaterialReferenceManager::AddFontAssetInternal(TMPro.TMP_FontAsset)
extern "C"  void MaterialReferenceManager_AddFontAssetInternal_m316049698 (MaterialReferenceManager_t1374850133 * __this, TMP_FontAsset_t2530419979 * ___fontAsset0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.MaterialReferenceManager::AddSpriteAsset(TMPro.TMP_SpriteAsset)
extern "C"  void MaterialReferenceManager_AddSpriteAsset_m184311535 (Il2CppObject * __this /* static, unused */, TMP_SpriteAsset_t2641813093 * ___spriteAsset0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.MaterialReferenceManager::AddSpriteAssetInternal(TMPro.TMP_SpriteAsset)
extern "C"  void MaterialReferenceManager_AddSpriteAssetInternal_m3332931042 (MaterialReferenceManager_t1374850133 * __this, TMP_SpriteAsset_t2641813093 * ___spriteAsset0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.MaterialReferenceManager::AddSpriteAsset(System.Int32,TMPro.TMP_SpriteAsset)
extern "C"  void MaterialReferenceManager_AddSpriteAsset_m209431690 (Il2CppObject * __this /* static, unused */, int32_t ___hashCode0, TMP_SpriteAsset_t2641813093 * ___spriteAsset1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.MaterialReferenceManager::AddSpriteAssetInternal(System.Int32,TMPro.TMP_SpriteAsset)
extern "C"  void MaterialReferenceManager_AddSpriteAssetInternal_m4013610009 (MaterialReferenceManager_t1374850133 * __this, int32_t ___hashCode0, TMP_SpriteAsset_t2641813093 * ___spriteAsset1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.MaterialReferenceManager::AddFontMaterial(System.Int32,UnityEngine.Material)
extern "C"  void MaterialReferenceManager_AddFontMaterial_m479646170 (Il2CppObject * __this /* static, unused */, int32_t ___hashCode0, Material_t193706927 * ___material1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.MaterialReferenceManager::AddFontMaterialInternal(System.Int32,UnityEngine.Material)
extern "C"  void MaterialReferenceManager_AddFontMaterialInternal_m4256544769 (MaterialReferenceManager_t1374850133 * __this, int32_t ___hashCode0, Material_t193706927 * ___material1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean TMPro.MaterialReferenceManager::Contains(TMPro.TMP_FontAsset)
extern "C"  bool MaterialReferenceManager_Contains_m3297611142 (MaterialReferenceManager_t1374850133 * __this, TMP_FontAsset_t2530419979 * ___font0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean TMPro.MaterialReferenceManager::Contains(TMPro.TMP_SpriteAsset)
extern "C"  bool MaterialReferenceManager_Contains_m2132988158 (MaterialReferenceManager_t1374850133 * __this, TMP_SpriteAsset_t2641813093 * ___sprite0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean TMPro.MaterialReferenceManager::TryGetFontAsset(System.Int32,TMPro.TMP_FontAsset&)
extern "C"  bool MaterialReferenceManager_TryGetFontAsset_m3781564066 (Il2CppObject * __this /* static, unused */, int32_t ___hashCode0, TMP_FontAsset_t2530419979 ** ___fontAsset1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean TMPro.MaterialReferenceManager::TryGetFontAssetInternal(System.Int32,TMPro.TMP_FontAsset&)
extern "C"  bool MaterialReferenceManager_TryGetFontAssetInternal_m3628883011 (MaterialReferenceManager_t1374850133 * __this, int32_t ___hashCode0, TMP_FontAsset_t2530419979 ** ___fontAsset1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean TMPro.MaterialReferenceManager::TryGetSpriteAsset(System.Int32,TMPro.TMP_SpriteAsset&)
extern "C"  bool MaterialReferenceManager_TryGetSpriteAsset_m822609422 (Il2CppObject * __this /* static, unused */, int32_t ___hashCode0, TMP_SpriteAsset_t2641813093 ** ___spriteAsset1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean TMPro.MaterialReferenceManager::TryGetSpriteAssetInternal(System.Int32,TMPro.TMP_SpriteAsset&)
extern "C"  bool MaterialReferenceManager_TryGetSpriteAssetInternal_m3509563019 (MaterialReferenceManager_t1374850133 * __this, int32_t ___hashCode0, TMP_SpriteAsset_t2641813093 ** ___spriteAsset1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean TMPro.MaterialReferenceManager::TryGetMaterial(System.Int32,UnityEngine.Material&)
extern "C"  bool MaterialReferenceManager_TryGetMaterial_m611587419 (Il2CppObject * __this /* static, unused */, int32_t ___hashCode0, Material_t193706927 ** ___material1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean TMPro.MaterialReferenceManager::TryGetMaterialInternal(System.Int32,UnityEngine.Material&)
extern "C"  bool MaterialReferenceManager_TryGetMaterialInternal_m2427358302 (MaterialReferenceManager_t1374850133 * __this, int32_t ___hashCode0, Material_t193706927 ** ___material1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
