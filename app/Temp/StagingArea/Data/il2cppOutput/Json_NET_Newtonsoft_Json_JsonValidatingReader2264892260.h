#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Newtonsoft.Json.JsonReader
struct JsonReader_t3154730733;
// System.Collections.Generic.Stack`1<Newtonsoft.Json.JsonValidatingReader/SchemaScope>
struct Stack_1_t1011649401;
// Newtonsoft.Json.Schema.JsonSchema
struct JsonSchema_t3772113849;
// Newtonsoft.Json.Schema.JsonSchemaModel
struct JsonSchemaModel_t708894576;
// Newtonsoft.Json.JsonValidatingReader/SchemaScope
struct SchemaScope_t4218888543;
// Newtonsoft.Json.Schema.ValidationEventHandler
struct ValidationEventHandler_t1731902491;
// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>,System.Boolean>
struct Func_2_t3633335109;
// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>,System.String>
struct Func_2_t1836980624;

#include "Json_NET_Newtonsoft_Json_JsonReader3154730733.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Newtonsoft.Json.JsonValidatingReader
struct  JsonValidatingReader_t2264892260  : public JsonReader_t3154730733
{
public:
	// Newtonsoft.Json.JsonReader Newtonsoft.Json.JsonValidatingReader::_reader
	JsonReader_t3154730733 * ____reader_11;
	// System.Collections.Generic.Stack`1<Newtonsoft.Json.JsonValidatingReader/SchemaScope> Newtonsoft.Json.JsonValidatingReader::_stack
	Stack_1_t1011649401 * ____stack_12;
	// Newtonsoft.Json.Schema.JsonSchema Newtonsoft.Json.JsonValidatingReader::_schema
	JsonSchema_t3772113849 * ____schema_13;
	// Newtonsoft.Json.Schema.JsonSchemaModel Newtonsoft.Json.JsonValidatingReader::_model
	JsonSchemaModel_t708894576 * ____model_14;
	// Newtonsoft.Json.JsonValidatingReader/SchemaScope Newtonsoft.Json.JsonValidatingReader::_currentScope
	SchemaScope_t4218888543 * ____currentScope_15;
	// Newtonsoft.Json.Schema.ValidationEventHandler Newtonsoft.Json.JsonValidatingReader::validationEventListeners
	ValidationEventHandler_t1731902491 * ___validationEventListeners_16;

public:
	inline static int32_t get_offset_of__reader_11() { return static_cast<int32_t>(offsetof(JsonValidatingReader_t2264892260, ____reader_11)); }
	inline JsonReader_t3154730733 * get__reader_11() const { return ____reader_11; }
	inline JsonReader_t3154730733 ** get_address_of__reader_11() { return &____reader_11; }
	inline void set__reader_11(JsonReader_t3154730733 * value)
	{
		____reader_11 = value;
		Il2CppCodeGenWriteBarrier(&____reader_11, value);
	}

	inline static int32_t get_offset_of__stack_12() { return static_cast<int32_t>(offsetof(JsonValidatingReader_t2264892260, ____stack_12)); }
	inline Stack_1_t1011649401 * get__stack_12() const { return ____stack_12; }
	inline Stack_1_t1011649401 ** get_address_of__stack_12() { return &____stack_12; }
	inline void set__stack_12(Stack_1_t1011649401 * value)
	{
		____stack_12 = value;
		Il2CppCodeGenWriteBarrier(&____stack_12, value);
	}

	inline static int32_t get_offset_of__schema_13() { return static_cast<int32_t>(offsetof(JsonValidatingReader_t2264892260, ____schema_13)); }
	inline JsonSchema_t3772113849 * get__schema_13() const { return ____schema_13; }
	inline JsonSchema_t3772113849 ** get_address_of__schema_13() { return &____schema_13; }
	inline void set__schema_13(JsonSchema_t3772113849 * value)
	{
		____schema_13 = value;
		Il2CppCodeGenWriteBarrier(&____schema_13, value);
	}

	inline static int32_t get_offset_of__model_14() { return static_cast<int32_t>(offsetof(JsonValidatingReader_t2264892260, ____model_14)); }
	inline JsonSchemaModel_t708894576 * get__model_14() const { return ____model_14; }
	inline JsonSchemaModel_t708894576 ** get_address_of__model_14() { return &____model_14; }
	inline void set__model_14(JsonSchemaModel_t708894576 * value)
	{
		____model_14 = value;
		Il2CppCodeGenWriteBarrier(&____model_14, value);
	}

	inline static int32_t get_offset_of__currentScope_15() { return static_cast<int32_t>(offsetof(JsonValidatingReader_t2264892260, ____currentScope_15)); }
	inline SchemaScope_t4218888543 * get__currentScope_15() const { return ____currentScope_15; }
	inline SchemaScope_t4218888543 ** get_address_of__currentScope_15() { return &____currentScope_15; }
	inline void set__currentScope_15(SchemaScope_t4218888543 * value)
	{
		____currentScope_15 = value;
		Il2CppCodeGenWriteBarrier(&____currentScope_15, value);
	}

	inline static int32_t get_offset_of_validationEventListeners_16() { return static_cast<int32_t>(offsetof(JsonValidatingReader_t2264892260, ___validationEventListeners_16)); }
	inline ValidationEventHandler_t1731902491 * get_validationEventListeners_16() const { return ___validationEventListeners_16; }
	inline ValidationEventHandler_t1731902491 ** get_address_of_validationEventListeners_16() { return &___validationEventListeners_16; }
	inline void set_validationEventListeners_16(ValidationEventHandler_t1731902491 * value)
	{
		___validationEventListeners_16 = value;
		Il2CppCodeGenWriteBarrier(&___validationEventListeners_16, value);
	}
};

struct JsonValidatingReader_t2264892260_StaticFields
{
public:
	// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>,System.Boolean> Newtonsoft.Json.JsonValidatingReader::<>f__am$cache0
	Func_2_t3633335109 * ___U3CU3Ef__amU24cache0_17;
	// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>,System.String> Newtonsoft.Json.JsonValidatingReader::<>f__am$cache1
	Func_2_t1836980624 * ___U3CU3Ef__amU24cache1_18;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_17() { return static_cast<int32_t>(offsetof(JsonValidatingReader_t2264892260_StaticFields, ___U3CU3Ef__amU24cache0_17)); }
	inline Func_2_t3633335109 * get_U3CU3Ef__amU24cache0_17() const { return ___U3CU3Ef__amU24cache0_17; }
	inline Func_2_t3633335109 ** get_address_of_U3CU3Ef__amU24cache0_17() { return &___U3CU3Ef__amU24cache0_17; }
	inline void set_U3CU3Ef__amU24cache0_17(Func_2_t3633335109 * value)
	{
		___U3CU3Ef__amU24cache0_17 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache0_17, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache1_18() { return static_cast<int32_t>(offsetof(JsonValidatingReader_t2264892260_StaticFields, ___U3CU3Ef__amU24cache1_18)); }
	inline Func_2_t1836980624 * get_U3CU3Ef__amU24cache1_18() const { return ___U3CU3Ef__amU24cache1_18; }
	inline Func_2_t1836980624 ** get_address_of_U3CU3Ef__amU24cache1_18() { return &___U3CU3Ef__amU24cache1_18; }
	inline void set_U3CU3Ef__amU24cache1_18(Func_2_t1836980624 * value)
	{
		___U3CU3Ef__amU24cache1_18 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache1_18, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
