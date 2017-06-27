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

#include "mscorlib_System_Object2689449295.h"
#include "UnityEngine_UnityEngine_LogType1559732862.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Games.Common.Client.DebugMenu.ConsoleLogEntry
struct  ConsoleLogEntry_t1109381509  : public Il2CppObject
{
public:
	// System.String GSN.Skill.Games.Common.Client.DebugMenu.ConsoleLogEntry::Message
	String_t* ___Message_0;
	// System.String GSN.Skill.Games.Common.Client.DebugMenu.ConsoleLogEntry::StackTrace
	String_t* ___StackTrace_1;
	// UnityEngine.LogType GSN.Skill.Games.Common.Client.DebugMenu.ConsoleLogEntry::EntryType
	int32_t ___EntryType_2;

public:
	inline static int32_t get_offset_of_Message_0() { return static_cast<int32_t>(offsetof(ConsoleLogEntry_t1109381509, ___Message_0)); }
	inline String_t* get_Message_0() const { return ___Message_0; }
	inline String_t** get_address_of_Message_0() { return &___Message_0; }
	inline void set_Message_0(String_t* value)
	{
		___Message_0 = value;
		Il2CppCodeGenWriteBarrier(&___Message_0, value);
	}

	inline static int32_t get_offset_of_StackTrace_1() { return static_cast<int32_t>(offsetof(ConsoleLogEntry_t1109381509, ___StackTrace_1)); }
	inline String_t* get_StackTrace_1() const { return ___StackTrace_1; }
	inline String_t** get_address_of_StackTrace_1() { return &___StackTrace_1; }
	inline void set_StackTrace_1(String_t* value)
	{
		___StackTrace_1 = value;
		Il2CppCodeGenWriteBarrier(&___StackTrace_1, value);
	}

	inline static int32_t get_offset_of_EntryType_2() { return static_cast<int32_t>(offsetof(ConsoleLogEntry_t1109381509, ___EntryType_2)); }
	inline int32_t get_EntryType_2() const { return ___EntryType_2; }
	inline int32_t* get_address_of_EntryType_2() { return &___EntryType_2; }
	inline void set_EntryType_2(int32_t value)
	{
		___EntryType_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
