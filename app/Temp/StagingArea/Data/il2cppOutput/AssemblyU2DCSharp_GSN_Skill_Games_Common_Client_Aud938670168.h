#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// GSN.Skill.Games.Common.Client.Audio.EnumeratedArrayMapEntry
struct EnumeratedArrayMapEntry_t2491211861;

#include "AssemblyU2DCSharp_GSN_Skill_Games_Common_Client_Si2897539553.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Games.Common.Client.Audio.AudioMapper`1<GSN.Skill.Games.Tripeaks.TriPeaksAudio>
struct  AudioMapper_1_t938670168  : public SingletonMonoBehaviour_1_t2897539553
{
public:
	// GSN.Skill.Games.Common.Client.Audio.EnumeratedArrayMapEntry GSN.Skill.Games.Common.Client.Audio.AudioMapper`1::tpAudio
	EnumeratedArrayMapEntry_t2491211861 * ___tpAudio_3;

public:
	inline static int32_t get_offset_of_tpAudio_3() { return static_cast<int32_t>(offsetof(AudioMapper_1_t938670168, ___tpAudio_3)); }
	inline EnumeratedArrayMapEntry_t2491211861 * get_tpAudio_3() const { return ___tpAudio_3; }
	inline EnumeratedArrayMapEntry_t2491211861 ** get_address_of_tpAudio_3() { return &___tpAudio_3; }
	inline void set_tpAudio_3(EnumeratedArrayMapEntry_t2491211861 * value)
	{
		___tpAudio_3 = value;
		Il2CppCodeGenWriteBarrier(&___tpAudio_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
