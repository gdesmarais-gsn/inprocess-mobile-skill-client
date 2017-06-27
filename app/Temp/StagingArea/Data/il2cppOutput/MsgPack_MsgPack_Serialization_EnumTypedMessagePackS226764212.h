#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// MsgPack.Serialization.ICustomizableEnumSerializer
struct ICustomizableEnumSerializer_t3222914780;

#include "MsgPack_MsgPack_Serialization_TypedMessagePackSeri4285791451.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MsgPack.Serialization.EnumTypedMessagePackSerializerWrapper`1<System.Boolean>
struct  EnumTypedMessagePackSerializerWrapper_1_t226764212  : public TypedMessagePackSerializerWrapper_1_t4285791451
{
public:
	// MsgPack.Serialization.ICustomizableEnumSerializer MsgPack.Serialization.EnumTypedMessagePackSerializerWrapper`1::_underlyingEnumSerializer
	Il2CppObject * ____underlyingEnumSerializer_5;

public:
	inline static int32_t get_offset_of__underlyingEnumSerializer_5() { return static_cast<int32_t>(offsetof(EnumTypedMessagePackSerializerWrapper_1_t226764212, ____underlyingEnumSerializer_5)); }
	inline Il2CppObject * get__underlyingEnumSerializer_5() const { return ____underlyingEnumSerializer_5; }
	inline Il2CppObject ** get_address_of__underlyingEnumSerializer_5() { return &____underlyingEnumSerializer_5; }
	inline void set__underlyingEnumSerializer_5(Il2CppObject * value)
	{
		____underlyingEnumSerializer_5 = value;
		Il2CppCodeGenWriteBarrier(&____underlyingEnumSerializer_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
