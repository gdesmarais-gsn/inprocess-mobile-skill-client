#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Enum
struct Enum_t2459695545;
// System.String
struct String_t;
struct Enum_t2459695545_marshaled_com;

#include "mscorlib_System_ValueType3507792607.h"
#include "AssemblyU2DCSharp_GSN_Skill_Phoenix_Strings_InputFi918236426.h"
#include "mscorlib_System_Enum2459695545.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Phoenix.Strings.ErrorTranslation
struct  ErrorTranslation_t918723703 
{
public:
	// System.Enum GSN.Skill.Phoenix.Strings.ErrorTranslation::entryKey
	Enum_t2459695545 * ___entryKey_0;
	// System.String GSN.Skill.Phoenix.Strings.ErrorTranslation::message
	String_t* ___message_1;
	// GSN.Skill.Phoenix.Strings.InputFieldType GSN.Skill.Phoenix.Strings.ErrorTranslation::inputField
	int32_t ___inputField_2;

public:
	inline static int32_t get_offset_of_entryKey_0() { return static_cast<int32_t>(offsetof(ErrorTranslation_t918723703, ___entryKey_0)); }
	inline Enum_t2459695545 * get_entryKey_0() const { return ___entryKey_0; }
	inline Enum_t2459695545 ** get_address_of_entryKey_0() { return &___entryKey_0; }
	inline void set_entryKey_0(Enum_t2459695545 * value)
	{
		___entryKey_0 = value;
		Il2CppCodeGenWriteBarrier(&___entryKey_0, value);
	}

	inline static int32_t get_offset_of_message_1() { return static_cast<int32_t>(offsetof(ErrorTranslation_t918723703, ___message_1)); }
	inline String_t* get_message_1() const { return ___message_1; }
	inline String_t** get_address_of_message_1() { return &___message_1; }
	inline void set_message_1(String_t* value)
	{
		___message_1 = value;
		Il2CppCodeGenWriteBarrier(&___message_1, value);
	}

	inline static int32_t get_offset_of_inputField_2() { return static_cast<int32_t>(offsetof(ErrorTranslation_t918723703, ___inputField_2)); }
	inline int32_t get_inputField_2() const { return ___inputField_2; }
	inline int32_t* get_address_of_inputField_2() { return &___inputField_2; }
	inline void set_inputField_2(int32_t value)
	{
		___inputField_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of GSN.Skill.Phoenix.Strings.ErrorTranslation
struct ErrorTranslation_t918723703_marshaled_pinvoke
{
	Enum_t2459695545_marshaled_pinvoke ___entryKey_0;
	char* ___message_1;
	int32_t ___inputField_2;
};
// Native definition for COM marshalling of GSN.Skill.Phoenix.Strings.ErrorTranslation
struct ErrorTranslation_t918723703_marshaled_com
{
	Enum_t2459695545_marshaled_com* ___entryKey_0;
	Il2CppChar* ___message_1;
	int32_t ___inputField_2;
};
