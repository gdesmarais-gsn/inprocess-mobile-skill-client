#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// GSN.Skill.Games.Tripeaks.PlayfieldModelData
struct PlayfieldModelData_t1827511723;

#include "AssemblyU2DCSharp_GSN_Skill_Games_Common_Primitive1823276868.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Games.Tripeaks.TriPeaksCardDeck
struct  TriPeaksCardDeck_t1840429032  : public GsnStandardCardDeck_t1823276868
{
public:
	// GSN.Skill.Games.Tripeaks.PlayfieldModelData GSN.Skill.Games.Tripeaks.TriPeaksCardDeck::_playfield
	PlayfieldModelData_t1827511723 * ____playfield_1;

public:
	inline static int32_t get_offset_of__playfield_1() { return static_cast<int32_t>(offsetof(TriPeaksCardDeck_t1840429032, ____playfield_1)); }
	inline PlayfieldModelData_t1827511723 * get__playfield_1() const { return ____playfield_1; }
	inline PlayfieldModelData_t1827511723 ** get_address_of__playfield_1() { return &____playfield_1; }
	inline void set__playfield_1(PlayfieldModelData_t1827511723 * value)
	{
		____playfield_1 = value;
		Il2CppCodeGenWriteBarrier(&____playfield_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
