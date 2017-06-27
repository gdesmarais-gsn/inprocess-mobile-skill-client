#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<System.Int32>
struct List_1_t1440998580;

#include "mscorlib_System_Object2689449295.h"
#include "AssemblyU2DCSharp_GSN_Skill_Games_Tripeaks_CardTyp2845949242.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Games.Tripeaks.BaseCardData
struct  BaseCardData_t423020963  : public Il2CppObject
{
public:
	// System.Int32 GSN.Skill.Games.Tripeaks.BaseCardData::cardID
	int32_t ___cardID_0;
	// System.Collections.Generic.List`1<System.Int32> GSN.Skill.Games.Tripeaks.BaseCardData::coversCards
	List_1_t1440998580 * ___coversCards_1;
	// System.Collections.Generic.List`1<System.Int32> GSN.Skill.Games.Tripeaks.BaseCardData::coveredByCards
	List_1_t1440998580 * ___coveredByCards_2;
	// GSN.Skill.Games.Tripeaks.CardType GSN.Skill.Games.Tripeaks.BaseCardData::cardType
	int32_t ___cardType_3;

public:
	inline static int32_t get_offset_of_cardID_0() { return static_cast<int32_t>(offsetof(BaseCardData_t423020963, ___cardID_0)); }
	inline int32_t get_cardID_0() const { return ___cardID_0; }
	inline int32_t* get_address_of_cardID_0() { return &___cardID_0; }
	inline void set_cardID_0(int32_t value)
	{
		___cardID_0 = value;
	}

	inline static int32_t get_offset_of_coversCards_1() { return static_cast<int32_t>(offsetof(BaseCardData_t423020963, ___coversCards_1)); }
	inline List_1_t1440998580 * get_coversCards_1() const { return ___coversCards_1; }
	inline List_1_t1440998580 ** get_address_of_coversCards_1() { return &___coversCards_1; }
	inline void set_coversCards_1(List_1_t1440998580 * value)
	{
		___coversCards_1 = value;
		Il2CppCodeGenWriteBarrier(&___coversCards_1, value);
	}

	inline static int32_t get_offset_of_coveredByCards_2() { return static_cast<int32_t>(offsetof(BaseCardData_t423020963, ___coveredByCards_2)); }
	inline List_1_t1440998580 * get_coveredByCards_2() const { return ___coveredByCards_2; }
	inline List_1_t1440998580 ** get_address_of_coveredByCards_2() { return &___coveredByCards_2; }
	inline void set_coveredByCards_2(List_1_t1440998580 * value)
	{
		___coveredByCards_2 = value;
		Il2CppCodeGenWriteBarrier(&___coveredByCards_2, value);
	}

	inline static int32_t get_offset_of_cardType_3() { return static_cast<int32_t>(offsetof(BaseCardData_t423020963, ___cardType_3)); }
	inline int32_t get_cardType_3() const { return ___cardType_3; }
	inline int32_t* get_address_of_cardType_3() { return &___cardType_3; }
	inline void set_cardType_3(int32_t value)
	{
		___cardType_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
