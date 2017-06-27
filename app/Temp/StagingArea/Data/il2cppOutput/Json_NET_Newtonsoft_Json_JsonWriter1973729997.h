#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Newtonsoft.Json.JsonWriter/State[][]
struct StateU5BU5DU5BU5D_t2725846494;
// System.Collections.Generic.List`1<Newtonsoft.Json.Linq.JTokenType>
struct List_1_t676948345;

#include "mscorlib_System_Object2689449295.h"
#include "Json_NET_Newtonsoft_Json_JsonWriter_State3285832914.h"
#include "Json_NET_Newtonsoft_Json_Formatting4009318759.h"
#include "Json_NET_Newtonsoft_Json_FloatFormatHandling898035958.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Newtonsoft.Json.JsonWriter
struct  JsonWriter_t1973729997  : public Il2CppObject
{
public:
	// System.Int32 Newtonsoft.Json.JsonWriter::_top
	int32_t ____top_1;
	// System.Collections.Generic.List`1<Newtonsoft.Json.Linq.JTokenType> Newtonsoft.Json.JsonWriter::_stack
	List_1_t676948345 * ____stack_2;
	// Newtonsoft.Json.JsonWriter/State Newtonsoft.Json.JsonWriter::_currentState
	int32_t ____currentState_3;
	// Newtonsoft.Json.Formatting Newtonsoft.Json.JsonWriter::_formatting
	int32_t ____formatting_4;
	// Newtonsoft.Json.FloatFormatHandling Newtonsoft.Json.JsonWriter::_floatFormatHandling
	int32_t ____floatFormatHandling_5;
	// System.Boolean Newtonsoft.Json.JsonWriter::<CloseOutput>k__BackingField
	bool ___U3CCloseOutputU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of__top_1() { return static_cast<int32_t>(offsetof(JsonWriter_t1973729997, ____top_1)); }
	inline int32_t get__top_1() const { return ____top_1; }
	inline int32_t* get_address_of__top_1() { return &____top_1; }
	inline void set__top_1(int32_t value)
	{
		____top_1 = value;
	}

	inline static int32_t get_offset_of__stack_2() { return static_cast<int32_t>(offsetof(JsonWriter_t1973729997, ____stack_2)); }
	inline List_1_t676948345 * get__stack_2() const { return ____stack_2; }
	inline List_1_t676948345 ** get_address_of__stack_2() { return &____stack_2; }
	inline void set__stack_2(List_1_t676948345 * value)
	{
		____stack_2 = value;
		Il2CppCodeGenWriteBarrier(&____stack_2, value);
	}

	inline static int32_t get_offset_of__currentState_3() { return static_cast<int32_t>(offsetof(JsonWriter_t1973729997, ____currentState_3)); }
	inline int32_t get__currentState_3() const { return ____currentState_3; }
	inline int32_t* get_address_of__currentState_3() { return &____currentState_3; }
	inline void set__currentState_3(int32_t value)
	{
		____currentState_3 = value;
	}

	inline static int32_t get_offset_of__formatting_4() { return static_cast<int32_t>(offsetof(JsonWriter_t1973729997, ____formatting_4)); }
	inline int32_t get__formatting_4() const { return ____formatting_4; }
	inline int32_t* get_address_of__formatting_4() { return &____formatting_4; }
	inline void set__formatting_4(int32_t value)
	{
		____formatting_4 = value;
	}

	inline static int32_t get_offset_of__floatFormatHandling_5() { return static_cast<int32_t>(offsetof(JsonWriter_t1973729997, ____floatFormatHandling_5)); }
	inline int32_t get__floatFormatHandling_5() const { return ____floatFormatHandling_5; }
	inline int32_t* get_address_of__floatFormatHandling_5() { return &____floatFormatHandling_5; }
	inline void set__floatFormatHandling_5(int32_t value)
	{
		____floatFormatHandling_5 = value;
	}

	inline static int32_t get_offset_of_U3CCloseOutputU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(JsonWriter_t1973729997, ___U3CCloseOutputU3Ek__BackingField_6)); }
	inline bool get_U3CCloseOutputU3Ek__BackingField_6() const { return ___U3CCloseOutputU3Ek__BackingField_6; }
	inline bool* get_address_of_U3CCloseOutputU3Ek__BackingField_6() { return &___U3CCloseOutputU3Ek__BackingField_6; }
	inline void set_U3CCloseOutputU3Ek__BackingField_6(bool value)
	{
		___U3CCloseOutputU3Ek__BackingField_6 = value;
	}
};

struct JsonWriter_t1973729997_StaticFields
{
public:
	// Newtonsoft.Json.JsonWriter/State[][] Newtonsoft.Json.JsonWriter::stateArray
	StateU5BU5DU5BU5D_t2725846494* ___stateArray_0;

public:
	inline static int32_t get_offset_of_stateArray_0() { return static_cast<int32_t>(offsetof(JsonWriter_t1973729997_StaticFields, ___stateArray_0)); }
	inline StateU5BU5DU5BU5D_t2725846494* get_stateArray_0() const { return ___stateArray_0; }
	inline StateU5BU5DU5BU5D_t2725846494** get_address_of_stateArray_0() { return &___stateArray_0; }
	inline void set_stateArray_0(StateU5BU5DU5BU5D_t2725846494* value)
	{
		___stateArray_0 = value;
		Il2CppCodeGenWriteBarrier(&___stateArray_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
