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

#include "mscorlib_System_Object2689449295.h"
#include "MsgPack_MsgPack_MessagePackObject_MessagePackValue1429579074.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MsgPack.MessagePackObject/ValueTypeCode
struct  ValueTypeCode_t533787052  : public Il2CppObject
{
public:
	// MsgPack.MessagePackObject/MessagePackValueTypeCode MsgPack.MessagePackObject/ValueTypeCode::_typeCode
	int32_t ____typeCode_0;
	// System.Type MsgPack.MessagePackObject/ValueTypeCode::_type
	Type_t * ____type_1;

public:
	inline static int32_t get_offset_of__typeCode_0() { return static_cast<int32_t>(offsetof(ValueTypeCode_t533787052, ____typeCode_0)); }
	inline int32_t get__typeCode_0() const { return ____typeCode_0; }
	inline int32_t* get_address_of__typeCode_0() { return &____typeCode_0; }
	inline void set__typeCode_0(int32_t value)
	{
		____typeCode_0 = value;
	}

	inline static int32_t get_offset_of__type_1() { return static_cast<int32_t>(offsetof(ValueTypeCode_t533787052, ____type_1)); }
	inline Type_t * get__type_1() const { return ____type_1; }
	inline Type_t ** get_address_of__type_1() { return &____type_1; }
	inline void set__type_1(Type_t * value)
	{
		____type_1 = value;
		Il2CppCodeGenWriteBarrier(&____type_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
