#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Type
struct Type_t;
// Newtonsoft.Json.Utilities.MethodCall`2<System.Object,System.Object>
struct MethodCall_2_t1283576322;

#include "Json_NET_Newtonsoft_Json_Serialization_JsonContrac1566984540.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Newtonsoft.Json.Serialization.JsonArrayContract
struct  JsonArrayContract_t2625589241  : public JsonContract_t1566984540
{
public:
	// System.Type Newtonsoft.Json.Serialization.JsonArrayContract::<CollectionItemType>k__BackingField
	Type_t * ___U3CCollectionItemTypeU3Ek__BackingField_12;
	// System.Boolean Newtonsoft.Json.Serialization.JsonArrayContract::_isCollectionItemTypeNullableType
	bool ____isCollectionItemTypeNullableType_13;
	// System.Type Newtonsoft.Json.Serialization.JsonArrayContract::_genericCollectionDefinitionType
	Type_t * ____genericCollectionDefinitionType_14;
	// System.Type Newtonsoft.Json.Serialization.JsonArrayContract::_genericWrapperType
	Type_t * ____genericWrapperType_15;
	// Newtonsoft.Json.Utilities.MethodCall`2<System.Object,System.Object> Newtonsoft.Json.Serialization.JsonArrayContract::_genericWrapperCreator
	MethodCall_2_t1283576322 * ____genericWrapperCreator_16;

public:
	inline static int32_t get_offset_of_U3CCollectionItemTypeU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(JsonArrayContract_t2625589241, ___U3CCollectionItemTypeU3Ek__BackingField_12)); }
	inline Type_t * get_U3CCollectionItemTypeU3Ek__BackingField_12() const { return ___U3CCollectionItemTypeU3Ek__BackingField_12; }
	inline Type_t ** get_address_of_U3CCollectionItemTypeU3Ek__BackingField_12() { return &___U3CCollectionItemTypeU3Ek__BackingField_12; }
	inline void set_U3CCollectionItemTypeU3Ek__BackingField_12(Type_t * value)
	{
		___U3CCollectionItemTypeU3Ek__BackingField_12 = value;
		Il2CppCodeGenWriteBarrier(&___U3CCollectionItemTypeU3Ek__BackingField_12, value);
	}

	inline static int32_t get_offset_of__isCollectionItemTypeNullableType_13() { return static_cast<int32_t>(offsetof(JsonArrayContract_t2625589241, ____isCollectionItemTypeNullableType_13)); }
	inline bool get__isCollectionItemTypeNullableType_13() const { return ____isCollectionItemTypeNullableType_13; }
	inline bool* get_address_of__isCollectionItemTypeNullableType_13() { return &____isCollectionItemTypeNullableType_13; }
	inline void set__isCollectionItemTypeNullableType_13(bool value)
	{
		____isCollectionItemTypeNullableType_13 = value;
	}

	inline static int32_t get_offset_of__genericCollectionDefinitionType_14() { return static_cast<int32_t>(offsetof(JsonArrayContract_t2625589241, ____genericCollectionDefinitionType_14)); }
	inline Type_t * get__genericCollectionDefinitionType_14() const { return ____genericCollectionDefinitionType_14; }
	inline Type_t ** get_address_of__genericCollectionDefinitionType_14() { return &____genericCollectionDefinitionType_14; }
	inline void set__genericCollectionDefinitionType_14(Type_t * value)
	{
		____genericCollectionDefinitionType_14 = value;
		Il2CppCodeGenWriteBarrier(&____genericCollectionDefinitionType_14, value);
	}

	inline static int32_t get_offset_of__genericWrapperType_15() { return static_cast<int32_t>(offsetof(JsonArrayContract_t2625589241, ____genericWrapperType_15)); }
	inline Type_t * get__genericWrapperType_15() const { return ____genericWrapperType_15; }
	inline Type_t ** get_address_of__genericWrapperType_15() { return &____genericWrapperType_15; }
	inline void set__genericWrapperType_15(Type_t * value)
	{
		____genericWrapperType_15 = value;
		Il2CppCodeGenWriteBarrier(&____genericWrapperType_15, value);
	}

	inline static int32_t get_offset_of__genericWrapperCreator_16() { return static_cast<int32_t>(offsetof(JsonArrayContract_t2625589241, ____genericWrapperCreator_16)); }
	inline MethodCall_2_t1283576322 * get__genericWrapperCreator_16() const { return ____genericWrapperCreator_16; }
	inline MethodCall_2_t1283576322 ** get_address_of__genericWrapperCreator_16() { return &____genericWrapperCreator_16; }
	inline void set__genericWrapperCreator_16(MethodCall_2_t1283576322 * value)
	{
		____genericWrapperCreator_16 = value;
		Il2CppCodeGenWriteBarrier(&____genericWrapperCreator_16, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
