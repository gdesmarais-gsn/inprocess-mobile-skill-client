#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "mscorlib_System_Object2689449295.h"
#include "UnityEngine_UnityEngine_Color2020392075.h"
#include "UnityEngine_UnityEngine_FogMode2386547659.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SceneryChanger/Fog
struct  Fog_t2628220434  : public Il2CppObject
{
public:
	// System.Boolean SceneryChanger/Fog::fogSettingsEnabled
	bool ___fogSettingsEnabled_0;
	// System.Boolean SceneryChanger/Fog::fogEnable
	bool ___fogEnable_1;
	// UnityEngine.Color SceneryChanger/Fog::fogColor
	Color_t2020392075  ___fogColor_2;
	// UnityEngine.FogMode SceneryChanger/Fog::fogMode
	int32_t ___fogMode_3;
	// System.Single SceneryChanger/Fog::fogDensity
	float ___fogDensity_4;
	// System.Single SceneryChanger/Fog::linearFogStart
	float ___linearFogStart_5;
	// System.Single SceneryChanger/Fog::linearFogEnd
	float ___linearFogEnd_6;

public:
	inline static int32_t get_offset_of_fogSettingsEnabled_0() { return static_cast<int32_t>(offsetof(Fog_t2628220434, ___fogSettingsEnabled_0)); }
	inline bool get_fogSettingsEnabled_0() const { return ___fogSettingsEnabled_0; }
	inline bool* get_address_of_fogSettingsEnabled_0() { return &___fogSettingsEnabled_0; }
	inline void set_fogSettingsEnabled_0(bool value)
	{
		___fogSettingsEnabled_0 = value;
	}

	inline static int32_t get_offset_of_fogEnable_1() { return static_cast<int32_t>(offsetof(Fog_t2628220434, ___fogEnable_1)); }
	inline bool get_fogEnable_1() const { return ___fogEnable_1; }
	inline bool* get_address_of_fogEnable_1() { return &___fogEnable_1; }
	inline void set_fogEnable_1(bool value)
	{
		___fogEnable_1 = value;
	}

	inline static int32_t get_offset_of_fogColor_2() { return static_cast<int32_t>(offsetof(Fog_t2628220434, ___fogColor_2)); }
	inline Color_t2020392075  get_fogColor_2() const { return ___fogColor_2; }
	inline Color_t2020392075 * get_address_of_fogColor_2() { return &___fogColor_2; }
	inline void set_fogColor_2(Color_t2020392075  value)
	{
		___fogColor_2 = value;
	}

	inline static int32_t get_offset_of_fogMode_3() { return static_cast<int32_t>(offsetof(Fog_t2628220434, ___fogMode_3)); }
	inline int32_t get_fogMode_3() const { return ___fogMode_3; }
	inline int32_t* get_address_of_fogMode_3() { return &___fogMode_3; }
	inline void set_fogMode_3(int32_t value)
	{
		___fogMode_3 = value;
	}

	inline static int32_t get_offset_of_fogDensity_4() { return static_cast<int32_t>(offsetof(Fog_t2628220434, ___fogDensity_4)); }
	inline float get_fogDensity_4() const { return ___fogDensity_4; }
	inline float* get_address_of_fogDensity_4() { return &___fogDensity_4; }
	inline void set_fogDensity_4(float value)
	{
		___fogDensity_4 = value;
	}

	inline static int32_t get_offset_of_linearFogStart_5() { return static_cast<int32_t>(offsetof(Fog_t2628220434, ___linearFogStart_5)); }
	inline float get_linearFogStart_5() const { return ___linearFogStart_5; }
	inline float* get_address_of_linearFogStart_5() { return &___linearFogStart_5; }
	inline void set_linearFogStart_5(float value)
	{
		___linearFogStart_5 = value;
	}

	inline static int32_t get_offset_of_linearFogEnd_6() { return static_cast<int32_t>(offsetof(Fog_t2628220434, ___linearFogEnd_6)); }
	inline float get_linearFogEnd_6() const { return ___linearFogEnd_6; }
	inline float* get_address_of_linearFogEnd_6() { return &___linearFogEnd_6; }
	inline void set_linearFogEnd_6(float value)
	{
		___linearFogEnd_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
