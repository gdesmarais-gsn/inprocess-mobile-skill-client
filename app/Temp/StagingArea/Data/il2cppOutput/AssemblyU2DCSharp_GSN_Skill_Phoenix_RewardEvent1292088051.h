#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<GSN.Skill.Phoenix.RewardEvent/Reward>
struct List_1_t2104168057;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Phoenix.RewardEvent
struct  RewardEvent_t1292088051  : public Il2CppObject
{
public:
	// System.Collections.Generic.List`1<GSN.Skill.Phoenix.RewardEvent/Reward> GSN.Skill.Phoenix.RewardEvent::rewards
	List_1_t2104168057 * ___rewards_0;
	// System.Int32 GSN.Skill.Phoenix.RewardEvent::playersRewardPointBalance
	int32_t ___playersRewardPointBalance_1;

public:
	inline static int32_t get_offset_of_rewards_0() { return static_cast<int32_t>(offsetof(RewardEvent_t1292088051, ___rewards_0)); }
	inline List_1_t2104168057 * get_rewards_0() const { return ___rewards_0; }
	inline List_1_t2104168057 ** get_address_of_rewards_0() { return &___rewards_0; }
	inline void set_rewards_0(List_1_t2104168057 * value)
	{
		___rewards_0 = value;
		Il2CppCodeGenWriteBarrier(&___rewards_0, value);
	}

	inline static int32_t get_offset_of_playersRewardPointBalance_1() { return static_cast<int32_t>(offsetof(RewardEvent_t1292088051, ___playersRewardPointBalance_1)); }
	inline int32_t get_playersRewardPointBalance_1() const { return ___playersRewardPointBalance_1; }
	inline int32_t* get_address_of_playersRewardPointBalance_1() { return &___playersRewardPointBalance_1; }
	inline void set_playersRewardPointBalance_1(int32_t value)
	{
		___playersRewardPointBalance_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
