#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.IO.BinaryReader
struct BinaryReader_t2491843768;
// System.Collections.Generic.List`1<Newtonsoft.Json.Bson.BsonReader/ContainerContext>
struct List_1_t1513385609;
// System.Char[]
struct CharU5BU5D_t1328083999;
// Newtonsoft.Json.Bson.BsonReader/ContainerContext
struct ContainerContext_t2144264477;

#include "Json_NET_Newtonsoft_Json_JsonReader3154730733.h"
#include "Json_NET_Newtonsoft_Json_Bson_BsonType2055433366.h"
#include "Json_NET_Newtonsoft_Json_Bson_BsonReader_BsonReade1749779967.h"
#include "mscorlib_System_DateTimeKind2186819611.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Newtonsoft.Json.Bson.BsonReader
struct  BsonReader_t2352164445  : public JsonReader_t3154730733
{
public:
	// System.IO.BinaryReader Newtonsoft.Json.Bson.BsonReader::_reader
	BinaryReader_t2491843768 * ____reader_16;
	// System.Collections.Generic.List`1<Newtonsoft.Json.Bson.BsonReader/ContainerContext> Newtonsoft.Json.Bson.BsonReader::_stack
	List_1_t1513385609 * ____stack_17;
	// System.Byte[] Newtonsoft.Json.Bson.BsonReader::_byteBuffer
	ByteU5BU5D_t3397334013* ____byteBuffer_18;
	// System.Char[] Newtonsoft.Json.Bson.BsonReader::_charBuffer
	CharU5BU5D_t1328083999* ____charBuffer_19;
	// Newtonsoft.Json.Bson.BsonType Newtonsoft.Json.Bson.BsonReader::_currentElementType
	int8_t ____currentElementType_20;
	// Newtonsoft.Json.Bson.BsonReader/BsonReaderState Newtonsoft.Json.Bson.BsonReader::_bsonReaderState
	int32_t ____bsonReaderState_21;
	// Newtonsoft.Json.Bson.BsonReader/ContainerContext Newtonsoft.Json.Bson.BsonReader::_currentContext
	ContainerContext_t2144264477 * ____currentContext_22;
	// System.Boolean Newtonsoft.Json.Bson.BsonReader::_readRootValueAsArray
	bool ____readRootValueAsArray_23;
	// System.Boolean Newtonsoft.Json.Bson.BsonReader::_jsonNet35BinaryCompatibility
	bool ____jsonNet35BinaryCompatibility_24;
	// System.DateTimeKind Newtonsoft.Json.Bson.BsonReader::_dateTimeKindHandling
	int32_t ____dateTimeKindHandling_25;

public:
	inline static int32_t get_offset_of__reader_16() { return static_cast<int32_t>(offsetof(BsonReader_t2352164445, ____reader_16)); }
	inline BinaryReader_t2491843768 * get__reader_16() const { return ____reader_16; }
	inline BinaryReader_t2491843768 ** get_address_of__reader_16() { return &____reader_16; }
	inline void set__reader_16(BinaryReader_t2491843768 * value)
	{
		____reader_16 = value;
		Il2CppCodeGenWriteBarrier(&____reader_16, value);
	}

	inline static int32_t get_offset_of__stack_17() { return static_cast<int32_t>(offsetof(BsonReader_t2352164445, ____stack_17)); }
	inline List_1_t1513385609 * get__stack_17() const { return ____stack_17; }
	inline List_1_t1513385609 ** get_address_of__stack_17() { return &____stack_17; }
	inline void set__stack_17(List_1_t1513385609 * value)
	{
		____stack_17 = value;
		Il2CppCodeGenWriteBarrier(&____stack_17, value);
	}

	inline static int32_t get_offset_of__byteBuffer_18() { return static_cast<int32_t>(offsetof(BsonReader_t2352164445, ____byteBuffer_18)); }
	inline ByteU5BU5D_t3397334013* get__byteBuffer_18() const { return ____byteBuffer_18; }
	inline ByteU5BU5D_t3397334013** get_address_of__byteBuffer_18() { return &____byteBuffer_18; }
	inline void set__byteBuffer_18(ByteU5BU5D_t3397334013* value)
	{
		____byteBuffer_18 = value;
		Il2CppCodeGenWriteBarrier(&____byteBuffer_18, value);
	}

	inline static int32_t get_offset_of__charBuffer_19() { return static_cast<int32_t>(offsetof(BsonReader_t2352164445, ____charBuffer_19)); }
	inline CharU5BU5D_t1328083999* get__charBuffer_19() const { return ____charBuffer_19; }
	inline CharU5BU5D_t1328083999** get_address_of__charBuffer_19() { return &____charBuffer_19; }
	inline void set__charBuffer_19(CharU5BU5D_t1328083999* value)
	{
		____charBuffer_19 = value;
		Il2CppCodeGenWriteBarrier(&____charBuffer_19, value);
	}

	inline static int32_t get_offset_of__currentElementType_20() { return static_cast<int32_t>(offsetof(BsonReader_t2352164445, ____currentElementType_20)); }
	inline int8_t get__currentElementType_20() const { return ____currentElementType_20; }
	inline int8_t* get_address_of__currentElementType_20() { return &____currentElementType_20; }
	inline void set__currentElementType_20(int8_t value)
	{
		____currentElementType_20 = value;
	}

	inline static int32_t get_offset_of__bsonReaderState_21() { return static_cast<int32_t>(offsetof(BsonReader_t2352164445, ____bsonReaderState_21)); }
	inline int32_t get__bsonReaderState_21() const { return ____bsonReaderState_21; }
	inline int32_t* get_address_of__bsonReaderState_21() { return &____bsonReaderState_21; }
	inline void set__bsonReaderState_21(int32_t value)
	{
		____bsonReaderState_21 = value;
	}

	inline static int32_t get_offset_of__currentContext_22() { return static_cast<int32_t>(offsetof(BsonReader_t2352164445, ____currentContext_22)); }
	inline ContainerContext_t2144264477 * get__currentContext_22() const { return ____currentContext_22; }
	inline ContainerContext_t2144264477 ** get_address_of__currentContext_22() { return &____currentContext_22; }
	inline void set__currentContext_22(ContainerContext_t2144264477 * value)
	{
		____currentContext_22 = value;
		Il2CppCodeGenWriteBarrier(&____currentContext_22, value);
	}

	inline static int32_t get_offset_of__readRootValueAsArray_23() { return static_cast<int32_t>(offsetof(BsonReader_t2352164445, ____readRootValueAsArray_23)); }
	inline bool get__readRootValueAsArray_23() const { return ____readRootValueAsArray_23; }
	inline bool* get_address_of__readRootValueAsArray_23() { return &____readRootValueAsArray_23; }
	inline void set__readRootValueAsArray_23(bool value)
	{
		____readRootValueAsArray_23 = value;
	}

	inline static int32_t get_offset_of__jsonNet35BinaryCompatibility_24() { return static_cast<int32_t>(offsetof(BsonReader_t2352164445, ____jsonNet35BinaryCompatibility_24)); }
	inline bool get__jsonNet35BinaryCompatibility_24() const { return ____jsonNet35BinaryCompatibility_24; }
	inline bool* get_address_of__jsonNet35BinaryCompatibility_24() { return &____jsonNet35BinaryCompatibility_24; }
	inline void set__jsonNet35BinaryCompatibility_24(bool value)
	{
		____jsonNet35BinaryCompatibility_24 = value;
	}

	inline static int32_t get_offset_of__dateTimeKindHandling_25() { return static_cast<int32_t>(offsetof(BsonReader_t2352164445, ____dateTimeKindHandling_25)); }
	inline int32_t get__dateTimeKindHandling_25() const { return ____dateTimeKindHandling_25; }
	inline int32_t* get_address_of__dateTimeKindHandling_25() { return &____dateTimeKindHandling_25; }
	inline void set__dateTimeKindHandling_25(int32_t value)
	{
		____dateTimeKindHandling_25 = value;
	}
};

struct BsonReader_t2352164445_StaticFields
{
public:
	// System.Byte[] Newtonsoft.Json.Bson.BsonReader::_seqRange1
	ByteU5BU5D_t3397334013* ____seqRange1_12;
	// System.Byte[] Newtonsoft.Json.Bson.BsonReader::_seqRange2
	ByteU5BU5D_t3397334013* ____seqRange2_13;
	// System.Byte[] Newtonsoft.Json.Bson.BsonReader::_seqRange3
	ByteU5BU5D_t3397334013* ____seqRange3_14;
	// System.Byte[] Newtonsoft.Json.Bson.BsonReader::_seqRange4
	ByteU5BU5D_t3397334013* ____seqRange4_15;

public:
	inline static int32_t get_offset_of__seqRange1_12() { return static_cast<int32_t>(offsetof(BsonReader_t2352164445_StaticFields, ____seqRange1_12)); }
	inline ByteU5BU5D_t3397334013* get__seqRange1_12() const { return ____seqRange1_12; }
	inline ByteU5BU5D_t3397334013** get_address_of__seqRange1_12() { return &____seqRange1_12; }
	inline void set__seqRange1_12(ByteU5BU5D_t3397334013* value)
	{
		____seqRange1_12 = value;
		Il2CppCodeGenWriteBarrier(&____seqRange1_12, value);
	}

	inline static int32_t get_offset_of__seqRange2_13() { return static_cast<int32_t>(offsetof(BsonReader_t2352164445_StaticFields, ____seqRange2_13)); }
	inline ByteU5BU5D_t3397334013* get__seqRange2_13() const { return ____seqRange2_13; }
	inline ByteU5BU5D_t3397334013** get_address_of__seqRange2_13() { return &____seqRange2_13; }
	inline void set__seqRange2_13(ByteU5BU5D_t3397334013* value)
	{
		____seqRange2_13 = value;
		Il2CppCodeGenWriteBarrier(&____seqRange2_13, value);
	}

	inline static int32_t get_offset_of__seqRange3_14() { return static_cast<int32_t>(offsetof(BsonReader_t2352164445_StaticFields, ____seqRange3_14)); }
	inline ByteU5BU5D_t3397334013* get__seqRange3_14() const { return ____seqRange3_14; }
	inline ByteU5BU5D_t3397334013** get_address_of__seqRange3_14() { return &____seqRange3_14; }
	inline void set__seqRange3_14(ByteU5BU5D_t3397334013* value)
	{
		____seqRange3_14 = value;
		Il2CppCodeGenWriteBarrier(&____seqRange3_14, value);
	}

	inline static int32_t get_offset_of__seqRange4_15() { return static_cast<int32_t>(offsetof(BsonReader_t2352164445_StaticFields, ____seqRange4_15)); }
	inline ByteU5BU5D_t3397334013* get__seqRange4_15() const { return ____seqRange4_15; }
	inline ByteU5BU5D_t3397334013** get_address_of__seqRange4_15() { return &____seqRange4_15; }
	inline void set__seqRange4_15(ByteU5BU5D_t3397334013* value)
	{
		____seqRange4_15 = value;
		Il2CppCodeGenWriteBarrier(&____seqRange4_15, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
