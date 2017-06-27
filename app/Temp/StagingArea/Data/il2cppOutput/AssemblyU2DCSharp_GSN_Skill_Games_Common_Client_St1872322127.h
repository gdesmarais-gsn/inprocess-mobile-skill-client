#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<System.String>
struct List_1_t1398341365;
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t3943999495;

#include "AssemblyU2DCSharp_GSN_Skill_Games_Common_Client_Sing52774316.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Games.Common.Client.StringTable
struct  StringTable_t1872322127  : public Singleton_1_t52774316
{
public:
	// System.Boolean GSN.Skill.Games.Common.Client.StringTable::cheat
	bool ___cheat_1;
	// System.Collections.Generic.List`1<System.String> GSN.Skill.Games.Common.Client.StringTable::<stringIDs>k__BackingField
	List_1_t1398341365 * ___U3CstringIDsU3Ek__BackingField_2;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> GSN.Skill.Games.Common.Client.StringTable::_table
	Dictionary_2_t3943999495 * ____table_4;

public:
	inline static int32_t get_offset_of_cheat_1() { return static_cast<int32_t>(offsetof(StringTable_t1872322127, ___cheat_1)); }
	inline bool get_cheat_1() const { return ___cheat_1; }
	inline bool* get_address_of_cheat_1() { return &___cheat_1; }
	inline void set_cheat_1(bool value)
	{
		___cheat_1 = value;
	}

	inline static int32_t get_offset_of_U3CstringIDsU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(StringTable_t1872322127, ___U3CstringIDsU3Ek__BackingField_2)); }
	inline List_1_t1398341365 * get_U3CstringIDsU3Ek__BackingField_2() const { return ___U3CstringIDsU3Ek__BackingField_2; }
	inline List_1_t1398341365 ** get_address_of_U3CstringIDsU3Ek__BackingField_2() { return &___U3CstringIDsU3Ek__BackingField_2; }
	inline void set_U3CstringIDsU3Ek__BackingField_2(List_1_t1398341365 * value)
	{
		___U3CstringIDsU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier(&___U3CstringIDsU3Ek__BackingField_2, value);
	}

	inline static int32_t get_offset_of__table_4() { return static_cast<int32_t>(offsetof(StringTable_t1872322127, ____table_4)); }
	inline Dictionary_2_t3943999495 * get__table_4() const { return ____table_4; }
	inline Dictionary_2_t3943999495 ** get_address_of__table_4() { return &____table_4; }
	inline void set__table_4(Dictionary_2_t3943999495 * value)
	{
		____table_4 = value;
		Il2CppCodeGenWriteBarrier(&____table_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
