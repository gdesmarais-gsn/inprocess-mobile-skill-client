#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.IList`1<Newtonsoft.Json.Schema.JsonSchemaModel>
struct IList_1_t1249835177;
// System.Collections.Generic.Dictionary`2<System.String,System.Boolean>
struct Dictionary_2_t1445386684;
// System.String
struct String_t;
// System.Func`2<System.String,System.String>
struct Func_2_t193026957;
// System.Func`2<System.String,System.Boolean>
struct Func_2_t1989381442;
// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,Newtonsoft.Json.Schema.JsonSchemaModel>,System.Boolean>
struct Func_2_t2854776331;
// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,Newtonsoft.Json.Schema.JsonSchemaModel>,System.String>
struct Func_2_t1058421846;

#include "mscorlib_System_Object2689449295.h"
#include "Json_NET_Newtonsoft_Json_Linq_JTokenType1307827213.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Newtonsoft.Json.JsonValidatingReader/SchemaScope
struct  SchemaScope_t4218888543  : public Il2CppObject
{
public:
	// Newtonsoft.Json.Linq.JTokenType Newtonsoft.Json.JsonValidatingReader/SchemaScope::_tokenType
	int32_t ____tokenType_0;
	// System.Collections.Generic.IList`1<Newtonsoft.Json.Schema.JsonSchemaModel> Newtonsoft.Json.JsonValidatingReader/SchemaScope::_schemas
	Il2CppObject* ____schemas_1;
	// System.Collections.Generic.Dictionary`2<System.String,System.Boolean> Newtonsoft.Json.JsonValidatingReader/SchemaScope::_requiredProperties
	Dictionary_2_t1445386684 * ____requiredProperties_2;
	// System.String Newtonsoft.Json.JsonValidatingReader/SchemaScope::<CurrentPropertyName>k__BackingField
	String_t* ___U3CCurrentPropertyNameU3Ek__BackingField_3;
	// System.Int32 Newtonsoft.Json.JsonValidatingReader/SchemaScope::<ArrayItemCount>k__BackingField
	int32_t ___U3CArrayItemCountU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of__tokenType_0() { return static_cast<int32_t>(offsetof(SchemaScope_t4218888543, ____tokenType_0)); }
	inline int32_t get__tokenType_0() const { return ____tokenType_0; }
	inline int32_t* get_address_of__tokenType_0() { return &____tokenType_0; }
	inline void set__tokenType_0(int32_t value)
	{
		____tokenType_0 = value;
	}

	inline static int32_t get_offset_of__schemas_1() { return static_cast<int32_t>(offsetof(SchemaScope_t4218888543, ____schemas_1)); }
	inline Il2CppObject* get__schemas_1() const { return ____schemas_1; }
	inline Il2CppObject** get_address_of__schemas_1() { return &____schemas_1; }
	inline void set__schemas_1(Il2CppObject* value)
	{
		____schemas_1 = value;
		Il2CppCodeGenWriteBarrier(&____schemas_1, value);
	}

	inline static int32_t get_offset_of__requiredProperties_2() { return static_cast<int32_t>(offsetof(SchemaScope_t4218888543, ____requiredProperties_2)); }
	inline Dictionary_2_t1445386684 * get__requiredProperties_2() const { return ____requiredProperties_2; }
	inline Dictionary_2_t1445386684 ** get_address_of__requiredProperties_2() { return &____requiredProperties_2; }
	inline void set__requiredProperties_2(Dictionary_2_t1445386684 * value)
	{
		____requiredProperties_2 = value;
		Il2CppCodeGenWriteBarrier(&____requiredProperties_2, value);
	}

	inline static int32_t get_offset_of_U3CCurrentPropertyNameU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(SchemaScope_t4218888543, ___U3CCurrentPropertyNameU3Ek__BackingField_3)); }
	inline String_t* get_U3CCurrentPropertyNameU3Ek__BackingField_3() const { return ___U3CCurrentPropertyNameU3Ek__BackingField_3; }
	inline String_t** get_address_of_U3CCurrentPropertyNameU3Ek__BackingField_3() { return &___U3CCurrentPropertyNameU3Ek__BackingField_3; }
	inline void set_U3CCurrentPropertyNameU3Ek__BackingField_3(String_t* value)
	{
		___U3CCurrentPropertyNameU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier(&___U3CCurrentPropertyNameU3Ek__BackingField_3, value);
	}

	inline static int32_t get_offset_of_U3CArrayItemCountU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(SchemaScope_t4218888543, ___U3CArrayItemCountU3Ek__BackingField_4)); }
	inline int32_t get_U3CArrayItemCountU3Ek__BackingField_4() const { return ___U3CArrayItemCountU3Ek__BackingField_4; }
	inline int32_t* get_address_of_U3CArrayItemCountU3Ek__BackingField_4() { return &___U3CArrayItemCountU3Ek__BackingField_4; }
	inline void set_U3CArrayItemCountU3Ek__BackingField_4(int32_t value)
	{
		___U3CArrayItemCountU3Ek__BackingField_4 = value;
	}
};

struct SchemaScope_t4218888543_StaticFields
{
public:
	// System.Func`2<System.String,System.String> Newtonsoft.Json.JsonValidatingReader/SchemaScope::<>f__am$cache0
	Func_2_t193026957 * ___U3CU3Ef__amU24cache0_5;
	// System.Func`2<System.String,System.Boolean> Newtonsoft.Json.JsonValidatingReader/SchemaScope::<>f__am$cache1
	Func_2_t1989381442 * ___U3CU3Ef__amU24cache1_6;
	// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,Newtonsoft.Json.Schema.JsonSchemaModel>,System.Boolean> Newtonsoft.Json.JsonValidatingReader/SchemaScope::<>f__am$cache2
	Func_2_t2854776331 * ___U3CU3Ef__amU24cache2_7;
	// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,Newtonsoft.Json.Schema.JsonSchemaModel>,System.String> Newtonsoft.Json.JsonValidatingReader/SchemaScope::<>f__am$cache3
	Func_2_t1058421846 * ___U3CU3Ef__amU24cache3_8;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_5() { return static_cast<int32_t>(offsetof(SchemaScope_t4218888543_StaticFields, ___U3CU3Ef__amU24cache0_5)); }
	inline Func_2_t193026957 * get_U3CU3Ef__amU24cache0_5() const { return ___U3CU3Ef__amU24cache0_5; }
	inline Func_2_t193026957 ** get_address_of_U3CU3Ef__amU24cache0_5() { return &___U3CU3Ef__amU24cache0_5; }
	inline void set_U3CU3Ef__amU24cache0_5(Func_2_t193026957 * value)
	{
		___U3CU3Ef__amU24cache0_5 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache0_5, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache1_6() { return static_cast<int32_t>(offsetof(SchemaScope_t4218888543_StaticFields, ___U3CU3Ef__amU24cache1_6)); }
	inline Func_2_t1989381442 * get_U3CU3Ef__amU24cache1_6() const { return ___U3CU3Ef__amU24cache1_6; }
	inline Func_2_t1989381442 ** get_address_of_U3CU3Ef__amU24cache1_6() { return &___U3CU3Ef__amU24cache1_6; }
	inline void set_U3CU3Ef__amU24cache1_6(Func_2_t1989381442 * value)
	{
		___U3CU3Ef__amU24cache1_6 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache1_6, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache2_7() { return static_cast<int32_t>(offsetof(SchemaScope_t4218888543_StaticFields, ___U3CU3Ef__amU24cache2_7)); }
	inline Func_2_t2854776331 * get_U3CU3Ef__amU24cache2_7() const { return ___U3CU3Ef__amU24cache2_7; }
	inline Func_2_t2854776331 ** get_address_of_U3CU3Ef__amU24cache2_7() { return &___U3CU3Ef__amU24cache2_7; }
	inline void set_U3CU3Ef__amU24cache2_7(Func_2_t2854776331 * value)
	{
		___U3CU3Ef__amU24cache2_7 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache2_7, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache3_8() { return static_cast<int32_t>(offsetof(SchemaScope_t4218888543_StaticFields, ___U3CU3Ef__amU24cache3_8)); }
	inline Func_2_t1058421846 * get_U3CU3Ef__amU24cache3_8() const { return ___U3CU3Ef__amU24cache3_8; }
	inline Func_2_t1058421846 ** get_address_of_U3CU3Ef__amU24cache3_8() { return &___U3CU3Ef__amU24cache3_8; }
	inline void set_U3CU3Ef__amU24cache3_8(Func_2_t1058421846 * value)
	{
		___U3CU3Ef__amU24cache3_8 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache3_8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
