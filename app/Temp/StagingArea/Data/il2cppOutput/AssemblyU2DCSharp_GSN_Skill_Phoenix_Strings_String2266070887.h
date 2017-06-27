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
// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.Dictionary`2<System.String,System.String>>
struct Dictionary_2_t1563811461;
// System.Collections.Generic.Dictionary`2<System.String,GSN.Skill.Phoenix.Strings.ErrorTranslation>
struct Dictionary_2_t2833502965;
// System.Collections.Generic.List`1<System.String>
struct List_1_t1398341365;

#include "AssemblyU2DCSharp_GSN_Skill_Utils_Singleton_1_gen1007083616.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Phoenix.Strings.StringTable
struct  StringTable_t2266070887  : public Singleton_1_t1007083616
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.Dictionary`2<System.String,System.String>> GSN.Skill.Phoenix.Strings.StringTable::_stringLookupTable
	Dictionary_2_t1563811461 * ____stringLookupTable_4;
	// System.Collections.Generic.Dictionary`2<System.String,GSN.Skill.Phoenix.Strings.ErrorTranslation> GSN.Skill.Phoenix.Strings.StringTable::_errorLookupTable
	Dictionary_2_t2833502965 * ____errorLookupTable_5;
	// System.Boolean GSN.Skill.Phoenix.Strings.StringTable::_cheatEnabled
	bool ____cheatEnabled_6;
	// System.Collections.Generic.List`1<System.String> GSN.Skill.Phoenix.Strings.StringTable::<StringIDs>k__BackingField
	List_1_t1398341365 * ___U3CStringIDsU3Ek__BackingField_7;

public:
	inline static int32_t get_offset_of__stringLookupTable_4() { return static_cast<int32_t>(offsetof(StringTable_t2266070887, ____stringLookupTable_4)); }
	inline Dictionary_2_t1563811461 * get__stringLookupTable_4() const { return ____stringLookupTable_4; }
	inline Dictionary_2_t1563811461 ** get_address_of__stringLookupTable_4() { return &____stringLookupTable_4; }
	inline void set__stringLookupTable_4(Dictionary_2_t1563811461 * value)
	{
		____stringLookupTable_4 = value;
		Il2CppCodeGenWriteBarrier(&____stringLookupTable_4, value);
	}

	inline static int32_t get_offset_of__errorLookupTable_5() { return static_cast<int32_t>(offsetof(StringTable_t2266070887, ____errorLookupTable_5)); }
	inline Dictionary_2_t2833502965 * get__errorLookupTable_5() const { return ____errorLookupTable_5; }
	inline Dictionary_2_t2833502965 ** get_address_of__errorLookupTable_5() { return &____errorLookupTable_5; }
	inline void set__errorLookupTable_5(Dictionary_2_t2833502965 * value)
	{
		____errorLookupTable_5 = value;
		Il2CppCodeGenWriteBarrier(&____errorLookupTable_5, value);
	}

	inline static int32_t get_offset_of__cheatEnabled_6() { return static_cast<int32_t>(offsetof(StringTable_t2266070887, ____cheatEnabled_6)); }
	inline bool get__cheatEnabled_6() const { return ____cheatEnabled_6; }
	inline bool* get_address_of__cheatEnabled_6() { return &____cheatEnabled_6; }
	inline void set__cheatEnabled_6(bool value)
	{
		____cheatEnabled_6 = value;
	}

	inline static int32_t get_offset_of_U3CStringIDsU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(StringTable_t2266070887, ___U3CStringIDsU3Ek__BackingField_7)); }
	inline List_1_t1398341365 * get_U3CStringIDsU3Ek__BackingField_7() const { return ___U3CStringIDsU3Ek__BackingField_7; }
	inline List_1_t1398341365 ** get_address_of_U3CStringIDsU3Ek__BackingField_7() { return &___U3CStringIDsU3Ek__BackingField_7; }
	inline void set_U3CStringIDsU3Ek__BackingField_7(List_1_t1398341365 * value)
	{
		___U3CStringIDsU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier(&___U3CStringIDsU3Ek__BackingField_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
