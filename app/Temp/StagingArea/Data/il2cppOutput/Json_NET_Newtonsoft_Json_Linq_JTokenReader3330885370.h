#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Newtonsoft.Json.Linq.JToken
struct JToken_t2552644013;

#include "Json_NET_Newtonsoft_Json_JsonReader3154730733.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Newtonsoft.Json.Linq.JTokenReader
struct  JTokenReader_t3330885370  : public JsonReader_t3154730733
{
public:
	// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JTokenReader::_root
	JToken_t2552644013 * ____root_11;
	// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JTokenReader::_parent
	JToken_t2552644013 * ____parent_12;
	// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JTokenReader::_current
	JToken_t2552644013 * ____current_13;

public:
	inline static int32_t get_offset_of__root_11() { return static_cast<int32_t>(offsetof(JTokenReader_t3330885370, ____root_11)); }
	inline JToken_t2552644013 * get__root_11() const { return ____root_11; }
	inline JToken_t2552644013 ** get_address_of__root_11() { return &____root_11; }
	inline void set__root_11(JToken_t2552644013 * value)
	{
		____root_11 = value;
		Il2CppCodeGenWriteBarrier(&____root_11, value);
	}

	inline static int32_t get_offset_of__parent_12() { return static_cast<int32_t>(offsetof(JTokenReader_t3330885370, ____parent_12)); }
	inline JToken_t2552644013 * get__parent_12() const { return ____parent_12; }
	inline JToken_t2552644013 ** get_address_of__parent_12() { return &____parent_12; }
	inline void set__parent_12(JToken_t2552644013 * value)
	{
		____parent_12 = value;
		Il2CppCodeGenWriteBarrier(&____parent_12, value);
	}

	inline static int32_t get_offset_of__current_13() { return static_cast<int32_t>(offsetof(JTokenReader_t3330885370, ____current_13)); }
	inline JToken_t2552644013 * get__current_13() const { return ____current_13; }
	inline JToken_t2552644013 ** get_address_of__current_13() { return &____current_13; }
	inline void set__current_13(JToken_t2552644013 * value)
	{
		____current_13 = value;
		Il2CppCodeGenWriteBarrier(&____current_13, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
