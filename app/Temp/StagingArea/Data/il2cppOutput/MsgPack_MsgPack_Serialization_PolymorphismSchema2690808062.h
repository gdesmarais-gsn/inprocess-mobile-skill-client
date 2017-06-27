#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.Dictionary`2<System.String,System.Type>
struct Dictionary_2_t3218582488;
// MsgPack.Serialization.PolymorphismSchema[]
struct PolymorphismSchemaU5BU5D_t1960459595;
// MsgPack.Serialization.PolymorphismSchema/ReadOnlyDictionary`2<System.String,System.Type>
struct ReadOnlyDictionary_2_t3181794677;
// System.Collections.ObjectModel.ReadOnlyCollection`1<MsgPack.Serialization.PolymorphismSchema>
struct ReadOnlyCollection_1_t2876593754;
// MsgPack.Serialization.PolymorphismSchema
struct PolymorphismSchema_t2690808062;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Reflection.ConstructorInfo
struct ConstructorInfo_t2851816542;
// System.Type
struct Type_t;
// System.Func`2<MsgPack.Serialization.PolymorphismSchema,MsgPack.Serialization.PolymorphismSchema>
struct Func_2_t1172688409;

#include "mscorlib_System_Object2689449295.h"
#include "MsgPack_MsgPack_Serialization_PolymorphismType3133402355.h"
#include "MsgPack_MsgPack_Serialization_PolymorphismSchemaCh2236790193.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MsgPack.Serialization.PolymorphismSchema
struct  PolymorphismSchema_t2690808062  : public Il2CppObject
{
public:
	// MsgPack.Serialization.PolymorphismSchema/ReadOnlyDictionary`2<System.String,System.Type> MsgPack.Serialization.PolymorphismSchema::_codeTypeMapping
	ReadOnlyDictionary_2_t3181794677 * ____codeTypeMapping_2;
	// System.Collections.ObjectModel.ReadOnlyCollection`1<MsgPack.Serialization.PolymorphismSchema> MsgPack.Serialization.PolymorphismSchema::_children
	ReadOnlyCollection_1_t2876593754 * ____children_3;
	// System.Type MsgPack.Serialization.PolymorphismSchema::<TargetType>k__BackingField
	Type_t * ___U3CTargetTypeU3Ek__BackingField_15;
	// MsgPack.Serialization.PolymorphismType MsgPack.Serialization.PolymorphismSchema::<PolymorphismType>k__BackingField
	int32_t ___U3CPolymorphismTypeU3Ek__BackingField_16;
	// MsgPack.Serialization.PolymorphismSchemaChildrenType MsgPack.Serialization.PolymorphismSchema::<ChildrenType>k__BackingField
	int32_t ___U3CChildrenTypeU3Ek__BackingField_17;

public:
	inline static int32_t get_offset_of__codeTypeMapping_2() { return static_cast<int32_t>(offsetof(PolymorphismSchema_t2690808062, ____codeTypeMapping_2)); }
	inline ReadOnlyDictionary_2_t3181794677 * get__codeTypeMapping_2() const { return ____codeTypeMapping_2; }
	inline ReadOnlyDictionary_2_t3181794677 ** get_address_of__codeTypeMapping_2() { return &____codeTypeMapping_2; }
	inline void set__codeTypeMapping_2(ReadOnlyDictionary_2_t3181794677 * value)
	{
		____codeTypeMapping_2 = value;
		Il2CppCodeGenWriteBarrier(&____codeTypeMapping_2, value);
	}

	inline static int32_t get_offset_of__children_3() { return static_cast<int32_t>(offsetof(PolymorphismSchema_t2690808062, ____children_3)); }
	inline ReadOnlyCollection_1_t2876593754 * get__children_3() const { return ____children_3; }
	inline ReadOnlyCollection_1_t2876593754 ** get_address_of__children_3() { return &____children_3; }
	inline void set__children_3(ReadOnlyCollection_1_t2876593754 * value)
	{
		____children_3 = value;
		Il2CppCodeGenWriteBarrier(&____children_3, value);
	}

	inline static int32_t get_offset_of_U3CTargetTypeU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(PolymorphismSchema_t2690808062, ___U3CTargetTypeU3Ek__BackingField_15)); }
	inline Type_t * get_U3CTargetTypeU3Ek__BackingField_15() const { return ___U3CTargetTypeU3Ek__BackingField_15; }
	inline Type_t ** get_address_of_U3CTargetTypeU3Ek__BackingField_15() { return &___U3CTargetTypeU3Ek__BackingField_15; }
	inline void set_U3CTargetTypeU3Ek__BackingField_15(Type_t * value)
	{
		___U3CTargetTypeU3Ek__BackingField_15 = value;
		Il2CppCodeGenWriteBarrier(&___U3CTargetTypeU3Ek__BackingField_15, value);
	}

	inline static int32_t get_offset_of_U3CPolymorphismTypeU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(PolymorphismSchema_t2690808062, ___U3CPolymorphismTypeU3Ek__BackingField_16)); }
	inline int32_t get_U3CPolymorphismTypeU3Ek__BackingField_16() const { return ___U3CPolymorphismTypeU3Ek__BackingField_16; }
	inline int32_t* get_address_of_U3CPolymorphismTypeU3Ek__BackingField_16() { return &___U3CPolymorphismTypeU3Ek__BackingField_16; }
	inline void set_U3CPolymorphismTypeU3Ek__BackingField_16(int32_t value)
	{
		___U3CPolymorphismTypeU3Ek__BackingField_16 = value;
	}

	inline static int32_t get_offset_of_U3CChildrenTypeU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(PolymorphismSchema_t2690808062, ___U3CChildrenTypeU3Ek__BackingField_17)); }
	inline int32_t get_U3CChildrenTypeU3Ek__BackingField_17() const { return ___U3CChildrenTypeU3Ek__BackingField_17; }
	inline int32_t* get_address_of_U3CChildrenTypeU3Ek__BackingField_17() { return &___U3CChildrenTypeU3Ek__BackingField_17; }
	inline void set_U3CChildrenTypeU3Ek__BackingField_17(int32_t value)
	{
		___U3CChildrenTypeU3Ek__BackingField_17 = value;
	}
};

struct PolymorphismSchema_t2690808062_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Type> MsgPack.Serialization.PolymorphismSchema::EmptyMap
	Dictionary_2_t3218582488 * ___EmptyMap_0;
	// MsgPack.Serialization.PolymorphismSchema[] MsgPack.Serialization.PolymorphismSchema::EmptyChildren
	PolymorphismSchemaU5BU5D_t1960459595* ___EmptyChildren_1;
	// MsgPack.Serialization.PolymorphismSchema MsgPack.Serialization.PolymorphismSchema::Default
	PolymorphismSchema_t2690808062 * ___Default_4;
	// System.Reflection.MethodInfo MsgPack.Serialization.PolymorphismSchema::ForPolymorphicObjectTypeEmbeddingMethod
	MethodInfo_t * ___ForPolymorphicObjectTypeEmbeddingMethod_5;
	// System.Reflection.MethodInfo MsgPack.Serialization.PolymorphismSchema::ForPolymorphicObjectCodeTypeMappingMethod
	MethodInfo_t * ___ForPolymorphicObjectCodeTypeMappingMethod_6;
	// System.Reflection.MethodInfo MsgPack.Serialization.PolymorphismSchema::ForContextSpecifiedCollectionMethod
	MethodInfo_t * ___ForContextSpecifiedCollectionMethod_7;
	// System.Reflection.MethodInfo MsgPack.Serialization.PolymorphismSchema::ForPolymorphicCollectionTypeEmbeddingMethod
	MethodInfo_t * ___ForPolymorphicCollectionTypeEmbeddingMethod_8;
	// System.Reflection.MethodInfo MsgPack.Serialization.PolymorphismSchema::ForPolymorphicCollectionCodeTypeMappingMethod
	MethodInfo_t * ___ForPolymorphicCollectionCodeTypeMappingMethod_9;
	// System.Reflection.MethodInfo MsgPack.Serialization.PolymorphismSchema::ForContextSpecifiedDictionaryMethod
	MethodInfo_t * ___ForContextSpecifiedDictionaryMethod_10;
	// System.Reflection.MethodInfo MsgPack.Serialization.PolymorphismSchema::ForPolymorphicDictionaryTypeEmbeddingMethod
	MethodInfo_t * ___ForPolymorphicDictionaryTypeEmbeddingMethod_11;
	// System.Reflection.MethodInfo MsgPack.Serialization.PolymorphismSchema::ForPolymorphicDictionaryCodeTypeMappingMethod
	MethodInfo_t * ___ForPolymorphicDictionaryCodeTypeMappingMethod_12;
	// System.Reflection.ConstructorInfo MsgPack.Serialization.PolymorphismSchema::CodeTypeMapConstructor
	ConstructorInfo_t2851816542 * ___CodeTypeMapConstructor_13;
	// System.Reflection.MethodInfo MsgPack.Serialization.PolymorphismSchema::AddToCodeTypeMapMethod
	MethodInfo_t * ___AddToCodeTypeMapMethod_14;
	// System.Func`2<MsgPack.Serialization.PolymorphismSchema,MsgPack.Serialization.PolymorphismSchema> MsgPack.Serialization.PolymorphismSchema::CS$<>9__CachedAnonymousMethodDelegate3
	Func_2_t1172688409 * ___CSU24U3CU3E9__CachedAnonymousMethodDelegate3_18;

public:
	inline static int32_t get_offset_of_EmptyMap_0() { return static_cast<int32_t>(offsetof(PolymorphismSchema_t2690808062_StaticFields, ___EmptyMap_0)); }
	inline Dictionary_2_t3218582488 * get_EmptyMap_0() const { return ___EmptyMap_0; }
	inline Dictionary_2_t3218582488 ** get_address_of_EmptyMap_0() { return &___EmptyMap_0; }
	inline void set_EmptyMap_0(Dictionary_2_t3218582488 * value)
	{
		___EmptyMap_0 = value;
		Il2CppCodeGenWriteBarrier(&___EmptyMap_0, value);
	}

	inline static int32_t get_offset_of_EmptyChildren_1() { return static_cast<int32_t>(offsetof(PolymorphismSchema_t2690808062_StaticFields, ___EmptyChildren_1)); }
	inline PolymorphismSchemaU5BU5D_t1960459595* get_EmptyChildren_1() const { return ___EmptyChildren_1; }
	inline PolymorphismSchemaU5BU5D_t1960459595** get_address_of_EmptyChildren_1() { return &___EmptyChildren_1; }
	inline void set_EmptyChildren_1(PolymorphismSchemaU5BU5D_t1960459595* value)
	{
		___EmptyChildren_1 = value;
		Il2CppCodeGenWriteBarrier(&___EmptyChildren_1, value);
	}

	inline static int32_t get_offset_of_Default_4() { return static_cast<int32_t>(offsetof(PolymorphismSchema_t2690808062_StaticFields, ___Default_4)); }
	inline PolymorphismSchema_t2690808062 * get_Default_4() const { return ___Default_4; }
	inline PolymorphismSchema_t2690808062 ** get_address_of_Default_4() { return &___Default_4; }
	inline void set_Default_4(PolymorphismSchema_t2690808062 * value)
	{
		___Default_4 = value;
		Il2CppCodeGenWriteBarrier(&___Default_4, value);
	}

	inline static int32_t get_offset_of_ForPolymorphicObjectTypeEmbeddingMethod_5() { return static_cast<int32_t>(offsetof(PolymorphismSchema_t2690808062_StaticFields, ___ForPolymorphicObjectTypeEmbeddingMethod_5)); }
	inline MethodInfo_t * get_ForPolymorphicObjectTypeEmbeddingMethod_5() const { return ___ForPolymorphicObjectTypeEmbeddingMethod_5; }
	inline MethodInfo_t ** get_address_of_ForPolymorphicObjectTypeEmbeddingMethod_5() { return &___ForPolymorphicObjectTypeEmbeddingMethod_5; }
	inline void set_ForPolymorphicObjectTypeEmbeddingMethod_5(MethodInfo_t * value)
	{
		___ForPolymorphicObjectTypeEmbeddingMethod_5 = value;
		Il2CppCodeGenWriteBarrier(&___ForPolymorphicObjectTypeEmbeddingMethod_5, value);
	}

	inline static int32_t get_offset_of_ForPolymorphicObjectCodeTypeMappingMethod_6() { return static_cast<int32_t>(offsetof(PolymorphismSchema_t2690808062_StaticFields, ___ForPolymorphicObjectCodeTypeMappingMethod_6)); }
	inline MethodInfo_t * get_ForPolymorphicObjectCodeTypeMappingMethod_6() const { return ___ForPolymorphicObjectCodeTypeMappingMethod_6; }
	inline MethodInfo_t ** get_address_of_ForPolymorphicObjectCodeTypeMappingMethod_6() { return &___ForPolymorphicObjectCodeTypeMappingMethod_6; }
	inline void set_ForPolymorphicObjectCodeTypeMappingMethod_6(MethodInfo_t * value)
	{
		___ForPolymorphicObjectCodeTypeMappingMethod_6 = value;
		Il2CppCodeGenWriteBarrier(&___ForPolymorphicObjectCodeTypeMappingMethod_6, value);
	}

	inline static int32_t get_offset_of_ForContextSpecifiedCollectionMethod_7() { return static_cast<int32_t>(offsetof(PolymorphismSchema_t2690808062_StaticFields, ___ForContextSpecifiedCollectionMethod_7)); }
	inline MethodInfo_t * get_ForContextSpecifiedCollectionMethod_7() const { return ___ForContextSpecifiedCollectionMethod_7; }
	inline MethodInfo_t ** get_address_of_ForContextSpecifiedCollectionMethod_7() { return &___ForContextSpecifiedCollectionMethod_7; }
	inline void set_ForContextSpecifiedCollectionMethod_7(MethodInfo_t * value)
	{
		___ForContextSpecifiedCollectionMethod_7 = value;
		Il2CppCodeGenWriteBarrier(&___ForContextSpecifiedCollectionMethod_7, value);
	}

	inline static int32_t get_offset_of_ForPolymorphicCollectionTypeEmbeddingMethod_8() { return static_cast<int32_t>(offsetof(PolymorphismSchema_t2690808062_StaticFields, ___ForPolymorphicCollectionTypeEmbeddingMethod_8)); }
	inline MethodInfo_t * get_ForPolymorphicCollectionTypeEmbeddingMethod_8() const { return ___ForPolymorphicCollectionTypeEmbeddingMethod_8; }
	inline MethodInfo_t ** get_address_of_ForPolymorphicCollectionTypeEmbeddingMethod_8() { return &___ForPolymorphicCollectionTypeEmbeddingMethod_8; }
	inline void set_ForPolymorphicCollectionTypeEmbeddingMethod_8(MethodInfo_t * value)
	{
		___ForPolymorphicCollectionTypeEmbeddingMethod_8 = value;
		Il2CppCodeGenWriteBarrier(&___ForPolymorphicCollectionTypeEmbeddingMethod_8, value);
	}

	inline static int32_t get_offset_of_ForPolymorphicCollectionCodeTypeMappingMethod_9() { return static_cast<int32_t>(offsetof(PolymorphismSchema_t2690808062_StaticFields, ___ForPolymorphicCollectionCodeTypeMappingMethod_9)); }
	inline MethodInfo_t * get_ForPolymorphicCollectionCodeTypeMappingMethod_9() const { return ___ForPolymorphicCollectionCodeTypeMappingMethod_9; }
	inline MethodInfo_t ** get_address_of_ForPolymorphicCollectionCodeTypeMappingMethod_9() { return &___ForPolymorphicCollectionCodeTypeMappingMethod_9; }
	inline void set_ForPolymorphicCollectionCodeTypeMappingMethod_9(MethodInfo_t * value)
	{
		___ForPolymorphicCollectionCodeTypeMappingMethod_9 = value;
		Il2CppCodeGenWriteBarrier(&___ForPolymorphicCollectionCodeTypeMappingMethod_9, value);
	}

	inline static int32_t get_offset_of_ForContextSpecifiedDictionaryMethod_10() { return static_cast<int32_t>(offsetof(PolymorphismSchema_t2690808062_StaticFields, ___ForContextSpecifiedDictionaryMethod_10)); }
	inline MethodInfo_t * get_ForContextSpecifiedDictionaryMethod_10() const { return ___ForContextSpecifiedDictionaryMethod_10; }
	inline MethodInfo_t ** get_address_of_ForContextSpecifiedDictionaryMethod_10() { return &___ForContextSpecifiedDictionaryMethod_10; }
	inline void set_ForContextSpecifiedDictionaryMethod_10(MethodInfo_t * value)
	{
		___ForContextSpecifiedDictionaryMethod_10 = value;
		Il2CppCodeGenWriteBarrier(&___ForContextSpecifiedDictionaryMethod_10, value);
	}

	inline static int32_t get_offset_of_ForPolymorphicDictionaryTypeEmbeddingMethod_11() { return static_cast<int32_t>(offsetof(PolymorphismSchema_t2690808062_StaticFields, ___ForPolymorphicDictionaryTypeEmbeddingMethod_11)); }
	inline MethodInfo_t * get_ForPolymorphicDictionaryTypeEmbeddingMethod_11() const { return ___ForPolymorphicDictionaryTypeEmbeddingMethod_11; }
	inline MethodInfo_t ** get_address_of_ForPolymorphicDictionaryTypeEmbeddingMethod_11() { return &___ForPolymorphicDictionaryTypeEmbeddingMethod_11; }
	inline void set_ForPolymorphicDictionaryTypeEmbeddingMethod_11(MethodInfo_t * value)
	{
		___ForPolymorphicDictionaryTypeEmbeddingMethod_11 = value;
		Il2CppCodeGenWriteBarrier(&___ForPolymorphicDictionaryTypeEmbeddingMethod_11, value);
	}

	inline static int32_t get_offset_of_ForPolymorphicDictionaryCodeTypeMappingMethod_12() { return static_cast<int32_t>(offsetof(PolymorphismSchema_t2690808062_StaticFields, ___ForPolymorphicDictionaryCodeTypeMappingMethod_12)); }
	inline MethodInfo_t * get_ForPolymorphicDictionaryCodeTypeMappingMethod_12() const { return ___ForPolymorphicDictionaryCodeTypeMappingMethod_12; }
	inline MethodInfo_t ** get_address_of_ForPolymorphicDictionaryCodeTypeMappingMethod_12() { return &___ForPolymorphicDictionaryCodeTypeMappingMethod_12; }
	inline void set_ForPolymorphicDictionaryCodeTypeMappingMethod_12(MethodInfo_t * value)
	{
		___ForPolymorphicDictionaryCodeTypeMappingMethod_12 = value;
		Il2CppCodeGenWriteBarrier(&___ForPolymorphicDictionaryCodeTypeMappingMethod_12, value);
	}

	inline static int32_t get_offset_of_CodeTypeMapConstructor_13() { return static_cast<int32_t>(offsetof(PolymorphismSchema_t2690808062_StaticFields, ___CodeTypeMapConstructor_13)); }
	inline ConstructorInfo_t2851816542 * get_CodeTypeMapConstructor_13() const { return ___CodeTypeMapConstructor_13; }
	inline ConstructorInfo_t2851816542 ** get_address_of_CodeTypeMapConstructor_13() { return &___CodeTypeMapConstructor_13; }
	inline void set_CodeTypeMapConstructor_13(ConstructorInfo_t2851816542 * value)
	{
		___CodeTypeMapConstructor_13 = value;
		Il2CppCodeGenWriteBarrier(&___CodeTypeMapConstructor_13, value);
	}

	inline static int32_t get_offset_of_AddToCodeTypeMapMethod_14() { return static_cast<int32_t>(offsetof(PolymorphismSchema_t2690808062_StaticFields, ___AddToCodeTypeMapMethod_14)); }
	inline MethodInfo_t * get_AddToCodeTypeMapMethod_14() const { return ___AddToCodeTypeMapMethod_14; }
	inline MethodInfo_t ** get_address_of_AddToCodeTypeMapMethod_14() { return &___AddToCodeTypeMapMethod_14; }
	inline void set_AddToCodeTypeMapMethod_14(MethodInfo_t * value)
	{
		___AddToCodeTypeMapMethod_14 = value;
		Il2CppCodeGenWriteBarrier(&___AddToCodeTypeMapMethod_14, value);
	}

	inline static int32_t get_offset_of_CSU24U3CU3E9__CachedAnonymousMethodDelegate3_18() { return static_cast<int32_t>(offsetof(PolymorphismSchema_t2690808062_StaticFields, ___CSU24U3CU3E9__CachedAnonymousMethodDelegate3_18)); }
	inline Func_2_t1172688409 * get_CSU24U3CU3E9__CachedAnonymousMethodDelegate3_18() const { return ___CSU24U3CU3E9__CachedAnonymousMethodDelegate3_18; }
	inline Func_2_t1172688409 ** get_address_of_CSU24U3CU3E9__CachedAnonymousMethodDelegate3_18() { return &___CSU24U3CU3E9__CachedAnonymousMethodDelegate3_18; }
	inline void set_CSU24U3CU3E9__CachedAnonymousMethodDelegate3_18(Func_2_t1172688409 * value)
	{
		___CSU24U3CU3E9__CachedAnonymousMethodDelegate3_18 = value;
		Il2CppCodeGenWriteBarrier(&___CSU24U3CU3E9__CachedAnonymousMethodDelegate3_18, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
