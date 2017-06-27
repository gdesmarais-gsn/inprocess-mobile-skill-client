#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.AudioClip
struct AudioClip_t1932558630;
// System.Collections.Generic.List`1<UnityEngine.AudioClip>
struct List_1_t1301679762;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Games.Common.Client.Audio.BaseMapEntry
struct  BaseMapEntry_t2035647189  : public Il2CppObject
{
public:
	// System.UInt32 GSN.Skill.Games.Common.Client.Audio.BaseMapEntry::nextEntry
	uint32_t ___nextEntry_0;
	// UnityEngine.AudioClip GSN.Skill.Games.Common.Client.Audio.BaseMapEntry::clip
	AudioClip_t1932558630 * ___clip_1;
	// System.Collections.Generic.List`1<UnityEngine.AudioClip> GSN.Skill.Games.Common.Client.Audio.BaseMapEntry::variations
	List_1_t1301679762 * ___variations_2;
	// System.UInt32 GSN.Skill.Games.Common.Client.Audio.BaseMapEntry::_lastTimePlayed
	uint32_t ____lastTimePlayed_3;

public:
	inline static int32_t get_offset_of_nextEntry_0() { return static_cast<int32_t>(offsetof(BaseMapEntry_t2035647189, ___nextEntry_0)); }
	inline uint32_t get_nextEntry_0() const { return ___nextEntry_0; }
	inline uint32_t* get_address_of_nextEntry_0() { return &___nextEntry_0; }
	inline void set_nextEntry_0(uint32_t value)
	{
		___nextEntry_0 = value;
	}

	inline static int32_t get_offset_of_clip_1() { return static_cast<int32_t>(offsetof(BaseMapEntry_t2035647189, ___clip_1)); }
	inline AudioClip_t1932558630 * get_clip_1() const { return ___clip_1; }
	inline AudioClip_t1932558630 ** get_address_of_clip_1() { return &___clip_1; }
	inline void set_clip_1(AudioClip_t1932558630 * value)
	{
		___clip_1 = value;
		Il2CppCodeGenWriteBarrier(&___clip_1, value);
	}

	inline static int32_t get_offset_of_variations_2() { return static_cast<int32_t>(offsetof(BaseMapEntry_t2035647189, ___variations_2)); }
	inline List_1_t1301679762 * get_variations_2() const { return ___variations_2; }
	inline List_1_t1301679762 ** get_address_of_variations_2() { return &___variations_2; }
	inline void set_variations_2(List_1_t1301679762 * value)
	{
		___variations_2 = value;
		Il2CppCodeGenWriteBarrier(&___variations_2, value);
	}

	inline static int32_t get_offset_of__lastTimePlayed_3() { return static_cast<int32_t>(offsetof(BaseMapEntry_t2035647189, ____lastTimePlayed_3)); }
	inline uint32_t get__lastTimePlayed_3() const { return ____lastTimePlayed_3; }
	inline uint32_t* get_address_of__lastTimePlayed_3() { return &____lastTimePlayed_3; }
	inline void set__lastTimePlayed_3(uint32_t value)
	{
		____lastTimePlayed_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
