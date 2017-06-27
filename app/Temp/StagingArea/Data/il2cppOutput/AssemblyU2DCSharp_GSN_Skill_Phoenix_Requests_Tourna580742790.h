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

// GSN.Skill.Phoenix.Requests.Tournament.ListFlavorsData/Aux_Data
struct  Aux_Data_t580742790 
{
public:
	// System.String GSN.Skill.Phoenix.Requests.Tournament.ListFlavorsData/Aux_Data::text
	String_t* ___text_0;
	// System.String GSN.Skill.Phoenix.Requests.Tournament.ListFlavorsData/Aux_Data::position
	String_t* ___position_1;
	// System.String GSN.Skill.Phoenix.Requests.Tournament.ListFlavorsData/Aux_Data::type
	String_t* ___type_2;

public:
	inline static int32_t get_offset_of_text_0() { return static_cast<int32_t>(offsetof(Aux_Data_t580742790, ___text_0)); }
	inline String_t* get_text_0() const { return ___text_0; }
	inline String_t** get_address_of_text_0() { return &___text_0; }
	inline void set_text_0(String_t* value)
	{
		___text_0 = value;
		Il2CppCodeGenWriteBarrier(&___text_0, value);
	}

	inline static int32_t get_offset_of_position_1() { return static_cast<int32_t>(offsetof(Aux_Data_t580742790, ___position_1)); }
	inline String_t* get_position_1() const { return ___position_1; }
	inline String_t** get_address_of_position_1() { return &___position_1; }
	inline void set_position_1(String_t* value)
	{
		___position_1 = value;
		Il2CppCodeGenWriteBarrier(&___position_1, value);
	}

	inline static int32_t get_offset_of_type_2() { return static_cast<int32_t>(offsetof(Aux_Data_t580742790, ___type_2)); }
	inline String_t* get_type_2() const { return ___type_2; }
	inline String_t** get_address_of_type_2() { return &___type_2; }
	inline void set_type_2(String_t* value)
	{
		___type_2 = value;
		Il2CppCodeGenWriteBarrier(&___type_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of GSN.Skill.Phoenix.Requests.Tournament.ListFlavorsData/Aux_Data
struct Aux_Data_t580742790_marshaled_pinvoke
{
	char* ___text_0;
	char* ___position_1;
	char* ___type_2;
};
// Native definition for COM marshalling of GSN.Skill.Phoenix.Requests.Tournament.ListFlavorsData/Aux_Data
struct Aux_Data_t580742790_marshaled_com
{
	Il2CppChar* ___text_0;
	Il2CppChar* ___position_1;
	Il2CppChar* ___type_2;
};
