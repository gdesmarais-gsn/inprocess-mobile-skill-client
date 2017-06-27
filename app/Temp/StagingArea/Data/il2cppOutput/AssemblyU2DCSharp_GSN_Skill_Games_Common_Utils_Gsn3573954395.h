#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// GSN.Skill.Games.Common.Utils.GsnVector`1<System.UInt32>
struct GsnVector_1_t848728672;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Games.Common.Utils.GsnRandom
struct  GsnRandom_t3573954395  : public Il2CppObject
{
public:
	// System.UInt32 GSN.Skill.Games.Common.Utils.GsnRandom::<origSeed>k__BackingField
	uint32_t ___U3CorigSeedU3Ek__BackingField_6;
	// System.UInt32 GSN.Skill.Games.Common.Utils.GsnRandom::_lastValue
	uint32_t ____lastValue_7;
	// GSN.Skill.Games.Common.Utils.GsnVector`1<System.UInt32> GSN.Skill.Games.Common.Utils.GsnRandom::_mother1
	GsnVector_1_t848728672 * ____mother1_8;
	// GSN.Skill.Games.Common.Utils.GsnVector`1<System.UInt32> GSN.Skill.Games.Common.Utils.GsnRandom::_mother2
	GsnVector_1_t848728672 * ____mother2_9;
	// System.UInt32 GSN.Skill.Games.Common.Utils.GsnRandom::_burnCount
	uint32_t ____burnCount_10;

public:
	inline static int32_t get_offset_of_U3CorigSeedU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(GsnRandom_t3573954395, ___U3CorigSeedU3Ek__BackingField_6)); }
	inline uint32_t get_U3CorigSeedU3Ek__BackingField_6() const { return ___U3CorigSeedU3Ek__BackingField_6; }
	inline uint32_t* get_address_of_U3CorigSeedU3Ek__BackingField_6() { return &___U3CorigSeedU3Ek__BackingField_6; }
	inline void set_U3CorigSeedU3Ek__BackingField_6(uint32_t value)
	{
		___U3CorigSeedU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of__lastValue_7() { return static_cast<int32_t>(offsetof(GsnRandom_t3573954395, ____lastValue_7)); }
	inline uint32_t get__lastValue_7() const { return ____lastValue_7; }
	inline uint32_t* get_address_of__lastValue_7() { return &____lastValue_7; }
	inline void set__lastValue_7(uint32_t value)
	{
		____lastValue_7 = value;
	}

	inline static int32_t get_offset_of__mother1_8() { return static_cast<int32_t>(offsetof(GsnRandom_t3573954395, ____mother1_8)); }
	inline GsnVector_1_t848728672 * get__mother1_8() const { return ____mother1_8; }
	inline GsnVector_1_t848728672 ** get_address_of__mother1_8() { return &____mother1_8; }
	inline void set__mother1_8(GsnVector_1_t848728672 * value)
	{
		____mother1_8 = value;
		Il2CppCodeGenWriteBarrier(&____mother1_8, value);
	}

	inline static int32_t get_offset_of__mother2_9() { return static_cast<int32_t>(offsetof(GsnRandom_t3573954395, ____mother2_9)); }
	inline GsnVector_1_t848728672 * get__mother2_9() const { return ____mother2_9; }
	inline GsnVector_1_t848728672 ** get_address_of__mother2_9() { return &____mother2_9; }
	inline void set__mother2_9(GsnVector_1_t848728672 * value)
	{
		____mother2_9 = value;
		Il2CppCodeGenWriteBarrier(&____mother2_9, value);
	}

	inline static int32_t get_offset_of__burnCount_10() { return static_cast<int32_t>(offsetof(GsnRandom_t3573954395, ____burnCount_10)); }
	inline uint32_t get__burnCount_10() const { return ____burnCount_10; }
	inline uint32_t* get_address_of__burnCount_10() { return &____burnCount_10; }
	inline void set__burnCount_10(uint32_t value)
	{
		____burnCount_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
