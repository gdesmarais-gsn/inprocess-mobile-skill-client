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
// System.Collections.Generic.IList`1<Newtonsoft.Json.Schema.JsonSchema>
struct IList_1_t18087154;
// System.Collections.Generic.IDictionary`2<System.String,Newtonsoft.Json.Schema.JsonSchema>
struct IDictionary_2_t3685976532;
// Newtonsoft.Json.Schema.JsonSchema
struct JsonSchema_t3772113849;
// System.Collections.Generic.IList`1<System.String>
struct IList_1_t2570160834;
// System.Collections.Generic.IList`1<Newtonsoft.Json.Linq.JToken>
struct IList_1_t3093584614;
// System.Collections.Generic.IDictionary`2<Newtonsoft.Json.Linq.JToken,System.String>
struct IDictionary_2_t2133323376;
// Newtonsoft.Json.Linq.JToken
struct JToken_t2552644013;

#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_Nullable_1_gen2088641033.h"
#include "mscorlib_System_Nullable_1_gen5811492.h"
#include "mscorlib_System_Nullable_1_gen334943763.h"
#include "mscorlib_System_Nullable_1_gen2341081996.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Newtonsoft.Json.Schema.JsonSchema
struct  JsonSchema_t3772113849  : public Il2CppObject
{
public:
	// System.String Newtonsoft.Json.Schema.JsonSchema::<Id>k__BackingField
	String_t* ___U3CIdU3Ek__BackingField_0;
	// System.String Newtonsoft.Json.Schema.JsonSchema::<Title>k__BackingField
	String_t* ___U3CTitleU3Ek__BackingField_1;
	// System.Nullable`1<System.Boolean> Newtonsoft.Json.Schema.JsonSchema::<Required>k__BackingField
	Nullable_1_t2088641033  ___U3CRequiredU3Ek__BackingField_2;
	// System.Nullable`1<System.Boolean> Newtonsoft.Json.Schema.JsonSchema::<ReadOnly>k__BackingField
	Nullable_1_t2088641033  ___U3CReadOnlyU3Ek__BackingField_3;
	// System.Nullable`1<System.Boolean> Newtonsoft.Json.Schema.JsonSchema::<Hidden>k__BackingField
	Nullable_1_t2088641033  ___U3CHiddenU3Ek__BackingField_4;
	// System.Nullable`1<System.Boolean> Newtonsoft.Json.Schema.JsonSchema::<Transient>k__BackingField
	Nullable_1_t2088641033  ___U3CTransientU3Ek__BackingField_5;
	// System.String Newtonsoft.Json.Schema.JsonSchema::<Description>k__BackingField
	String_t* ___U3CDescriptionU3Ek__BackingField_6;
	// System.Nullable`1<Newtonsoft.Json.Schema.JsonSchemaType> Newtonsoft.Json.Schema.JsonSchema::<Type>k__BackingField
	Nullable_1_t5811492  ___U3CTypeU3Ek__BackingField_7;
	// System.String Newtonsoft.Json.Schema.JsonSchema::<Pattern>k__BackingField
	String_t* ___U3CPatternU3Ek__BackingField_8;
	// System.Nullable`1<System.Int32> Newtonsoft.Json.Schema.JsonSchema::<MinimumLength>k__BackingField
	Nullable_1_t334943763  ___U3CMinimumLengthU3Ek__BackingField_9;
	// System.Nullable`1<System.Int32> Newtonsoft.Json.Schema.JsonSchema::<MaximumLength>k__BackingField
	Nullable_1_t334943763  ___U3CMaximumLengthU3Ek__BackingField_10;
	// System.Nullable`1<System.Double> Newtonsoft.Json.Schema.JsonSchema::<DivisibleBy>k__BackingField
	Nullable_1_t2341081996  ___U3CDivisibleByU3Ek__BackingField_11;
	// System.Nullable`1<System.Double> Newtonsoft.Json.Schema.JsonSchema::<Minimum>k__BackingField
	Nullable_1_t2341081996  ___U3CMinimumU3Ek__BackingField_12;
	// System.Nullable`1<System.Double> Newtonsoft.Json.Schema.JsonSchema::<Maximum>k__BackingField
	Nullable_1_t2341081996  ___U3CMaximumU3Ek__BackingField_13;
	// System.Nullable`1<System.Boolean> Newtonsoft.Json.Schema.JsonSchema::<ExclusiveMinimum>k__BackingField
	Nullable_1_t2088641033  ___U3CExclusiveMinimumU3Ek__BackingField_14;
	// System.Nullable`1<System.Boolean> Newtonsoft.Json.Schema.JsonSchema::<ExclusiveMaximum>k__BackingField
	Nullable_1_t2088641033  ___U3CExclusiveMaximumU3Ek__BackingField_15;
	// System.Nullable`1<System.Int32> Newtonsoft.Json.Schema.JsonSchema::<MinimumItems>k__BackingField
	Nullable_1_t334943763  ___U3CMinimumItemsU3Ek__BackingField_16;
	// System.Nullable`1<System.Int32> Newtonsoft.Json.Schema.JsonSchema::<MaximumItems>k__BackingField
	Nullable_1_t334943763  ___U3CMaximumItemsU3Ek__BackingField_17;
	// System.Collections.Generic.IList`1<Newtonsoft.Json.Schema.JsonSchema> Newtonsoft.Json.Schema.JsonSchema::<Items>k__BackingField
	Il2CppObject* ___U3CItemsU3Ek__BackingField_18;
	// System.Collections.Generic.IDictionary`2<System.String,Newtonsoft.Json.Schema.JsonSchema> Newtonsoft.Json.Schema.JsonSchema::<Properties>k__BackingField
	Il2CppObject* ___U3CPropertiesU3Ek__BackingField_19;
	// Newtonsoft.Json.Schema.JsonSchema Newtonsoft.Json.Schema.JsonSchema::<AdditionalProperties>k__BackingField
	JsonSchema_t3772113849 * ___U3CAdditionalPropertiesU3Ek__BackingField_20;
	// System.Collections.Generic.IDictionary`2<System.String,Newtonsoft.Json.Schema.JsonSchema> Newtonsoft.Json.Schema.JsonSchema::<PatternProperties>k__BackingField
	Il2CppObject* ___U3CPatternPropertiesU3Ek__BackingField_21;
	// System.Boolean Newtonsoft.Json.Schema.JsonSchema::<AllowAdditionalProperties>k__BackingField
	bool ___U3CAllowAdditionalPropertiesU3Ek__BackingField_22;
	// System.String Newtonsoft.Json.Schema.JsonSchema::<Requires>k__BackingField
	String_t* ___U3CRequiresU3Ek__BackingField_23;
	// System.Collections.Generic.IList`1<System.String> Newtonsoft.Json.Schema.JsonSchema::<Identity>k__BackingField
	Il2CppObject* ___U3CIdentityU3Ek__BackingField_24;
	// System.Collections.Generic.IList`1<Newtonsoft.Json.Linq.JToken> Newtonsoft.Json.Schema.JsonSchema::<Enum>k__BackingField
	Il2CppObject* ___U3CEnumU3Ek__BackingField_25;
	// System.Collections.Generic.IDictionary`2<Newtonsoft.Json.Linq.JToken,System.String> Newtonsoft.Json.Schema.JsonSchema::<Options>k__BackingField
	Il2CppObject* ___U3COptionsU3Ek__BackingField_26;
	// System.Nullable`1<Newtonsoft.Json.Schema.JsonSchemaType> Newtonsoft.Json.Schema.JsonSchema::<Disallow>k__BackingField
	Nullable_1_t5811492  ___U3CDisallowU3Ek__BackingField_27;
	// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Schema.JsonSchema::<Default>k__BackingField
	JToken_t2552644013 * ___U3CDefaultU3Ek__BackingField_28;
	// Newtonsoft.Json.Schema.JsonSchema Newtonsoft.Json.Schema.JsonSchema::<Extends>k__BackingField
	JsonSchema_t3772113849 * ___U3CExtendsU3Ek__BackingField_29;
	// System.String Newtonsoft.Json.Schema.JsonSchema::<Format>k__BackingField
	String_t* ___U3CFormatU3Ek__BackingField_30;
	// System.String Newtonsoft.Json.Schema.JsonSchema::_internalId
	String_t* ____internalId_31;

public:
	inline static int32_t get_offset_of_U3CIdU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(JsonSchema_t3772113849, ___U3CIdU3Ek__BackingField_0)); }
	inline String_t* get_U3CIdU3Ek__BackingField_0() const { return ___U3CIdU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CIdU3Ek__BackingField_0() { return &___U3CIdU3Ek__BackingField_0; }
	inline void set_U3CIdU3Ek__BackingField_0(String_t* value)
	{
		___U3CIdU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier(&___U3CIdU3Ek__BackingField_0, value);
	}

	inline static int32_t get_offset_of_U3CTitleU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(JsonSchema_t3772113849, ___U3CTitleU3Ek__BackingField_1)); }
	inline String_t* get_U3CTitleU3Ek__BackingField_1() const { return ___U3CTitleU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CTitleU3Ek__BackingField_1() { return &___U3CTitleU3Ek__BackingField_1; }
	inline void set_U3CTitleU3Ek__BackingField_1(String_t* value)
	{
		___U3CTitleU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier(&___U3CTitleU3Ek__BackingField_1, value);
	}

	inline static int32_t get_offset_of_U3CRequiredU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(JsonSchema_t3772113849, ___U3CRequiredU3Ek__BackingField_2)); }
	inline Nullable_1_t2088641033  get_U3CRequiredU3Ek__BackingField_2() const { return ___U3CRequiredU3Ek__BackingField_2; }
	inline Nullable_1_t2088641033 * get_address_of_U3CRequiredU3Ek__BackingField_2() { return &___U3CRequiredU3Ek__BackingField_2; }
	inline void set_U3CRequiredU3Ek__BackingField_2(Nullable_1_t2088641033  value)
	{
		___U3CRequiredU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CReadOnlyU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(JsonSchema_t3772113849, ___U3CReadOnlyU3Ek__BackingField_3)); }
	inline Nullable_1_t2088641033  get_U3CReadOnlyU3Ek__BackingField_3() const { return ___U3CReadOnlyU3Ek__BackingField_3; }
	inline Nullable_1_t2088641033 * get_address_of_U3CReadOnlyU3Ek__BackingField_3() { return &___U3CReadOnlyU3Ek__BackingField_3; }
	inline void set_U3CReadOnlyU3Ek__BackingField_3(Nullable_1_t2088641033  value)
	{
		___U3CReadOnlyU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CHiddenU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(JsonSchema_t3772113849, ___U3CHiddenU3Ek__BackingField_4)); }
	inline Nullable_1_t2088641033  get_U3CHiddenU3Ek__BackingField_4() const { return ___U3CHiddenU3Ek__BackingField_4; }
	inline Nullable_1_t2088641033 * get_address_of_U3CHiddenU3Ek__BackingField_4() { return &___U3CHiddenU3Ek__BackingField_4; }
	inline void set_U3CHiddenU3Ek__BackingField_4(Nullable_1_t2088641033  value)
	{
		___U3CHiddenU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CTransientU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(JsonSchema_t3772113849, ___U3CTransientU3Ek__BackingField_5)); }
	inline Nullable_1_t2088641033  get_U3CTransientU3Ek__BackingField_5() const { return ___U3CTransientU3Ek__BackingField_5; }
	inline Nullable_1_t2088641033 * get_address_of_U3CTransientU3Ek__BackingField_5() { return &___U3CTransientU3Ek__BackingField_5; }
	inline void set_U3CTransientU3Ek__BackingField_5(Nullable_1_t2088641033  value)
	{
		___U3CTransientU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CDescriptionU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(JsonSchema_t3772113849, ___U3CDescriptionU3Ek__BackingField_6)); }
	inline String_t* get_U3CDescriptionU3Ek__BackingField_6() const { return ___U3CDescriptionU3Ek__BackingField_6; }
	inline String_t** get_address_of_U3CDescriptionU3Ek__BackingField_6() { return &___U3CDescriptionU3Ek__BackingField_6; }
	inline void set_U3CDescriptionU3Ek__BackingField_6(String_t* value)
	{
		___U3CDescriptionU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier(&___U3CDescriptionU3Ek__BackingField_6, value);
	}

	inline static int32_t get_offset_of_U3CTypeU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(JsonSchema_t3772113849, ___U3CTypeU3Ek__BackingField_7)); }
	inline Nullable_1_t5811492  get_U3CTypeU3Ek__BackingField_7() const { return ___U3CTypeU3Ek__BackingField_7; }
	inline Nullable_1_t5811492 * get_address_of_U3CTypeU3Ek__BackingField_7() { return &___U3CTypeU3Ek__BackingField_7; }
	inline void set_U3CTypeU3Ek__BackingField_7(Nullable_1_t5811492  value)
	{
		___U3CTypeU3Ek__BackingField_7 = value;
	}

	inline static int32_t get_offset_of_U3CPatternU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(JsonSchema_t3772113849, ___U3CPatternU3Ek__BackingField_8)); }
	inline String_t* get_U3CPatternU3Ek__BackingField_8() const { return ___U3CPatternU3Ek__BackingField_8; }
	inline String_t** get_address_of_U3CPatternU3Ek__BackingField_8() { return &___U3CPatternU3Ek__BackingField_8; }
	inline void set_U3CPatternU3Ek__BackingField_8(String_t* value)
	{
		___U3CPatternU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier(&___U3CPatternU3Ek__BackingField_8, value);
	}

	inline static int32_t get_offset_of_U3CMinimumLengthU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(JsonSchema_t3772113849, ___U3CMinimumLengthU3Ek__BackingField_9)); }
	inline Nullable_1_t334943763  get_U3CMinimumLengthU3Ek__BackingField_9() const { return ___U3CMinimumLengthU3Ek__BackingField_9; }
	inline Nullable_1_t334943763 * get_address_of_U3CMinimumLengthU3Ek__BackingField_9() { return &___U3CMinimumLengthU3Ek__BackingField_9; }
	inline void set_U3CMinimumLengthU3Ek__BackingField_9(Nullable_1_t334943763  value)
	{
		___U3CMinimumLengthU3Ek__BackingField_9 = value;
	}

	inline static int32_t get_offset_of_U3CMaximumLengthU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(JsonSchema_t3772113849, ___U3CMaximumLengthU3Ek__BackingField_10)); }
	inline Nullable_1_t334943763  get_U3CMaximumLengthU3Ek__BackingField_10() const { return ___U3CMaximumLengthU3Ek__BackingField_10; }
	inline Nullable_1_t334943763 * get_address_of_U3CMaximumLengthU3Ek__BackingField_10() { return &___U3CMaximumLengthU3Ek__BackingField_10; }
	inline void set_U3CMaximumLengthU3Ek__BackingField_10(Nullable_1_t334943763  value)
	{
		___U3CMaximumLengthU3Ek__BackingField_10 = value;
	}

	inline static int32_t get_offset_of_U3CDivisibleByU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(JsonSchema_t3772113849, ___U3CDivisibleByU3Ek__BackingField_11)); }
	inline Nullable_1_t2341081996  get_U3CDivisibleByU3Ek__BackingField_11() const { return ___U3CDivisibleByU3Ek__BackingField_11; }
	inline Nullable_1_t2341081996 * get_address_of_U3CDivisibleByU3Ek__BackingField_11() { return &___U3CDivisibleByU3Ek__BackingField_11; }
	inline void set_U3CDivisibleByU3Ek__BackingField_11(Nullable_1_t2341081996  value)
	{
		___U3CDivisibleByU3Ek__BackingField_11 = value;
	}

	inline static int32_t get_offset_of_U3CMinimumU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(JsonSchema_t3772113849, ___U3CMinimumU3Ek__BackingField_12)); }
	inline Nullable_1_t2341081996  get_U3CMinimumU3Ek__BackingField_12() const { return ___U3CMinimumU3Ek__BackingField_12; }
	inline Nullable_1_t2341081996 * get_address_of_U3CMinimumU3Ek__BackingField_12() { return &___U3CMinimumU3Ek__BackingField_12; }
	inline void set_U3CMinimumU3Ek__BackingField_12(Nullable_1_t2341081996  value)
	{
		___U3CMinimumU3Ek__BackingField_12 = value;
	}

	inline static int32_t get_offset_of_U3CMaximumU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(JsonSchema_t3772113849, ___U3CMaximumU3Ek__BackingField_13)); }
	inline Nullable_1_t2341081996  get_U3CMaximumU3Ek__BackingField_13() const { return ___U3CMaximumU3Ek__BackingField_13; }
	inline Nullable_1_t2341081996 * get_address_of_U3CMaximumU3Ek__BackingField_13() { return &___U3CMaximumU3Ek__BackingField_13; }
	inline void set_U3CMaximumU3Ek__BackingField_13(Nullable_1_t2341081996  value)
	{
		___U3CMaximumU3Ek__BackingField_13 = value;
	}

	inline static int32_t get_offset_of_U3CExclusiveMinimumU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(JsonSchema_t3772113849, ___U3CExclusiveMinimumU3Ek__BackingField_14)); }
	inline Nullable_1_t2088641033  get_U3CExclusiveMinimumU3Ek__BackingField_14() const { return ___U3CExclusiveMinimumU3Ek__BackingField_14; }
	inline Nullable_1_t2088641033 * get_address_of_U3CExclusiveMinimumU3Ek__BackingField_14() { return &___U3CExclusiveMinimumU3Ek__BackingField_14; }
	inline void set_U3CExclusiveMinimumU3Ek__BackingField_14(Nullable_1_t2088641033  value)
	{
		___U3CExclusiveMinimumU3Ek__BackingField_14 = value;
	}

	inline static int32_t get_offset_of_U3CExclusiveMaximumU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(JsonSchema_t3772113849, ___U3CExclusiveMaximumU3Ek__BackingField_15)); }
	inline Nullable_1_t2088641033  get_U3CExclusiveMaximumU3Ek__BackingField_15() const { return ___U3CExclusiveMaximumU3Ek__BackingField_15; }
	inline Nullable_1_t2088641033 * get_address_of_U3CExclusiveMaximumU3Ek__BackingField_15() { return &___U3CExclusiveMaximumU3Ek__BackingField_15; }
	inline void set_U3CExclusiveMaximumU3Ek__BackingField_15(Nullable_1_t2088641033  value)
	{
		___U3CExclusiveMaximumU3Ek__BackingField_15 = value;
	}

	inline static int32_t get_offset_of_U3CMinimumItemsU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(JsonSchema_t3772113849, ___U3CMinimumItemsU3Ek__BackingField_16)); }
	inline Nullable_1_t334943763  get_U3CMinimumItemsU3Ek__BackingField_16() const { return ___U3CMinimumItemsU3Ek__BackingField_16; }
	inline Nullable_1_t334943763 * get_address_of_U3CMinimumItemsU3Ek__BackingField_16() { return &___U3CMinimumItemsU3Ek__BackingField_16; }
	inline void set_U3CMinimumItemsU3Ek__BackingField_16(Nullable_1_t334943763  value)
	{
		___U3CMinimumItemsU3Ek__BackingField_16 = value;
	}

	inline static int32_t get_offset_of_U3CMaximumItemsU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(JsonSchema_t3772113849, ___U3CMaximumItemsU3Ek__BackingField_17)); }
	inline Nullable_1_t334943763  get_U3CMaximumItemsU3Ek__BackingField_17() const { return ___U3CMaximumItemsU3Ek__BackingField_17; }
	inline Nullable_1_t334943763 * get_address_of_U3CMaximumItemsU3Ek__BackingField_17() { return &___U3CMaximumItemsU3Ek__BackingField_17; }
	inline void set_U3CMaximumItemsU3Ek__BackingField_17(Nullable_1_t334943763  value)
	{
		___U3CMaximumItemsU3Ek__BackingField_17 = value;
	}

	inline static int32_t get_offset_of_U3CItemsU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(JsonSchema_t3772113849, ___U3CItemsU3Ek__BackingField_18)); }
	inline Il2CppObject* get_U3CItemsU3Ek__BackingField_18() const { return ___U3CItemsU3Ek__BackingField_18; }
	inline Il2CppObject** get_address_of_U3CItemsU3Ek__BackingField_18() { return &___U3CItemsU3Ek__BackingField_18; }
	inline void set_U3CItemsU3Ek__BackingField_18(Il2CppObject* value)
	{
		___U3CItemsU3Ek__BackingField_18 = value;
		Il2CppCodeGenWriteBarrier(&___U3CItemsU3Ek__BackingField_18, value);
	}

	inline static int32_t get_offset_of_U3CPropertiesU3Ek__BackingField_19() { return static_cast<int32_t>(offsetof(JsonSchema_t3772113849, ___U3CPropertiesU3Ek__BackingField_19)); }
	inline Il2CppObject* get_U3CPropertiesU3Ek__BackingField_19() const { return ___U3CPropertiesU3Ek__BackingField_19; }
	inline Il2CppObject** get_address_of_U3CPropertiesU3Ek__BackingField_19() { return &___U3CPropertiesU3Ek__BackingField_19; }
	inline void set_U3CPropertiesU3Ek__BackingField_19(Il2CppObject* value)
	{
		___U3CPropertiesU3Ek__BackingField_19 = value;
		Il2CppCodeGenWriteBarrier(&___U3CPropertiesU3Ek__BackingField_19, value);
	}

	inline static int32_t get_offset_of_U3CAdditionalPropertiesU3Ek__BackingField_20() { return static_cast<int32_t>(offsetof(JsonSchema_t3772113849, ___U3CAdditionalPropertiesU3Ek__BackingField_20)); }
	inline JsonSchema_t3772113849 * get_U3CAdditionalPropertiesU3Ek__BackingField_20() const { return ___U3CAdditionalPropertiesU3Ek__BackingField_20; }
	inline JsonSchema_t3772113849 ** get_address_of_U3CAdditionalPropertiesU3Ek__BackingField_20() { return &___U3CAdditionalPropertiesU3Ek__BackingField_20; }
	inline void set_U3CAdditionalPropertiesU3Ek__BackingField_20(JsonSchema_t3772113849 * value)
	{
		___U3CAdditionalPropertiesU3Ek__BackingField_20 = value;
		Il2CppCodeGenWriteBarrier(&___U3CAdditionalPropertiesU3Ek__BackingField_20, value);
	}

	inline static int32_t get_offset_of_U3CPatternPropertiesU3Ek__BackingField_21() { return static_cast<int32_t>(offsetof(JsonSchema_t3772113849, ___U3CPatternPropertiesU3Ek__BackingField_21)); }
	inline Il2CppObject* get_U3CPatternPropertiesU3Ek__BackingField_21() const { return ___U3CPatternPropertiesU3Ek__BackingField_21; }
	inline Il2CppObject** get_address_of_U3CPatternPropertiesU3Ek__BackingField_21() { return &___U3CPatternPropertiesU3Ek__BackingField_21; }
	inline void set_U3CPatternPropertiesU3Ek__BackingField_21(Il2CppObject* value)
	{
		___U3CPatternPropertiesU3Ek__BackingField_21 = value;
		Il2CppCodeGenWriteBarrier(&___U3CPatternPropertiesU3Ek__BackingField_21, value);
	}

	inline static int32_t get_offset_of_U3CAllowAdditionalPropertiesU3Ek__BackingField_22() { return static_cast<int32_t>(offsetof(JsonSchema_t3772113849, ___U3CAllowAdditionalPropertiesU3Ek__BackingField_22)); }
	inline bool get_U3CAllowAdditionalPropertiesU3Ek__BackingField_22() const { return ___U3CAllowAdditionalPropertiesU3Ek__BackingField_22; }
	inline bool* get_address_of_U3CAllowAdditionalPropertiesU3Ek__BackingField_22() { return &___U3CAllowAdditionalPropertiesU3Ek__BackingField_22; }
	inline void set_U3CAllowAdditionalPropertiesU3Ek__BackingField_22(bool value)
	{
		___U3CAllowAdditionalPropertiesU3Ek__BackingField_22 = value;
	}

	inline static int32_t get_offset_of_U3CRequiresU3Ek__BackingField_23() { return static_cast<int32_t>(offsetof(JsonSchema_t3772113849, ___U3CRequiresU3Ek__BackingField_23)); }
	inline String_t* get_U3CRequiresU3Ek__BackingField_23() const { return ___U3CRequiresU3Ek__BackingField_23; }
	inline String_t** get_address_of_U3CRequiresU3Ek__BackingField_23() { return &___U3CRequiresU3Ek__BackingField_23; }
	inline void set_U3CRequiresU3Ek__BackingField_23(String_t* value)
	{
		___U3CRequiresU3Ek__BackingField_23 = value;
		Il2CppCodeGenWriteBarrier(&___U3CRequiresU3Ek__BackingField_23, value);
	}

	inline static int32_t get_offset_of_U3CIdentityU3Ek__BackingField_24() { return static_cast<int32_t>(offsetof(JsonSchema_t3772113849, ___U3CIdentityU3Ek__BackingField_24)); }
	inline Il2CppObject* get_U3CIdentityU3Ek__BackingField_24() const { return ___U3CIdentityU3Ek__BackingField_24; }
	inline Il2CppObject** get_address_of_U3CIdentityU3Ek__BackingField_24() { return &___U3CIdentityU3Ek__BackingField_24; }
	inline void set_U3CIdentityU3Ek__BackingField_24(Il2CppObject* value)
	{
		___U3CIdentityU3Ek__BackingField_24 = value;
		Il2CppCodeGenWriteBarrier(&___U3CIdentityU3Ek__BackingField_24, value);
	}

	inline static int32_t get_offset_of_U3CEnumU3Ek__BackingField_25() { return static_cast<int32_t>(offsetof(JsonSchema_t3772113849, ___U3CEnumU3Ek__BackingField_25)); }
	inline Il2CppObject* get_U3CEnumU3Ek__BackingField_25() const { return ___U3CEnumU3Ek__BackingField_25; }
	inline Il2CppObject** get_address_of_U3CEnumU3Ek__BackingField_25() { return &___U3CEnumU3Ek__BackingField_25; }
	inline void set_U3CEnumU3Ek__BackingField_25(Il2CppObject* value)
	{
		___U3CEnumU3Ek__BackingField_25 = value;
		Il2CppCodeGenWriteBarrier(&___U3CEnumU3Ek__BackingField_25, value);
	}

	inline static int32_t get_offset_of_U3COptionsU3Ek__BackingField_26() { return static_cast<int32_t>(offsetof(JsonSchema_t3772113849, ___U3COptionsU3Ek__BackingField_26)); }
	inline Il2CppObject* get_U3COptionsU3Ek__BackingField_26() const { return ___U3COptionsU3Ek__BackingField_26; }
	inline Il2CppObject** get_address_of_U3COptionsU3Ek__BackingField_26() { return &___U3COptionsU3Ek__BackingField_26; }
	inline void set_U3COptionsU3Ek__BackingField_26(Il2CppObject* value)
	{
		___U3COptionsU3Ek__BackingField_26 = value;
		Il2CppCodeGenWriteBarrier(&___U3COptionsU3Ek__BackingField_26, value);
	}

	inline static int32_t get_offset_of_U3CDisallowU3Ek__BackingField_27() { return static_cast<int32_t>(offsetof(JsonSchema_t3772113849, ___U3CDisallowU3Ek__BackingField_27)); }
	inline Nullable_1_t5811492  get_U3CDisallowU3Ek__BackingField_27() const { return ___U3CDisallowU3Ek__BackingField_27; }
	inline Nullable_1_t5811492 * get_address_of_U3CDisallowU3Ek__BackingField_27() { return &___U3CDisallowU3Ek__BackingField_27; }
	inline void set_U3CDisallowU3Ek__BackingField_27(Nullable_1_t5811492  value)
	{
		___U3CDisallowU3Ek__BackingField_27 = value;
	}

	inline static int32_t get_offset_of_U3CDefaultU3Ek__BackingField_28() { return static_cast<int32_t>(offsetof(JsonSchema_t3772113849, ___U3CDefaultU3Ek__BackingField_28)); }
	inline JToken_t2552644013 * get_U3CDefaultU3Ek__BackingField_28() const { return ___U3CDefaultU3Ek__BackingField_28; }
	inline JToken_t2552644013 ** get_address_of_U3CDefaultU3Ek__BackingField_28() { return &___U3CDefaultU3Ek__BackingField_28; }
	inline void set_U3CDefaultU3Ek__BackingField_28(JToken_t2552644013 * value)
	{
		___U3CDefaultU3Ek__BackingField_28 = value;
		Il2CppCodeGenWriteBarrier(&___U3CDefaultU3Ek__BackingField_28, value);
	}

	inline static int32_t get_offset_of_U3CExtendsU3Ek__BackingField_29() { return static_cast<int32_t>(offsetof(JsonSchema_t3772113849, ___U3CExtendsU3Ek__BackingField_29)); }
	inline JsonSchema_t3772113849 * get_U3CExtendsU3Ek__BackingField_29() const { return ___U3CExtendsU3Ek__BackingField_29; }
	inline JsonSchema_t3772113849 ** get_address_of_U3CExtendsU3Ek__BackingField_29() { return &___U3CExtendsU3Ek__BackingField_29; }
	inline void set_U3CExtendsU3Ek__BackingField_29(JsonSchema_t3772113849 * value)
	{
		___U3CExtendsU3Ek__BackingField_29 = value;
		Il2CppCodeGenWriteBarrier(&___U3CExtendsU3Ek__BackingField_29, value);
	}

	inline static int32_t get_offset_of_U3CFormatU3Ek__BackingField_30() { return static_cast<int32_t>(offsetof(JsonSchema_t3772113849, ___U3CFormatU3Ek__BackingField_30)); }
	inline String_t* get_U3CFormatU3Ek__BackingField_30() const { return ___U3CFormatU3Ek__BackingField_30; }
	inline String_t** get_address_of_U3CFormatU3Ek__BackingField_30() { return &___U3CFormatU3Ek__BackingField_30; }
	inline void set_U3CFormatU3Ek__BackingField_30(String_t* value)
	{
		___U3CFormatU3Ek__BackingField_30 = value;
		Il2CppCodeGenWriteBarrier(&___U3CFormatU3Ek__BackingField_30, value);
	}

	inline static int32_t get_offset_of__internalId_31() { return static_cast<int32_t>(offsetof(JsonSchema_t3772113849, ____internalId_31)); }
	inline String_t* get__internalId_31() const { return ____internalId_31; }
	inline String_t** get_address_of__internalId_31() { return &____internalId_31; }
	inline void set__internalId_31(String_t* value)
	{
		____internalId_31 = value;
		Il2CppCodeGenWriteBarrier(&____internalId_31, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
