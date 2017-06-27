#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Newtonsoft.Json.Bson.BsonBinaryWriter
struct BsonBinaryWriter_t2169798354;
// Newtonsoft.Json.Bson.BsonToken
struct BsonToken_t3582361217;
// System.String
struct String_t;

#include "Json_NET_Newtonsoft_Json_JsonWriter1973729997.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Newtonsoft.Json.Bson.BsonWriter
struct  BsonWriter_t101776461  : public JsonWriter_t1973729997
{
public:
	// Newtonsoft.Json.Bson.BsonBinaryWriter Newtonsoft.Json.Bson.BsonWriter::_writer
	BsonBinaryWriter_t2169798354 * ____writer_7;
	// Newtonsoft.Json.Bson.BsonToken Newtonsoft.Json.Bson.BsonWriter::_root
	BsonToken_t3582361217 * ____root_8;
	// Newtonsoft.Json.Bson.BsonToken Newtonsoft.Json.Bson.BsonWriter::_parent
	BsonToken_t3582361217 * ____parent_9;
	// System.String Newtonsoft.Json.Bson.BsonWriter::_propertyName
	String_t* ____propertyName_10;

public:
	inline static int32_t get_offset_of__writer_7() { return static_cast<int32_t>(offsetof(BsonWriter_t101776461, ____writer_7)); }
	inline BsonBinaryWriter_t2169798354 * get__writer_7() const { return ____writer_7; }
	inline BsonBinaryWriter_t2169798354 ** get_address_of__writer_7() { return &____writer_7; }
	inline void set__writer_7(BsonBinaryWriter_t2169798354 * value)
	{
		____writer_7 = value;
		Il2CppCodeGenWriteBarrier(&____writer_7, value);
	}

	inline static int32_t get_offset_of__root_8() { return static_cast<int32_t>(offsetof(BsonWriter_t101776461, ____root_8)); }
	inline BsonToken_t3582361217 * get__root_8() const { return ____root_8; }
	inline BsonToken_t3582361217 ** get_address_of__root_8() { return &____root_8; }
	inline void set__root_8(BsonToken_t3582361217 * value)
	{
		____root_8 = value;
		Il2CppCodeGenWriteBarrier(&____root_8, value);
	}

	inline static int32_t get_offset_of__parent_9() { return static_cast<int32_t>(offsetof(BsonWriter_t101776461, ____parent_9)); }
	inline BsonToken_t3582361217 * get__parent_9() const { return ____parent_9; }
	inline BsonToken_t3582361217 ** get_address_of__parent_9() { return &____parent_9; }
	inline void set__parent_9(BsonToken_t3582361217 * value)
	{
		____parent_9 = value;
		Il2CppCodeGenWriteBarrier(&____parent_9, value);
	}

	inline static int32_t get_offset_of__propertyName_10() { return static_cast<int32_t>(offsetof(BsonWriter_t101776461, ____propertyName_10)); }
	inline String_t* get__propertyName_10() const { return ____propertyName_10; }
	inline String_t** get_address_of__propertyName_10() { return &____propertyName_10; }
	inline void set__propertyName_10(String_t* value)
	{
		____propertyName_10 = value;
		Il2CppCodeGenWriteBarrier(&____propertyName_10, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
