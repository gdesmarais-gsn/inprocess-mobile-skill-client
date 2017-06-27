#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "mscorlib_System_ValueType3507792607.h"
#include "MsgPack_MsgPack_MessagePackObject2038085051.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<MsgPack.MessagePackObject,MsgPack.MessagePackObject>
struct  KeyValuePair_2_t2208478405 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	MessagePackObject_t2038085051  ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	MessagePackObject_t2038085051  ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t2208478405, ___key_0)); }
	inline MessagePackObject_t2038085051  get_key_0() const { return ___key_0; }
	inline MessagePackObject_t2038085051 * get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(MessagePackObject_t2038085051  value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t2208478405, ___value_1)); }
	inline MessagePackObject_t2038085051  get_value_1() const { return ___value_1; }
	inline MessagePackObject_t2038085051 * get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(MessagePackObject_t2038085051  value)
	{
		___value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
