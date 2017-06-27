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

#include "mscorlib_System_ValueType3507792607.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Games.Common.Tutorial.CompletedStep
struct  CompletedStep_t312999025 
{
public:
	// System.String GSN.Skill.Games.Common.Tutorial.CompletedStep::stepId
	String_t* ___stepId_0;
	// System.Int32 GSN.Skill.Games.Common.Tutorial.CompletedStep::stepNumber
	int32_t ___stepNumber_1;

public:
	inline static int32_t get_offset_of_stepId_0() { return static_cast<int32_t>(offsetof(CompletedStep_t312999025, ___stepId_0)); }
	inline String_t* get_stepId_0() const { return ___stepId_0; }
	inline String_t** get_address_of_stepId_0() { return &___stepId_0; }
	inline void set_stepId_0(String_t* value)
	{
		___stepId_0 = value;
		Il2CppCodeGenWriteBarrier(&___stepId_0, value);
	}

	inline static int32_t get_offset_of_stepNumber_1() { return static_cast<int32_t>(offsetof(CompletedStep_t312999025, ___stepNumber_1)); }
	inline int32_t get_stepNumber_1() const { return ___stepNumber_1; }
	inline int32_t* get_address_of_stepNumber_1() { return &___stepNumber_1; }
	inline void set_stepNumber_1(int32_t value)
	{
		___stepNumber_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of GSN.Skill.Games.Common.Tutorial.CompletedStep
struct CompletedStep_t312999025_marshaled_pinvoke
{
	char* ___stepId_0;
	int32_t ___stepNumber_1;
};
// Native definition for COM marshalling of GSN.Skill.Games.Common.Tutorial.CompletedStep
struct CompletedStep_t312999025_marshaled_com
{
	Il2CppChar* ___stepId_0;
	int32_t ___stepNumber_1;
};
