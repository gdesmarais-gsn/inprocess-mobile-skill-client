#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Newtonsoft.Json.JsonSerializerSettings
struct JsonSerializerSettings_t842388167;
// System.Text.StringBuilder
struct StringBuilder_t1221177846;
// GSN.Skill.Requests.IWebRequest
struct IWebRequest_t216132554;
// System.String
struct String_t;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Requests.WebRequester/Parser
struct  Parser_t1855886527  : public Il2CppObject
{
public:
	// GSN.Skill.Requests.IWebRequest GSN.Skill.Requests.WebRequester/Parser::_request
	Il2CppObject * ____request_2;
	// System.String GSN.Skill.Requests.WebRequester/Parser::_data
	String_t* ____data_3;
	// System.Boolean GSN.Skill.Requests.WebRequester/Parser::<ParseComplete>k__BackingField
	bool ___U3CParseCompleteU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of__request_2() { return static_cast<int32_t>(offsetof(Parser_t1855886527, ____request_2)); }
	inline Il2CppObject * get__request_2() const { return ____request_2; }
	inline Il2CppObject ** get_address_of__request_2() { return &____request_2; }
	inline void set__request_2(Il2CppObject * value)
	{
		____request_2 = value;
		Il2CppCodeGenWriteBarrier(&____request_2, value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Parser_t1855886527, ____data_3)); }
	inline String_t* get__data_3() const { return ____data_3; }
	inline String_t** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(String_t* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier(&____data_3, value);
	}

	inline static int32_t get_offset_of_U3CParseCompleteU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(Parser_t1855886527, ___U3CParseCompleteU3Ek__BackingField_4)); }
	inline bool get_U3CParseCompleteU3Ek__BackingField_4() const { return ___U3CParseCompleteU3Ek__BackingField_4; }
	inline bool* get_address_of_U3CParseCompleteU3Ek__BackingField_4() { return &___U3CParseCompleteU3Ek__BackingField_4; }
	inline void set_U3CParseCompleteU3Ek__BackingField_4(bool value)
	{
		___U3CParseCompleteU3Ek__BackingField_4 = value;
	}
};

struct Parser_t1855886527_StaticFields
{
public:
	// Newtonsoft.Json.JsonSerializerSettings GSN.Skill.Requests.WebRequester/Parser::_jsonSerializerSettings
	JsonSerializerSettings_t842388167 * ____jsonSerializerSettings_0;
	// System.Text.StringBuilder GSN.Skill.Requests.WebRequester/Parser::_stringBuilder
	StringBuilder_t1221177846 * ____stringBuilder_1;

public:
	inline static int32_t get_offset_of__jsonSerializerSettings_0() { return static_cast<int32_t>(offsetof(Parser_t1855886527_StaticFields, ____jsonSerializerSettings_0)); }
	inline JsonSerializerSettings_t842388167 * get__jsonSerializerSettings_0() const { return ____jsonSerializerSettings_0; }
	inline JsonSerializerSettings_t842388167 ** get_address_of__jsonSerializerSettings_0() { return &____jsonSerializerSettings_0; }
	inline void set__jsonSerializerSettings_0(JsonSerializerSettings_t842388167 * value)
	{
		____jsonSerializerSettings_0 = value;
		Il2CppCodeGenWriteBarrier(&____jsonSerializerSettings_0, value);
	}

	inline static int32_t get_offset_of__stringBuilder_1() { return static_cast<int32_t>(offsetof(Parser_t1855886527_StaticFields, ____stringBuilder_1)); }
	inline StringBuilder_t1221177846 * get__stringBuilder_1() const { return ____stringBuilder_1; }
	inline StringBuilder_t1221177846 ** get_address_of__stringBuilder_1() { return &____stringBuilder_1; }
	inline void set__stringBuilder_1(StringBuilder_t1221177846 * value)
	{
		____stringBuilder_1 = value;
		Il2CppCodeGenWriteBarrier(&____stringBuilder_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
