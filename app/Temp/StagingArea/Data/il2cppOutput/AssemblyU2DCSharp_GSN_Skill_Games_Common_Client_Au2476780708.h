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

// GSN.Skill.Games.Common.Client.Audio.AudioFactory/<HandleMusicDuckingAndUnducking>c__Iterator1
struct  U3CHandleMusicDuckingAndUnduckingU3Ec__Iterator1_t2476780708  : public Il2CppObject
{
public:
	// System.Single GSN.Skill.Games.Common.Client.Audio.AudioFactory/<HandleMusicDuckingAndUnducking>c__Iterator1::<currentVol>__0
	float ___U3CcurrentVolU3E__0_0;
	// System.Single GSN.Skill.Games.Common.Client.Audio.AudioFactory/<HandleMusicDuckingAndUnducking>c__Iterator1::toVolume
	float ___toVolume_1;
	// System.Single GSN.Skill.Games.Common.Client.Audio.AudioFactory/<HandleMusicDuckingAndUnducking>c__Iterator1::delayTime
	float ___delayTime_2;
	// UnityEngine.AudioSource GSN.Skill.Games.Common.Client.Audio.AudioFactory/<HandleMusicDuckingAndUnducking>c__Iterator1::audioSourceCausingDuck
	AudioSource_t1135106623 * ___audioSourceCausingDuck_3;
	// GSN.Skill.Games.Common.Client.Audio.AudioFactory GSN.Skill.Games.Common.Client.Audio.AudioFactory/<HandleMusicDuckingAndUnducking>c__Iterator1::$this
	AudioFactory_t2285776918 * ___U24this_4;
	// System.Object GSN.Skill.Games.Common.Client.Audio.AudioFactory/<HandleMusicDuckingAndUnducking>c__Iterator1::$current
	Il2CppObject * ___U24current_5;
	// System.Boolean GSN.Skill.Games.Common.Client.Audio.AudioFactory/<HandleMusicDuckingAndUnducking>c__Iterator1::$disposing
	bool ___U24disposing_6;
	// System.Int32 GSN.Skill.Games.Common.Client.Audio.AudioFactory/<HandleMusicDuckingAndUnducking>c__Iterator1::$PC
	int32_t ___U24PC_7;

public:
	inline static int32_t get_offset_of_U3CcurrentVolU3E__0_0() { return static_cast<int32_t>(offsetof(U3CHandleMusicDuckingAndUnduckingU3Ec__Iterator1_t2476780708, ___U3CcurrentVolU3E__0_0)); }
	inline float get_U3CcurrentVolU3E__0_0() const { return ___U3CcurrentVolU3E__0_0; }
	inline float* get_address_of_U3CcurrentVolU3E__0_0() { return &___U3CcurrentVolU3E__0_0; }
	inline void set_U3CcurrentVolU3E__0_0(float value)
	{
		___U3CcurrentVolU3E__0_0 = value;
	}

	inline static int32_t get_offset_of_toVolume_1() { return static_cast<int32_t>(offsetof(U3CHandleMusicDuckingAndUnduckingU3Ec__Iterator1_t2476780708, ___toVolume_1)); }
	inline float get_toVolume_1() const { return ___toVolume_1; }
	inline float* get_address_of_toVolume_1() { return &___toVolume_1; }
	inline void set_toVolume_1(float value)
	{
		___toVolume_1 = value;
	}

	inline static int32_t get_offset_of_delayTime_2() { return static_cast<int32_t>(offsetof(U3CHandleMusicDuckingAndUnduckingU3Ec__Iterator1_t2476780708, ___delayTime_2)); }
	inline float get_delayTime_2() const { return ___delayTime_2; }
	inline float* get_address_of_delayTime_2() { return &___delayTime_2; }
	inline void set_delayTime_2(float value)
	{
		___delayTime_2 = value;
	}

	inline static int32_t get_offset_of_audioSourceCausingDuck_3() { return static_cast<int32_t>(offsetof(U3CHandleMusicDuckingAndUnduckingU3Ec__Iterator1_t2476780708, ___audioSourceCausingDuck_3)); }
	inline AudioSource_t1135106623 * get_audioSourceCausingDuck_3() const { return ___audioSourceCausingDuck_3; }
	inline AudioSource_t1135106623 ** get_address_of_audioSourceCausingDuck_3() { return &___audioSourceCausingDuck_3; }
	inline void set_audioSourceCausingDuck_3(AudioSource_t1135106623 * value)
	{
		___audioSourceCausingDuck_3 = value;
		Il2CppCodeGenWriteBarrier(&___audioSourceCausingDuck_3, value);
	}

	inline static int32_t get_offset_of_U24this_4() { return static_cast<int32_t>(offsetof(U3CHandleMusicDuckingAndUnduckingU3Ec__Iterator1_t2476780708, ___U24this_4)); }
	inline AudioFactory_t2285776918 * get_U24this_4() const { return ___U24this_4; }
	inline AudioFactory_t2285776918 ** get_address_of_U24this_4() { return &___U24this_4; }
	inline void set_U24this_4(AudioFactory_t2285776918 * value)
	{
		___U24this_4 = value;
		Il2CppCodeGenWriteBarrier(&___U24this_4, value);
	}

	inline static int32_t get_offset_of_U24current_5() { return static_cast<int32_t>(offsetof(U3CHandleMusicDuckingAndUnduckingU3Ec__Iterator1_t2476780708, ___U24current_5)); }
	inline Il2CppObject * get_U24current_5() const { return ___U24current_5; }
	inline Il2CppObject ** get_address_of_U24current_5() { return &___U24current_5; }
	inline void set_U24current_5(Il2CppObject * value)
	{
		___U24current_5 = value;
		Il2CppCodeGenWriteBarrier(&___U24current_5, value);
	}

	inline static int32_t get_offset_of_U24disposing_6() { return static_cast<int32_t>(offsetof(U3CHandleMusicDuckingAndUnduckingU3Ec__Iterator1_t2476780708, ___U24disposing_6)); }
	inline bool get_U24disposing_6() const { return ___U24disposing_6; }
	inline bool* get_address_of_U24disposing_6() { return &___U24disposing_6; }
	inline void set_U24disposing_6(bool value)
	{
		___U24disposing_6 = value;
	}

	inline static int32_t get_offset_of_U24PC_7() { return static_cast<int32_t>(offsetof(U3CHandleMusicDuckingAndUnduckingU3Ec__Iterator1_t2476780708, ___U24PC_7)); }
	inline int32_t get_U24PC_7() const { return ___U24PC_7; }
	inline int32_t* get_address_of_U24PC_7() { return &___U24PC_7; }
	inline void set_U24PC_7(int32_t value)
	{
		___U24PC_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
