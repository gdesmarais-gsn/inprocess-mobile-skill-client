#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// BezierPatchEdge
struct BezierPatchEdge_t3252470438;

#include "mscorlib_System_Object2689449295.h"
#include "UnityEngine_UnityEngine_Color2020392075.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// BezierPatchQuad
struct  BezierPatchQuad_t3561387740  : public Il2CppObject
{
public:
	// UnityEngine.Color BezierPatchQuad::color
	Color_t2020392075  ___color_0;
	// BezierPatchEdge BezierPatchQuad::x0
	BezierPatchEdge_t3252470438 * ___x0_1;
	// BezierPatchEdge BezierPatchQuad::x1
	BezierPatchEdge_t3252470438 * ___x1_2;
	// BezierPatchEdge BezierPatchQuad::y0
	BezierPatchEdge_t3252470438 * ___y0_3;
	// BezierPatchEdge BezierPatchQuad::y1
	BezierPatchEdge_t3252470438 * ___y1_4;
	// UnityEngine.Vector2 BezierPatchQuad::uv00
	Vector2_t2243707579  ___uv00_5;
	// UnityEngine.Vector2 BezierPatchQuad::uv01
	Vector2_t2243707579  ___uv01_6;
	// UnityEngine.Vector2 BezierPatchQuad::uv10
	Vector2_t2243707579  ___uv10_7;
	// UnityEngine.Vector2 BezierPatchQuad::uv11
	Vector2_t2243707579  ___uv11_8;
	// System.Boolean BezierPatchQuad::disabled
	bool ___disabled_9;
	// System.Int32 BezierPatchQuad::subMeshIndex
	int32_t ___subMeshIndex_10;
	// System.Int32 BezierPatchQuad::initialized
	int32_t ___initialized_11;
	// System.Int32 BezierPatchQuad::quadCount
	int32_t ___quadCount_12;

public:
	inline static int32_t get_offset_of_color_0() { return static_cast<int32_t>(offsetof(BezierPatchQuad_t3561387740, ___color_0)); }
	inline Color_t2020392075  get_color_0() const { return ___color_0; }
	inline Color_t2020392075 * get_address_of_color_0() { return &___color_0; }
	inline void set_color_0(Color_t2020392075  value)
	{
		___color_0 = value;
	}

	inline static int32_t get_offset_of_x0_1() { return static_cast<int32_t>(offsetof(BezierPatchQuad_t3561387740, ___x0_1)); }
	inline BezierPatchEdge_t3252470438 * get_x0_1() const { return ___x0_1; }
	inline BezierPatchEdge_t3252470438 ** get_address_of_x0_1() { return &___x0_1; }
	inline void set_x0_1(BezierPatchEdge_t3252470438 * value)
	{
		___x0_1 = value;
		Il2CppCodeGenWriteBarrier(&___x0_1, value);
	}

	inline static int32_t get_offset_of_x1_2() { return static_cast<int32_t>(offsetof(BezierPatchQuad_t3561387740, ___x1_2)); }
	inline BezierPatchEdge_t3252470438 * get_x1_2() const { return ___x1_2; }
	inline BezierPatchEdge_t3252470438 ** get_address_of_x1_2() { return &___x1_2; }
	inline void set_x1_2(BezierPatchEdge_t3252470438 * value)
	{
		___x1_2 = value;
		Il2CppCodeGenWriteBarrier(&___x1_2, value);
	}

	inline static int32_t get_offset_of_y0_3() { return static_cast<int32_t>(offsetof(BezierPatchQuad_t3561387740, ___y0_3)); }
	inline BezierPatchEdge_t3252470438 * get_y0_3() const { return ___y0_3; }
	inline BezierPatchEdge_t3252470438 ** get_address_of_y0_3() { return &___y0_3; }
	inline void set_y0_3(BezierPatchEdge_t3252470438 * value)
	{
		___y0_3 = value;
		Il2CppCodeGenWriteBarrier(&___y0_3, value);
	}

	inline static int32_t get_offset_of_y1_4() { return static_cast<int32_t>(offsetof(BezierPatchQuad_t3561387740, ___y1_4)); }
	inline BezierPatchEdge_t3252470438 * get_y1_4() const { return ___y1_4; }
	inline BezierPatchEdge_t3252470438 ** get_address_of_y1_4() { return &___y1_4; }
	inline void set_y1_4(BezierPatchEdge_t3252470438 * value)
	{
		___y1_4 = value;
		Il2CppCodeGenWriteBarrier(&___y1_4, value);
	}

	inline static int32_t get_offset_of_uv00_5() { return static_cast<int32_t>(offsetof(BezierPatchQuad_t3561387740, ___uv00_5)); }
	inline Vector2_t2243707579  get_uv00_5() const { return ___uv00_5; }
	inline Vector2_t2243707579 * get_address_of_uv00_5() { return &___uv00_5; }
	inline void set_uv00_5(Vector2_t2243707579  value)
	{
		___uv00_5 = value;
	}

	inline static int32_t get_offset_of_uv01_6() { return static_cast<int32_t>(offsetof(BezierPatchQuad_t3561387740, ___uv01_6)); }
	inline Vector2_t2243707579  get_uv01_6() const { return ___uv01_6; }
	inline Vector2_t2243707579 * get_address_of_uv01_6() { return &___uv01_6; }
	inline void set_uv01_6(Vector2_t2243707579  value)
	{
		___uv01_6 = value;
	}

	inline static int32_t get_offset_of_uv10_7() { return static_cast<int32_t>(offsetof(BezierPatchQuad_t3561387740, ___uv10_7)); }
	inline Vector2_t2243707579  get_uv10_7() const { return ___uv10_7; }
	inline Vector2_t2243707579 * get_address_of_uv10_7() { return &___uv10_7; }
	inline void set_uv10_7(Vector2_t2243707579  value)
	{
		___uv10_7 = value;
	}

	inline static int32_t get_offset_of_uv11_8() { return static_cast<int32_t>(offsetof(BezierPatchQuad_t3561387740, ___uv11_8)); }
	inline Vector2_t2243707579  get_uv11_8() const { return ___uv11_8; }
	inline Vector2_t2243707579 * get_address_of_uv11_8() { return &___uv11_8; }
	inline void set_uv11_8(Vector2_t2243707579  value)
	{
		___uv11_8 = value;
	}

	inline static int32_t get_offset_of_disabled_9() { return static_cast<int32_t>(offsetof(BezierPatchQuad_t3561387740, ___disabled_9)); }
	inline bool get_disabled_9() const { return ___disabled_9; }
	inline bool* get_address_of_disabled_9() { return &___disabled_9; }
	inline void set_disabled_9(bool value)
	{
		___disabled_9 = value;
	}

	inline static int32_t get_offset_of_subMeshIndex_10() { return static_cast<int32_t>(offsetof(BezierPatchQuad_t3561387740, ___subMeshIndex_10)); }
	inline int32_t get_subMeshIndex_10() const { return ___subMeshIndex_10; }
	inline int32_t* get_address_of_subMeshIndex_10() { return &___subMeshIndex_10; }
	inline void set_subMeshIndex_10(int32_t value)
	{
		___subMeshIndex_10 = value;
	}

	inline static int32_t get_offset_of_initialized_11() { return static_cast<int32_t>(offsetof(BezierPatchQuad_t3561387740, ___initialized_11)); }
	inline int32_t get_initialized_11() const { return ___initialized_11; }
	inline int32_t* get_address_of_initialized_11() { return &___initialized_11; }
	inline void set_initialized_11(int32_t value)
	{
		___initialized_11 = value;
	}

	inline static int32_t get_offset_of_quadCount_12() { return static_cast<int32_t>(offsetof(BezierPatchQuad_t3561387740, ___quadCount_12)); }
	inline int32_t get_quadCount_12() const { return ___quadCount_12; }
	inline int32_t* get_address_of_quadCount_12() { return &___quadCount_12; }
	inline void set_quadCount_12(int32_t value)
	{
		___quadCount_12 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
