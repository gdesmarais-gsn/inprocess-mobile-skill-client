#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Newtonsoft.Json.Serialization.JsonSerializerInternalReader
struct JsonSerializerInternalReader_t3254279720;
// Newtonsoft.Json.Serialization.JsonSerializerInternalWriter
struct JsonSerializerInternalWriter_t3234521618;
// Newtonsoft.Json.JsonSerializer
struct JsonSerializer_t1719617802;

#include "Json_NET_Newtonsoft_Json_JsonSerializer1719617802.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Newtonsoft.Json.Serialization.JsonSerializerProxy
struct  JsonSerializerProxy_t27144642  : public JsonSerializer_t1719617802
{
public:
	// Newtonsoft.Json.Serialization.JsonSerializerInternalReader Newtonsoft.Json.Serialization.JsonSerializerProxy::_serializerReader
	JsonSerializerInternalReader_t3254279720 * ____serializerReader_18;
	// Newtonsoft.Json.Serialization.JsonSerializerInternalWriter Newtonsoft.Json.Serialization.JsonSerializerProxy::_serializerWriter
	JsonSerializerInternalWriter_t3234521618 * ____serializerWriter_19;
	// Newtonsoft.Json.JsonSerializer Newtonsoft.Json.Serialization.JsonSerializerProxy::_serializer
	JsonSerializer_t1719617802 * ____serializer_20;

public:
	inline static int32_t get_offset_of__serializerReader_18() { return static_cast<int32_t>(offsetof(JsonSerializerProxy_t27144642, ____serializerReader_18)); }
	inline JsonSerializerInternalReader_t3254279720 * get__serializerReader_18() const { return ____serializerReader_18; }
	inline JsonSerializerInternalReader_t3254279720 ** get_address_of__serializerReader_18() { return &____serializerReader_18; }
	inline void set__serializerReader_18(JsonSerializerInternalReader_t3254279720 * value)
	{
		____serializerReader_18 = value;
		Il2CppCodeGenWriteBarrier(&____serializerReader_18, value);
	}

	inline static int32_t get_offset_of__serializerWriter_19() { return static_cast<int32_t>(offsetof(JsonSerializerProxy_t27144642, ____serializerWriter_19)); }
	inline JsonSerializerInternalWriter_t3234521618 * get__serializerWriter_19() const { return ____serializerWriter_19; }
	inline JsonSerializerInternalWriter_t3234521618 ** get_address_of__serializerWriter_19() { return &____serializerWriter_19; }
	inline void set__serializerWriter_19(JsonSerializerInternalWriter_t3234521618 * value)
	{
		____serializerWriter_19 = value;
		Il2CppCodeGenWriteBarrier(&____serializerWriter_19, value);
	}

	inline static int32_t get_offset_of__serializer_20() { return static_cast<int32_t>(offsetof(JsonSerializerProxy_t27144642, ____serializer_20)); }
	inline JsonSerializer_t1719617802 * get__serializer_20() const { return ____serializer_20; }
	inline JsonSerializer_t1719617802 ** get_address_of__serializer_20() { return &____serializer_20; }
	inline void set__serializer_20(JsonSerializer_t1719617802 * value)
	{
		____serializer_20 = value;
		Il2CppCodeGenWriteBarrier(&____serializer_20, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
