#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Newtonsoft.Json.Serialization.JsonSerializerProxy
struct JsonSerializerProxy_t27144642;
// Newtonsoft.Json.Serialization.JsonFormatterConverter
struct JsonFormatterConverter_t3196859494;
// System.Func`2<System.Reflection.ParameterInfo,System.Reflection.ParameterInfo>
struct Func_2_t1046330437;
// System.Func`2<System.Reflection.ParameterInfo,System.Object>
struct Func_2_t1486739657;
// System.Func`2<Newtonsoft.Json.Serialization.JsonProperty,Newtonsoft.Json.Serialization.JsonProperty>
struct Func_2_t3363778797;
// System.Func`2<Newtonsoft.Json.Serialization.JsonProperty,Newtonsoft.Json.Serialization.JsonSerializerInternalReader/PropertyPresence>
struct Func_2_t871911904;

#include "Json_NET_Newtonsoft_Json_Serialization_JsonSerializ795582376.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Newtonsoft.Json.Serialization.JsonSerializerInternalReader
struct  JsonSerializerInternalReader_t3254279720  : public JsonSerializerInternalBase_t795582376
{
public:
	// Newtonsoft.Json.Serialization.JsonSerializerProxy Newtonsoft.Json.Serialization.JsonSerializerInternalReader::_internalSerializer
	JsonSerializerProxy_t27144642 * ____internalSerializer_3;
	// Newtonsoft.Json.Serialization.JsonFormatterConverter Newtonsoft.Json.Serialization.JsonSerializerInternalReader::_formatterConverter
	JsonFormatterConverter_t3196859494 * ____formatterConverter_4;

public:
	inline static int32_t get_offset_of__internalSerializer_3() { return static_cast<int32_t>(offsetof(JsonSerializerInternalReader_t3254279720, ____internalSerializer_3)); }
	inline JsonSerializerProxy_t27144642 * get__internalSerializer_3() const { return ____internalSerializer_3; }
	inline JsonSerializerProxy_t27144642 ** get_address_of__internalSerializer_3() { return &____internalSerializer_3; }
	inline void set__internalSerializer_3(JsonSerializerProxy_t27144642 * value)
	{
		____internalSerializer_3 = value;
		Il2CppCodeGenWriteBarrier(&____internalSerializer_3, value);
	}

	inline static int32_t get_offset_of__formatterConverter_4() { return static_cast<int32_t>(offsetof(JsonSerializerInternalReader_t3254279720, ____formatterConverter_4)); }
	inline JsonFormatterConverter_t3196859494 * get__formatterConverter_4() const { return ____formatterConverter_4; }
	inline JsonFormatterConverter_t3196859494 ** get_address_of__formatterConverter_4() { return &____formatterConverter_4; }
	inline void set__formatterConverter_4(JsonFormatterConverter_t3196859494 * value)
	{
		____formatterConverter_4 = value;
		Il2CppCodeGenWriteBarrier(&____formatterConverter_4, value);
	}
};

struct JsonSerializerInternalReader_t3254279720_StaticFields
{
public:
	// System.Func`2<System.Reflection.ParameterInfo,System.Reflection.ParameterInfo> Newtonsoft.Json.Serialization.JsonSerializerInternalReader::<>f__am$cache0
	Func_2_t1046330437 * ___U3CU3Ef__amU24cache0_5;
	// System.Func`2<System.Reflection.ParameterInfo,System.Object> Newtonsoft.Json.Serialization.JsonSerializerInternalReader::<>f__am$cache1
	Func_2_t1486739657 * ___U3CU3Ef__amU24cache1_6;
	// System.Func`2<Newtonsoft.Json.Serialization.JsonProperty,Newtonsoft.Json.Serialization.JsonProperty> Newtonsoft.Json.Serialization.JsonSerializerInternalReader::<>f__am$cache2
	Func_2_t3363778797 * ___U3CU3Ef__amU24cache2_7;
	// System.Func`2<Newtonsoft.Json.Serialization.JsonProperty,Newtonsoft.Json.Serialization.JsonSerializerInternalReader/PropertyPresence> Newtonsoft.Json.Serialization.JsonSerializerInternalReader::<>f__am$cache3
	Func_2_t871911904 * ___U3CU3Ef__amU24cache3_8;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_5() { return static_cast<int32_t>(offsetof(JsonSerializerInternalReader_t3254279720_StaticFields, ___U3CU3Ef__amU24cache0_5)); }
	inline Func_2_t1046330437 * get_U3CU3Ef__amU24cache0_5() const { return ___U3CU3Ef__amU24cache0_5; }
	inline Func_2_t1046330437 ** get_address_of_U3CU3Ef__amU24cache0_5() { return &___U3CU3Ef__amU24cache0_5; }
	inline void set_U3CU3Ef__amU24cache0_5(Func_2_t1046330437 * value)
	{
		___U3CU3Ef__amU24cache0_5 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache0_5, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache1_6() { return static_cast<int32_t>(offsetof(JsonSerializerInternalReader_t3254279720_StaticFields, ___U3CU3Ef__amU24cache1_6)); }
	inline Func_2_t1486739657 * get_U3CU3Ef__amU24cache1_6() const { return ___U3CU3Ef__amU24cache1_6; }
	inline Func_2_t1486739657 ** get_address_of_U3CU3Ef__amU24cache1_6() { return &___U3CU3Ef__amU24cache1_6; }
	inline void set_U3CU3Ef__amU24cache1_6(Func_2_t1486739657 * value)
	{
		___U3CU3Ef__amU24cache1_6 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache1_6, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache2_7() { return static_cast<int32_t>(offsetof(JsonSerializerInternalReader_t3254279720_StaticFields, ___U3CU3Ef__amU24cache2_7)); }
	inline Func_2_t3363778797 * get_U3CU3Ef__amU24cache2_7() const { return ___U3CU3Ef__amU24cache2_7; }
	inline Func_2_t3363778797 ** get_address_of_U3CU3Ef__amU24cache2_7() { return &___U3CU3Ef__amU24cache2_7; }
	inline void set_U3CU3Ef__amU24cache2_7(Func_2_t3363778797 * value)
	{
		___U3CU3Ef__amU24cache2_7 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache2_7, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache3_8() { return static_cast<int32_t>(offsetof(JsonSerializerInternalReader_t3254279720_StaticFields, ___U3CU3Ef__amU24cache3_8)); }
	inline Func_2_t871911904 * get_U3CU3Ef__amU24cache3_8() const { return ___U3CU3Ef__amU24cache3_8; }
	inline Func_2_t871911904 ** get_address_of_U3CU3Ef__amU24cache3_8() { return &___U3CU3Ef__amU24cache3_8; }
	inline void set_U3CU3Ef__amU24cache3_8(Func_2_t871911904 * value)
	{
		___U3CU3Ef__amU24cache3_8 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache3_8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
