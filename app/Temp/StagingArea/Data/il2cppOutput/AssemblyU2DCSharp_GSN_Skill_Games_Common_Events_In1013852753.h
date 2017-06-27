#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.Dictionary`2<System.Int32,System.Type>>
struct Dictionary_2_t2248986758;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Type>
struct Dictionary_2_t311628861;
// System.Func`2<System.Reflection.Assembly,System.Collections.Generic.IEnumerable`1<System.Type>>
struct Func_2_t101629490;
// System.Func`2<System.Type,System.Boolean>
struct Func_2_t2011960077;

#include "AssemblyU2DCSharp_GSN_Skill_Games_Common_Utils_Jso2787677655.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Games.Common.Events.InputMessageConverter
struct  InputMessageConverter_t1013852753  : public JsonCreationConverter_1_t2787677655
{
public:
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Type> GSN.Skill.Games.Common.Events.InputMessageConverter::_msgTypeLookup
	Dictionary_2_t311628861 * ____msgTypeLookup_1;

public:
	inline static int32_t get_offset_of__msgTypeLookup_1() { return static_cast<int32_t>(offsetof(InputMessageConverter_t1013852753, ____msgTypeLookup_1)); }
	inline Dictionary_2_t311628861 * get__msgTypeLookup_1() const { return ____msgTypeLookup_1; }
	inline Dictionary_2_t311628861 ** get_address_of__msgTypeLookup_1() { return &____msgTypeLookup_1; }
	inline void set__msgTypeLookup_1(Dictionary_2_t311628861 * value)
	{
		____msgTypeLookup_1 = value;
		Il2CppCodeGenWriteBarrier(&____msgTypeLookup_1, value);
	}
};

struct InputMessageConverter_t1013852753_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.Dictionary`2<System.Int32,System.Type>> GSN.Skill.Games.Common.Events.InputMessageConverter::MSG_TYPE_LOOKUP
	Dictionary_2_t2248986758 * ___MSG_TYPE_LOOKUP_0;
	// System.Func`2<System.Reflection.Assembly,System.Collections.Generic.IEnumerable`1<System.Type>> GSN.Skill.Games.Common.Events.InputMessageConverter::<>f__mg$cache0
	Func_2_t101629490 * ___U3CU3Ef__mgU24cache0_2;
	// System.Func`2<System.Type,System.Boolean> GSN.Skill.Games.Common.Events.InputMessageConverter::<>f__am$cache0
	Func_2_t2011960077 * ___U3CU3Ef__amU24cache0_3;
	// System.Func`2<System.Type,System.Boolean> GSN.Skill.Games.Common.Events.InputMessageConverter::<>f__am$cache1
	Func_2_t2011960077 * ___U3CU3Ef__amU24cache1_4;

public:
	inline static int32_t get_offset_of_MSG_TYPE_LOOKUP_0() { return static_cast<int32_t>(offsetof(InputMessageConverter_t1013852753_StaticFields, ___MSG_TYPE_LOOKUP_0)); }
	inline Dictionary_2_t2248986758 * get_MSG_TYPE_LOOKUP_0() const { return ___MSG_TYPE_LOOKUP_0; }
	inline Dictionary_2_t2248986758 ** get_address_of_MSG_TYPE_LOOKUP_0() { return &___MSG_TYPE_LOOKUP_0; }
	inline void set_MSG_TYPE_LOOKUP_0(Dictionary_2_t2248986758 * value)
	{
		___MSG_TYPE_LOOKUP_0 = value;
		Il2CppCodeGenWriteBarrier(&___MSG_TYPE_LOOKUP_0, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache0_2() { return static_cast<int32_t>(offsetof(InputMessageConverter_t1013852753_StaticFields, ___U3CU3Ef__mgU24cache0_2)); }
	inline Func_2_t101629490 * get_U3CU3Ef__mgU24cache0_2() const { return ___U3CU3Ef__mgU24cache0_2; }
	inline Func_2_t101629490 ** get_address_of_U3CU3Ef__mgU24cache0_2() { return &___U3CU3Ef__mgU24cache0_2; }
	inline void set_U3CU3Ef__mgU24cache0_2(Func_2_t101629490 * value)
	{
		___U3CU3Ef__mgU24cache0_2 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__mgU24cache0_2, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_3() { return static_cast<int32_t>(offsetof(InputMessageConverter_t1013852753_StaticFields, ___U3CU3Ef__amU24cache0_3)); }
	inline Func_2_t2011960077 * get_U3CU3Ef__amU24cache0_3() const { return ___U3CU3Ef__amU24cache0_3; }
	inline Func_2_t2011960077 ** get_address_of_U3CU3Ef__amU24cache0_3() { return &___U3CU3Ef__amU24cache0_3; }
	inline void set_U3CU3Ef__amU24cache0_3(Func_2_t2011960077 * value)
	{
		___U3CU3Ef__amU24cache0_3 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache0_3, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache1_4() { return static_cast<int32_t>(offsetof(InputMessageConverter_t1013852753_StaticFields, ___U3CU3Ef__amU24cache1_4)); }
	inline Func_2_t2011960077 * get_U3CU3Ef__amU24cache1_4() const { return ___U3CU3Ef__amU24cache1_4; }
	inline Func_2_t2011960077 ** get_address_of_U3CU3Ef__amU24cache1_4() { return &___U3CU3Ef__amU24cache1_4; }
	inline void set_U3CU3Ef__amU24cache1_4(Func_2_t2011960077 * value)
	{
		___U3CU3Ef__amU24cache1_4 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache1_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
