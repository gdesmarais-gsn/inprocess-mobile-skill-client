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
// Newtonsoft.Json.Serialization.JsonArrayContract
struct JsonArrayContract_t2625589241;
// Newtonsoft.Json.JsonReader
struct JsonReader_t3154730733;
// Newtonsoft.Json.Serialization.JsonSerializerInternalReader
struct JsonSerializerInternalReader_t3254279720;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Newtonsoft.Json.Serialization.JsonSerializerInternalReader/<CreateAndPopulateList>c__AnonStorey0
struct  U3CCreateAndPopulateListU3Ec__AnonStorey0_t3865996648  : public Il2CppObject
{
public:
	// System.String Newtonsoft.Json.Serialization.JsonSerializerInternalReader/<CreateAndPopulateList>c__AnonStorey0::reference
	String_t* ___reference_0;
	// Newtonsoft.Json.Serialization.JsonArrayContract Newtonsoft.Json.Serialization.JsonSerializerInternalReader/<CreateAndPopulateList>c__AnonStorey0::contract
	JsonArrayContract_t2625589241 * ___contract_1;
	// Newtonsoft.Json.JsonReader Newtonsoft.Json.Serialization.JsonSerializerInternalReader/<CreateAndPopulateList>c__AnonStorey0::reader
	JsonReader_t3154730733 * ___reader_2;
	// Newtonsoft.Json.Serialization.JsonSerializerInternalReader Newtonsoft.Json.Serialization.JsonSerializerInternalReader/<CreateAndPopulateList>c__AnonStorey0::$this
	JsonSerializerInternalReader_t3254279720 * ___U24this_3;

public:
	inline static int32_t get_offset_of_reference_0() { return static_cast<int32_t>(offsetof(U3CCreateAndPopulateListU3Ec__AnonStorey0_t3865996648, ___reference_0)); }
	inline String_t* get_reference_0() const { return ___reference_0; }
	inline String_t** get_address_of_reference_0() { return &___reference_0; }
	inline void set_reference_0(String_t* value)
	{
		___reference_0 = value;
		Il2CppCodeGenWriteBarrier(&___reference_0, value);
	}

	inline static int32_t get_offset_of_contract_1() { return static_cast<int32_t>(offsetof(U3CCreateAndPopulateListU3Ec__AnonStorey0_t3865996648, ___contract_1)); }
	inline JsonArrayContract_t2625589241 * get_contract_1() const { return ___contract_1; }
	inline JsonArrayContract_t2625589241 ** get_address_of_contract_1() { return &___contract_1; }
	inline void set_contract_1(JsonArrayContract_t2625589241 * value)
	{
		___contract_1 = value;
		Il2CppCodeGenWriteBarrier(&___contract_1, value);
	}

	inline static int32_t get_offset_of_reader_2() { return static_cast<int32_t>(offsetof(U3CCreateAndPopulateListU3Ec__AnonStorey0_t3865996648, ___reader_2)); }
	inline JsonReader_t3154730733 * get_reader_2() const { return ___reader_2; }
	inline JsonReader_t3154730733 ** get_address_of_reader_2() { return &___reader_2; }
	inline void set_reader_2(JsonReader_t3154730733 * value)
	{
		___reader_2 = value;
		Il2CppCodeGenWriteBarrier(&___reader_2, value);
	}

	inline static int32_t get_offset_of_U24this_3() { return static_cast<int32_t>(offsetof(U3CCreateAndPopulateListU3Ec__AnonStorey0_t3865996648, ___U24this_3)); }
	inline JsonSerializerInternalReader_t3254279720 * get_U24this_3() const { return ___U24this_3; }
	inline JsonSerializerInternalReader_t3254279720 ** get_address_of_U24this_3() { return &___U24this_3; }
	inline void set_U24this_3(JsonSerializerInternalReader_t3254279720 * value)
	{
		___U24this_3 = value;
		Il2CppCodeGenWriteBarrier(&___U24this_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
