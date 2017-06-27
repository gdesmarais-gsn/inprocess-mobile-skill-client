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
// System.Action
struct Action_t3226471752;
// System.String
struct String_t;

#include "mscorlib_System_ValueType3507792607.h"
#include "AssemblyU2DCSharp_GSN_Skill_Phoenix_Model_ErrorTyp4040390998.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Phoenix.Model.ErrorData
struct  ErrorData_t2682468630 
{
public:
	// GSN.Skill.Phoenix.Model.ErrorType GSN.Skill.Phoenix.Model.ErrorData::type
	int32_t ___type_0;
	// System.Collections.Generic.List`1<System.String> GSN.Skill.Phoenix.Model.ErrorData::message
	List_1_t1398341365 * ___message_1;
	// System.Action GSN.Skill.Phoenix.Model.ErrorData::callback
	Action_t3226471752 * ___callback_2;
	// System.Boolean GSN.Skill.Phoenix.Model.ErrorData::playerServicesMentioned
	bool ___playerServicesMentioned_3;
	// System.String GSN.Skill.Phoenix.Model.ErrorData::buttonText
	String_t* ___buttonText_4;
	// System.Boolean GSN.Skill.Phoenix.Model.ErrorData::showCloseButton
	bool ___showCloseButton_5;

public:
	inline static int32_t get_offset_of_type_0() { return static_cast<int32_t>(offsetof(ErrorData_t2682468630, ___type_0)); }
	inline int32_t get_type_0() const { return ___type_0; }
	inline int32_t* get_address_of_type_0() { return &___type_0; }
	inline void set_type_0(int32_t value)
	{
		___type_0 = value;
	}

	inline static int32_t get_offset_of_message_1() { return static_cast<int32_t>(offsetof(ErrorData_t2682468630, ___message_1)); }
	inline List_1_t1398341365 * get_message_1() const { return ___message_1; }
	inline List_1_t1398341365 ** get_address_of_message_1() { return &___message_1; }
	inline void set_message_1(List_1_t1398341365 * value)
	{
		___message_1 = value;
		Il2CppCodeGenWriteBarrier(&___message_1, value);
	}

	inline static int32_t get_offset_of_callback_2() { return static_cast<int32_t>(offsetof(ErrorData_t2682468630, ___callback_2)); }
	inline Action_t3226471752 * get_callback_2() const { return ___callback_2; }
	inline Action_t3226471752 ** get_address_of_callback_2() { return &___callback_2; }
	inline void set_callback_2(Action_t3226471752 * value)
	{
		___callback_2 = value;
		Il2CppCodeGenWriteBarrier(&___callback_2, value);
	}

	inline static int32_t get_offset_of_playerServicesMentioned_3() { return static_cast<int32_t>(offsetof(ErrorData_t2682468630, ___playerServicesMentioned_3)); }
	inline bool get_playerServicesMentioned_3() const { return ___playerServicesMentioned_3; }
	inline bool* get_address_of_playerServicesMentioned_3() { return &___playerServicesMentioned_3; }
	inline void set_playerServicesMentioned_3(bool value)
	{
		___playerServicesMentioned_3 = value;
	}

	inline static int32_t get_offset_of_buttonText_4() { return static_cast<int32_t>(offsetof(ErrorData_t2682468630, ___buttonText_4)); }
	inline String_t* get_buttonText_4() const { return ___buttonText_4; }
	inline String_t** get_address_of_buttonText_4() { return &___buttonText_4; }
	inline void set_buttonText_4(String_t* value)
	{
		___buttonText_4 = value;
		Il2CppCodeGenWriteBarrier(&___buttonText_4, value);
	}

	inline static int32_t get_offset_of_showCloseButton_5() { return static_cast<int32_t>(offsetof(ErrorData_t2682468630, ___showCloseButton_5)); }
	inline bool get_showCloseButton_5() const { return ___showCloseButton_5; }
	inline bool* get_address_of_showCloseButton_5() { return &___showCloseButton_5; }
	inline void set_showCloseButton_5(bool value)
	{
		___showCloseButton_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of GSN.Skill.Phoenix.Model.ErrorData
struct ErrorData_t2682468630_marshaled_pinvoke
{
	int32_t ___type_0;
	List_1_t1398341365 * ___message_1;
	Il2CppMethodPointer ___callback_2;
	int32_t ___playerServicesMentioned_3;
	char* ___buttonText_4;
	int32_t ___showCloseButton_5;
};
// Native definition for COM marshalling of GSN.Skill.Phoenix.Model.ErrorData
struct ErrorData_t2682468630_marshaled_com
{
	int32_t ___type_0;
	List_1_t1398341365 * ___message_1;
	Il2CppMethodPointer ___callback_2;
	int32_t ___playerServicesMentioned_3;
	Il2CppChar* ___buttonText_4;
	int32_t ___showCloseButton_5;
};
