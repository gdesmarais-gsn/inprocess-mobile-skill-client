#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Newtonsoft.Json.Linq.JContainer
struct JContainer_t3538280255;
// Newtonsoft.Json.Linq.JValue
struct JValue_t300956845;

#include "Json_NET_Newtonsoft_Json_JsonWriter1973729997.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Newtonsoft.Json.Linq.JTokenWriter
struct  JTokenWriter_t3631426868  : public JsonWriter_t1973729997
{
public:
	// Newtonsoft.Json.Linq.JContainer Newtonsoft.Json.Linq.JTokenWriter::_token
	JContainer_t3538280255 * ____token_7;
	// Newtonsoft.Json.Linq.JContainer Newtonsoft.Json.Linq.JTokenWriter::_parent
	JContainer_t3538280255 * ____parent_8;
	// Newtonsoft.Json.Linq.JValue Newtonsoft.Json.Linq.JTokenWriter::_value
	JValue_t300956845 * ____value_9;

public:
	inline static int32_t get_offset_of__token_7() { return static_cast<int32_t>(offsetof(JTokenWriter_t3631426868, ____token_7)); }
	inline JContainer_t3538280255 * get__token_7() const { return ____token_7; }
	inline JContainer_t3538280255 ** get_address_of__token_7() { return &____token_7; }
	inline void set__token_7(JContainer_t3538280255 * value)
	{
		____token_7 = value;
		Il2CppCodeGenWriteBarrier(&____token_7, value);
	}

	inline static int32_t get_offset_of__parent_8() { return static_cast<int32_t>(offsetof(JTokenWriter_t3631426868, ____parent_8)); }
	inline JContainer_t3538280255 * get__parent_8() const { return ____parent_8; }
	inline JContainer_t3538280255 ** get_address_of__parent_8() { return &____parent_8; }
	inline void set__parent_8(JContainer_t3538280255 * value)
	{
		____parent_8 = value;
		Il2CppCodeGenWriteBarrier(&____parent_8, value);
	}

	inline static int32_t get_offset_of__value_9() { return static_cast<int32_t>(offsetof(JTokenWriter_t3631426868, ____value_9)); }
	inline JValue_t300956845 * get__value_9() const { return ____value_9; }
	inline JValue_t300956845 ** get_address_of__value_9() { return &____value_9; }
	inline void set__value_9(JValue_t300956845 * value)
	{
		____value_9 = value;
		Il2CppCodeGenWriteBarrier(&____value_9, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
