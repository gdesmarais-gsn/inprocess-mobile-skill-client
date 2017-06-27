#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// AnimLayer2d
struct AnimLayer2d_t2756944904;
// AnimStateLayer2d
struct AnimStateLayer2d_t3897792687;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// AnimState2d
struct  AnimState2d_t3361730764  : public Il2CppObject
{
public:
	// AnimLayer2d AnimState2d::layer
	AnimLayer2d_t2756944904 * ___layer_0;
	// AnimStateLayer2d AnimState2d::layerState
	AnimStateLayer2d_t3897792687 * ___layerState_1;
	// System.Single AnimState2d::time
	float ___time_2;
	// System.Single AnimState2d::blendFactor
	float ___blendFactor_3;
	// System.Single AnimState2d::invBlendInDuration
	float ___invBlendInDuration_4;
	// System.Single AnimState2d::speed
	float ___speed_5;
	// System.Boolean AnimState2d::looped
	bool ___looped_6;

public:
	inline static int32_t get_offset_of_layer_0() { return static_cast<int32_t>(offsetof(AnimState2d_t3361730764, ___layer_0)); }
	inline AnimLayer2d_t2756944904 * get_layer_0() const { return ___layer_0; }
	inline AnimLayer2d_t2756944904 ** get_address_of_layer_0() { return &___layer_0; }
	inline void set_layer_0(AnimLayer2d_t2756944904 * value)
	{
		___layer_0 = value;
		Il2CppCodeGenWriteBarrier(&___layer_0, value);
	}

	inline static int32_t get_offset_of_layerState_1() { return static_cast<int32_t>(offsetof(AnimState2d_t3361730764, ___layerState_1)); }
	inline AnimStateLayer2d_t3897792687 * get_layerState_1() const { return ___layerState_1; }
	inline AnimStateLayer2d_t3897792687 ** get_address_of_layerState_1() { return &___layerState_1; }
	inline void set_layerState_1(AnimStateLayer2d_t3897792687 * value)
	{
		___layerState_1 = value;
		Il2CppCodeGenWriteBarrier(&___layerState_1, value);
	}

	inline static int32_t get_offset_of_time_2() { return static_cast<int32_t>(offsetof(AnimState2d_t3361730764, ___time_2)); }
	inline float get_time_2() const { return ___time_2; }
	inline float* get_address_of_time_2() { return &___time_2; }
	inline void set_time_2(float value)
	{
		___time_2 = value;
	}

	inline static int32_t get_offset_of_blendFactor_3() { return static_cast<int32_t>(offsetof(AnimState2d_t3361730764, ___blendFactor_3)); }
	inline float get_blendFactor_3() const { return ___blendFactor_3; }
	inline float* get_address_of_blendFactor_3() { return &___blendFactor_3; }
	inline void set_blendFactor_3(float value)
	{
		___blendFactor_3 = value;
	}

	inline static int32_t get_offset_of_invBlendInDuration_4() { return static_cast<int32_t>(offsetof(AnimState2d_t3361730764, ___invBlendInDuration_4)); }
	inline float get_invBlendInDuration_4() const { return ___invBlendInDuration_4; }
	inline float* get_address_of_invBlendInDuration_4() { return &___invBlendInDuration_4; }
	inline void set_invBlendInDuration_4(float value)
	{
		___invBlendInDuration_4 = value;
	}

	inline static int32_t get_offset_of_speed_5() { return static_cast<int32_t>(offsetof(AnimState2d_t3361730764, ___speed_5)); }
	inline float get_speed_5() const { return ___speed_5; }
	inline float* get_address_of_speed_5() { return &___speed_5; }
	inline void set_speed_5(float value)
	{
		___speed_5 = value;
	}

	inline static int32_t get_offset_of_looped_6() { return static_cast<int32_t>(offsetof(AnimState2d_t3361730764, ___looped_6)); }
	inline bool get_looped_6() const { return ___looped_6; }
	inline bool* get_address_of_looped_6() { return &___looped_6; }
	inline void set_looped_6(bool value)
	{
		___looped_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
