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

// TMPro.TextMeshPro
struct TextMeshPro_t2521834357;
// UnityEngine.Material
struct Material_t193706927;
// UnityEngine.Material[]
struct MaterialU5BU5D_t3123989686;
// System.Int32[]
struct Int32U5BU5D_t3030399641;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t1172311765;
// TMPro.TextContainer
struct TextContainer_t4263764796;
// UnityEngine.Transform
struct Transform_t3275118058;
// UnityEngine.Renderer
struct Renderer_t257310565;
// UnityEngine.Mesh
struct Mesh_t1356156583;
// UnityEngine.MeshFilter
struct MeshFilter_t3026937449;
// TMPro.TMP_TextInfo
struct TMP_TextInfo_t2849466151;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_TMPro_MaskingTypes259687445.h"
#include "UnityEngine_UnityEngine_Vector42243707581.h"
#include "UnityEngine_UnityEngine_Material193706927.h"
#include "UnityEngine_UnityEngine_Color32874517518.h"
#include "UnityEngine_UnityEngine_Bounds3033363703.h"
#include "UnityEngine_UI_UnityEngine_UI_CanvasUpdate1528800019.h"
#include "mscorlib_System_String2029220233.h"
#include "UnityEngine_UnityEngine_Mesh1356156583.h"
#include "AssemblyU2DCSharp_TMPro_TMP_VertexDataUpdateFlags878817098.h"

// System.Void TMPro.TextMeshPro::.ctor()
extern "C"  void TextMeshPro__ctor_m1490434460 (TextMeshPro_t2521834357 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.TextMeshPro::Awake()
extern "C"  void TextMeshPro_Awake_m3336381499 (TextMeshPro_t2521834357 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.TextMeshPro::OnEnable()
extern "C"  void TextMeshPro_OnEnable_m2992280864 (TextMeshPro_t2521834357 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.TextMeshPro::OnDisable()
extern "C"  void TextMeshPro_OnDisable_m102012911 (TextMeshPro_t2521834357 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.TextMeshPro::OnDestroy()
extern "C"  void TextMeshPro_OnDestroy_m2380496721 (TextMeshPro_t2521834357 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.TextMeshPro::LoadFontAsset()
extern "C"  void TextMeshPro_LoadFontAsset_m2767876047 (TextMeshPro_t2521834357 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.TextMeshPro::UpdateEnvMapMatrix()
extern "C"  void TextMeshPro_UpdateEnvMapMatrix_m1609457797 (TextMeshPro_t2521834357 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.TextMeshPro::SetMask(TMPro.MaskingTypes)
extern "C"  void TextMeshPro_SetMask_m1178647845 (TextMeshPro_t2521834357 * __this, int32_t ___maskType0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.TextMeshPro::SetMaskCoordinates(UnityEngine.Vector4)
extern "C"  void TextMeshPro_SetMaskCoordinates_m566790355 (TextMeshPro_t2521834357 * __this, Vector4_t2243707581  ___coords0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.TextMeshPro::SetMaskCoordinates(UnityEngine.Vector4,System.Single,System.Single)
extern "C"  void TextMeshPro_SetMaskCoordinates_m3570264499 (TextMeshPro_t2521834357 * __this, Vector4_t2243707581  ___coords0, float ___softX1, float ___softY2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.TextMeshPro::EnableMasking()
extern "C"  void TextMeshPro_EnableMasking_m2719986347 (TextMeshPro_t2521834357 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.TextMeshPro::DisableMasking()
extern "C"  void TextMeshPro_DisableMasking_m524858978 (TextMeshPro_t2521834357 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.TextMeshPro::UpdateMask()
extern "C"  void TextMeshPro_UpdateMask_m2519318195 (TextMeshPro_t2521834357 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material TMPro.TextMeshPro::GetMaterial(UnityEngine.Material)
extern "C"  Material_t193706927 * TextMeshPro_GetMaterial_m493635906 (TextMeshPro_t2521834357 * __this, Material_t193706927 * ___mat0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material[] TMPro.TextMeshPro::GetMaterials(UnityEngine.Material[])
extern "C"  MaterialU5BU5D_t3123989686* TextMeshPro_GetMaterials_m1727534223 (TextMeshPro_t2521834357 * __this, MaterialU5BU5D_t3123989686* ___mats0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.TextMeshPro::SetSharedMaterial(UnityEngine.Material)
extern "C"  void TextMeshPro_SetSharedMaterial_m2253587254 (TextMeshPro_t2521834357 * __this, Material_t193706927 * ___mat0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material[] TMPro.TextMeshPro::GetSharedMaterials()
extern "C"  MaterialU5BU5D_t3123989686* TextMeshPro_GetSharedMaterials_m1258815252 (TextMeshPro_t2521834357 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.TextMeshPro::SetSharedMaterials(UnityEngine.Material[])
extern "C"  void TextMeshPro_SetSharedMaterials_m864159779 (TextMeshPro_t2521834357 * __this, MaterialU5BU5D_t3123989686* ___materials0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.TextMeshPro::SetOutlineThickness(System.Single)
extern "C"  void TextMeshPro_SetOutlineThickness_m1045296631 (TextMeshPro_t2521834357 * __this, float ___thickness0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.TextMeshPro::SetFaceColor(UnityEngine.Color32)
extern "C"  void TextMeshPro_SetFaceColor_m1099014515 (TextMeshPro_t2521834357 * __this, Color32_t874517518  ___color0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.TextMeshPro::SetOutlineColor(UnityEngine.Color32)
extern "C"  void TextMeshPro_SetOutlineColor_m985747316 (TextMeshPro_t2521834357 * __this, Color32_t874517518  ___color0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.TextMeshPro::CreateMaterialInstance()
extern "C"  void TextMeshPro_CreateMaterialInstance_m3882740664 (TextMeshPro_t2521834357 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.TextMeshPro::SetShaderDepth()
extern "C"  void TextMeshPro_SetShaderDepth_m1051467672 (TextMeshPro_t2521834357 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.TextMeshPro::SetCulling()
extern "C"  void TextMeshPro_SetCulling_m3167076838 (TextMeshPro_t2521834357 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.TextMeshPro::SetPerspectiveCorrection()
extern "C"  void TextMeshPro_SetPerspectiveCorrection_m1024401800 (TextMeshPro_t2521834357 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single TMPro.TextMeshPro::GetPaddingForMaterial(UnityEngine.Material)
extern "C"  float TextMeshPro_GetPaddingForMaterial_m526296763 (TextMeshPro_t2521834357 * __this, Material_t193706927 * ___mat0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single TMPro.TextMeshPro::GetPaddingForMaterial()
extern "C"  float TextMeshPro_GetPaddingForMaterial_m1633268683 (TextMeshPro_t2521834357 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 TMPro.TextMeshPro::SetArraySizes(System.Int32[])
extern "C"  int32_t TextMeshPro_SetArraySizes_m2987486886 (TextMeshPro_t2521834357 * __this, Int32U5BU5D_t3030399641* ___chars0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.TextMeshPro::ComputeMarginSize()
extern "C"  void TextMeshPro_ComputeMarginSize_m1206838666 (TextMeshPro_t2521834357 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.TextMeshPro::OnDidApplyAnimationProperties()
extern "C"  void TextMeshPro_OnDidApplyAnimationProperties_m324435105 (TextMeshPro_t2521834357 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.TextMeshPro::OnTransformParentChanged()
extern "C"  void TextMeshPro_OnTransformParentChanged_m973922189 (TextMeshPro_t2521834357 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.TextMeshPro::OnRectTransformDimensionsChange()
extern "C"  void TextMeshPro_OnRectTransformDimensionsChange_m544693520 (TextMeshPro_t2521834357 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.TextMeshPro::LateUpdate()
extern "C"  void TextMeshPro_LateUpdate_m3894714883 (TextMeshPro_t2521834357 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.TextMeshPro::OnPreRenderObject()
extern "C"  void TextMeshPro_OnPreRenderObject_m162596959 (TextMeshPro_t2521834357 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.TextMeshPro::GenerateTextMesh()
extern "C"  void TextMeshPro_GenerateTextMesh_m206993035 (TextMeshPro_t2521834357 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3[] TMPro.TextMeshPro::GetTextContainerLocalCorners()
extern "C"  Vector3U5BU5D_t1172311765* TextMeshPro_GetTextContainerLocalCorners_m2795611323 (TextMeshPro_t2521834357 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.TextMeshPro::SetMeshFilters(System.Boolean)
extern "C"  void TextMeshPro_SetMeshFilters_m3320241339 (TextMeshPro_t2521834357 * __this, bool ___state0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.TextMeshPro::SetActiveSubMeshes(System.Boolean)
extern "C"  void TextMeshPro_SetActiveSubMeshes_m2905372410 (TextMeshPro_t2521834357 * __this, bool ___state0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.TextMeshPro::ClearSubMeshObjects()
extern "C"  void TextMeshPro_ClearSubMeshObjects_m3190698320 (TextMeshPro_t2521834357 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Bounds TMPro.TextMeshPro::GetCompoundBounds()
extern "C"  Bounds_t3033363703  TextMeshPro_GetCompoundBounds_m1816606045 (TextMeshPro_t2521834357 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.TextMeshPro::UpdateSDFScale(System.Single)
extern "C"  void TextMeshPro_UpdateSDFScale_m2705210055 (TextMeshPro_t2521834357 * __this, float ___lossyScale0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.TextMeshPro::AdjustLineOffset(System.Int32,System.Int32,System.Single)
extern "C"  void TextMeshPro_AdjustLineOffset_m378244393 (TextMeshPro_t2521834357 * __this, int32_t ___startIndex0, int32_t ___endIndex1, float ___offset2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 TMPro.TextMeshPro::get_sortingLayerID()
extern "C"  int32_t TextMeshPro_get_sortingLayerID_m3499384957 (TextMeshPro_t2521834357 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.TextMeshPro::set_sortingLayerID(System.Int32)
extern "C"  void TextMeshPro_set_sortingLayerID_m1733077538 (TextMeshPro_t2521834357 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 TMPro.TextMeshPro::get_sortingOrder()
extern "C"  int32_t TextMeshPro_get_sortingOrder_m1056669633 (TextMeshPro_t2521834357 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.TextMeshPro::set_sortingOrder(System.Int32)
extern "C"  void TextMeshPro_set_sortingOrder_m4143487946 (TextMeshPro_t2521834357 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean TMPro.TextMeshPro::get_autoSizeTextContainer()
extern "C"  bool TextMeshPro_get_autoSizeTextContainer_m1110938859 (TextMeshPro_t2521834357 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.TextMeshPro::set_autoSizeTextContainer(System.Boolean)
extern "C"  void TextMeshPro_set_autoSizeTextContainer_m3833846110 (TextMeshPro_t2521834357 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// TMPro.TextContainer TMPro.TextMeshPro::get_textContainer()
extern "C"  TextContainer_t4263764796 * TextMeshPro_get_textContainer_m376322278 (TextMeshPro_t2521834357 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform TMPro.TextMeshPro::get_transform()
extern "C"  Transform_t3275118058 * TextMeshPro_get_transform_m1555929527 (TextMeshPro_t2521834357 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Renderer TMPro.TextMeshPro::get_renderer()
extern "C"  Renderer_t257310565 * TextMeshPro_get_renderer_m3118210063 (TextMeshPro_t2521834357 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Mesh TMPro.TextMeshPro::get_mesh()
extern "C"  Mesh_t1356156583 * TextMeshPro_get_mesh_m988281359 (TextMeshPro_t2521834357 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.MeshFilter TMPro.TextMeshPro::get_meshFilter()
extern "C"  MeshFilter_t3026937449 * TextMeshPro_get_meshFilter_m3793628783 (TextMeshPro_t2521834357 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// TMPro.MaskingTypes TMPro.TextMeshPro::get_maskType()
extern "C"  int32_t TextMeshPro_get_maskType_m2219730405 (TextMeshPro_t2521834357 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.TextMeshPro::set_maskType(TMPro.MaskingTypes)
extern "C"  void TextMeshPro_set_maskType_m1100239028 (TextMeshPro_t2521834357 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.TextMeshPro::SetMask(TMPro.MaskingTypes,UnityEngine.Vector4)
extern "C"  void TextMeshPro_SetMask_m3104295679 (TextMeshPro_t2521834357 * __this, int32_t ___type0, Vector4_t2243707581  ___maskCoords1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.TextMeshPro::SetMask(TMPro.MaskingTypes,UnityEngine.Vector4,System.Single,System.Single)
extern "C"  void TextMeshPro_SetMask_m1563656863 (TextMeshPro_t2521834357 * __this, int32_t ___type0, Vector4_t2243707581  ___maskCoords1, float ___softnessX2, float ___softnessY3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.TextMeshPro::SetVerticesDirty()
extern "C"  void TextMeshPro_SetVerticesDirty_m1534653503 (TextMeshPro_t2521834357 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.TextMeshPro::SetLayoutDirty()
extern "C"  void TextMeshPro_SetLayoutDirty_m2270150148 (TextMeshPro_t2521834357 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.TextMeshPro::SetMaterialDirty()
extern "C"  void TextMeshPro_SetMaterialDirty_m2181526077 (TextMeshPro_t2521834357 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.TextMeshPro::SetAllDirty()
extern "C"  void TextMeshPro_SetAllDirty_m1064558423 (TextMeshPro_t2521834357 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.TextMeshPro::Rebuild(UnityEngine.UI.CanvasUpdate)
extern "C"  void TextMeshPro_Rebuild_m4267367371 (TextMeshPro_t2521834357 * __this, int32_t ___update0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.TextMeshPro::UpdateMaterial()
extern "C"  void TextMeshPro_UpdateMaterial_m1606380262 (TextMeshPro_t2521834357 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.TextMeshPro::UpdateMeshPadding()
extern "C"  void TextMeshPro_UpdateMeshPadding_m946010029 (TextMeshPro_t2521834357 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.TextMeshPro::ForceMeshUpdate()
extern "C"  void TextMeshPro_ForceMeshUpdate_m788545381 (TextMeshPro_t2521834357 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.TextMeshPro::ForceMeshUpdate(System.Boolean)
extern "C"  void TextMeshPro_ForceMeshUpdate_m3705191946 (TextMeshPro_t2521834357 * __this, bool ___ignoreInactive0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// TMPro.TMP_TextInfo TMPro.TextMeshPro::GetTextInfo(System.String)
extern "C"  TMP_TextInfo_t2849466151 * TextMeshPro_GetTextInfo_m1406176961 (TextMeshPro_t2521834357 * __this, String_t* ___text0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.TextMeshPro::ClearMesh(System.Boolean)
extern "C"  void TextMeshPro_ClearMesh_m1120254971 (TextMeshPro_t2521834357 * __this, bool ___updateMesh0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.TextMeshPro::UpdateGeometry(UnityEngine.Mesh,System.Int32)
extern "C"  void TextMeshPro_UpdateGeometry_m3719781388 (TextMeshPro_t2521834357 * __this, Mesh_t1356156583 * ___mesh0, int32_t ___index1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.TextMeshPro::UpdateVertexData(TMPro.TMP_VertexDataUpdateFlags)
extern "C"  void TextMeshPro_UpdateVertexData_m2673112941 (TextMeshPro_t2521834357 * __this, int32_t ___flags0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.TextMeshPro::UpdateVertexData()
extern "C"  void TextMeshPro_UpdateVertexData_m620655083 (TextMeshPro_t2521834357 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.TextMeshPro::UpdateFontAsset()
extern "C"  void TextMeshPro_UpdateFontAsset_m1968831552 (TextMeshPro_t2521834357 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.TextMeshPro::CalculateLayoutInputHorizontal()
extern "C"  void TextMeshPro_CalculateLayoutInputHorizontal_m1508877512 (TextMeshPro_t2521834357 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.TextMeshPro::CalculateLayoutInputVertical()
extern "C"  void TextMeshPro_CalculateLayoutInputVertical_m2027440142 (TextMeshPro_t2521834357 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
