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
// GSN.Skill.Games.Common.Client.Audio.AudioFactory
struct AudioFactory_t2285776918;
// System.Object
struct Il2CppObject;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Games.Common.Client.Audio.AudioFactory/<InternalFadeOutDestroy>c__Iterator2
struct  U3CInternalFadeOutDestroyU3Ec__Iterator2_t3629187071  : public Il2CppObject
{
public:
	// UnityEngine.AudioSource GSN.Skill.Games.Common.Client.Audio.AudioFactory/<InternalFadeOutDestroy>c__Iterator2::audioSource
	AudioSource_t1135106623 * ___audioSource_0;
	// System.Single GSN.Skill.Games.Common.Client.Audio.AudioFactory/<InternalFadeOutDestroy>c__Iterator2::seconds
	float ___seconds_1;
	// GSN.Skill.Games.Common.Client.Audio.AudioFactory GSN.Skill.Games.Common.Client.Audio.AudioFactory/<InternalFadeOutDestroy>c__Iterator2::$this
	AudioFactory_t2285776918 * ___U24this_2;
	// System.Object GSN.Skill.Games.Common.Client.Audio.AudioFactory/<InternalFadeOutDestroy>c__Iterator2::$current
	Il2CppObject * ___U24current_3;
	// System.Boolean GSN.Skill.Games.Common.Client.Audio.AudioFactory/<InternalFadeOutDestroy>c__Iterator2::$disposing
	bool ___U24disposing_4;
	// System.Int32 GSN.Skill.Games.Common.Client.Audio.AudioFactory/<InternalFadeOutDestroy>c__Iterator2::$PC
	int32_t ___U24PC_5;

public:
	inline static int32_t get_offset_of_audioSource_0() { return static_cast<int32_t>(offsetof(U3CInternalFadeOutDestroyU3Ec__Iterator2_t3629187071, ___audioSource_0)); }
	inline AudioSource_t1135106623 * get_audioSource_0() const { return ___audioSource_0; }
	inline AudioSource_t1135106623 ** get_address_of_audioSource_0() { return &___audioSource_0; }
	inline void set_audioSource_0(AudioSource_t1135106623 * value)
	{
		___audioSource_0 = value;
		Il2CppCodeGenWriteBarrier(&___audioSource_0, value);
	}

	inline static int32_t get_offset_of_seconds_1() { return static_cast<int32_t>(offsetof(U3CInternalFadeOutDestroyU3Ec__Iterator2_t3629187071, ___seconds_1)); }
	inline float get_seconds_1() const { return ___seconds_1; }
	inline float* get_address_of_seconds_1() { return &___seconds_1; }
	inline void set_seconds_1(float value)
	{
		___seconds_1 = value;
	}

	inline static int32_t get_offset_of_U24this_2() { return static_cast<int32_t>(offsetof(U3CInternalFadeOutDestroyU3Ec__Iterator2_t3629187071, ___U24this_2)); }
	inline AudioFactory_t2285776918 * get_U24this_2() const { return ___U24this_2; }
	inline AudioFactory_t2285776918 ** get_address_of_U24this_2() { return &___U24this_2; }
	inline void set_U24this_2(AudioFactory_t2285776918 * value)
	{
		___U24this_2 = value;
		Il2CppCodeGenWriteBarrier(&___U24this_2, value);
	}

	inline static int32_t get_offset_of_U24current_3() { return static_cast<int32_t>(offsetof(U3CInternalFadeOutDestroyU3Ec__Iterator2_t3629187071, ___U24current_3)); }
	inline Il2CppObject * get_U24current_3() const { return ___U24current_3; }
	inline Il2CppObject ** get_address_of_U24current_3() { return &___U24current_3; }
	inline void set_U24current_3(Il2CppObject * value)
	{
		___U24current_3 = value;
		Il2CppCodeGenWriteBarrier(&___U24current_3, value);
	}

	inline static int32_t get_offset_of_U24disposing_4() { return static_cast<int32_t>(offsetof(U3CInternalFadeOutDestroyU3Ec__Iterator2_t3629187071, ___U24disposing_4)); }
	inline bool get_U24disposing_4() const { return ___U24disposing_4; }
	inline bool* get_address_of_U24disposing_4() { return &___U24disposing_4; }
	inline void set_U24disposing_4(bool value)
	{
		___U24disposing_4 = value;
	}

	inline static int32_t get_offset_of_U24PC_5() { return static_cast<int32_t>(offsetof(U3CInternalFadeOutDestroyU3Ec__Iterator2_t3629187071, ___U24PC_5)); }
	inline int32_t get_U24PC_5() const { return ___U24PC_5; }
	inline int32_t* get_address_of_U24PC_5() { return &___U24PC_5; }
	inline void set_U24PC_5(int32_t value)
	{
		___U24PC_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
