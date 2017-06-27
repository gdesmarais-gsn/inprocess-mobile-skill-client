#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// BezierPatchQuad[]
struct BezierPatchQuadU5BU5D_t1381426741;
// UnityEngine.Transform
struct Transform_t3275118058;

#include "AssemblyU2DCSharp_ReloadableMonoBehaviour1116404963.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"
#include "UnityEngine_UnityEngine_Matrix4x42933234003.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// BezierPatchGrid
struct  BezierPatchGrid_t4132944383  : public ReloadableMonoBehaviour_t1116404963
{
public:
	// System.Int32 BezierPatchGrid::stride
	int32_t ___stride_2;
	// BezierPatchQuad[] BezierPatchGrid::quads
	BezierPatchQuadU5BU5D_t1381426741* ___quads_3;
	// System.Single BezierPatchGrid::minSubdivX
	float ___minSubdivX_4;
	// System.Single BezierPatchGrid::minSubdivY
	float ___minSubdivY_5;
	// System.Single BezierPatchGrid::maxSubdivX
	float ___maxSubdivX_6;
	// System.Single BezierPatchGrid::maxSubdivY
	float ___maxSubdivY_7;
	// System.Single BezierPatchGrid::maxWarpAutoDivs
	float ___maxWarpAutoDivs_8;
	// System.Boolean BezierPatchGrid::autoMinimizeSubdiv
	bool ___autoMinimizeSubdiv_9;
	// System.Boolean BezierPatchGrid::dynamicTesselation
	bool ___dynamicTesselation_10;
	// UnityEngine.Vector2 BezierPatchGrid::boneBase
	Vector2_t2243707579  ___boneBase_11;
	// UnityEngine.Vector2 BezierPatchGrid::boneTip
	Vector2_t2243707579  ___boneTip_12;
	// System.Boolean BezierPatchGrid::dirty
	bool ___dirty_13;
	// UnityEngine.Matrix4x4 BezierPatchGrid::tempMat
	Matrix4x4_t2933234003  ___tempMat_14;
	// System.Single BezierPatchGrid::tempZ
	float ___tempZ_15;
	// System.Single BezierPatchGrid::tempU
	float ___tempU_16;
	// System.Single BezierPatchGrid::tempV
	float ___tempV_17;
	// System.Boolean BezierPatchGrid::tempUVValid
	bool ___tempUVValid_18;
	// UnityEngine.Transform BezierPatchGrid::root
	Transform_t3275118058 * ___root_19;

public:
	inline static int32_t get_offset_of_stride_2() { return static_cast<int32_t>(offsetof(BezierPatchGrid_t4132944383, ___stride_2)); }
	inline int32_t get_stride_2() const { return ___stride_2; }
	inline int32_t* get_address_of_stride_2() { return &___stride_2; }
	inline void set_stride_2(int32_t value)
	{
		___stride_2 = value;
	}

	inline static int32_t get_offset_of_quads_3() { return static_cast<int32_t>(offsetof(BezierPatchGrid_t4132944383, ___quads_3)); }
	inline BezierPatchQuadU5BU5D_t1381426741* get_quads_3() const { return ___quads_3; }
	inline BezierPatchQuadU5BU5D_t1381426741** get_address_of_quads_3() { return &___quads_3; }
	inline void set_quads_3(BezierPatchQuadU5BU5D_t1381426741* value)
	{
		___quads_3 = value;
		Il2CppCodeGenWriteBarrier(&___quads_3, value);
	}

	inline static int32_t get_offset_of_minSubdivX_4() { return static_cast<int32_t>(offsetof(BezierPatchGrid_t4132944383, ___minSubdivX_4)); }
	inline float get_minSubdivX_4() const { return ___minSubdivX_4; }
	inline float* get_address_of_minSubdivX_4() { return &___minSubdivX_4; }
	inline void set_minSubdivX_4(float value)
	{
		___minSubdivX_4 = value;
	}

	inline static int32_t get_offset_of_minSubdivY_5() { return static_cast<int32_t>(offsetof(BezierPatchGrid_t4132944383, ___minSubdivY_5)); }
	inline float get_minSubdivY_5() const { return ___minSubdivY_5; }
	inline float* get_address_of_minSubdivY_5() { return &___minSubdivY_5; }
	inline void set_minSubdivY_5(float value)
	{
		___minSubdivY_5 = value;
	}

	inline static int32_t get_offset_of_maxSubdivX_6() { return static_cast<int32_t>(offsetof(BezierPatchGrid_t4132944383, ___maxSubdivX_6)); }
	inline float get_maxSubdivX_6() const { return ___maxSubdivX_6; }
	inline float* get_address_of_maxSubdivX_6() { return &___maxSubdivX_6; }
	inline void set_maxSubdivX_6(float value)
	{
		___maxSubdivX_6 = value;
	}

	inline static int32_t get_offset_of_maxSubdivY_7() { return static_cast<int32_t>(offsetof(BezierPatchGrid_t4132944383, ___maxSubdivY_7)); }
	inline float get_maxSubdivY_7() const { return ___maxSubdivY_7; }
	inline float* get_address_of_maxSubdivY_7() { return &___maxSubdivY_7; }
	inline void set_maxSubdivY_7(float value)
	{
		___maxSubdivY_7 = value;
	}

	inline static int32_t get_offset_of_maxWarpAutoDivs_8() { return static_cast<int32_t>(offsetof(BezierPatchGrid_t4132944383, ___maxWarpAutoDivs_8)); }
	inline float get_maxWarpAutoDivs_8() const { return ___maxWarpAutoDivs_8; }
	inline float* get_address_of_maxWarpAutoDivs_8() { return &___maxWarpAutoDivs_8; }
	inline void set_maxWarpAutoDivs_8(float value)
	{
		___maxWarpAutoDivs_8 = value;
	}

	inline static int32_t get_offset_of_autoMinimizeSubdiv_9() { return static_cast<int32_t>(offsetof(BezierPatchGrid_t4132944383, ___autoMinimizeSubdiv_9)); }
	inline bool get_autoMinimizeSubdiv_9() const { return ___autoMinimizeSubdiv_9; }
	inline bool* get_address_of_autoMinimizeSubdiv_9() { return &___autoMinimizeSubdiv_9; }
	inline void set_autoMinimizeSubdiv_9(bool value)
	{
		___autoMinimizeSubdiv_9 = value;
	}

	inline static int32_t get_offset_of_dynamicTesselation_10() { return static_cast<int32_t>(offsetof(BezierPatchGrid_t4132944383, ___dynamicTesselation_10)); }
	inline bool get_dynamicTesselation_10() const { return ___dynamicTesselation_10; }
	inline bool* get_address_of_dynamicTesselation_10() { return &___dynamicTesselation_10; }
	inline void set_dynamicTesselation_10(bool value)
	{
		___dynamicTesselation_10 = value;
	}

	inline static int32_t get_offset_of_boneBase_11() { return static_cast<int32_t>(offsetof(BezierPatchGrid_t4132944383, ___boneBase_11)); }
	inline Vector2_t2243707579  get_boneBase_11() const { return ___boneBase_11; }
	inline Vector2_t2243707579 * get_address_of_boneBase_11() { return &___boneBase_11; }
	inline void set_boneBase_11(Vector2_t2243707579  value)
	{
		___boneBase_11 = value;
	}

	inline static int32_t get_offset_of_boneTip_12() { return static_cast<int32_t>(offsetof(BezierPatchGrid_t4132944383, ___boneTip_12)); }
	inline Vector2_t2243707579  get_boneTip_12() const { return ___boneTip_12; }
	inline Vector2_t2243707579 * get_address_of_boneTip_12() { return &___boneTip_12; }
	inline void set_boneTip_12(Vector2_t2243707579  value)
	{
		___boneTip_12 = value;
	}

	inline static int32_t get_offset_of_dirty_13() { return static_cast<int32_t>(offsetof(BezierPatchGrid_t4132944383, ___dirty_13)); }
	inline bool get_dirty_13() const { return ___dirty_13; }
	inline bool* get_address_of_dirty_13() { return &___dirty_13; }
	inline void set_dirty_13(bool value)
	{
		___dirty_13 = value;
	}

	inline static int32_t get_offset_of_tempMat_14() { return static_cast<int32_t>(offsetof(BezierPatchGrid_t4132944383, ___tempMat_14)); }
	inline Matrix4x4_t2933234003  get_tempMat_14() const { return ___tempMat_14; }
	inline Matrix4x4_t2933234003 * get_address_of_tempMat_14() { return &___tempMat_14; }
	inline void set_tempMat_14(Matrix4x4_t2933234003  value)
	{
		___tempMat_14 = value;
	}

	inline static int32_t get_offset_of_tempZ_15() { return static_cast<int32_t>(offsetof(BezierPatchGrid_t4132944383, ___tempZ_15)); }
	inline float get_tempZ_15() const { return ___tempZ_15; }
	inline float* get_address_of_tempZ_15() { return &___tempZ_15; }
	inline void set_tempZ_15(float value)
	{
		___tempZ_15 = value;
	}

	inline static int32_t get_offset_of_tempU_16() { return static_cast<int32_t>(offsetof(BezierPatchGrid_t4132944383, ___tempU_16)); }
	inline float get_tempU_16() const { return ___tempU_16; }
	inline float* get_address_of_tempU_16() { return &___tempU_16; }
	inline void set_tempU_16(float value)
	{
		___tempU_16 = value;
	}

	inline static int32_t get_offset_of_tempV_17() { return static_cast<int32_t>(offsetof(BezierPatchGrid_t4132944383, ___tempV_17)); }
	inline float get_tempV_17() const { return ___tempV_17; }
	inline float* get_address_of_tempV_17() { return &___tempV_17; }
	inline void set_tempV_17(float value)
	{
		___tempV_17 = value;
	}

	inline static int32_t get_offset_of_tempUVValid_18() { return static_cast<int32_t>(offsetof(BezierPatchGrid_t4132944383, ___tempUVValid_18)); }
	inline bool get_tempUVValid_18() const { return ___tempUVValid_18; }
	inline bool* get_address_of_tempUVValid_18() { return &___tempUVValid_18; }
	inline void set_tempUVValid_18(bool value)
	{
		___tempUVValid_18 = value;
	}

	inline static int32_t get_offset_of_root_19() { return static_cast<int32_t>(offsetof(BezierPatchGrid_t4132944383, ___root_19)); }
	inline Transform_t3275118058 * get_root_19() const { return ___root_19; }
	inline Transform_t3275118058 ** get_address_of_root_19() { return &___root_19; }
	inline void set_root_19(Transform_t3275118058 * value)
	{
		___root_19 = value;
		Il2CppCodeGenWriteBarrier(&___root_19, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
