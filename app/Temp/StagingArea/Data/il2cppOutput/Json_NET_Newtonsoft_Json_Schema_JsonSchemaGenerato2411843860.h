#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Newtonsoft.Json.Serialization.IContractResolver
struct IContractResolver_t614887283;
// Newtonsoft.Json.Schema.JsonSchemaResolver
struct JsonSchemaResolver_t3305548243;
// System.Collections.Generic.IList`1<Newtonsoft.Json.Schema.JsonSchemaGenerator/TypeSchema>
struct IList_1_t1001402693;
// Newtonsoft.Json.Schema.JsonSchema
struct JsonSchema_t3772113849;

#include "mscorlib_System_Object2689449295.h"
#include "Json_NET_Newtonsoft_Json_Schema_UndefinedSchemaIdH4037327541.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Newtonsoft.Json.Schema.JsonSchemaGenerator
struct  JsonSchemaGenerator_t2411843860  : public Il2CppObject
{
public:
	// Newtonsoft.Json.Schema.UndefinedSchemaIdHandling Newtonsoft.Json.Schema.JsonSchemaGenerator::<UndefinedSchemaIdHandling>k__BackingField
	int32_t ___U3CUndefinedSchemaIdHandlingU3Ek__BackingField_0;
	// Newtonsoft.Json.Serialization.IContractResolver Newtonsoft.Json.Schema.JsonSchemaGenerator::_contractResolver
	Il2CppObject * ____contractResolver_1;
	// Newtonsoft.Json.Schema.JsonSchemaResolver Newtonsoft.Json.Schema.JsonSchemaGenerator::_resolver
	JsonSchemaResolver_t3305548243 * ____resolver_2;
	// System.Collections.Generic.IList`1<Newtonsoft.Json.Schema.JsonSchemaGenerator/TypeSchema> Newtonsoft.Json.Schema.JsonSchemaGenerator::_stack
	Il2CppObject* ____stack_3;
	// Newtonsoft.Json.Schema.JsonSchema Newtonsoft.Json.Schema.JsonSchemaGenerator::_currentSchema
	JsonSchema_t3772113849 * ____currentSchema_4;

public:
	inline static int32_t get_offset_of_U3CUndefinedSchemaIdHandlingU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(JsonSchemaGenerator_t2411843860, ___U3CUndefinedSchemaIdHandlingU3Ek__BackingField_0)); }
	inline int32_t get_U3CUndefinedSchemaIdHandlingU3Ek__BackingField_0() const { return ___U3CUndefinedSchemaIdHandlingU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CUndefinedSchemaIdHandlingU3Ek__BackingField_0() { return &___U3CUndefinedSchemaIdHandlingU3Ek__BackingField_0; }
	inline void set_U3CUndefinedSchemaIdHandlingU3Ek__BackingField_0(int32_t value)
	{
		___U3CUndefinedSchemaIdHandlingU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of__contractResolver_1() { return static_cast<int32_t>(offsetof(JsonSchemaGenerator_t2411843860, ____contractResolver_1)); }
	inline Il2CppObject * get__contractResolver_1() const { return ____contractResolver_1; }
	inline Il2CppObject ** get_address_of__contractResolver_1() { return &____contractResolver_1; }
	inline void set__contractResolver_1(Il2CppObject * value)
	{
		____contractResolver_1 = value;
		Il2CppCodeGenWriteBarrier(&____contractResolver_1, value);
	}

	inline static int32_t get_offset_of__resolver_2() { return static_cast<int32_t>(offsetof(JsonSchemaGenerator_t2411843860, ____resolver_2)); }
	inline JsonSchemaResolver_t3305548243 * get__resolver_2() const { return ____resolver_2; }
	inline JsonSchemaResolver_t3305548243 ** get_address_of__resolver_2() { return &____resolver_2; }
	inline void set__resolver_2(JsonSchemaResolver_t3305548243 * value)
	{
		____resolver_2 = value;
		Il2CppCodeGenWriteBarrier(&____resolver_2, value);
	}

	inline static int32_t get_offset_of__stack_3() { return static_cast<int32_t>(offsetof(JsonSchemaGenerator_t2411843860, ____stack_3)); }
	inline Il2CppObject* get__stack_3() const { return ____stack_3; }
	inline Il2CppObject** get_address_of__stack_3() { return &____stack_3; }
	inline void set__stack_3(Il2CppObject* value)
	{
		____stack_3 = value;
		Il2CppCodeGenWriteBarrier(&____stack_3, value);
	}

	inline static int32_t get_offset_of__currentSchema_4() { return static_cast<int32_t>(offsetof(JsonSchemaGenerator_t2411843860, ____currentSchema_4)); }
	inline JsonSchema_t3772113849 * get__currentSchema_4() const { return ____currentSchema_4; }
	inline JsonSchema_t3772113849 ** get_address_of__currentSchema_4() { return &____currentSchema_4; }
	inline void set__currentSchema_4(JsonSchema_t3772113849 * value)
	{
		____currentSchema_4 = value;
		Il2CppCodeGenWriteBarrier(&____currentSchema_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
