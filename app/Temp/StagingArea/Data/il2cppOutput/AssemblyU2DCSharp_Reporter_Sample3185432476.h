#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Reporter/Sample
struct  Sample_t3185432476  : public Il2CppObject
{
public:
	// System.Single Reporter/Sample::time
	float ___time_0;
	// System.Byte Reporter/Sample::loadedScene
	uint8_t ___loadedScene_1;
	// System.Single Reporter/Sample::memory
	float ___memory_2;
	// System.Single Reporter/Sample::fps
	float ___fps_3;
	// System.String Reporter/Sample::fpsText
	String_t* ___fpsText_4;

public:
	inline static int32_t get_offset_of_time_0() { return static_cast<int32_t>(offsetof(Sample_t3185432476, ___time_0)); }
	inline float get_time_0() const { return ___time_0; }
	inline float* get_address_of_time_0() { return &___time_0; }
	inline void set_time_0(float value)
	{
		___time_0 = value;
	}

	inline static int32_t get_offset_of_loadedScene_1() { return static_cast<int32_t>(offsetof(Sample_t3185432476, ___loadedScene_1)); }
	inline uint8_t get_loadedScene_1() const { return ___loadedScene_1; }
	inline uint8_t* get_address_of_loadedScene_1() { return &___loadedScene_1; }
	inline void set_loadedScene_1(uint8_t value)
	{
		___loadedScene_1 = value;
	}

	inline static int32_t get_offset_of_memory_2() { return static_cast<int32_t>(offsetof(Sample_t3185432476, ___memory_2)); }
	inline float get_memory_2() const { return ___memory_2; }
	inline float* get_address_of_memory_2() { return &___memory_2; }
	inline void set_memory_2(float value)
	{
		___memory_2 = value;
	}

	inline static int32_t get_offset_of_fps_3() { return static_cast<int32_t>(offsetof(Sample_t3185432476, ___fps_3)); }
	inline float get_fps_3() const { return ___fps_3; }
	inline float* get_address_of_fps_3() { return &___fps_3; }
	inline void set_fps_3(float value)
	{
		___fps_3 = value;
	}

	inline static int32_t get_offset_of_fpsText_4() { return static_cast<int32_t>(offsetof(Sample_t3185432476, ___fpsText_4)); }
	inline String_t* get_fpsText_4() const { return ___fpsText_4; }
	inline String_t** get_address_of_fpsText_4() { return &___fpsText_4; }
	inline void set_fpsText_4(String_t* value)
	{
		___fpsText_4 = value;
		Il2CppCodeGenWriteBarrier(&___fpsText_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
