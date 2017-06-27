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

// TMPro.InlineGraphicManager
struct InlineGraphicManager_t2038767860;
// TMPro.TMP_SpriteAsset
struct TMP_SpriteAsset_t2641813093;
// TMPro.InlineGraphic
struct InlineGraphic_t2372877673;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_t261436805;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_t3048644023;
// TMPro.TMP_Sprite
struct TMP_Sprite_t104383505;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_TMPro_TMP_SpriteAsset2641813093.h"
#include "AssemblyU2DCSharp_TMPro_InlineGraphic2372877673.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"

// System.Void TMPro.InlineGraphicManager::.ctor()
extern "C"  void InlineGraphicManager__ctor_m1173264817 (InlineGraphicManager_t2038767860 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// TMPro.TMP_SpriteAsset TMPro.InlineGraphicManager::get_spriteAsset()
extern "C"  TMP_SpriteAsset_t2641813093 * InlineGraphicManager_get_spriteAsset_m93118819 (InlineGraphicManager_t2038767860 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.InlineGraphicManager::set_spriteAsset(TMPro.TMP_SpriteAsset)
extern "C"  void InlineGraphicManager_set_spriteAsset_m619780134 (InlineGraphicManager_t2038767860 * __this, TMP_SpriteAsset_t2641813093 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// TMPro.InlineGraphic TMPro.InlineGraphicManager::get_inlineGraphic()
extern "C"  InlineGraphic_t2372877673 * InlineGraphicManager_get_inlineGraphic_m4205480537 (InlineGraphicManager_t2038767860 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.InlineGraphicManager::set_inlineGraphic(TMPro.InlineGraphic)
extern "C"  void InlineGraphicManager_set_inlineGraphic_m3212126224 (InlineGraphicManager_t2038767860 * __this, InlineGraphic_t2372877673 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.CanvasRenderer TMPro.InlineGraphicManager::get_canvasRenderer()
extern "C"  CanvasRenderer_t261436805 * InlineGraphicManager_get_canvasRenderer_m16234380 (InlineGraphicManager_t2038767860 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UIVertex[] TMPro.InlineGraphicManager::get_uiVertex()
extern "C"  UIVertexU5BU5D_t3048644023* InlineGraphicManager_get_uiVertex_m516423842 (InlineGraphicManager_t2038767860 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.InlineGraphicManager::Awake()
extern "C"  void InlineGraphicManager_Awake_m1806737902 (InlineGraphicManager_t2038767860 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.InlineGraphicManager::OnEnable()
extern "C"  void InlineGraphicManager_OnEnable_m3245523705 (InlineGraphicManager_t2038767860 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.InlineGraphicManager::OnDisable()
extern "C"  void InlineGraphicManager_OnDisable_m2744232686 (InlineGraphicManager_t2038767860 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.InlineGraphicManager::OnDestroy()
extern "C"  void InlineGraphicManager_OnDestroy_m3959205460 (InlineGraphicManager_t2038767860 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.InlineGraphicManager::LoadSpriteAsset(TMPro.TMP_SpriteAsset)
extern "C"  void InlineGraphicManager_LoadSpriteAsset_m3881502087 (InlineGraphicManager_t2038767860 * __this, TMP_SpriteAsset_t2641813093 * ___spriteAsset0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.InlineGraphicManager::AddInlineGraphicsChild()
extern "C"  void InlineGraphicManager_AddInlineGraphicsChild_m3479742426 (InlineGraphicManager_t2038767860 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.InlineGraphicManager::AllocatedVertexBuffers(System.Int32)
extern "C"  void InlineGraphicManager_AllocatedVertexBuffers_m1236408206 (InlineGraphicManager_t2038767860 * __this, int32_t ___size0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.InlineGraphicManager::UpdatePivot(UnityEngine.Vector2)
extern "C"  void InlineGraphicManager_UpdatePivot_m2445722662 (InlineGraphicManager_t2038767860 * __this, Vector2_t2243707579  ___pivot0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.InlineGraphicManager::ClearUIVertex()
extern "C"  void InlineGraphicManager_ClearUIVertex_m3723757484 (InlineGraphicManager_t2038767860 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.InlineGraphicManager::DrawSprite(UnityEngine.UIVertex[],System.Int32)
extern "C"  void InlineGraphicManager_DrawSprite_m3267130730 (InlineGraphicManager_t2038767860 * __this, UIVertexU5BU5D_t3048644023* ___uiVertices0, int32_t ___spriteCount1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// TMPro.TMP_Sprite TMPro.InlineGraphicManager::GetSprite(System.Int32)
extern "C"  TMP_Sprite_t104383505 * InlineGraphicManager_GetSprite_m1262510717 (InlineGraphicManager_t2038767860 * __this, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 TMPro.InlineGraphicManager::GetSpriteIndexByHashCode(System.Int32)
extern "C"  int32_t InlineGraphicManager_GetSpriteIndexByHashCode_m1106661775 (InlineGraphicManager_t2038767860 * __this, int32_t ___hashCode0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 TMPro.InlineGraphicManager::GetSpriteIndexByIndex(System.Int32)
extern "C"  int32_t InlineGraphicManager_GetSpriteIndexByIndex_m2641575380 (InlineGraphicManager_t2038767860 * __this, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.InlineGraphicManager::SetUIVertex(UnityEngine.UIVertex[])
extern "C"  void InlineGraphicManager_SetUIVertex_m2043455660 (InlineGraphicManager_t2038767860 * __this, UIVertexU5BU5D_t3048644023* ___uiVertex0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
