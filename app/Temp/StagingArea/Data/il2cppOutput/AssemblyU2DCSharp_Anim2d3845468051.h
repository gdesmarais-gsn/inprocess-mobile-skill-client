#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// AnimLayer2d[]
struct AnimLayer2dU5BU5D_t2435474137;
// AnimStateLayer2d[]
struct AnimStateLayer2dU5BU5D_t3842530230;
// AnimLibrary2d
struct AnimLibrary2d_t1737343866;
// System.Collections.Generic.List`1<AnimState2d>
struct List_1_t2730851896;
// BezierPatchGrid
struct BezierPatchGrid_t4132944383;
// BezierPatchGrid[]
struct BezierPatchGridU5BU5D_t3351608102;
// UnityEngine.Transform
struct Transform_t3275118058;

#include "AssemblyU2DCSharp_ReloadableMonoBehaviour1116404963.h"
#include "UnityEngine_UnityEngine_Matrix4x42933234003.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Anim2d
struct  Anim2d_t3845468051  : public ReloadableMonoBehaviour_t1116404963
{
public:
	// AnimLayer2d[] Anim2d::layers
	AnimLayer2dU5BU5D_t2435474137* ___layers_2;
	// AnimStateLayer2d[] Anim2d::layerStates
	AnimStateLayer2dU5BU5D_t3842530230* ___layerStates_3;
	// AnimLibrary2d Anim2d::sharedLayers
	AnimLibrary2d_t1737343866 * ___sharedLayers_4;
	// System.Int32 Anim2d::animatorFPS
	int32_t ___animatorFPS_5;
	// AnimLayer2d[] Anim2d::layersProxy
	AnimLayer2dU5BU5D_t2435474137* ___layersProxy_6;
	// System.Boolean Anim2d::enableScaleAnimation
	bool ___enableScaleAnimation_7;
	// System.Boolean Anim2d::useAnimationOffset
	bool ___useAnimationOffset_8;
	// UnityEngine.Matrix4x4 Anim2d::matrixPositionOffset
	Matrix4x4_t2933234003  ___matrixPositionOffset_9;
	// UnityEngine.Matrix4x4 Anim2d::matrixScaleOffset
	Matrix4x4_t2933234003  ___matrixScaleOffset_10;
	// System.Collections.Generic.List`1<AnimState2d> Anim2d::animStateStack
	List_1_t2730851896 * ___animStateStack_11;
	// BezierPatchGrid Anim2d::grid
	BezierPatchGrid_t4132944383 * ___grid_12;
	// BezierPatchGrid[] Anim2d::gridsToDirty
	BezierPatchGridU5BU5D_t3351608102* ___gridsToDirty_13;
	// System.Boolean Anim2d::initialized
	bool ___initialized_14;
	// UnityEngine.Transform Anim2d::root
	Transform_t3275118058 * ___root_15;

public:
	inline static int32_t get_offset_of_layers_2() { return static_cast<int32_t>(offsetof(Anim2d_t3845468051, ___layers_2)); }
	inline AnimLayer2dU5BU5D_t2435474137* get_layers_2() const { return ___layers_2; }
	inline AnimLayer2dU5BU5D_t2435474137** get_address_of_layers_2() { return &___layers_2; }
	inline void set_layers_2(AnimLayer2dU5BU5D_t2435474137* value)
	{
		___layers_2 = value;
		Il2CppCodeGenWriteBarrier(&___layers_2, value);
	}

	inline static int32_t get_offset_of_layerStates_3() { return static_cast<int32_t>(offsetof(Anim2d_t3845468051, ___layerStates_3)); }
	inline AnimStateLayer2dU5BU5D_t3842530230* get_layerStates_3() const { return ___layerStates_3; }
	inline AnimStateLayer2dU5BU5D_t3842530230** get_address_of_layerStates_3() { return &___layerStates_3; }
	inline void set_layerStates_3(AnimStateLayer2dU5BU5D_t3842530230* value)
	{
		___layerStates_3 = value;
		Il2CppCodeGenWriteBarrier(&___layerStates_3, value);
	}

	inline static int32_t get_offset_of_sharedLayers_4() { return static_cast<int32_t>(offsetof(Anim2d_t3845468051, ___sharedLayers_4)); }
	inline AnimLibrary2d_t1737343866 * get_sharedLayers_4() const { return ___sharedLayers_4; }
	inline AnimLibrary2d_t1737343866 ** get_address_of_sharedLayers_4() { return &___sharedLayers_4; }
	inline void set_sharedLayers_4(AnimLibrary2d_t1737343866 * value)
	{
		___sharedLayers_4 = value;
		Il2CppCodeGenWriteBarrier(&___sharedLayers_4, value);
	}

	inline static int32_t get_offset_of_animatorFPS_5() { return static_cast<int32_t>(offsetof(Anim2d_t3845468051, ___animatorFPS_5)); }
	inline int32_t get_animatorFPS_5() const { return ___animatorFPS_5; }
	inline int32_t* get_address_of_animatorFPS_5() { return &___animatorFPS_5; }
	inline void set_animatorFPS_5(int32_t value)
	{
		___animatorFPS_5 = value;
	}

	inline static int32_t get_offset_of_layersProxy_6() { return static_cast<int32_t>(offsetof(Anim2d_t3845468051, ___layersProxy_6)); }
	inline AnimLayer2dU5BU5D_t2435474137* get_layersProxy_6() const { return ___layersProxy_6; }
	inline AnimLayer2dU5BU5D_t2435474137** get_address_of_layersProxy_6() { return &___layersProxy_6; }
	inline void set_layersProxy_6(AnimLayer2dU5BU5D_t2435474137* value)
	{
		___layersProxy_6 = value;
		Il2CppCodeGenWriteBarrier(&___layersProxy_6, value);
	}

	inline static int32_t get_offset_of_enableScaleAnimation_7() { return static_cast<int32_t>(offsetof(Anim2d_t3845468051, ___enableScaleAnimation_7)); }
	inline bool get_enableScaleAnimation_7() const { return ___enableScaleAnimation_7; }
	inline bool* get_address_of_enableScaleAnimation_7() { return &___enableScaleAnimation_7; }
	inline void set_enableScaleAnimation_7(bool value)
	{
		___enableScaleAnimation_7 = value;
	}

	inline static int32_t get_offset_of_useAnimationOffset_8() { return static_cast<int32_t>(offsetof(Anim2d_t3845468051, ___useAnimationOffset_8)); }
	inline bool get_useAnimationOffset_8() const { return ___useAnimationOffset_8; }
	inline bool* get_address_of_useAnimationOffset_8() { return &___useAnimationOffset_8; }
	inline void set_useAnimationOffset_8(bool value)
	{
		___useAnimationOffset_8 = value;
	}

	inline static int32_t get_offset_of_matrixPositionOffset_9() { return static_cast<int32_t>(offsetof(Anim2d_t3845468051, ___matrixPositionOffset_9)); }
	inline Matrix4x4_t2933234003  get_matrixPositionOffset_9() const { return ___matrixPositionOffset_9; }
	inline Matrix4x4_t2933234003 * get_address_of_matrixPositionOffset_9() { return &___matrixPositionOffset_9; }
	inline void set_matrixPositionOffset_9(Matrix4x4_t2933234003  value)
	{
		___matrixPositionOffset_9 = value;
	}

	inline static int32_t get_offset_of_matrixScaleOffset_10() { return static_cast<int32_t>(offsetof(Anim2d_t3845468051, ___matrixScaleOffset_10)); }
	inline Matrix4x4_t2933234003  get_matrixScaleOffset_10() const { return ___matrixScaleOffset_10; }
	inline Matrix4x4_t2933234003 * get_address_of_matrixScaleOffset_10() { return &___matrixScaleOffset_10; }
	inline void set_matrixScaleOffset_10(Matrix4x4_t2933234003  value)
	{
		___matrixScaleOffset_10 = value;
	}

	inline static int32_t get_offset_of_animStateStack_11() { return static_cast<int32_t>(offsetof(Anim2d_t3845468051, ___animStateStack_11)); }
	inline List_1_t2730851896 * get_animStateStack_11() const { return ___animStateStack_11; }
	inline List_1_t2730851896 ** get_address_of_animStateStack_11() { return &___animStateStack_11; }
	inline void set_animStateStack_11(List_1_t2730851896 * value)
	{
		___animStateStack_11 = value;
		Il2CppCodeGenWriteBarrier(&___animStateStack_11, value);
	}

	inline static int32_t get_offset_of_grid_12() { return static_cast<int32_t>(offsetof(Anim2d_t3845468051, ___grid_12)); }
	inline BezierPatchGrid_t4132944383 * get_grid_12() const { return ___grid_12; }
	inline BezierPatchGrid_t4132944383 ** get_address_of_grid_12() { return &___grid_12; }
	inline void set_grid_12(BezierPatchGrid_t4132944383 * value)
	{
		___grid_12 = value;
		Il2CppCodeGenWriteBarrier(&___grid_12, value);
	}

	inline static int32_t get_offset_of_gridsToDirty_13() { return static_cast<int32_t>(offsetof(Anim2d_t3845468051, ___gridsToDirty_13)); }
	inline BezierPatchGridU5BU5D_t3351608102* get_gridsToDirty_13() const { return ___gridsToDirty_13; }
	inline BezierPatchGridU5BU5D_t3351608102** get_address_of_gridsToDirty_13() { return &___gridsToDirty_13; }
	inline void set_gridsToDirty_13(BezierPatchGridU5BU5D_t3351608102* value)
	{
		___gridsToDirty_13 = value;
		Il2CppCodeGenWriteBarrier(&___gridsToDirty_13, value);
	}

	inline static int32_t get_offset_of_initialized_14() { return static_cast<int32_t>(offsetof(Anim2d_t3845468051, ___initialized_14)); }
	inline bool get_initialized_14() const { return ___initialized_14; }
	inline bool* get_address_of_initialized_14() { return &___initialized_14; }
	inline void set_initialized_14(bool value)
	{
		___initialized_14 = value;
	}

	inline static int32_t get_offset_of_root_15() { return static_cast<int32_t>(offsetof(Anim2d_t3845468051, ___root_15)); }
	inline Transform_t3275118058 * get_root_15() const { return ___root_15; }
	inline Transform_t3275118058 ** get_address_of_root_15() { return &___root_15; }
	inline void set_root_15(Transform_t3275118058 * value)
	{
		___root_15 = value;
		Il2CppCodeGenWriteBarrier(&___root_15, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
