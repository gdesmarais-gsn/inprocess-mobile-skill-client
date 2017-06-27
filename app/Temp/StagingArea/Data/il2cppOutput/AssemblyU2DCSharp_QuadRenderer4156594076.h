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
// QuadNode[]
struct QuadNodeU5BU5D_t2665018502;
// UnityEngine.Mesh
struct Mesh_t1356156583;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t1172311765;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_t686124026;
// UnityEngine.SkinnedMeshRenderer
struct SkinnedMeshRenderer_t4220419316;
// UnityEngine.Material
struct Material_t193706927;
// UnityEngine.Material[]
struct MaterialU5BU5D_t3123989686;
// QuadRenderer/SubMeshData[]
struct SubMeshDataU5BU5D_t2187825661;
// System.Collections.Generic.List`1<QuadRenderer>
struct List_1_t3525715208;
// CoroutineHandle
struct CoroutineHandle_t3736301024;
// Delegates/Action
struct Action_t1511407763;

#include "AssemblyU2DCSharp_ReloadableMonoBehaviour1116404963.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// QuadRenderer
struct  QuadRenderer_t4156594076  : public ReloadableMonoBehaviour_t1116404963
{
public:
	// UnityEngine.Transform QuadRenderer::root
	Transform_t3275118058 * ___root_2;
	// QuadNode[] QuadRenderer::grids
	QuadNodeU5BU5D_t2665018502* ___grids_3;
	// UnityEngine.Mesh QuadRenderer::mMesh
	Mesh_t1356156583 * ___mMesh_4;
	// UnityEngine.Vector3[] QuadRenderer::mVertexBuffer
	Vector3U5BU5D_t1172311765* ___mVertexBuffer_5;
	// UnityEngine.Vector2[] QuadRenderer::mCoordBuffer
	Vector2U5BU5D_t686124026* ___mCoordBuffer_6;
	// UnityEngine.SkinnedMeshRenderer QuadRenderer::mRenderer
	SkinnedMeshRenderer_t4220419316 * ___mRenderer_7;
	// UnityEngine.Material QuadRenderer::material
	Material_t193706927 * ___material_10;
	// UnityEngine.Material[] QuadRenderer::materials
	MaterialU5BU5D_t3123989686* ___materials_11;
	// System.Int32 QuadRenderer::numQuads
	int32_t ___numQuads_12;
	// QuadRenderer/SubMeshData[] QuadRenderer::subMeshData
	SubMeshDataU5BU5D_t2187825661* ___subMeshData_13;
	// System.Int32 QuadRenderer::numSubMeshes
	int32_t ___numSubMeshes_14;
	// UnityEngine.Transform QuadRenderer::sortingPivot
	Transform_t3275118058 * ___sortingPivot_15;
	// UnityEngine.Vector3 QuadRenderer::prevLocalPivot
	Vector3_t2243707580  ___prevLocalPivot_16;
	// System.Boolean QuadRenderer::pendingDirty
	bool ___pendingDirty_19;

public:
	inline static int32_t get_offset_of_root_2() { return static_cast<int32_t>(offsetof(QuadRenderer_t4156594076, ___root_2)); }
	inline Transform_t3275118058 * get_root_2() const { return ___root_2; }
	inline Transform_t3275118058 ** get_address_of_root_2() { return &___root_2; }
	inline void set_root_2(Transform_t3275118058 * value)
	{
		___root_2 = value;
		Il2CppCodeGenWriteBarrier(&___root_2, value);
	}

	inline static int32_t get_offset_of_grids_3() { return static_cast<int32_t>(offsetof(QuadRenderer_t4156594076, ___grids_3)); }
	inline QuadNodeU5BU5D_t2665018502* get_grids_3() const { return ___grids_3; }
	inline QuadNodeU5BU5D_t2665018502** get_address_of_grids_3() { return &___grids_3; }
	inline void set_grids_3(QuadNodeU5BU5D_t2665018502* value)
	{
		___grids_3 = value;
		Il2CppCodeGenWriteBarrier(&___grids_3, value);
	}

	inline static int32_t get_offset_of_mMesh_4() { return static_cast<int32_t>(offsetof(QuadRenderer_t4156594076, ___mMesh_4)); }
	inline Mesh_t1356156583 * get_mMesh_4() const { return ___mMesh_4; }
	inline Mesh_t1356156583 ** get_address_of_mMesh_4() { return &___mMesh_4; }
	inline void set_mMesh_4(Mesh_t1356156583 * value)
	{
		___mMesh_4 = value;
		Il2CppCodeGenWriteBarrier(&___mMesh_4, value);
	}

	inline static int32_t get_offset_of_mVertexBuffer_5() { return static_cast<int32_t>(offsetof(QuadRenderer_t4156594076, ___mVertexBuffer_5)); }
	inline Vector3U5BU5D_t1172311765* get_mVertexBuffer_5() const { return ___mVertexBuffer_5; }
	inline Vector3U5BU5D_t1172311765** get_address_of_mVertexBuffer_5() { return &___mVertexBuffer_5; }
	inline void set_mVertexBuffer_5(Vector3U5BU5D_t1172311765* value)
	{
		___mVertexBuffer_5 = value;
		Il2CppCodeGenWriteBarrier(&___mVertexBuffer_5, value);
	}

	inline static int32_t get_offset_of_mCoordBuffer_6() { return static_cast<int32_t>(offsetof(QuadRenderer_t4156594076, ___mCoordBuffer_6)); }
	inline Vector2U5BU5D_t686124026* get_mCoordBuffer_6() const { return ___mCoordBuffer_6; }
	inline Vector2U5BU5D_t686124026** get_address_of_mCoordBuffer_6() { return &___mCoordBuffer_6; }
	inline void set_mCoordBuffer_6(Vector2U5BU5D_t686124026* value)
	{
		___mCoordBuffer_6 = value;
		Il2CppCodeGenWriteBarrier(&___mCoordBuffer_6, value);
	}

	inline static int32_t get_offset_of_mRenderer_7() { return static_cast<int32_t>(offsetof(QuadRenderer_t4156594076, ___mRenderer_7)); }
	inline SkinnedMeshRenderer_t4220419316 * get_mRenderer_7() const { return ___mRenderer_7; }
	inline SkinnedMeshRenderer_t4220419316 ** get_address_of_mRenderer_7() { return &___mRenderer_7; }
	inline void set_mRenderer_7(SkinnedMeshRenderer_t4220419316 * value)
	{
		___mRenderer_7 = value;
		Il2CppCodeGenWriteBarrier(&___mRenderer_7, value);
	}

	inline static int32_t get_offset_of_material_10() { return static_cast<int32_t>(offsetof(QuadRenderer_t4156594076, ___material_10)); }
	inline Material_t193706927 * get_material_10() const { return ___material_10; }
	inline Material_t193706927 ** get_address_of_material_10() { return &___material_10; }
	inline void set_material_10(Material_t193706927 * value)
	{
		___material_10 = value;
		Il2CppCodeGenWriteBarrier(&___material_10, value);
	}

	inline static int32_t get_offset_of_materials_11() { return static_cast<int32_t>(offsetof(QuadRenderer_t4156594076, ___materials_11)); }
	inline MaterialU5BU5D_t3123989686* get_materials_11() const { return ___materials_11; }
	inline MaterialU5BU5D_t3123989686** get_address_of_materials_11() { return &___materials_11; }
	inline void set_materials_11(MaterialU5BU5D_t3123989686* value)
	{
		___materials_11 = value;
		Il2CppCodeGenWriteBarrier(&___materials_11, value);
	}

	inline static int32_t get_offset_of_numQuads_12() { return static_cast<int32_t>(offsetof(QuadRenderer_t4156594076, ___numQuads_12)); }
	inline int32_t get_numQuads_12() const { return ___numQuads_12; }
	inline int32_t* get_address_of_numQuads_12() { return &___numQuads_12; }
	inline void set_numQuads_12(int32_t value)
	{
		___numQuads_12 = value;
	}

	inline static int32_t get_offset_of_subMeshData_13() { return static_cast<int32_t>(offsetof(QuadRenderer_t4156594076, ___subMeshData_13)); }
	inline SubMeshDataU5BU5D_t2187825661* get_subMeshData_13() const { return ___subMeshData_13; }
	inline SubMeshDataU5BU5D_t2187825661** get_address_of_subMeshData_13() { return &___subMeshData_13; }
	inline void set_subMeshData_13(SubMeshDataU5BU5D_t2187825661* value)
	{
		___subMeshData_13 = value;
		Il2CppCodeGenWriteBarrier(&___subMeshData_13, value);
	}

	inline static int32_t get_offset_of_numSubMeshes_14() { return static_cast<int32_t>(offsetof(QuadRenderer_t4156594076, ___numSubMeshes_14)); }
	inline int32_t get_numSubMeshes_14() const { return ___numSubMeshes_14; }
	inline int32_t* get_address_of_numSubMeshes_14() { return &___numSubMeshes_14; }
	inline void set_numSubMeshes_14(int32_t value)
	{
		___numSubMeshes_14 = value;
	}

	inline static int32_t get_offset_of_sortingPivot_15() { return static_cast<int32_t>(offsetof(QuadRenderer_t4156594076, ___sortingPivot_15)); }
	inline Transform_t3275118058 * get_sortingPivot_15() const { return ___sortingPivot_15; }
	inline Transform_t3275118058 ** get_address_of_sortingPivot_15() { return &___sortingPivot_15; }
	inline void set_sortingPivot_15(Transform_t3275118058 * value)
	{
		___sortingPivot_15 = value;
		Il2CppCodeGenWriteBarrier(&___sortingPivot_15, value);
	}

	inline static int32_t get_offset_of_prevLocalPivot_16() { return static_cast<int32_t>(offsetof(QuadRenderer_t4156594076, ___prevLocalPivot_16)); }
	inline Vector3_t2243707580  get_prevLocalPivot_16() const { return ___prevLocalPivot_16; }
	inline Vector3_t2243707580 * get_address_of_prevLocalPivot_16() { return &___prevLocalPivot_16; }
	inline void set_prevLocalPivot_16(Vector3_t2243707580  value)
	{
		___prevLocalPivot_16 = value;
	}

	inline static int32_t get_offset_of_pendingDirty_19() { return static_cast<int32_t>(offsetof(QuadRenderer_t4156594076, ___pendingDirty_19)); }
	inline bool get_pendingDirty_19() const { return ___pendingDirty_19; }
	inline bool* get_address_of_pendingDirty_19() { return &___pendingDirty_19; }
	inline void set_pendingDirty_19(bool value)
	{
		___pendingDirty_19 = value;
	}
};

struct QuadRenderer_t4156594076_StaticFields
{
public:
	// System.Collections.Generic.List`1<QuadRenderer> QuadRenderer::s_dirtyQuads
	List_1_t3525715208 * ___s_dirtyQuads_17;
	// CoroutineHandle QuadRenderer::s_dirtyCoro
	CoroutineHandle_t3736301024 * ___s_dirtyCoro_18;
	// Delegates/Action QuadRenderer::<>f__mg$cache0
	Action_t1511407763 * ___U3CU3Ef__mgU24cache0_20;
	// Delegates/Action QuadRenderer::<>f__mg$cache1
	Action_t1511407763 * ___U3CU3Ef__mgU24cache1_21;

public:
	inline static int32_t get_offset_of_s_dirtyQuads_17() { return static_cast<int32_t>(offsetof(QuadRenderer_t4156594076_StaticFields, ___s_dirtyQuads_17)); }
	inline List_1_t3525715208 * get_s_dirtyQuads_17() const { return ___s_dirtyQuads_17; }
	inline List_1_t3525715208 ** get_address_of_s_dirtyQuads_17() { return &___s_dirtyQuads_17; }
	inline void set_s_dirtyQuads_17(List_1_t3525715208 * value)
	{
		___s_dirtyQuads_17 = value;
		Il2CppCodeGenWriteBarrier(&___s_dirtyQuads_17, value);
	}

	inline static int32_t get_offset_of_s_dirtyCoro_18() { return static_cast<int32_t>(offsetof(QuadRenderer_t4156594076_StaticFields, ___s_dirtyCoro_18)); }
	inline CoroutineHandle_t3736301024 * get_s_dirtyCoro_18() const { return ___s_dirtyCoro_18; }
	inline CoroutineHandle_t3736301024 ** get_address_of_s_dirtyCoro_18() { return &___s_dirtyCoro_18; }
	inline void set_s_dirtyCoro_18(CoroutineHandle_t3736301024 * value)
	{
		___s_dirtyCoro_18 = value;
		Il2CppCodeGenWriteBarrier(&___s_dirtyCoro_18, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache0_20() { return static_cast<int32_t>(offsetof(QuadRenderer_t4156594076_StaticFields, ___U3CU3Ef__mgU24cache0_20)); }
	inline Action_t1511407763 * get_U3CU3Ef__mgU24cache0_20() const { return ___U3CU3Ef__mgU24cache0_20; }
	inline Action_t1511407763 ** get_address_of_U3CU3Ef__mgU24cache0_20() { return &___U3CU3Ef__mgU24cache0_20; }
	inline void set_U3CU3Ef__mgU24cache0_20(Action_t1511407763 * value)
	{
		___U3CU3Ef__mgU24cache0_20 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__mgU24cache0_20, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache1_21() { return static_cast<int32_t>(offsetof(QuadRenderer_t4156594076_StaticFields, ___U3CU3Ef__mgU24cache1_21)); }
	inline Action_t1511407763 * get_U3CU3Ef__mgU24cache1_21() const { return ___U3CU3Ef__mgU24cache1_21; }
	inline Action_t1511407763 ** get_address_of_U3CU3Ef__mgU24cache1_21() { return &___U3CU3Ef__mgU24cache1_21; }
	inline void set_U3CU3Ef__mgU24cache1_21(Action_t1511407763 * value)
	{
		___U3CU3Ef__mgU24cache1_21 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__mgU24cache1_21, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
