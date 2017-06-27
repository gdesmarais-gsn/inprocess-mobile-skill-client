#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// MsgPack.Serialization.IMessagePackSingleObjectSerializer
struct IMessagePackSingleObjectSerializer_t659509506;

#include "MsgPack_MsgPack_Serialization_MessagePackSerializerP92845713.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MsgPack.Serialization.DefaultSerializers.DateTimeMessagePackSerializerProvider
struct  DateTimeMessagePackSerializerProvider_t1113846186  : public MessagePackSerializerProvider_t92845713
{
public:
	// MsgPack.Serialization.IMessagePackSingleObjectSerializer MsgPack.Serialization.DefaultSerializers.DateTimeMessagePackSerializerProvider::_unixEpoc
	Il2CppObject * ____unixEpoc_0;
	// MsgPack.Serialization.IMessagePackSingleObjectSerializer MsgPack.Serialization.DefaultSerializers.DateTimeMessagePackSerializerProvider::_native
	Il2CppObject * ____native_1;

public:
	inline static int32_t get_offset_of__unixEpoc_0() { return static_cast<int32_t>(offsetof(DateTimeMessagePackSerializerProvider_t1113846186, ____unixEpoc_0)); }
	inline Il2CppObject * get__unixEpoc_0() const { return ____unixEpoc_0; }
	inline Il2CppObject ** get_address_of__unixEpoc_0() { return &____unixEpoc_0; }
	inline void set__unixEpoc_0(Il2CppObject * value)
	{
		____unixEpoc_0 = value;
		Il2CppCodeGenWriteBarrier(&____unixEpoc_0, value);
	}

	inline static int32_t get_offset_of__native_1() { return static_cast<int32_t>(offsetof(DateTimeMessagePackSerializerProvider_t1113846186, ____native_1)); }
	inline Il2CppObject * get__native_1() const { return ____native_1; }
	inline Il2CppObject ** get_address_of__native_1() { return &____native_1; }
	inline void set__native_1(Il2CppObject * value)
	{
		____native_1 = value;
		Il2CppCodeGenWriteBarrier(&____native_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
