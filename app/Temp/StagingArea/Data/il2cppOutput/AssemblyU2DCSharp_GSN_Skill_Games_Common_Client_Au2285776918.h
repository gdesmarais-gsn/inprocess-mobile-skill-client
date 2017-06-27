#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.AudioSource
struct AudioSource_t1135106623;
// System.String[]
struct StringU5BU5D_t1642385972;
// GSN.Skill.Games.Common.Utils.EnumeratedArray`1<GSN.Skill.Games.Common.Client.Audio.AudioChannel>
struct EnumeratedArray_1_t2296198060;

#include "AssemblyU2DCSharp_GSN_Skill_Games_Common_Client_Si4244646303.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Games.Common.Client.Audio.AudioFactory
struct  AudioFactory_t2285776918  : public SingletonMonoBehaviour_1_t4244646303
{
public:
	// System.UInt32 GSN.Skill.Games.Common.Client.Audio.AudioFactory::_tZero
	uint32_t ____tZero_4;
	// System.Int32 GSN.Skill.Games.Common.Client.Audio.AudioFactory::_duckCount
	int32_t ____duckCount_5;
	// System.Single GSN.Skill.Games.Common.Client.Audio.AudioFactory::_originalMusicUnDuckedVolume
	float ____originalMusicUnDuckedVolume_6;
	// UnityEngine.AudioSource GSN.Skill.Games.Common.Client.Audio.AudioFactory::_musicAudioSource
	AudioSource_t1135106623 * ____musicAudioSource_7;
	// System.String[] GSN.Skill.Games.Common.Client.Audio.AudioFactory::prefKeys
	StringU5BU5D_t1642385972* ___prefKeys_12;
	// GSN.Skill.Games.Common.Utils.EnumeratedArray`1<GSN.Skill.Games.Common.Client.Audio.AudioChannel> GSN.Skill.Games.Common.Client.Audio.AudioFactory::_channels
	EnumeratedArray_1_t2296198060 * ____channels_13;

public:
	inline static int32_t get_offset_of__tZero_4() { return static_cast<int32_t>(offsetof(AudioFactory_t2285776918, ____tZero_4)); }
	inline uint32_t get__tZero_4() const { return ____tZero_4; }
	inline uint32_t* get_address_of__tZero_4() { return &____tZero_4; }
	inline void set__tZero_4(uint32_t value)
	{
		____tZero_4 = value;
	}

	inline static int32_t get_offset_of__duckCount_5() { return static_cast<int32_t>(offsetof(AudioFactory_t2285776918, ____duckCount_5)); }
	inline int32_t get__duckCount_5() const { return ____duckCount_5; }
	inline int32_t* get_address_of__duckCount_5() { return &____duckCount_5; }
	inline void set__duckCount_5(int32_t value)
	{
		____duckCount_5 = value;
	}

	inline static int32_t get_offset_of__originalMusicUnDuckedVolume_6() { return static_cast<int32_t>(offsetof(AudioFactory_t2285776918, ____originalMusicUnDuckedVolume_6)); }
	inline float get__originalMusicUnDuckedVolume_6() const { return ____originalMusicUnDuckedVolume_6; }
	inline float* get_address_of__originalMusicUnDuckedVolume_6() { return &____originalMusicUnDuckedVolume_6; }
	inline void set__originalMusicUnDuckedVolume_6(float value)
	{
		____originalMusicUnDuckedVolume_6 = value;
	}

	inline static int32_t get_offset_of__musicAudioSource_7() { return static_cast<int32_t>(offsetof(AudioFactory_t2285776918, ____musicAudioSource_7)); }
	inline AudioSource_t1135106623 * get__musicAudioSource_7() const { return ____musicAudioSource_7; }
	inline AudioSource_t1135106623 ** get_address_of__musicAudioSource_7() { return &____musicAudioSource_7; }
	inline void set__musicAudioSource_7(AudioSource_t1135106623 * value)
	{
		____musicAudioSource_7 = value;
		Il2CppCodeGenWriteBarrier(&____musicAudioSource_7, value);
	}

	inline static int32_t get_offset_of_prefKeys_12() { return static_cast<int32_t>(offsetof(AudioFactory_t2285776918, ___prefKeys_12)); }
	inline StringU5BU5D_t1642385972* get_prefKeys_12() const { return ___prefKeys_12; }
	inline StringU5BU5D_t1642385972** get_address_of_prefKeys_12() { return &___prefKeys_12; }
	inline void set_prefKeys_12(StringU5BU5D_t1642385972* value)
	{
		___prefKeys_12 = value;
		Il2CppCodeGenWriteBarrier(&___prefKeys_12, value);
	}

	inline static int32_t get_offset_of__channels_13() { return static_cast<int32_t>(offsetof(AudioFactory_t2285776918, ____channels_13)); }
	inline EnumeratedArray_1_t2296198060 * get__channels_13() const { return ____channels_13; }
	inline EnumeratedArray_1_t2296198060 ** get_address_of__channels_13() { return &____channels_13; }
	inline void set__channels_13(EnumeratedArray_1_t2296198060 * value)
	{
		____channels_13 = value;
		Il2CppCodeGenWriteBarrier(&____channels_13, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
