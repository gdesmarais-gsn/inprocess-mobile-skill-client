#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// GSN.Skill.Games.Tripeaks.View/AudioCallback
struct AudioCallback_t2309726064;
// System.Object
struct Il2CppObject;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Games.Tripeaks.View/<DelayedCallback>c__Iterator7
struct  U3CDelayedCallbackU3Ec__Iterator7_t3396191086  : public Il2CppObject
{
public:
	// System.Single GSN.Skill.Games.Tripeaks.View/<DelayedCallback>c__Iterator7::time
	float ___time_0;
	// GSN.Skill.Games.Tripeaks.View/AudioCallback GSN.Skill.Games.Tripeaks.View/<DelayedCallback>c__Iterator7::callback
	AudioCallback_t2309726064 * ___callback_1;
	// System.Int32 GSN.Skill.Games.Tripeaks.View/<DelayedCallback>c__Iterator7::index
	int32_t ___index_2;
	// System.Object GSN.Skill.Games.Tripeaks.View/<DelayedCallback>c__Iterator7::$current
	Il2CppObject * ___U24current_3;
	// System.Boolean GSN.Skill.Games.Tripeaks.View/<DelayedCallback>c__Iterator7::$disposing
	bool ___U24disposing_4;
	// System.Int32 GSN.Skill.Games.Tripeaks.View/<DelayedCallback>c__Iterator7::$PC
	int32_t ___U24PC_5;

public:
	inline static int32_t get_offset_of_time_0() { return static_cast<int32_t>(offsetof(U3CDelayedCallbackU3Ec__Iterator7_t3396191086, ___time_0)); }
	inline float get_time_0() const { return ___time_0; }
	inline float* get_address_of_time_0() { return &___time_0; }
	inline void set_time_0(float value)
	{
		___time_0 = value;
	}

	inline static int32_t get_offset_of_callback_1() { return static_cast<int32_t>(offsetof(U3CDelayedCallbackU3Ec__Iterator7_t3396191086, ___callback_1)); }
	inline AudioCallback_t2309726064 * get_callback_1() const { return ___callback_1; }
	inline AudioCallback_t2309726064 ** get_address_of_callback_1() { return &___callback_1; }
	inline void set_callback_1(AudioCallback_t2309726064 * value)
	{
		___callback_1 = value;
		Il2CppCodeGenWriteBarrier(&___callback_1, value);
	}

	inline static int32_t get_offset_of_index_2() { return static_cast<int32_t>(offsetof(U3CDelayedCallbackU3Ec__Iterator7_t3396191086, ___index_2)); }
	inline int32_t get_index_2() const { return ___index_2; }
	inline int32_t* get_address_of_index_2() { return &___index_2; }
	inline void set_index_2(int32_t value)
	{
		___index_2 = value;
	}

	inline static int32_t get_offset_of_U24current_3() { return static_cast<int32_t>(offsetof(U3CDelayedCallbackU3Ec__Iterator7_t3396191086, ___U24current_3)); }
	inline Il2CppObject * get_U24current_3() const { return ___U24current_3; }
	inline Il2CppObject ** get_address_of_U24current_3() { return &___U24current_3; }
	inline void set_U24current_3(Il2CppObject * value)
	{
		___U24current_3 = value;
		Il2CppCodeGenWriteBarrier(&___U24current_3, value);
	}

	inline static int32_t get_offset_of_U24disposing_4() { return static_cast<int32_t>(offsetof(U3CDelayedCallbackU3Ec__Iterator7_t3396191086, ___U24disposing_4)); }
	inline bool get_U24disposing_4() const { return ___U24disposing_4; }
	inline bool* get_address_of_U24disposing_4() { return &___U24disposing_4; }
	inline void set_U24disposing_4(bool value)
	{
		___U24disposing_4 = value;
	}

	inline static int32_t get_offset_of_U24PC_5() { return static_cast<int32_t>(offsetof(U3CDelayedCallbackU3Ec__Iterator7_t3396191086, ___U24PC_5)); }
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
