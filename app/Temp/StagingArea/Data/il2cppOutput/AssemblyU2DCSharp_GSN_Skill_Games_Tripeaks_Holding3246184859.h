#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// GSN.Skill.Games.Tripeaks.Card
struct Card_t2087545274;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Games.Tripeaks.HoldingCard
struct  HoldingCard_t3246184859  : public MonoBehaviour_t1158329972
{
public:
	// GSN.Skill.Games.Tripeaks.Card GSN.Skill.Games.Tripeaks.HoldingCard::_CurrentCard
	Card_t2087545274 * ____CurrentCard_2;

public:
	inline static int32_t get_offset_of__CurrentCard_2() { return static_cast<int32_t>(offsetof(HoldingCard_t3246184859, ____CurrentCard_2)); }
	inline Card_t2087545274 * get__CurrentCard_2() const { return ____CurrentCard_2; }
	inline Card_t2087545274 ** get_address_of__CurrentCard_2() { return &____CurrentCard_2; }
	inline void set__CurrentCard_2(Card_t2087545274 * value)
	{
		____CurrentCard_2 = value;
		Il2CppCodeGenWriteBarrier(&____CurrentCard_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
