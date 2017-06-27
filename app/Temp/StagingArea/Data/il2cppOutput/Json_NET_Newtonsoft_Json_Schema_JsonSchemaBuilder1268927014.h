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
// System.Collections.Generic.IList`1<Newtonsoft.Json.Schema.JsonSchema>
struct IList_1_t18087154;
// Newtonsoft.Json.Schema.JsonSchemaResolver
struct JsonSchemaResolver_t3305548243;
// Newtonsoft.Json.Schema.JsonSchema
struct JsonSchema_t3772113849;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t3986656710;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Newtonsoft.Json.Schema.JsonSchemaBuilder
struct  JsonSchemaBuilder_t1268927014  : public Il2CppObject
{
public:
	// Newtonsoft.Json.JsonReader Newtonsoft.Json.Schema.JsonSchemaBuilder::_reader
	JsonReader_t3154730733 * ____reader_0;
	// System.Collections.Generic.IList`1<Newtonsoft.Json.Schema.JsonSchema> Newtonsoft.Json.Schema.JsonSchemaBuilder::_stack
	Il2CppObject* ____stack_1;
	// Newtonsoft.Json.Schema.JsonSchemaResolver Newtonsoft.Json.Schema.JsonSchemaBuilder::_resolver
	JsonSchemaResolver_t3305548243 * ____resolver_2;
	// Newtonsoft.Json.Schema.JsonSchema Newtonsoft.Json.Schema.JsonSchemaBuilder::_currentSchema
	JsonSchema_t3772113849 * ____currentSchema_3;

public:
	inline static int32_t get_offset_of__reader_0() { return static_cast<int32_t>(offsetof(JsonSchemaBuilder_t1268927014, ____reader_0)); }
	inline JsonReader_t3154730733 * get__reader_0() const { return ____reader_0; }
	inline JsonReader_t3154730733 ** get_address_of__reader_0() { return &____reader_0; }
	inline void set__reader_0(JsonReader_t3154730733 * value)
	{
		____reader_0 = value;
		Il2CppCodeGenWriteBarrier(&____reader_0, value);
	}

	inline static int32_t get_offset_of__stack_1() { return static_cast<int32_t>(offsetof(JsonSchemaBuilder_t1268927014, ____stack_1)); }
	inline Il2CppObject* get__stack_1() const { return ____stack_1; }
	inline Il2CppObject** get_address_of__stack_1() { return &____stack_1; }
	inline void set__stack_1(Il2CppObject* value)
	{
		____stack_1 = value;
		Il2CppCodeGenWriteBarrier(&____stack_1, value);
	}

	inline static int32_t get_offset_of__resolver_2() { return static_cast<int32_t>(offsetof(JsonSchemaBuilder_t1268927014, ____resolver_2)); }
	inline JsonSchemaResolver_t3305548243 * get__resolver_2() const { return ____resolver_2; }
	inline JsonSchemaResolver_t3305548243 ** get_address_of__resolver_2() { return &____resolver_2; }
	inline void set__resolver_2(JsonSchemaResolver_t3305548243 * value)
	{
		____resolver_2 = value;
		Il2CppCodeGenWriteBarrier(&____resolver_2, value);
	}

	inline static int32_t get_offset_of__currentSchema_3() { return static_cast<int32_t>(offsetof(JsonSchemaBuilder_t1268927014, ____currentSchema_3)); }
	inline JsonSchema_t3772113849 * get__currentSchema_3() const { return ____currentSchema_3; }
	inline JsonSchema_t3772113849 ** get_address_of__currentSchema_3() { return &____currentSchema_3; }
	inline void set__currentSchema_3(JsonSchema_t3772113849 * value)
	{
		____currentSchema_3 = value;
		Il2CppCodeGenWriteBarrier(&____currentSchema_3, value);
	}
};

struct JsonSchemaBuilder_t1268927014_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Newtonsoft.Json.Schema.JsonSchemaBuilder::<>f__switch$map0
	Dictionary_2_t3986656710 * ___U3CU3Ef__switchU24map0_4;

public:
	inline static int32_t get_offset_of_U3CU3Ef__switchU24map0_4() { return static_cast<int32_t>(offsetof(JsonSchemaBuilder_t1268927014_StaticFields, ___U3CU3Ef__switchU24map0_4)); }
	inline Dictionary_2_t3986656710 * get_U3CU3Ef__switchU24map0_4() const { return ___U3CU3Ef__switchU24map0_4; }
	inline Dictionary_2_t3986656710 ** get_address_of_U3CU3Ef__switchU24map0_4() { return &___U3CU3Ef__switchU24map0_4; }
	inline void set_U3CU3Ef__switchU24map0_4(Dictionary_2_t3986656710 * value)
	{
		___U3CU3Ef__switchU24map0_4 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__switchU24map0_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
