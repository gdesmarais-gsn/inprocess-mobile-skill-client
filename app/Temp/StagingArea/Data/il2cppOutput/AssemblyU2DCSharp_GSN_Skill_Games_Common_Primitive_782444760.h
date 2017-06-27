#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// GSN.Skill.Games.Common.Primitive.Card.GsnCardPile
struct GsnCardPile_t3625903776;
// System.String
struct String_t;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Games.Common.Primitive.Card.GsnCard
struct  GsnCard_t782444760  : public Il2CppObject
{
public:
	// GSN.Skill.Games.Common.Primitive.Card.GsnCardPile GSN.Skill.Games.Common.Primitive.Card.GsnCard::_pile
	GsnCardPile_t3625903776 * ____pile_2;
	// System.String GSN.Skill.Games.Common.Primitive.Card.GsnCard::<type>k__BackingField
	String_t* ___U3CtypeU3Ek__BackingField_3;
	// System.Int32 GSN.Skill.Games.Common.Primitive.Card.GsnCard::<flags>k__BackingField
	int32_t ___U3CflagsU3Ek__BackingField_4;
	// System.Int32 GSN.Skill.Games.Common.Primitive.Card.GsnCard::<sortValue>k__BackingField
	int32_t ___U3CsortValueU3Ek__BackingField_5;

public:
	inline static int32_t get_offset_of__pile_2() { return static_cast<int32_t>(offsetof(GsnCard_t782444760, ____pile_2)); }
	inline GsnCardPile_t3625903776 * get__pile_2() const { return ____pile_2; }
	inline GsnCardPile_t3625903776 ** get_address_of__pile_2() { return &____pile_2; }
	inline void set__pile_2(GsnCardPile_t3625903776 * value)
	{
		____pile_2 = value;
		Il2CppCodeGenWriteBarrier(&____pile_2, value);
	}

	inline static int32_t get_offset_of_U3CtypeU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(GsnCard_t782444760, ___U3CtypeU3Ek__BackingField_3)); }
	inline String_t* get_U3CtypeU3Ek__BackingField_3() const { return ___U3CtypeU3Ek__BackingField_3; }
	inline String_t** get_address_of_U3CtypeU3Ek__BackingField_3() { return &___U3CtypeU3Ek__BackingField_3; }
	inline void set_U3CtypeU3Ek__BackingField_3(String_t* value)
	{
		___U3CtypeU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier(&___U3CtypeU3Ek__BackingField_3, value);
	}

	inline static int32_t get_offset_of_U3CflagsU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(GsnCard_t782444760, ___U3CflagsU3Ek__BackingField_4)); }
	inline int32_t get_U3CflagsU3Ek__BackingField_4() const { return ___U3CflagsU3Ek__BackingField_4; }
	inline int32_t* get_address_of_U3CflagsU3Ek__BackingField_4() { return &___U3CflagsU3Ek__BackingField_4; }
	inline void set_U3CflagsU3Ek__BackingField_4(int32_t value)
	{
		___U3CflagsU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CsortValueU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(GsnCard_t782444760, ___U3CsortValueU3Ek__BackingField_5)); }
	inline int32_t get_U3CsortValueU3Ek__BackingField_5() const { return ___U3CsortValueU3Ek__BackingField_5; }
	inline int32_t* get_address_of_U3CsortValueU3Ek__BackingField_5() { return &___U3CsortValueU3Ek__BackingField_5; }
	inline void set_U3CsortValueU3Ek__BackingField_5(int32_t value)
	{
		___U3CsortValueU3Ek__BackingField_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
