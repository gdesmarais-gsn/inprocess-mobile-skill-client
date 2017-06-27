#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// GSN.Skill.Games.Common.Client.Audio.AudioMapper`1<System.Object>
struct AudioMapper_1_t2105619742;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Games.Common.Client.SingletonMonoBehaviour`1<GSN.Skill.Games.Common.Client.Audio.AudioMapper`1<System.Object>>
struct  SingletonMonoBehaviour_1_t4064489127  : public MonoBehaviour_t1158329972
{
public:

public:
};

struct SingletonMonoBehaviour_1_t4064489127_StaticFields
{
public:
	// T GSN.Skill.Games.Common.Client.SingletonMonoBehaviour`1::_instance
	AudioMapper_1_t2105619742 * ____instance_2;

public:
	inline static int32_t get_offset_of__instance_2() { return static_cast<int32_t>(offsetof(SingletonMonoBehaviour_1_t4064489127_StaticFields, ____instance_2)); }
	inline AudioMapper_1_t2105619742 * get__instance_2() const { return ____instance_2; }
	inline AudioMapper_1_t2105619742 ** get_address_of__instance_2() { return &____instance_2; }
	inline void set__instance_2(AudioMapper_1_t2105619742 * value)
	{
		____instance_2 = value;
		Il2CppCodeGenWriteBarrier(&____instance_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
