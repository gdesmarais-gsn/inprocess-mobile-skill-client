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
// GSN.Skill.Games.Tripeaks.DynamiteCountdownTask
struct DynamiteCountdownTask_t3600144113;

#include "AssemblyU2DCSharp_GSN_Skill_Games_Common_Primitive2915596887.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Games.Tripeaks.TriPeaksCard
struct  TriPeaksCard_t214310709  : public GsnStandardCard_t2915596887
{
public:
	// System.Int32 GSN.Skill.Games.Tripeaks.TriPeaksCard::<activationCounter>k__BackingField
	int32_t ___U3CactivationCounterU3Ek__BackingField_14;
	// GSN.Skill.Games.Tripeaks.DynamiteCountdownTask GSN.Skill.Games.Tripeaks.TriPeaksCard::_countdownTask
	DynamiteCountdownTask_t3600144113 * ____countdownTask_15;

public:
	inline static int32_t get_offset_of_U3CactivationCounterU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(TriPeaksCard_t214310709, ___U3CactivationCounterU3Ek__BackingField_14)); }
	inline int32_t get_U3CactivationCounterU3Ek__BackingField_14() const { return ___U3CactivationCounterU3Ek__BackingField_14; }
	inline int32_t* get_address_of_U3CactivationCounterU3Ek__BackingField_14() { return &___U3CactivationCounterU3Ek__BackingField_14; }
	inline void set_U3CactivationCounterU3Ek__BackingField_14(int32_t value)
	{
		___U3CactivationCounterU3Ek__BackingField_14 = value;
	}

	inline static int32_t get_offset_of__countdownTask_15() { return static_cast<int32_t>(offsetof(TriPeaksCard_t214310709, ____countdownTask_15)); }
	inline DynamiteCountdownTask_t3600144113 * get__countdownTask_15() const { return ____countdownTask_15; }
	inline DynamiteCountdownTask_t3600144113 ** get_address_of__countdownTask_15() { return &____countdownTask_15; }
	inline void set__countdownTask_15(DynamiteCountdownTask_t3600144113 * value)
	{
		____countdownTask_15 = value;
		Il2CppCodeGenWriteBarrier(&____countdownTask_15, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
