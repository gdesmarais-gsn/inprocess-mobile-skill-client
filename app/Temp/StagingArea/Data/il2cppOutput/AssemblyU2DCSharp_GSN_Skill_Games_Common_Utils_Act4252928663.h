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
// GSN.Skill.Games.Common.Utils.ActionContext
struct ActionContext_t4252928663;
// System.Action
struct Action_t3226471752;
// GSN.Skill.Games.Common.Utils.ActionQueue
struct ActionQueue_t1924202305;

#include "mscorlib_System_Object2689449295.h"
#include "AssemblyU2DCSharp_GSN_Skill_Games_Common_Utils_Act1913585530.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Games.Common.Utils.ActionContext
struct  ActionContext_t4252928663  : public Il2CppObject
{
public:
	// System.String GSN.Skill.Games.Common.Utils.ActionContext::<name>k__BackingField
	String_t* ___U3CnameU3Ek__BackingField_6;
	// GSN.Skill.Games.Common.Utils.ActionContext GSN.Skill.Games.Common.Utils.ActionContext::<parent>k__BackingField
	ActionContext_t4252928663 * ___U3CparentU3Ek__BackingField_7;
	// System.Action GSN.Skill.Games.Common.Utils.ActionContext::<eHandler>k__BackingField
	Action_t3226471752 * ___U3CeHandlerU3Ek__BackingField_8;
	// System.Action GSN.Skill.Games.Common.Utils.ActionContext::<doneAction>k__BackingField
	Action_t3226471752 * ___U3CdoneActionU3Ek__BackingField_9;
	// System.Int32 GSN.Skill.Games.Common.Utils.ActionContext::<id>k__BackingField
	int32_t ___U3CidU3Ek__BackingField_10;
	// System.String GSN.Skill.Games.Common.Utils.ActionContext::note
	String_t* ___note_11;
	// System.Boolean GSN.Skill.Games.Common.Utils.ActionContext::<inPool>k__BackingField
	bool ___U3CinPoolU3Ek__BackingField_12;
	// System.Boolean GSN.Skill.Games.Common.Utils.ActionContext::<active>k__BackingField
	bool ___U3CactiveU3Ek__BackingField_13;
	// System.Int32 GSN.Skill.Games.Common.Utils.ActionContext::<refCount>k__BackingField
	int32_t ___U3CrefCountU3Ek__BackingField_14;
	// GSN.Skill.Games.Common.Utils.ActionContext/LoggingSettings GSN.Skill.Games.Common.Utils.ActionContext::loggingSettings
	LoggingSettings_t1913585530  ___loggingSettings_15;
	// GSN.Skill.Games.Common.Utils.ActionQueue GSN.Skill.Games.Common.Utils.ActionContext::actionQueue
	ActionQueue_t1924202305 * ___actionQueue_16;

public:
	inline static int32_t get_offset_of_U3CnameU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(ActionContext_t4252928663, ___U3CnameU3Ek__BackingField_6)); }
	inline String_t* get_U3CnameU3Ek__BackingField_6() const { return ___U3CnameU3Ek__BackingField_6; }
	inline String_t** get_address_of_U3CnameU3Ek__BackingField_6() { return &___U3CnameU3Ek__BackingField_6; }
	inline void set_U3CnameU3Ek__BackingField_6(String_t* value)
	{
		___U3CnameU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier(&___U3CnameU3Ek__BackingField_6, value);
	}

	inline static int32_t get_offset_of_U3CparentU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(ActionContext_t4252928663, ___U3CparentU3Ek__BackingField_7)); }
	inline ActionContext_t4252928663 * get_U3CparentU3Ek__BackingField_7() const { return ___U3CparentU3Ek__BackingField_7; }
	inline ActionContext_t4252928663 ** get_address_of_U3CparentU3Ek__BackingField_7() { return &___U3CparentU3Ek__BackingField_7; }
	inline void set_U3CparentU3Ek__BackingField_7(ActionContext_t4252928663 * value)
	{
		___U3CparentU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier(&___U3CparentU3Ek__BackingField_7, value);
	}

	inline static int32_t get_offset_of_U3CeHandlerU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(ActionContext_t4252928663, ___U3CeHandlerU3Ek__BackingField_8)); }
	inline Action_t3226471752 * get_U3CeHandlerU3Ek__BackingField_8() const { return ___U3CeHandlerU3Ek__BackingField_8; }
	inline Action_t3226471752 ** get_address_of_U3CeHandlerU3Ek__BackingField_8() { return &___U3CeHandlerU3Ek__BackingField_8; }
	inline void set_U3CeHandlerU3Ek__BackingField_8(Action_t3226471752 * value)
	{
		___U3CeHandlerU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier(&___U3CeHandlerU3Ek__BackingField_8, value);
	}

	inline static int32_t get_offset_of_U3CdoneActionU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(ActionContext_t4252928663, ___U3CdoneActionU3Ek__BackingField_9)); }
	inline Action_t3226471752 * get_U3CdoneActionU3Ek__BackingField_9() const { return ___U3CdoneActionU3Ek__BackingField_9; }
	inline Action_t3226471752 ** get_address_of_U3CdoneActionU3Ek__BackingField_9() { return &___U3CdoneActionU3Ek__BackingField_9; }
	inline void set_U3CdoneActionU3Ek__BackingField_9(Action_t3226471752 * value)
	{
		___U3CdoneActionU3Ek__BackingField_9 = value;
		Il2CppCodeGenWriteBarrier(&___U3CdoneActionU3Ek__BackingField_9, value);
	}

	inline static int32_t get_offset_of_U3CidU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(ActionContext_t4252928663, ___U3CidU3Ek__BackingField_10)); }
	inline int32_t get_U3CidU3Ek__BackingField_10() const { return ___U3CidU3Ek__BackingField_10; }
	inline int32_t* get_address_of_U3CidU3Ek__BackingField_10() { return &___U3CidU3Ek__BackingField_10; }
	inline void set_U3CidU3Ek__BackingField_10(int32_t value)
	{
		___U3CidU3Ek__BackingField_10 = value;
	}

	inline static int32_t get_offset_of_note_11() { return static_cast<int32_t>(offsetof(ActionContext_t4252928663, ___note_11)); }
	inline String_t* get_note_11() const { return ___note_11; }
	inline String_t** get_address_of_note_11() { return &___note_11; }
	inline void set_note_11(String_t* value)
	{
		___note_11 = value;
		Il2CppCodeGenWriteBarrier(&___note_11, value);
	}

	inline static int32_t get_offset_of_U3CinPoolU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(ActionContext_t4252928663, ___U3CinPoolU3Ek__BackingField_12)); }
	inline bool get_U3CinPoolU3Ek__BackingField_12() const { return ___U3CinPoolU3Ek__BackingField_12; }
	inline bool* get_address_of_U3CinPoolU3Ek__BackingField_12() { return &___U3CinPoolU3Ek__BackingField_12; }
	inline void set_U3CinPoolU3Ek__BackingField_12(bool value)
	{
		___U3CinPoolU3Ek__BackingField_12 = value;
	}

	inline static int32_t get_offset_of_U3CactiveU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(ActionContext_t4252928663, ___U3CactiveU3Ek__BackingField_13)); }
	inline bool get_U3CactiveU3Ek__BackingField_13() const { return ___U3CactiveU3Ek__BackingField_13; }
	inline bool* get_address_of_U3CactiveU3Ek__BackingField_13() { return &___U3CactiveU3Ek__BackingField_13; }
	inline void set_U3CactiveU3Ek__BackingField_13(bool value)
	{
		___U3CactiveU3Ek__BackingField_13 = value;
	}

	inline static int32_t get_offset_of_U3CrefCountU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(ActionContext_t4252928663, ___U3CrefCountU3Ek__BackingField_14)); }
	inline int32_t get_U3CrefCountU3Ek__BackingField_14() const { return ___U3CrefCountU3Ek__BackingField_14; }
	inline int32_t* get_address_of_U3CrefCountU3Ek__BackingField_14() { return &___U3CrefCountU3Ek__BackingField_14; }
	inline void set_U3CrefCountU3Ek__BackingField_14(int32_t value)
	{
		___U3CrefCountU3Ek__BackingField_14 = value;
	}

	inline static int32_t get_offset_of_loggingSettings_15() { return static_cast<int32_t>(offsetof(ActionContext_t4252928663, ___loggingSettings_15)); }
	inline LoggingSettings_t1913585530  get_loggingSettings_15() const { return ___loggingSettings_15; }
	inline LoggingSettings_t1913585530 * get_address_of_loggingSettings_15() { return &___loggingSettings_15; }
	inline void set_loggingSettings_15(LoggingSettings_t1913585530  value)
	{
		___loggingSettings_15 = value;
	}

	inline static int32_t get_offset_of_actionQueue_16() { return static_cast<int32_t>(offsetof(ActionContext_t4252928663, ___actionQueue_16)); }
	inline ActionQueue_t1924202305 * get_actionQueue_16() const { return ___actionQueue_16; }
	inline ActionQueue_t1924202305 ** get_address_of_actionQueue_16() { return &___actionQueue_16; }
	inline void set_actionQueue_16(ActionQueue_t1924202305 * value)
	{
		___actionQueue_16 = value;
		Il2CppCodeGenWriteBarrier(&___actionQueue_16, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
