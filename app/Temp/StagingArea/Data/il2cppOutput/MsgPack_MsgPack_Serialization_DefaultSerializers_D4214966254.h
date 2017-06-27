#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "MsgPack_MsgPack_Serialization_MessagePackSerializer858432560.h"
#include "MsgPack_MsgPack_Serialization_DateTimeConversionMe3801997378.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MsgPack.Serialization.DefaultSerializers.DateTimeOffsetMessagePackSerializer
struct  DateTimeOffsetMessagePackSerializer_t4214966254  : public MessagePackSerializer_1_t858432560
{
public:
	// MsgPack.Serialization.DateTimeConversionMethod MsgPack.Serialization.DefaultSerializers.DateTimeOffsetMessagePackSerializer::_conversion
	int32_t ____conversion_3;

public:
	inline static int32_t get_offset_of__conversion_3() { return static_cast<int32_t>(offsetof(DateTimeOffsetMessagePackSerializer_t4214966254, ____conversion_3)); }
	inline int32_t get__conversion_3() const { return ____conversion_3; }
	inline int32_t* get_address_of__conversion_3() { return &____conversion_3; }
	inline void set__conversion_3(int32_t value)
	{
		____conversion_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
