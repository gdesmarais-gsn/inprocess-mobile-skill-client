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

// GSN.Skill.Games.Common.Client.Audio.AudioFactory/<InternalTweenToVolume>c__Iterator0
struct  U3CInternalTweenToVolumeU3Ec__Iterator0_t2909398817  : public Il2CppObject
{
public:
	// UnityEngine.AudioSource GSN.Skill.Games.Common.Client.Audio.AudioFactory/<InternalTweenToVolume>c__Iterator0::audioSource
	AudioSource_t1135106623 * ___audioSource_0;
	// System.Single GSN.Skill.Games.Common.Client.Audio.AudioFactory/<InternalTweenToVolume>c__Iterator0::<startVolume>__0
	float ___U3CstartVolumeU3E__0_1;
	// System.Single GSN.Skill.Games.Common.Client.Audio.AudioFactory/<InternalTweenToVolume>c__Iterator0::toVolume
	float ___toVolume_2;
	// System.Single GSN.Skill.Games.Common.Client.Audio.AudioFactory/<InternalTweenToVolume>c__Iterator0::seconds
	float ___seconds_3;
	// System.Single GSN.Skill.Games.Common.Client.Audio.AudioFactory/<InternalTweenToVolume>c__Iterator0::<changePerSecond>__1
	float ___U3CchangePerSecondU3E__1_4;
	// System.Boolean GSN.Skill.Games.Common.Client.Audio.AudioFactory/<InternalTweenToVolume>c__Iterator0::checkForDucking
	bool ___checkForDucking_5;
	// GSN.Skill.Games.Common.Client.Audio.AudioFactory GSN.Skill.Games.Common.Client.Audio.AudioFactory/<InternalTweenToVolume>c__Iterator0::$this
	AudioFactory_t2285776918 * ___U24this_6;
	// System.Object GSN.Skill.Games.Common.Client.Audio.AudioFactory/<InternalTweenToVolume>c__Iterator0::$current
	Il2CppObject * ___U24current_7;
	// System.Boolean GSN.Skill.Games.Common.Client.Audio.AudioFactory/<InternalTweenToVolume>c__Iterator0::$disposing
	bool ___U24disposing_8;
	// System.Int32 GSN.Skill.Games.Common.Client.Audio.AudioFactory/<InternalTweenToVolume>c__Iterator0::$PC
	int32_t ___U24PC_9;

public:
	inline static int32_t get_offset_of_audioSource_0() { return static_cast<int32_t>(offsetof(U3CInternalTweenToVolumeU3Ec__Iterator0_t2909398817, ___audioSource_0)); }
	inline AudioSource_t1135106623 * get_audioSource_0() const { return ___audioSource_0; }
	inline AudioSource_t1135106623 ** get_address_of_audioSource_0() { return &___audioSource_0; }
	inline void set_audioSource_0(AudioSource_t1135106623 * value)
	{
		___audioSource_0 = value;
		Il2CppCodeGenWriteBarrier(&___audioSource_0, value);
	}

	inline static int32_t get_offset_of_U3CstartVolumeU3E__0_1() { return static_cast<int32_t>(offsetof(U3CInternalTweenToVolumeU3Ec__Iterator0_t2909398817, ___U3CstartVolumeU3E__0_1)); }
	inline float get_U3CstartVolumeU3E__0_1() const { return ___U3CstartVolumeU3E__0_1; }
	inline float* get_address_of_U3CstartVolumeU3E__0_1() { return &___U3CstartVolumeU3E__0_1; }
	inline void set_U3CstartVolumeU3E__0_1(float value)
	{
		___U3CstartVolumeU3E__0_1 = value;
	}

	inline static int32_t get_offset_of_toVolume_2() { return static_cast<int32_t>(offsetof(U3CInternalTweenToVolumeU3Ec__Iterator0_t2909398817, ___toVolume_2)); }
	inline float get_toVolume_2() const { return ___toVolume_2; }
	inline float* get_address_of_toVolume_2() { return &___toVolume_2; }
	inline void set_toVolume_2(float value)
	{
		___toVolume_2 = value;
	}

	inline static int32_t get_offset_of_seconds_3() { return static_cast<int32_t>(offsetof(U3CInternalTweenToVolumeU3Ec__Iterator0_t2909398817, ___seconds_3)); }
	inline float get_seconds_3() const { return ___seconds_3; }
	inline float* get_address_of_seconds_3() { return &___seconds_3; }
	inline void set_seconds_3(float value)
	{
		___seconds_3 = value;
	}

	inline static int32_t get_offset_of_U3CchangePerSecondU3E__1_4() { return static_cast<int32_t>(offsetof(U3CInternalTweenToVolumeU3Ec__Iterator0_t2909398817, ___U3CchangePerSecondU3E__1_4)); }
	inline float get_U3CchangePerSecondU3E__1_4() const { return ___U3CchangePerSecondU3E__1_4; }
	inline float* get_address_of_U3CchangePerSecondU3E__1_4() { return &___U3CchangePerSecondU3E__1_4; }
	inline void set_U3CchangePerSecondU3E__1_4(float value)
	{
		___U3CchangePerSecondU3E__1_4 = value;
	}

	inline static int32_t get_offset_of_checkForDucking_5() { return static_cast<int32_t>(offsetof(U3CInternalTweenToVolumeU3Ec__Iterator0_t2909398817, ___checkForDucking_5)); }
	inline bool get_checkForDucking_5() const { return ___checkForDucking_5; }
	inline bool* get_address_of_checkForDucking_5() { return &___checkForDucking_5; }
	inline void set_checkForDucking_5(bool value)
	{
		___checkForDucking_5 = value;
	}

	inline static int32_t get_offset_of_U24this_6() { return static_cast<int32_t>(offsetof(U3CInternalTweenToVolumeU3Ec__Iterator0_t2909398817, ___U24this_6)); }
	inline AudioFactory_t2285776918 * get_U24this_6() const { return ___U24this_6; }
	inline AudioFactory_t2285776918 ** get_address_of_U24this_6() { return &___U24this_6; }
	inline void set_U24this_6(AudioFactory_t2285776918 * value)
	{
		___U24this_6 = value;
		Il2CppCodeGenWriteBarrier(&___U24this_6, value);
	}

	inline static int32_t get_offset_of_U24current_7() { return static_cast<int32_t>(offsetof(U3CInternalTweenToVolumeU3Ec__Iterator0_t2909398817, ___U24current_7)); }
	inline Il2CppObject * get_U24current_7() const { return ___U24current_7; }
	inline Il2CppObject ** get_address_of_U24current_7() { return &___U24current_7; }
	inline void set_U24current_7(Il2CppObject * value)
	{
		___U24current_7 = value;
		Il2CppCodeGenWriteBarrier(&___U24current_7, value);
	}

	inline static int32_t get_offset_of_U24disposing_8() { return static_cast<int32_t>(offsetof(U3CInternalTweenToVolumeU3Ec__Iterator0_t2909398817, ___U24disposing_8)); }
	inline bool get_U24disposing_8() const { return ___U24disposing_8; }
	inline bool* get_address_of_U24disposing_8() { return &___U24disposing_8; }
	inline void set_U24disposing_8(bool value)
	{
		___U24disposing_8 = value;
	}

	inline static int32_t get_offset_of_U24PC_9() { return static_cast<int32_t>(offsetof(U3CInternalTweenToVolumeU3Ec__Iterator0_t2909398817, ___U24PC_9)); }
	inline int32_t get_U24PC_9() const { return ___U24PC_9; }
	inline int32_t* get_address_of_U24PC_9() { return &___U24PC_9; }
	inline void set_U24PC_9(int32_t value)
	{
		___U24PC_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
