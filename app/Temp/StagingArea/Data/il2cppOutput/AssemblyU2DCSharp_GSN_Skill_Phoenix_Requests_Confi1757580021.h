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

#include "mscorlib_System_ValueType3507792607.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Phoenix.Requests.Config.ConfigData/PhoenixConfigItem
struct  PhoenixConfigItem_t1757580021 
{
public:
	// System.String GSN.Skill.Phoenix.Requests.Config.ConfigData/PhoenixConfigItem::key
	String_t* ___key_0;
	// System.String GSN.Skill.Phoenix.Requests.Config.ConfigData/PhoenixConfigItem::value
	String_t* ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(PhoenixConfigItem_t1757580021, ___key_0)); }
	inline String_t* get_key_0() const { return ___key_0; }
	inline String_t** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(String_t* value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier(&___key_0, value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(PhoenixConfigItem_t1757580021, ___value_1)); }
	inline String_t* get_value_1() const { return ___value_1; }
	inline String_t** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(String_t* value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier(&___value_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of GSN.Skill.Phoenix.Requests.Config.ConfigData/PhoenixConfigItem
struct PhoenixConfigItem_t1757580021_marshaled_pinvoke
{
	char* ___key_0;
	char* ___value_1;
};
// Native definition for COM marshalling of GSN.Skill.Phoenix.Requests.Config.ConfigData/PhoenixConfigItem
struct PhoenixConfigItem_t1757580021_marshaled_com
{
	Il2CppChar* ___key_0;
	Il2CppChar* ___value_1;
};
