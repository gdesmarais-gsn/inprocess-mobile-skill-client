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
// System.Collections.ObjectModel.ReadOnlyCollection`1<Newtonsoft.Json.Schema.JsonSchema>
struct ReadOnlyCollection_1_t3957899541;
// System.Collections.Generic.Dictionary`2<System.String,Newtonsoft.Json.Schema.JsonSchemaNode>
struct Dictionary_2_t1486643083;
// System.Collections.Generic.List`1<Newtonsoft.Json.Schema.JsonSchemaNode>
struct List_1_t3235952249;
// Newtonsoft.Json.Schema.JsonSchemaNode
struct JsonSchemaNode_t3866831117;
// System.Func`2<Newtonsoft.Json.Schema.JsonSchema,System.String>
struct Func_2_t4183517853;
// System.Func`2<System.String,System.String>
struct Func_2_t193026957;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Newtonsoft.Json.Schema.JsonSchemaNode
struct  JsonSchemaNode_t3866831117  : public Il2CppObject
{
public:
	// System.String Newtonsoft.Json.Schema.JsonSchemaNode::<Id>k__BackingField
	String_t* ___U3CIdU3Ek__BackingField_0;
	// System.Collections.ObjectModel.ReadOnlyCollection`1<Newtonsoft.Json.Schema.JsonSchema> Newtonsoft.Json.Schema.JsonSchemaNode::<Schemas>k__BackingField
	ReadOnlyCollection_1_t3957899541 * ___U3CSchemasU3Ek__BackingField_1;
	// System.Collections.Generic.Dictionary`2<System.String,Newtonsoft.Json.Schema.JsonSchemaNode> Newtonsoft.Json.Schema.JsonSchemaNode::<Properties>k__BackingField
	Dictionary_2_t1486643083 * ___U3CPropertiesU3Ek__BackingField_2;
	// System.Collections.Generic.Dictionary`2<System.String,Newtonsoft.Json.Schema.JsonSchemaNode> Newtonsoft.Json.Schema.JsonSchemaNode::<PatternProperties>k__BackingField
	Dictionary_2_t1486643083 * ___U3CPatternPropertiesU3Ek__BackingField_3;
	// System.Collections.Generic.List`1<Newtonsoft.Json.Schema.JsonSchemaNode> Newtonsoft.Json.Schema.JsonSchemaNode::<Items>k__BackingField
	List_1_t3235952249 * ___U3CItemsU3Ek__BackingField_4;
	// Newtonsoft.Json.Schema.JsonSchemaNode Newtonsoft.Json.Schema.JsonSchemaNode::<AdditionalProperties>k__BackingField
	JsonSchemaNode_t3866831117 * ___U3CAdditionalPropertiesU3Ek__BackingField_5;

public:
	inline static int32_t get_offset_of_U3CIdU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(JsonSchemaNode_t3866831117, ___U3CIdU3Ek__BackingField_0)); }
	inline String_t* get_U3CIdU3Ek__BackingField_0() const { return ___U3CIdU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CIdU3Ek__BackingField_0() { return &___U3CIdU3Ek__BackingField_0; }
	inline void set_U3CIdU3Ek__BackingField_0(String_t* value)
	{
		___U3CIdU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier(&___U3CIdU3Ek__BackingField_0, value);
	}

	inline static int32_t get_offset_of_U3CSchemasU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(JsonSchemaNode_t3866831117, ___U3CSchemasU3Ek__BackingField_1)); }
	inline ReadOnlyCollection_1_t3957899541 * get_U3CSchemasU3Ek__BackingField_1() const { return ___U3CSchemasU3Ek__BackingField_1; }
	inline ReadOnlyCollection_1_t3957899541 ** get_address_of_U3CSchemasU3Ek__BackingField_1() { return &___U3CSchemasU3Ek__BackingField_1; }
	inline void set_U3CSchemasU3Ek__BackingField_1(ReadOnlyCollection_1_t3957899541 * value)
	{
		___U3CSchemasU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier(&___U3CSchemasU3Ek__BackingField_1, value);
	}

	inline static int32_t get_offset_of_U3CPropertiesU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(JsonSchemaNode_t3866831117, ___U3CPropertiesU3Ek__BackingField_2)); }
	inline Dictionary_2_t1486643083 * get_U3CPropertiesU3Ek__BackingField_2() const { return ___U3CPropertiesU3Ek__BackingField_2; }
	inline Dictionary_2_t1486643083 ** get_address_of_U3CPropertiesU3Ek__BackingField_2() { return &___U3CPropertiesU3Ek__BackingField_2; }
	inline void set_U3CPropertiesU3Ek__BackingField_2(Dictionary_2_t1486643083 * value)
	{
		___U3CPropertiesU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier(&___U3CPropertiesU3Ek__BackingField_2, value);
	}

	inline static int32_t get_offset_of_U3CPatternPropertiesU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(JsonSchemaNode_t3866831117, ___U3CPatternPropertiesU3Ek__BackingField_3)); }
	inline Dictionary_2_t1486643083 * get_U3CPatternPropertiesU3Ek__BackingField_3() const { return ___U3CPatternPropertiesU3Ek__BackingField_3; }
	inline Dictionary_2_t1486643083 ** get_address_of_U3CPatternPropertiesU3Ek__BackingField_3() { return &___U3CPatternPropertiesU3Ek__BackingField_3; }
	inline void set_U3CPatternPropertiesU3Ek__BackingField_3(Dictionary_2_t1486643083 * value)
	{
		___U3CPatternPropertiesU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier(&___U3CPatternPropertiesU3Ek__BackingField_3, value);
	}

	inline static int32_t get_offset_of_U3CItemsU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(JsonSchemaNode_t3866831117, ___U3CItemsU3Ek__BackingField_4)); }
	inline List_1_t3235952249 * get_U3CItemsU3Ek__BackingField_4() const { return ___U3CItemsU3Ek__BackingField_4; }
	inline List_1_t3235952249 ** get_address_of_U3CItemsU3Ek__BackingField_4() { return &___U3CItemsU3Ek__BackingField_4; }
	inline void set_U3CItemsU3Ek__BackingField_4(List_1_t3235952249 * value)
	{
		___U3CItemsU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier(&___U3CItemsU3Ek__BackingField_4, value);
	}

	inline static int32_t get_offset_of_U3CAdditionalPropertiesU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(JsonSchemaNode_t3866831117, ___U3CAdditionalPropertiesU3Ek__BackingField_5)); }
	inline JsonSchemaNode_t3866831117 * get_U3CAdditionalPropertiesU3Ek__BackingField_5() const { return ___U3CAdditionalPropertiesU3Ek__BackingField_5; }
	inline JsonSchemaNode_t3866831117 ** get_address_of_U3CAdditionalPropertiesU3Ek__BackingField_5() { return &___U3CAdditionalPropertiesU3Ek__BackingField_5; }
	inline void set_U3CAdditionalPropertiesU3Ek__BackingField_5(JsonSchemaNode_t3866831117 * value)
	{
		___U3CAdditionalPropertiesU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier(&___U3CAdditionalPropertiesU3Ek__BackingField_5, value);
	}
};

struct JsonSchemaNode_t3866831117_StaticFields
{
public:
	// System.Func`2<Newtonsoft.Json.Schema.JsonSchema,System.String> Newtonsoft.Json.Schema.JsonSchemaNode::<>f__am$cache0
	Func_2_t4183517853 * ___U3CU3Ef__amU24cache0_6;
	// System.Func`2<System.String,System.String> Newtonsoft.Json.Schema.JsonSchemaNode::<>f__am$cache1
	Func_2_t193026957 * ___U3CU3Ef__amU24cache1_7;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_6() { return static_cast<int32_t>(offsetof(JsonSchemaNode_t3866831117_StaticFields, ___U3CU3Ef__amU24cache0_6)); }
	inline Func_2_t4183517853 * get_U3CU3Ef__amU24cache0_6() const { return ___U3CU3Ef__amU24cache0_6; }
	inline Func_2_t4183517853 ** get_address_of_U3CU3Ef__amU24cache0_6() { return &___U3CU3Ef__amU24cache0_6; }
	inline void set_U3CU3Ef__amU24cache0_6(Func_2_t4183517853 * value)
	{
		___U3CU3Ef__amU24cache0_6 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache0_6, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache1_7() { return static_cast<int32_t>(offsetof(JsonSchemaNode_t3866831117_StaticFields, ___U3CU3Ef__amU24cache1_7)); }
	inline Func_2_t193026957 * get_U3CU3Ef__amU24cache1_7() const { return ___U3CU3Ef__amU24cache1_7; }
	inline Func_2_t193026957 ** get_address_of_U3CU3Ef__amU24cache1_7() { return &___U3CU3Ef__amU24cache1_7; }
	inline void set_U3CU3Ef__amU24cache1_7(Func_2_t193026957 * value)
	{
		___U3CU3Ef__amU24cache1_7 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache1_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
