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

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Games.Common.Client.Audio.AudioChannel
struct  AudioChannel_t1784365201  : public MonoBehaviour_t1158329972
{
public:
	// System.String GSN.Skill.Games.Common.Client.Audio.AudioChannel::_prefKey
	String_t* ____prefKey_2;
	// System.Boolean GSN.Skill.Games.Common.Client.Audio.AudioChannel::_enabled
	bool ____enabled_3;

public:
	inline static int32_t get_offset_of__prefKey_2() { return static_cast<int32_t>(offsetof(AudioChannel_t1784365201, ____prefKey_2)); }
	inline String_t* get__prefKey_2() const { return ____prefKey_2; }
	inline String_t** get_address_of__prefKey_2() { return &____prefKey_2; }
	inline void set__prefKey_2(String_t* value)
	{
		____prefKey_2 = value;
		Il2CppCodeGenWriteBarrier(&____prefKey_2, value);
	}

	inline static int32_t get_offset_of__enabled_3() { return static_cast<int32_t>(offsetof(AudioChannel_t1784365201, ____enabled_3)); }
	inline bool get__enabled_3() const { return ____enabled_3; }
	inline bool* get_address_of__enabled_3() { return &____enabled_3; }
	inline void set__enabled_3(bool value)
	{
		____enabled_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
