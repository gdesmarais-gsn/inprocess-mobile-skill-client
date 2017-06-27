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

// TMPro.TextMeshProUGUI
struct TextMeshProUGUI_t934157183;
// UnityEngine.Canvas
struct Canvas_t209405766;
// UnityEngine.Material
struct Material_t193706927;
// UnityEngine.Material[]
struct MaterialU5BU5D_t3123989686;
// System.Int32[]
struct Int32U5BU5D_t3030399641;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t1172311765;
// UnityEngine.Mesh
struct Mesh_t1356156583;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_t261436805;
// TMPro.InlineGraphicManager
struct InlineGraphicManager_t2038767860;
// TMPro.TMP_TextInfo
struct TMP_TextInfo_t2849466151;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Material193706927.h"
#include "UnityEngine_UnityEngine_Color32874517518.h"
#include "UnityEngine_UnityEngine_Bounds3033363703.h"
#include "UnityEngine_UI_UnityEngine_UI_CanvasUpdate1528800019.h"
#include "UnityEngine_UnityEngine_Vector42243707581.h"
#include "UnityEngine_UnityEngine_Rect3681755626.h"
#include "UnityEngine_UnityEngine_Color2020392075.h"
#include "mscorlib_System_String2029220233.h"
#include "UnityEngine_UnityEngine_Mesh1356156583.h"
#include "AssemblyU2DCSharp_TMPro_TMP_VertexDataUpdateFlags878817098.h"

// System.Void TMPro.TextMeshProUGUI::.ctor()
extern "C"  void TextMeshProUGUI__ctor_m302663386 (TextMeshProUGUI_t934157183 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.TextMeshProUGUI::Awake()
extern "C"  void TextMeshProUGUI_Awake_m2211186873 (TextMeshProUGUI_t934157183 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.TextMeshProUGUI::OnEnable()
extern "C"  void TextMeshProUGUI_OnEnable_m2606338474 (TextMeshProUGUI_t934157183 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.TextMeshProUGUI::OnDisable()
extern "C"  void TextMeshProUGUI_OnDisable_m473044129 (TextMeshProUGUI_t934157183 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.TextMeshProUGUI::OnDestroy()
extern "C"  void TextMeshProUGUI_OnDestroy_m2751823383 (TextMeshProUGUI_t934157183 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.TextMeshProUGUI::LoadFontAsset()
extern "C"  void TextMeshProUGUI_LoadFontAsset_m393050457 (TextMeshProUGUI_t934157183 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Canvas TMPro.TextMeshProUGUI::GetCanvas()
extern "C"  Canvas_t209405766 * TextMeshProUGUI_GetCanvas_m208996976 (TextMeshProUGUI_t934157183 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.TextMeshProUGUI::UpdateEnvMapMatrix()
extern "C"  void TextMeshProUGUI_UpdateEnvMapMatrix_m2952610243 (TextMeshProUGUI_t934157183 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.TextMeshProUGUI::EnableMasking()
extern "C"  void TextMeshProUGUI_EnableMasking_m1249517929 (TextMeshProUGUI_t934157183 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.TextMeshProUGUI::DisableMasking()
extern "C"  void TextMeshProUGUI_DisableMasking_m2867499952 (TextMeshProUGUI_t934157183 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.TextMeshProUGUI::UpdateMask()
extern "C"  void TextMeshProUGUI_UpdateMask_m338618989 (TextMeshProUGUI_t934157183 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material TMPro.TextMeshProUGUI::GetMaterial(UnityEngine.Material)
extern "C"  Material_t193706927 * TextMeshProUGUI_GetMaterial_m136969292 (TextMeshProUGUI_t934157183 * __this, Material_t193706927 * ___mat0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material[] TMPro.TextMeshProUGUI::GetMaterials(UnityEngine.Material[])
extern "C"  MaterialU5BU5D_t3123989686* TextMeshProUGUI_GetMaterials_m1708932441 (TextMeshProUGUI_t934157183 * __this, MaterialU5BU5D_t3123989686* ___mats0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.TextMeshProUGUI::SetSharedMaterial(UnityEngine.Material)
extern "C"  void TextMeshProUGUI_SetSharedMaterial_m2106111612 (TextMeshProUGUI_t934157183 * __this, Material_t193706927 * ___mat0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material[] TMPro.TextMeshProUGUI::GetSharedMaterials()
extern "C"  MaterialU5BU5D_t3123989686* TextMeshProUGUI_GetSharedMaterials_m3690575454 (TextMeshProUGUI_t934157183 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.TextMeshProUGUI::SetSharedMaterials(UnityEngine.Material[])
extern "C"  void TextMeshProUGUI_SetSharedMaterials_m1635702561 (TextMeshProUGUI_t934157183 * __this, MaterialU5BU5D_t3123989686* ___materials0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.TextMeshProUGUI::SetOutlineThickness(System.Single)
extern "C"  void TextMeshProUGUI_SetOutlineThickness_m3644523061 (TextMeshProUGUI_t934157183 * __this, float ___thickness0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.TextMeshProUGUI::SetFaceColor(UnityEngine.Color32)
extern "C"  void TextMeshProUGUI_SetFaceColor_m3808406897 (TextMeshProUGUI_t934157183 * __this, Color32_t874517518  ___color0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.TextMeshProUGUI::SetOutlineColor(UnityEngine.Color32)
extern "C"  void TextMeshProUGUI_SetOutlineColor_m1832067002 (TextMeshProUGUI_t934157183 * __this, Color32_t874517518  ___color0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.TextMeshProUGUI::SetShaderDepth()
extern "C"  void TextMeshProUGUI_SetShaderDepth_m2210174738 (TextMeshProUGUI_t934157183 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.TextMeshProUGUI::SetCulling()
extern "C"  void TextMeshProUGUI_SetCulling_m2201423284 (TextMeshProUGUI_t934157183 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.TextMeshProUGUI::SetPerspectiveCorrection()
extern "C"  void TextMeshProUGUI_SetPerspectiveCorrection_m2417377614 (TextMeshProUGUI_t934157183 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single TMPro.TextMeshProUGUI::GetPaddingForMaterial(UnityEngine.Material)
extern "C"  float TextMeshProUGUI_GetPaddingForMaterial_m3874090685 (TextMeshProUGUI_t934157183 * __this, Material_t193706927 * ___mat0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single TMPro.TextMeshProUGUI::GetPaddingForMaterial()
extern "C"  float TextMeshProUGUI_GetPaddingForMaterial_m2111475197 (TextMeshProUGUI_t934157183 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.TextMeshProUGUI::SetMeshArrays(System.Int32)
extern "C"  void TextMeshProUGUI_SetMeshArrays_m2847920580 (TextMeshProUGUI_t934157183 * __this, int32_t ___size0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 TMPro.TextMeshProUGUI::SetArraySizes(System.Int32[])
extern "C"  int32_t TextMeshProUGUI_SetArraySizes_m2621401264 (TextMeshProUGUI_t934157183 * __this, Int32U5BU5D_t3030399641* ___chars0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.TextMeshProUGUI::ComputeMarginSize()
extern "C"  void TextMeshProUGUI_ComputeMarginSize_m1720363160 (TextMeshProUGUI_t934157183 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.TextMeshProUGUI::OnDidApplyAnimationProperties()
extern "C"  void TextMeshProUGUI_OnDidApplyAnimationProperties_m1626245151 (TextMeshProUGUI_t934157183 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.TextMeshProUGUI::OnCanvasHierarchyChanged()
extern "C"  void TextMeshProUGUI_OnCanvasHierarchyChanged_m1562721960 (TextMeshProUGUI_t934157183 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.TextMeshProUGUI::OnTransformParentChanged()
extern "C"  void TextMeshProUGUI_OnTransformParentChanged_m581673215 (TextMeshProUGUI_t934157183 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.TextMeshProUGUI::OnRectTransformDimensionsChange()
extern "C"  void TextMeshProUGUI_OnRectTransformDimensionsChange_m2202955346 (TextMeshProUGUI_t934157183 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.TextMeshProUGUI::LateUpdate()
extern "C"  void TextMeshProUGUI_LateUpdate_m1949045321 (TextMeshProUGUI_t934157183 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.TextMeshProUGUI::OnPreRenderCanvas()
extern "C"  void TextMeshProUGUI_OnPreRenderCanvas_m4214344444 (TextMeshProUGUI_t934157183 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.TextMeshProUGUI::GenerateTextMesh()
extern "C"  void TextMeshProUGUI_GenerateTextMesh_m2690396481 (TextMeshProUGUI_t934157183 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3[] TMPro.TextMeshProUGUI::GetTextContainerLocalCorners()
extern "C"  Vector3U5BU5D_t1172311765* TextMeshProUGUI_GetTextContainerLocalCorners_m848842237 (TextMeshProUGUI_t934157183 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.TextMeshProUGUI::SetActiveSubMeshes(System.Boolean)
extern "C"  void TextMeshProUGUI_SetActiveSubMeshes_m3796845184 (TextMeshProUGUI_t934157183 * __this, bool ___state0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Bounds TMPro.TextMeshProUGUI::GetCompoundBounds()
extern "C"  Bounds_t3033363703  TextMeshProUGUI_GetCompoundBounds_m3888335871 (TextMeshProUGUI_t934157183 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.TextMeshProUGUI::UpdateSDFScale(System.Single)
extern "C"  void TextMeshProUGUI_UpdateSDFScale_m1493161985 (TextMeshProUGUI_t934157183 * __this, float ___lossyScale0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.TextMeshProUGUI::AdjustLineOffset(System.Int32,System.Int32,System.Single)
extern "C"  void TextMeshProUGUI_AdjustLineOffset_m434164471 (TextMeshProUGUI_t934157183 * __this, int32_t ___startIndex0, int32_t ___endIndex1, float ___offset2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material TMPro.TextMeshProUGUI::get_materialForRendering()
extern "C"  Material_t193706927 * TextMeshProUGUI_get_materialForRendering_m3314628034 (TextMeshProUGUI_t934157183 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean TMPro.TextMeshProUGUI::get_autoSizeTextContainer()
extern "C"  bool TextMeshProUGUI_get_autoSizeTextContainer_m3275884553 (TextMeshProUGUI_t934157183 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.TextMeshProUGUI::set_autoSizeTextContainer(System.Boolean)
extern "C"  void TextMeshProUGUI_set_autoSizeTextContainer_m3089554652 (TextMeshProUGUI_t934157183 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Mesh TMPro.TextMeshProUGUI::get_mesh()
extern "C"  Mesh_t1356156583 * TextMeshProUGUI_get_mesh_m1058458225 (TextMeshProUGUI_t934157183 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.CanvasRenderer TMPro.TextMeshProUGUI::get_canvasRenderer()
extern "C"  CanvasRenderer_t261436805 * TextMeshProUGUI_get_canvasRenderer_m2612561233 (TextMeshProUGUI_t934157183 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// TMPro.InlineGraphicManager TMPro.TextMeshProUGUI::get_inlineGraphicManager()
extern "C"  InlineGraphicManager_t2038767860 * TextMeshProUGUI_get_inlineGraphicManager_m2178763984 (TextMeshProUGUI_t934157183 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.TextMeshProUGUI::CalculateLayoutInputHorizontal()
extern "C"  void TextMeshProUGUI_CalculateLayoutInputHorizontal_m1860139922 (TextMeshProUGUI_t934157183 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.TextMeshProUGUI::CalculateLayoutInputVertical()
extern "C"  void TextMeshProUGUI_CalculateLayoutInputVertical_m1536722948 (TextMeshProUGUI_t934157183 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.TextMeshProUGUI::SetVerticesDirty()
extern "C"  void TextMeshProUGUI_SetVerticesDirty_m1014092545 (TextMeshProUGUI_t934157183 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.TextMeshProUGUI::SetLayoutDirty()
extern "C"  void TextMeshProUGUI_SetLayoutDirty_m2968984310 (TextMeshProUGUI_t934157183 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.TextMeshProUGUI::SetMaterialDirty()
extern "C"  void TextMeshProUGUI_SetMaterialDirty_m3714209539 (TextMeshProUGUI_t934157183 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.TextMeshProUGUI::SetAllDirty()
extern "C"  void TextMeshProUGUI_SetAllDirty_m185940005 (TextMeshProUGUI_t934157183 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.TextMeshProUGUI::Rebuild(UnityEngine.UI.CanvasUpdate)
extern "C"  void TextMeshProUGUI_Rebuild_m3470703561 (TextMeshProUGUI_t934157183 * __this, int32_t ___update0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.TextMeshProUGUI::UpdateSubObjectPivot()
extern "C"  void TextMeshProUGUI_UpdateSubObjectPivot_m2859953754 (TextMeshProUGUI_t934157183 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material TMPro.TextMeshProUGUI::GetModifiedMaterial(UnityEngine.Material)
extern "C"  Material_t193706927 * TextMeshProUGUI_GetModifiedMaterial_m3848925507 (TextMeshProUGUI_t934157183 * __this, Material_t193706927 * ___baseMaterial0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.TextMeshProUGUI::UpdateMaterial()
extern "C"  void TextMeshProUGUI_UpdateMaterial_m1997380660 (TextMeshProUGUI_t934157183 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector4 TMPro.TextMeshProUGUI::get_maskOffset()
extern "C"  Vector4_t2243707581  TextMeshProUGUI_get_maskOffset_m2030383417 (TextMeshProUGUI_t934157183 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.TextMeshProUGUI::set_maskOffset(UnityEngine.Vector4)
extern "C"  void TextMeshProUGUI_set_maskOffset_m3866608792 (TextMeshProUGUI_t934157183 * __this, Vector4_t2243707581  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.TextMeshProUGUI::RecalculateClipping()
extern "C"  void TextMeshProUGUI_RecalculateClipping_m2970331269 (TextMeshProUGUI_t934157183 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.TextMeshProUGUI::RecalculateMasking()
extern "C"  void TextMeshProUGUI_RecalculateMasking_m19349331 (TextMeshProUGUI_t934157183 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.TextMeshProUGUI::Cull(UnityEngine.Rect,System.Boolean)
extern "C"  void TextMeshProUGUI_Cull_m1937912990 (TextMeshProUGUI_t934157183 * __this, Rect_t3681755626  ___clipRect0, bool ___validRect1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.TextMeshProUGUI::UpdateMeshPadding()
extern "C"  void TextMeshProUGUI_UpdateMeshPadding_m2921790511 (TextMeshProUGUI_t934157183 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.TextMeshProUGUI::InternalCrossFadeColor(UnityEngine.Color,System.Single,System.Boolean,System.Boolean)
extern "C"  void TextMeshProUGUI_InternalCrossFadeColor_m1288659329 (TextMeshProUGUI_t934157183 * __this, Color_t2020392075  ___targetColor0, float ___duration1, bool ___ignoreTimeScale2, bool ___useAlpha3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.TextMeshProUGUI::InternalCrossFadeAlpha(System.Single,System.Single,System.Boolean)
extern "C"  void TextMeshProUGUI_InternalCrossFadeAlpha_m1963340038 (TextMeshProUGUI_t934157183 * __this, float ___alpha0, float ___duration1, bool ___ignoreTimeScale2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.TextMeshProUGUI::ForceMeshUpdate()
extern "C"  void TextMeshProUGUI_ForceMeshUpdate_m3964446383 (TextMeshProUGUI_t934157183 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.TextMeshProUGUI::ForceMeshUpdate(System.Boolean)
extern "C"  void TextMeshProUGUI_ForceMeshUpdate_m611938448 (TextMeshProUGUI_t934157183 * __this, bool ___ignoreInactive0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// TMPro.TMP_TextInfo TMPro.TextMeshProUGUI::GetTextInfo(System.String)
extern "C"  TMP_TextInfo_t2849466151 * TextMeshProUGUI_GetTextInfo_m804167971 (TextMeshProUGUI_t934157183 * __this, String_t* ___text0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.TextMeshProUGUI::ClearMesh()
extern "C"  void TextMeshProUGUI_ClearMesh_m1948772470 (TextMeshProUGUI_t934157183 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.TextMeshProUGUI::UpdateGeometry(UnityEngine.Mesh,System.Int32)
extern "C"  void TextMeshProUGUI_UpdateGeometry_m3721929806 (TextMeshProUGUI_t934157183 * __this, Mesh_t1356156583 * ___mesh0, int32_t ___index1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.TextMeshProUGUI::UpdateVertexData(TMPro.TMP_VertexDataUpdateFlags)
extern "C"  void TextMeshProUGUI_UpdateVertexData_m4263687007 (TextMeshProUGUI_t934157183 * __this, int32_t ___flags0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.TextMeshProUGUI::UpdateVertexData()
extern "C"  void TextMeshProUGUI_UpdateVertexData_m3622247209 (TextMeshProUGUI_t934157183 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.TextMeshProUGUI::UpdateFontAsset()
extern "C"  void TextMeshProUGUI_UpdateFontAsset_m3029034358 (TextMeshProUGUI_t934157183 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
