#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "mscorlib_System_ValueType3507792607.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Games.Common.Client.Audio.AudioOptions
struct  AudioOptions_t515001514 
{
public:
	// System.Single GSN.Skill.Games.Common.Client.Audio.AudioOptions::volume
	float ___volume_0;
	// System.UInt32 GSN.Skill.Games.Common.Client.Audio.AudioOptions::cooldown
	uint32_t ___cooldown_1;
	// System.Boolean GSN.Skill.Games.Common.Client.Audio.AudioOptions::loop
	bool ___loop_2;
	// System.Single GSN.Skill.Games.Common.Client.Audio.AudioOptions::pitch
	float ___pitch_3;
	// System.Single GSN.Skill.Games.Common.Client.Audio.AudioOptions::delayTime
	float ___delayTime_4;
	// System.Single GSN.Skill.Games.Common.Client.Audio.AudioOptions::fadeToVol
	float ___fadeToVol_5;
	// System.Single GSN.Skill.Games.Common.Client.Audio.AudioOptions::fadeInSecs
	float ___fadeInSecs_6;
	// System.Single GSN.Skill.Games.Common.Client.Audio.AudioOptions::duckMusicVolume
	float ___duckMusicVolume_7;

public:
	inline static int32_t get_offset_of_volume_0() { return static_cast<int32_t>(offsetof(AudioOptions_t515001514, ___volume_0)); }
	inline float get_volume_0() const { return ___volume_0; }
	inline float* get_address_of_volume_0() { return &___volume_0; }
	inline void set_volume_0(float value)
	{
		___volume_0 = value;
	}

	inline static int32_t get_offset_of_cooldown_1() { return static_cast<int32_t>(offsetof(AudioOptions_t515001514, ___cooldown_1)); }
	inline uint32_t get_cooldown_1() const { return ___cooldown_1; }
	inline uint32_t* get_address_of_cooldown_1() { return &___cooldown_1; }
	inline void set_cooldown_1(uint32_t value)
	{
		___cooldown_1 = value;
	}

	inline static int32_t get_offset_of_loop_2() { return static_cast<int32_t>(offsetof(AudioOptions_t515001514, ___loop_2)); }
	inline bool get_loop_2() const { return ___loop_2; }
	inline bool* get_address_of_loop_2() { return &___loop_2; }
	inline void set_loop_2(bool value)
	{
		___loop_2 = value;
	}

	inline static int32_t get_offset_of_pitch_3() { return static_cast<int32_t>(offsetof(AudioOptions_t515001514, ___pitch_3)); }
	inline float get_pitch_3() const { return ___pitch_3; }
	inline float* get_address_of_pitch_3() { return &___pitch_3; }
	inline void set_pitch_3(float value)
	{
		___pitch_3 = value;
	}

	inline static int32_t get_offset_of_delayTime_4() { return static_cast<int32_t>(offsetof(AudioOptions_t515001514, ___delayTime_4)); }
	inline float get_delayTime_4() const { return ___delayTime_4; }
	inline float* get_address_of_delayTime_4() { return &___delayTime_4; }
	inline void set_delayTime_4(float value)
	{
		___delayTime_4 = value;
	}

	inline static int32_t get_offset_of_fadeToVol_5() { return static_cast<int32_t>(offsetof(AudioOptions_t515001514, ___fadeToVol_5)); }
	inline float get_fadeToVol_5() const { return ___fadeToVol_5; }
	inline float* get_address_of_fadeToVol_5() { return &___fadeToVol_5; }
	inline void set_fadeToVol_5(float value)
	{
		___fadeToVol_5 = value;
	}

	inline static int32_t get_offset_of_fadeInSecs_6() { return static_cast<int32_t>(offsetof(AudioOptions_t515001514, ___fadeInSecs_6)); }
	inline float get_fadeInSecs_6() const { return ___fadeInSecs_6; }
	inline float* get_address_of_fadeInSecs_6() { return &___fadeInSecs_6; }
	inline void set_fadeInSecs_6(float value)
	{
		___fadeInSecs_6 = value;
	}

	inline static int32_t get_offset_of_duckMusicVolume_7() { return static_cast<int32_t>(offsetof(AudioOptions_t515001514, ___duckMusicVolume_7)); }
	inline float get_duckMusicVolume_7() const { return ___duckMusicVolume_7; }
	inline float* get_address_of_duckMusicVolume_7() { return &___duckMusicVolume_7; }
	inline void set_duckMusicVolume_7(float value)
	{
		___duckMusicVolume_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of GSN.Skill.Games.Common.Client.Audio.AudioOptions
struct AudioOptions_t515001514_marshaled_pinvoke
{
	float ___volume_0;
	uint32_t ___cooldown_1;
	int32_t ___loop_2;
	float ___pitch_3;
	float ___delayTime_4;
	float ___fadeToVol_5;
	float ___fadeInSecs_6;
	float ___duckMusicVolume_7;
};
// Native definition for COM marshalling of GSN.Skill.Games.Common.Client.Audio.AudioOptions
struct AudioOptions_t515001514_marshaled_com
{
	float ___volume_0;
	uint32_t ___cooldown_1;
	int32_t ___loop_2;
	float ___pitch_3;
	float ___delayTime_4;
	float ___fadeToVol_5;
	float ___fadeInSecs_6;
	float ___duckMusicVolume_7;
};
