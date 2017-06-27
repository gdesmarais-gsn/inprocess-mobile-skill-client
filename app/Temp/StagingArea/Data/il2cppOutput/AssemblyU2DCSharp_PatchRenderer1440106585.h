#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Transform
struct Transform_t3275118058;
// BezierPatchGrid[]
struct BezierPatchGridU5BU5D_t3351608102;
// UnityEngine.Mesh[]
struct MeshU5BU5D_t894826206;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t1172311765;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_t686124026;
// UnityEngine.Color32[]
struct Color32U5BU5D_t30278651;
// UnityEngine.MeshRenderer
struct MeshRenderer_t1268241104;
// UnityEngine.MeshFilter
struct MeshFilter_t3026937449;
// UnityEngine.Material
struct Material_t193706927;
// UnityEngine.Material[]
struct MaterialU5BU5D_t3123989686;
// PatchRenderer/SubMeshData[]
struct SubMeshDataU5BU5D_t568174676;
// CoroutineHandle
struct CoroutineHandle_t3736301024;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "AssemblyU2DCSharp_PatchRenderer_MeshType533473749.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PatchRenderer
struct  PatchRenderer_t1440106585  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Transform PatchRenderer::root
	Transform_t3275118058 * ___root_2;
	// BezierPatchGrid[] PatchRenderer::grids
	BezierPatchGridU5BU5D_t3351608102* ___grids_3;
	// PatchRenderer/MeshType PatchRenderer::meshType
	int32_t ___meshType_4;
	// System.Int32 PatchRenderer::mMaxMesh
	int32_t ___mMaxMesh_6;
	// UnityEngine.Mesh[] PatchRenderer::mMesh
	MeshU5BU5D_t894826206* ___mMesh_7;
	// System.Int32 PatchRenderer::mCurrentMesh
	int32_t ___mCurrentMesh_8;
	// UnityEngine.Vector3[] PatchRenderer::mVertexBuffer
	Vector3U5BU5D_t1172311765* ___mVertexBuffer_9;
	// UnityEngine.Vector2[] PatchRenderer::mCoordBuffer
	Vector2U5BU5D_t686124026* ___mCoordBuffer_10;
	// UnityEngine.Color32[] PatchRenderer::mColorBuffer
	Color32U5BU5D_t30278651* ___mColorBuffer_11;
	// UnityEngine.MeshRenderer PatchRenderer::mRenderer
	MeshRenderer_t1268241104 * ___mRenderer_12;
	// UnityEngine.MeshFilter PatchRenderer::mFilter
	MeshFilter_t3026937449 * ___mFilter_13;
	// UnityEngine.Material PatchRenderer::material
	Material_t193706927 * ___material_16;
	// UnityEngine.Material[] PatchRenderer::materials
	MaterialU5BU5D_t3123989686* ___materials_17;
	// System.Boolean PatchRenderer::shaderInScreenSpace
	bool ___shaderInScreenSpace_18;
	// System.Boolean PatchRenderer::doNotUseDoubleBuffer
	bool ___doNotUseDoubleBuffer_19;
	// System.Int32 PatchRenderer::numQuads
	int32_t ___numQuads_20;
	// System.Int32 PatchRenderer::maxNumQuads
	int32_t ___maxNumQuads_21;
	// System.Boolean PatchRenderer::reserveVertsMax
	bool ___reserveVertsMax_22;
	// PatchRenderer/SubMeshData[] PatchRenderer::subMeshData
	SubMeshDataU5BU5D_t568174676* ___subMeshData_23;
	// System.Int32 PatchRenderer::numSubMeshes
	int32_t ___numSubMeshes_24;
	// UnityEngine.Transform PatchRenderer::sortingPivot
	Transform_t3275118058 * ___sortingPivot_25;
	// UnityEngine.Vector3 PatchRenderer::prevLocalPivot
	Vector3_t2243707580  ___prevLocalPivot_26;
	// System.Boolean PatchRenderer::isVisibleByCamera
	bool ___isVisibleByCamera_27;
	// System.Boolean PatchRenderer::isFirstTimeToUpdateMesh
	bool ___isFirstTimeToUpdateMesh_28;
	// CoroutineHandle PatchRenderer::updateCoro
	CoroutineHandle_t3736301024 * ___updateCoro_29;
	// System.Boolean PatchRenderer::running
	bool ___running_30;

public:
	inline static int32_t get_offset_of_root_2() { return static_cast<int32_t>(offsetof(PatchRenderer_t1440106585, ___root_2)); }
	inline Transform_t3275118058 * get_root_2() const { return ___root_2; }
	inline Transform_t3275118058 ** get_address_of_root_2() { return &___root_2; }
	inline void set_root_2(Transform_t3275118058 * value)
	{
		___root_2 = value;
		Il2CppCodeGenWriteBarrier(&___root_2, value);
	}

	inline static int32_t get_offset_of_grids_3() { return static_cast<int32_t>(offsetof(PatchRenderer_t1440106585, ___grids_3)); }
	inline BezierPatchGridU5BU5D_t3351608102* get_grids_3() const { return ___grids_3; }
	inline BezierPatchGridU5BU5D_t3351608102** get_address_of_grids_3() { return &___grids_3; }
	inline void set_grids_3(BezierPatchGridU5BU5D_t3351608102* value)
	{
		___grids_3 = value;
		Il2CppCodeGenWriteBarrier(&___grids_3, value);
	}

	inline static int32_t get_offset_of_meshType_4() { return static_cast<int32_t>(offsetof(PatchRenderer_t1440106585, ___meshType_4)); }
	inline int32_t get_meshType_4() const { return ___meshType_4; }
	inline int32_t* get_address_of_meshType_4() { return &___meshType_4; }
	inline void set_meshType_4(int32_t value)
	{
		___meshType_4 = value;
	}

	inline static int32_t get_offset_of_mMaxMesh_6() { return static_cast<int32_t>(offsetof(PatchRenderer_t1440106585, ___mMaxMesh_6)); }
	inline int32_t get_mMaxMesh_6() const { return ___mMaxMesh_6; }
	inline int32_t* get_address_of_mMaxMesh_6() { return &___mMaxMesh_6; }
	inline void set_mMaxMesh_6(int32_t value)
	{
		___mMaxMesh_6 = value;
	}

	inline static int32_t get_offset_of_mMesh_7() { return static_cast<int32_t>(offsetof(PatchRenderer_t1440106585, ___mMesh_7)); }
	inline MeshU5BU5D_t894826206* get_mMesh_7() const { return ___mMesh_7; }
	inline MeshU5BU5D_t894826206** get_address_of_mMesh_7() { return &___mMesh_7; }
	inline void set_mMesh_7(MeshU5BU5D_t894826206* value)
	{
		___mMesh_7 = value;
		Il2CppCodeGenWriteBarrier(&___mMesh_7, value);
	}

	inline static int32_t get_offset_of_mCurrentMesh_8() { return static_cast<int32_t>(offsetof(PatchRenderer_t1440106585, ___mCurrentMesh_8)); }
	inline int32_t get_mCurrentMesh_8() const { return ___mCurrentMesh_8; }
	inline int32_t* get_address_of_mCurrentMesh_8() { return &___mCurrentMesh_8; }
	inline void set_mCurrentMesh_8(int32_t value)
	{
		___mCurrentMesh_8 = value;
	}

	inline static int32_t get_offset_of_mVertexBuffer_9() { return static_cast<int32_t>(offsetof(PatchRenderer_t1440106585, ___mVertexBuffer_9)); }
	inline Vector3U5BU5D_t1172311765* get_mVertexBuffer_9() const { return ___mVertexBuffer_9; }
	inline Vector3U5BU5D_t1172311765** get_address_of_mVertexBuffer_9() { return &___mVertexBuffer_9; }
	inline void set_mVertexBuffer_9(Vector3U5BU5D_t1172311765* value)
	{
		___mVertexBuffer_9 = value;
		Il2CppCodeGenWriteBarrier(&___mVertexBuffer_9, value);
	}

	inline static int32_t get_offset_of_mCoordBuffer_10() { return static_cast<int32_t>(offsetof(PatchRenderer_t1440106585, ___mCoordBuffer_10)); }
	inline Vector2U5BU5D_t686124026* get_mCoordBuffer_10() const { return ___mCoordBuffer_10; }
	inline Vector2U5BU5D_t686124026** get_address_of_mCoordBuffer_10() { return &___mCoordBuffer_10; }
	inline void set_mCoordBuffer_10(Vector2U5BU5D_t686124026* value)
	{
		___mCoordBuffer_10 = value;
		Il2CppCodeGenWriteBarrier(&___mCoordBuffer_10, value);
	}

	inline static int32_t get_offset_of_mColorBuffer_11() { return static_cast<int32_t>(offsetof(PatchRenderer_t1440106585, ___mColorBuffer_11)); }
	inline Color32U5BU5D_t30278651* get_mColorBuffer_11() const { return ___mColorBuffer_11; }
	inline Color32U5BU5D_t30278651** get_address_of_mColorBuffer_11() { return &___mColorBuffer_11; }
	inline void set_mColorBuffer_11(Color32U5BU5D_t30278651* value)
	{
		___mColorBuffer_11 = value;
		Il2CppCodeGenWriteBarrier(&___mColorBuffer_11, value);
	}

	inline static int32_t get_offset_of_mRenderer_12() { return static_cast<int32_t>(offsetof(PatchRenderer_t1440106585, ___mRenderer_12)); }
	inline MeshRenderer_t1268241104 * get_mRenderer_12() const { return ___mRenderer_12; }
	inline MeshRenderer_t1268241104 ** get_address_of_mRenderer_12() { return &___mRenderer_12; }
	inline void set_mRenderer_12(MeshRenderer_t1268241104 * value)
	{
		___mRenderer_12 = value;
		Il2CppCodeGenWriteBarrier(&___mRenderer_12, value);
	}

	inline static int32_t get_offset_of_mFilter_13() { return static_cast<int32_t>(offsetof(PatchRenderer_t1440106585, ___mFilter_13)); }
	inline MeshFilter_t3026937449 * get_mFilter_13() const { return ___mFilter_13; }
	inline MeshFilter_t3026937449 ** get_address_of_mFilter_13() { return &___mFilter_13; }
	inline void set_mFilter_13(MeshFilter_t3026937449 * value)
	{
		___mFilter_13 = value;
		Il2CppCodeGenWriteBarrier(&___mFilter_13, value);
	}

	inline static int32_t get_offset_of_material_16() { return static_cast<int32_t>(offsetof(PatchRenderer_t1440106585, ___material_16)); }
	inline Material_t193706927 * get_material_16() const { return ___material_16; }
	inline Material_t193706927 ** get_address_of_material_16() { return &___material_16; }
	inline void set_material_16(Material_t193706927 * value)
	{
		___material_16 = value;
		Il2CppCodeGenWriteBarrier(&___material_16, value);
	}

	inline static int32_t get_offset_of_materials_17() { return static_cast<int32_t>(offsetof(PatchRenderer_t1440106585, ___materials_17)); }
	inline MaterialU5BU5D_t3123989686* get_materials_17() const { return ___materials_17; }
	inline MaterialU5BU5D_t3123989686** get_address_of_materials_17() { return &___materials_17; }
	inline void set_materials_17(MaterialU5BU5D_t3123989686* value)
	{
		___materials_17 = value;
		Il2CppCodeGenWriteBarrier(&___materials_17, value);
	}

	inline static int32_t get_offset_of_shaderInScreenSpace_18() { return static_cast<int32_t>(offsetof(PatchRenderer_t1440106585, ___shaderInScreenSpace_18)); }
	inline bool get_shaderInScreenSpace_18() const { return ___shaderInScreenSpace_18; }
	inline bool* get_address_of_shaderInScreenSpace_18() { return &___shaderInScreenSpace_18; }
	inline void set_shaderInScreenSpace_18(bool value)
	{
		___shaderInScreenSpace_18 = value;
	}

	inline static int32_t get_offset_of_doNotUseDoubleBuffer_19() { return static_cast<int32_t>(offsetof(PatchRenderer_t1440106585, ___doNotUseDoubleBuffer_19)); }
	inline bool get_doNotUseDoubleBuffer_19() const { return ___doNotUseDoubleBuffer_19; }
	inline bool* get_address_of_doNotUseDoubleBuffer_19() { return &___doNotUseDoubleBuffer_19; }
	inline void set_doNotUseDoubleBuffer_19(bool value)
	{
		___doNotUseDoubleBuffer_19 = value;
	}

	inline static int32_t get_offset_of_numQuads_20() { return static_cast<int32_t>(offsetof(PatchRenderer_t1440106585, ___numQuads_20)); }
	inline int32_t get_numQuads_20() const { return ___numQuads_20; }
	inline int32_t* get_address_of_numQuads_20() { return &___numQuads_20; }
	inline void set_numQuads_20(int32_t value)
	{
		___numQuads_20 = value;
	}

	inline static int32_t get_offset_of_maxNumQuads_21() { return static_cast<int32_t>(offsetof(PatchRenderer_t1440106585, ___maxNumQuads_21)); }
	inline int32_t get_maxNumQuads_21() const { return ___maxNumQuads_21; }
	inline int32_t* get_address_of_maxNumQuads_21() { return &___maxNumQuads_21; }
	inline void set_maxNumQuads_21(int32_t value)
	{
		___maxNumQuads_21 = value;
	}

	inline static int32_t get_offset_of_reserveVertsMax_22() { return static_cast<int32_t>(offsetof(PatchRenderer_t1440106585, ___reserveVertsMax_22)); }
	inline bool get_reserveVertsMax_22() const { return ___reserveVertsMax_22; }
	inline bool* get_address_of_reserveVertsMax_22() { return &___reserveVertsMax_22; }
	inline void set_reserveVertsMax_22(bool value)
	{
		___reserveVertsMax_22 = value;
	}

	inline static int32_t get_offset_of_subMeshData_23() { return static_cast<int32_t>(offsetof(PatchRenderer_t1440106585, ___subMeshData_23)); }
	inline SubMeshDataU5BU5D_t568174676* get_subMeshData_23() const { return ___subMeshData_23; }
	inline SubMeshDataU5BU5D_t568174676** get_address_of_subMeshData_23() { return &___subMeshData_23; }
	inline void set_subMeshData_23(SubMeshDataU5BU5D_t568174676* value)
	{
		___subMeshData_23 = value;
		Il2CppCodeGenWriteBarrier(&___subMeshData_23, value);
	}

	inline static int32_t get_offset_of_numSubMeshes_24() { return static_cast<int32_t>(offsetof(PatchRenderer_t1440106585, ___numSubMeshes_24)); }
	inline int32_t get_numSubMeshes_24() const { return ___numSubMeshes_24; }
	inline int32_t* get_address_of_numSubMeshes_24() { return &___numSubMeshes_24; }
	inline void set_numSubMeshes_24(int32_t value)
	{
		___numSubMeshes_24 = value;
	}

	inline static int32_t get_offset_of_sortingPivot_25() { return static_cast<int32_t>(offsetof(PatchRenderer_t1440106585, ___sortingPivot_25)); }
	inline Transform_t3275118058 * get_sortingPivot_25() const { return ___sortingPivot_25; }
	inline Transform_t3275118058 ** get_address_of_sortingPivot_25() { return &___sortingPivot_25; }
	inline void set_sortingPivot_25(Transform_t3275118058 * value)
	{
		___sortingPivot_25 = value;
		Il2CppCodeGenWriteBarrier(&___sortingPivot_25, value);
	}

	inline static int32_t get_offset_of_prevLocalPivot_26() { return static_cast<int32_t>(offsetof(PatchRenderer_t1440106585, ___prevLocalPivot_26)); }
	inline Vector3_t2243707580  get_prevLocalPivot_26() const { return ___prevLocalPivot_26; }
	inline Vector3_t2243707580 * get_address_of_prevLocalPivot_26() { return &___prevLocalPivot_26; }
	inline void set_prevLocalPivot_26(Vector3_t2243707580  value)
	{
		___prevLocalPivot_26 = value;
	}

	inline static int32_t get_offset_of_isVisibleByCamera_27() { return static_cast<int32_t>(offsetof(PatchRenderer_t1440106585, ___isVisibleByCamera_27)); }
	inline bool get_isVisibleByCamera_27() const { return ___isVisibleByCamera_27; }
	inline bool* get_address_of_isVisibleByCamera_27() { return &___isVisibleByCamera_27; }
	inline void set_isVisibleByCamera_27(bool value)
	{
		___isVisibleByCamera_27 = value;
	}

	inline static int32_t get_offset_of_isFirstTimeToUpdateMesh_28() { return static_cast<int32_t>(offsetof(PatchRenderer_t1440106585, ___isFirstTimeToUpdateMesh_28)); }
	inline bool get_isFirstTimeToUpdateMesh_28() const { return ___isFirstTimeToUpdateMesh_28; }
	inline bool* get_address_of_isFirstTimeToUpdateMesh_28() { return &___isFirstTimeToUpdateMesh_28; }
	inline void set_isFirstTimeToUpdateMesh_28(bool value)
	{
		___isFirstTimeToUpdateMesh_28 = value;
	}

	inline static int32_t get_offset_of_updateCoro_29() { return static_cast<int32_t>(offsetof(PatchRenderer_t1440106585, ___updateCoro_29)); }
	inline CoroutineHandle_t3736301024 * get_updateCoro_29() const { return ___updateCoro_29; }
	inline CoroutineHandle_t3736301024 ** get_address_of_updateCoro_29() { return &___updateCoro_29; }
	inline void set_updateCoro_29(CoroutineHandle_t3736301024 * value)
	{
		___updateCoro_29 = value;
		Il2CppCodeGenWriteBarrier(&___updateCoro_29, value);
	}

	inline static int32_t get_offset_of_running_30() { return static_cast<int32_t>(offsetof(PatchRenderer_t1440106585, ___running_30)); }
	inline bool get_running_30() const { return ___running_30; }
	inline bool* get_address_of_running_30() { return &___running_30; }
	inline void set_running_30(bool value)
	{
		___running_30 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
