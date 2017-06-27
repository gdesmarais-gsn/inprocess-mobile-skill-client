#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Newtonsoft.Json.Linq.JObject/JPropertKeyedCollection
struct JPropertKeyedCollection_t2398227289;
// System.ComponentModel.PropertyChangedEventHandler
struct PropertyChangedEventHandler_t3042952059;
// System.Func`2<Newtonsoft.Json.Linq.JProperty,Newtonsoft.Json.Linq.JToken>
struct Func_2_t3122652043;

#include "Json_NET_Newtonsoft_Json_Linq_JContainer3538280255.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Newtonsoft.Json.Linq.JObject
struct  JObject_t278519297  : public JContainer_t3538280255
{
public:
	// Newtonsoft.Json.Linq.JObject/JPropertKeyedCollection Newtonsoft.Json.Linq.JObject::_properties
	JPropertKeyedCollection_t2398227289 * ____properties_8;
	// System.ComponentModel.PropertyChangedEventHandler Newtonsoft.Json.Linq.JObject::propertyChangedListeners
	PropertyChangedEventHandler_t3042952059 * ___propertyChangedListeners_9;

public:
	inline static int32_t get_offset_of__properties_8() { return static_cast<int32_t>(offsetof(JObject_t278519297, ____properties_8)); }
	inline JPropertKeyedCollection_t2398227289 * get__properties_8() const { return ____properties_8; }
	inline JPropertKeyedCollection_t2398227289 ** get_address_of__properties_8() { return &____properties_8; }
	inline void set__properties_8(JPropertKeyedCollection_t2398227289 * value)
	{
		____properties_8 = value;
		Il2CppCodeGenWriteBarrier(&____properties_8, value);
	}

	inline static int32_t get_offset_of_propertyChangedListeners_9() { return static_cast<int32_t>(offsetof(JObject_t278519297, ___propertyChangedListeners_9)); }
	inline PropertyChangedEventHandler_t3042952059 * get_propertyChangedListeners_9() const { return ___propertyChangedListeners_9; }
	inline PropertyChangedEventHandler_t3042952059 ** get_address_of_propertyChangedListeners_9() { return &___propertyChangedListeners_9; }
	inline void set_propertyChangedListeners_9(PropertyChangedEventHandler_t3042952059 * value)
	{
		___propertyChangedListeners_9 = value;
		Il2CppCodeGenWriteBarrier(&___propertyChangedListeners_9, value);
	}
};

struct JObject_t278519297_StaticFields
{
public:
	// System.Func`2<Newtonsoft.Json.Linq.JProperty,Newtonsoft.Json.Linq.JToken> Newtonsoft.Json.Linq.JObject::<>f__am$cache0
	Func_2_t3122652043 * ___U3CU3Ef__amU24cache0_10;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_10() { return static_cast<int32_t>(offsetof(JObject_t278519297_StaticFields, ___U3CU3Ef__amU24cache0_10)); }
	inline Func_2_t3122652043 * get_U3CU3Ef__amU24cache0_10() const { return ___U3CU3Ef__amU24cache0_10; }
	inline Func_2_t3122652043 ** get_address_of_U3CU3Ef__amU24cache0_10() { return &___U3CU3Ef__amU24cache0_10; }
	inline void set_U3CU3Ef__amU24cache0_10(Func_2_t3122652043 * value)
	{
		___U3CU3Ef__amU24cache0_10 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache0_10, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
