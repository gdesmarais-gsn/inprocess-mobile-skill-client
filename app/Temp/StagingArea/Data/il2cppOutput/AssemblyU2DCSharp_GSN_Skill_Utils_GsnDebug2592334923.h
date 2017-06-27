#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String[]
struct StringU5BU5D_t1642385972;
// System.Action`1<System.Exception>
struct Action_1_t1729240069;
// System.Text.StringBuilder
struct StringBuilder_t1221177846;
// System.String
struct String_t;

#include "mscorlib_System_Object2689449295.h"
#include "AssemblyU2DCSharp_GSN_Skill_Utils_LogContext4282415095.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Utils.GsnDebug
struct  GsnDebug_t2592334923  : public Il2CppObject
{
public:

public:
};

struct GsnDebug_t2592334923_StaticFields
{
public:
	// GSN.Skill.Utils.LogContext GSN.Skill.Utils.GsnDebug::context
	LogContext_t4282415095  ___context_1;
	// System.Int32 GSN.Skill.Utils.GsnDebug::_recentLogSize
	int32_t ____recentLogSize_2;
	// System.Int32 GSN.Skill.Utils.GsnDebug::nextLogPosition
	int32_t ___nextLogPosition_3;
	// System.Int32 GSN.Skill.Utils.GsnDebug::firstLogPosition
	int32_t ___firstLogPosition_4;
	// System.String[] GSN.Skill.Utils.GsnDebug::recentLog
	StringU5BU5D_t1642385972* ___recentLog_5;
	// System.Action`1<System.Exception> GSN.Skill.Utils.GsnDebug::logHandledException
	Action_1_t1729240069 * ___logHandledException_6;
	// System.Text.StringBuilder GSN.Skill.Utils.GsnDebug::_str
	StringBuilder_t1221177846 * ____str_7;
	// System.Boolean GSN.Skill.Utils.GsnDebug::upLoading
	bool ___upLoading_8;
	// System.Boolean GSN.Skill.Utils.GsnDebug::haveRecentLogs
	bool ___haveRecentLogs_9;
	// System.String GSN.Skill.Utils.GsnDebug::<END_COLOR>k__BackingField
	String_t* ___U3CEND_COLORU3Ek__BackingField_10;
	// System.String GSN.Skill.Utils.GsnDebug::<COLOR_RED>k__BackingField
	String_t* ___U3CCOLOR_REDU3Ek__BackingField_11;
	// System.String GSN.Skill.Utils.GsnDebug::<COLOR_GREEN>k__BackingField
	String_t* ___U3CCOLOR_GREENU3Ek__BackingField_12;
	// System.String GSN.Skill.Utils.GsnDebug::<COLOR_BLUE>k__BackingField
	String_t* ___U3CCOLOR_BLUEU3Ek__BackingField_13;
	// System.String GSN.Skill.Utils.GsnDebug::<COLOR_YELLOW>k__BackingField
	String_t* ___U3CCOLOR_YELLOWU3Ek__BackingField_14;
	// System.String GSN.Skill.Utils.GsnDebug::<COLOR_CYAN>k__BackingField
	String_t* ___U3CCOLOR_CYANU3Ek__BackingField_15;
	// System.String GSN.Skill.Utils.GsnDebug::<COLOR_MAGENTA>k__BackingField
	String_t* ___U3CCOLOR_MAGENTAU3Ek__BackingField_16;
	// System.String GSN.Skill.Utils.GsnDebug::<COLOR_ORANGE>k__BackingField
	String_t* ___U3CCOLOR_ORANGEU3Ek__BackingField_17;
	// System.String GSN.Skill.Utils.GsnDebug::<COLOR_SPRING_GREEN>k__BackingField
	String_t* ___U3CCOLOR_SPRING_GREENU3Ek__BackingField_18;
	// System.String GSN.Skill.Utils.GsnDebug::<COLOR_VIOLET>k__BackingField
	String_t* ___U3CCOLOR_VIOLETU3Ek__BackingField_19;
	// System.String GSN.Skill.Utils.GsnDebug::<COLOR_CANARY>k__BackingField
	String_t* ___U3CCOLOR_CANARYU3Ek__BackingField_20;
	// System.String GSN.Skill.Utils.GsnDebug::<COLOR_ROYAL_BLUE>k__BackingField
	String_t* ___U3CCOLOR_ROYAL_BLUEU3Ek__BackingField_21;
	// System.String GSN.Skill.Utils.GsnDebug::<COLOR_PINK>k__BackingField
	String_t* ___U3CCOLOR_PINKU3Ek__BackingField_22;

public:
	inline static int32_t get_offset_of_context_1() { return static_cast<int32_t>(offsetof(GsnDebug_t2592334923_StaticFields, ___context_1)); }
	inline LogContext_t4282415095  get_context_1() const { return ___context_1; }
	inline LogContext_t4282415095 * get_address_of_context_1() { return &___context_1; }
	inline void set_context_1(LogContext_t4282415095  value)
	{
		___context_1 = value;
	}

	inline static int32_t get_offset_of__recentLogSize_2() { return static_cast<int32_t>(offsetof(GsnDebug_t2592334923_StaticFields, ____recentLogSize_2)); }
	inline int32_t get__recentLogSize_2() const { return ____recentLogSize_2; }
	inline int32_t* get_address_of__recentLogSize_2() { return &____recentLogSize_2; }
	inline void set__recentLogSize_2(int32_t value)
	{
		____recentLogSize_2 = value;
	}

	inline static int32_t get_offset_of_nextLogPosition_3() { return static_cast<int32_t>(offsetof(GsnDebug_t2592334923_StaticFields, ___nextLogPosition_3)); }
	inline int32_t get_nextLogPosition_3() const { return ___nextLogPosition_3; }
	inline int32_t* get_address_of_nextLogPosition_3() { return &___nextLogPosition_3; }
	inline void set_nextLogPosition_3(int32_t value)
	{
		___nextLogPosition_3 = value;
	}

	inline static int32_t get_offset_of_firstLogPosition_4() { return static_cast<int32_t>(offsetof(GsnDebug_t2592334923_StaticFields, ___firstLogPosition_4)); }
	inline int32_t get_firstLogPosition_4() const { return ___firstLogPosition_4; }
	inline int32_t* get_address_of_firstLogPosition_4() { return &___firstLogPosition_4; }
	inline void set_firstLogPosition_4(int32_t value)
	{
		___firstLogPosition_4 = value;
	}

	inline static int32_t get_offset_of_recentLog_5() { return static_cast<int32_t>(offsetof(GsnDebug_t2592334923_StaticFields, ___recentLog_5)); }
	inline StringU5BU5D_t1642385972* get_recentLog_5() const { return ___recentLog_5; }
	inline StringU5BU5D_t1642385972** get_address_of_recentLog_5() { return &___recentLog_5; }
	inline void set_recentLog_5(StringU5BU5D_t1642385972* value)
	{
		___recentLog_5 = value;
		Il2CppCodeGenWriteBarrier(&___recentLog_5, value);
	}

	inline static int32_t get_offset_of_logHandledException_6() { return static_cast<int32_t>(offsetof(GsnDebug_t2592334923_StaticFields, ___logHandledException_6)); }
	inline Action_1_t1729240069 * get_logHandledException_6() const { return ___logHandledException_6; }
	inline Action_1_t1729240069 ** get_address_of_logHandledException_6() { return &___logHandledException_6; }
	inline void set_logHandledException_6(Action_1_t1729240069 * value)
	{
		___logHandledException_6 = value;
		Il2CppCodeGenWriteBarrier(&___logHandledException_6, value);
	}

	inline static int32_t get_offset_of__str_7() { return static_cast<int32_t>(offsetof(GsnDebug_t2592334923_StaticFields, ____str_7)); }
	inline StringBuilder_t1221177846 * get__str_7() const { return ____str_7; }
	inline StringBuilder_t1221177846 ** get_address_of__str_7() { return &____str_7; }
	inline void set__str_7(StringBuilder_t1221177846 * value)
	{
		____str_7 = value;
		Il2CppCodeGenWriteBarrier(&____str_7, value);
	}

	inline static int32_t get_offset_of_upLoading_8() { return static_cast<int32_t>(offsetof(GsnDebug_t2592334923_StaticFields, ___upLoading_8)); }
	inline bool get_upLoading_8() const { return ___upLoading_8; }
	inline bool* get_address_of_upLoading_8() { return &___upLoading_8; }
	inline void set_upLoading_8(bool value)
	{
		___upLoading_8 = value;
	}

	inline static int32_t get_offset_of_haveRecentLogs_9() { return static_cast<int32_t>(offsetof(GsnDebug_t2592334923_StaticFields, ___haveRecentLogs_9)); }
	inline bool get_haveRecentLogs_9() const { return ___haveRecentLogs_9; }
	inline bool* get_address_of_haveRecentLogs_9() { return &___haveRecentLogs_9; }
	inline void set_haveRecentLogs_9(bool value)
	{
		___haveRecentLogs_9 = value;
	}

	inline static int32_t get_offset_of_U3CEND_COLORU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(GsnDebug_t2592334923_StaticFields, ___U3CEND_COLORU3Ek__BackingField_10)); }
	inline String_t* get_U3CEND_COLORU3Ek__BackingField_10() const { return ___U3CEND_COLORU3Ek__BackingField_10; }
	inline String_t** get_address_of_U3CEND_COLORU3Ek__BackingField_10() { return &___U3CEND_COLORU3Ek__BackingField_10; }
	inline void set_U3CEND_COLORU3Ek__BackingField_10(String_t* value)
	{
		___U3CEND_COLORU3Ek__BackingField_10 = value;
		Il2CppCodeGenWriteBarrier(&___U3CEND_COLORU3Ek__BackingField_10, value);
	}

	inline static int32_t get_offset_of_U3CCOLOR_REDU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(GsnDebug_t2592334923_StaticFields, ___U3CCOLOR_REDU3Ek__BackingField_11)); }
	inline String_t* get_U3CCOLOR_REDU3Ek__BackingField_11() const { return ___U3CCOLOR_REDU3Ek__BackingField_11; }
	inline String_t** get_address_of_U3CCOLOR_REDU3Ek__BackingField_11() { return &___U3CCOLOR_REDU3Ek__BackingField_11; }
	inline void set_U3CCOLOR_REDU3Ek__BackingField_11(String_t* value)
	{
		___U3CCOLOR_REDU3Ek__BackingField_11 = value;
		Il2CppCodeGenWriteBarrier(&___U3CCOLOR_REDU3Ek__BackingField_11, value);
	}

	inline static int32_t get_offset_of_U3CCOLOR_GREENU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(GsnDebug_t2592334923_StaticFields, ___U3CCOLOR_GREENU3Ek__BackingField_12)); }
	inline String_t* get_U3CCOLOR_GREENU3Ek__BackingField_12() const { return ___U3CCOLOR_GREENU3Ek__BackingField_12; }
	inline String_t** get_address_of_U3CCOLOR_GREENU3Ek__BackingField_12() { return &___U3CCOLOR_GREENU3Ek__BackingField_12; }
	inline void set_U3CCOLOR_GREENU3Ek__BackingField_12(String_t* value)
	{
		___U3CCOLOR_GREENU3Ek__BackingField_12 = value;
		Il2CppCodeGenWriteBarrier(&___U3CCOLOR_GREENU3Ek__BackingField_12, value);
	}

	inline static int32_t get_offset_of_U3CCOLOR_BLUEU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(GsnDebug_t2592334923_StaticFields, ___U3CCOLOR_BLUEU3Ek__BackingField_13)); }
	inline String_t* get_U3CCOLOR_BLUEU3Ek__BackingField_13() const { return ___U3CCOLOR_BLUEU3Ek__BackingField_13; }
	inline String_t** get_address_of_U3CCOLOR_BLUEU3Ek__BackingField_13() { return &___U3CCOLOR_BLUEU3Ek__BackingField_13; }
	inline void set_U3CCOLOR_BLUEU3Ek__BackingField_13(String_t* value)
	{
		___U3CCOLOR_BLUEU3Ek__BackingField_13 = value;
		Il2CppCodeGenWriteBarrier(&___U3CCOLOR_BLUEU3Ek__BackingField_13, value);
	}

	inline static int32_t get_offset_of_U3CCOLOR_YELLOWU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(GsnDebug_t2592334923_StaticFields, ___U3CCOLOR_YELLOWU3Ek__BackingField_14)); }
	inline String_t* get_U3CCOLOR_YELLOWU3Ek__BackingField_14() const { return ___U3CCOLOR_YELLOWU3Ek__BackingField_14; }
	inline String_t** get_address_of_U3CCOLOR_YELLOWU3Ek__BackingField_14() { return &___U3CCOLOR_YELLOWU3Ek__BackingField_14; }
	inline void set_U3CCOLOR_YELLOWU3Ek__BackingField_14(String_t* value)
	{
		___U3CCOLOR_YELLOWU3Ek__BackingField_14 = value;
		Il2CppCodeGenWriteBarrier(&___U3CCOLOR_YELLOWU3Ek__BackingField_14, value);
	}

	inline static int32_t get_offset_of_U3CCOLOR_CYANU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(GsnDebug_t2592334923_StaticFields, ___U3CCOLOR_CYANU3Ek__BackingField_15)); }
	inline String_t* get_U3CCOLOR_CYANU3Ek__BackingField_15() const { return ___U3CCOLOR_CYANU3Ek__BackingField_15; }
	inline String_t** get_address_of_U3CCOLOR_CYANU3Ek__BackingField_15() { return &___U3CCOLOR_CYANU3Ek__BackingField_15; }
	inline void set_U3CCOLOR_CYANU3Ek__BackingField_15(String_t* value)
	{
		___U3CCOLOR_CYANU3Ek__BackingField_15 = value;
		Il2CppCodeGenWriteBarrier(&___U3CCOLOR_CYANU3Ek__BackingField_15, value);
	}

	inline static int32_t get_offset_of_U3CCOLOR_MAGENTAU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(GsnDebug_t2592334923_StaticFields, ___U3CCOLOR_MAGENTAU3Ek__BackingField_16)); }
	inline String_t* get_U3CCOLOR_MAGENTAU3Ek__BackingField_16() const { return ___U3CCOLOR_MAGENTAU3Ek__BackingField_16; }
	inline String_t** get_address_of_U3CCOLOR_MAGENTAU3Ek__BackingField_16() { return &___U3CCOLOR_MAGENTAU3Ek__BackingField_16; }
	inline void set_U3CCOLOR_MAGENTAU3Ek__BackingField_16(String_t* value)
	{
		___U3CCOLOR_MAGENTAU3Ek__BackingField_16 = value;
		Il2CppCodeGenWriteBarrier(&___U3CCOLOR_MAGENTAU3Ek__BackingField_16, value);
	}

	inline static int32_t get_offset_of_U3CCOLOR_ORANGEU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(GsnDebug_t2592334923_StaticFields, ___U3CCOLOR_ORANGEU3Ek__BackingField_17)); }
	inline String_t* get_U3CCOLOR_ORANGEU3Ek__BackingField_17() const { return ___U3CCOLOR_ORANGEU3Ek__BackingField_17; }
	inline String_t** get_address_of_U3CCOLOR_ORANGEU3Ek__BackingField_17() { return &___U3CCOLOR_ORANGEU3Ek__BackingField_17; }
	inline void set_U3CCOLOR_ORANGEU3Ek__BackingField_17(String_t* value)
	{
		___U3CCOLOR_ORANGEU3Ek__BackingField_17 = value;
		Il2CppCodeGenWriteBarrier(&___U3CCOLOR_ORANGEU3Ek__BackingField_17, value);
	}

	inline static int32_t get_offset_of_U3CCOLOR_SPRING_GREENU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(GsnDebug_t2592334923_StaticFields, ___U3CCOLOR_SPRING_GREENU3Ek__BackingField_18)); }
	inline String_t* get_U3CCOLOR_SPRING_GREENU3Ek__BackingField_18() const { return ___U3CCOLOR_SPRING_GREENU3Ek__BackingField_18; }
	inline String_t** get_address_of_U3CCOLOR_SPRING_GREENU3Ek__BackingField_18() { return &___U3CCOLOR_SPRING_GREENU3Ek__BackingField_18; }
	inline void set_U3CCOLOR_SPRING_GREENU3Ek__BackingField_18(String_t* value)
	{
		___U3CCOLOR_SPRING_GREENU3Ek__BackingField_18 = value;
		Il2CppCodeGenWriteBarrier(&___U3CCOLOR_SPRING_GREENU3Ek__BackingField_18, value);
	}

	inline static int32_t get_offset_of_U3CCOLOR_VIOLETU3Ek__BackingField_19() { return static_cast<int32_t>(offsetof(GsnDebug_t2592334923_StaticFields, ___U3CCOLOR_VIOLETU3Ek__BackingField_19)); }
	inline String_t* get_U3CCOLOR_VIOLETU3Ek__BackingField_19() const { return ___U3CCOLOR_VIOLETU3Ek__BackingField_19; }
	inline String_t** get_address_of_U3CCOLOR_VIOLETU3Ek__BackingField_19() { return &___U3CCOLOR_VIOLETU3Ek__BackingField_19; }
	inline void set_U3CCOLOR_VIOLETU3Ek__BackingField_19(String_t* value)
	{
		___U3CCOLOR_VIOLETU3Ek__BackingField_19 = value;
		Il2CppCodeGenWriteBarrier(&___U3CCOLOR_VIOLETU3Ek__BackingField_19, value);
	}

	inline static int32_t get_offset_of_U3CCOLOR_CANARYU3Ek__BackingField_20() { return static_cast<int32_t>(offsetof(GsnDebug_t2592334923_StaticFields, ___U3CCOLOR_CANARYU3Ek__BackingField_20)); }
	inline String_t* get_U3CCOLOR_CANARYU3Ek__BackingField_20() const { return ___U3CCOLOR_CANARYU3Ek__BackingField_20; }
	inline String_t** get_address_of_U3CCOLOR_CANARYU3Ek__BackingField_20() { return &___U3CCOLOR_CANARYU3Ek__BackingField_20; }
	inline void set_U3CCOLOR_CANARYU3Ek__BackingField_20(String_t* value)
	{
		___U3CCOLOR_CANARYU3Ek__BackingField_20 = value;
		Il2CppCodeGenWriteBarrier(&___U3CCOLOR_CANARYU3Ek__BackingField_20, value);
	}

	inline static int32_t get_offset_of_U3CCOLOR_ROYAL_BLUEU3Ek__BackingField_21() { return static_cast<int32_t>(offsetof(GsnDebug_t2592334923_StaticFields, ___U3CCOLOR_ROYAL_BLUEU3Ek__BackingField_21)); }
	inline String_t* get_U3CCOLOR_ROYAL_BLUEU3Ek__BackingField_21() const { return ___U3CCOLOR_ROYAL_BLUEU3Ek__BackingField_21; }
	inline String_t** get_address_of_U3CCOLOR_ROYAL_BLUEU3Ek__BackingField_21() { return &___U3CCOLOR_ROYAL_BLUEU3Ek__BackingField_21; }
	inline void set_U3CCOLOR_ROYAL_BLUEU3Ek__BackingField_21(String_t* value)
	{
		___U3CCOLOR_ROYAL_BLUEU3Ek__BackingField_21 = value;
		Il2CppCodeGenWriteBarrier(&___U3CCOLOR_ROYAL_BLUEU3Ek__BackingField_21, value);
	}

	inline static int32_t get_offset_of_U3CCOLOR_PINKU3Ek__BackingField_22() { return static_cast<int32_t>(offsetof(GsnDebug_t2592334923_StaticFields, ___U3CCOLOR_PINKU3Ek__BackingField_22)); }
	inline String_t* get_U3CCOLOR_PINKU3Ek__BackingField_22() const { return ___U3CCOLOR_PINKU3Ek__BackingField_22; }
	inline String_t** get_address_of_U3CCOLOR_PINKU3Ek__BackingField_22() { return &___U3CCOLOR_PINKU3Ek__BackingField_22; }
	inline void set_U3CCOLOR_PINKU3Ek__BackingField_22(String_t* value)
	{
		___U3CCOLOR_PINKU3Ek__BackingField_22 = value;
		Il2CppCodeGenWriteBarrier(&___U3CCOLOR_PINKU3Ek__BackingField_22, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
