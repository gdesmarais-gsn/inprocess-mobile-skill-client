#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.IO.TextReader
struct TextReader_t1561828458;
// Newtonsoft.Json.Utilities.StringBuffer
struct StringBuffer_t2484172789;
// System.Globalization.CultureInfo
struct CultureInfo_t3500843524;

#include "Json_NET_Newtonsoft_Json_JsonReader3154730733.h"
#include "mscorlib_System_Nullable_1_gen1717547653.h"
#include "Json_NET_Newtonsoft_Json_JsonTextReader_ReadType2517660684.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Newtonsoft.Json.JsonTextReader
struct  JsonTextReader_t726416198  : public JsonReader_t3154730733
{
public:
	// System.IO.TextReader Newtonsoft.Json.JsonTextReader::_reader
	TextReader_t1561828458 * ____reader_11;
	// Newtonsoft.Json.Utilities.StringBuffer Newtonsoft.Json.JsonTextReader::_buffer
	StringBuffer_t2484172789 * ____buffer_12;
	// System.Nullable`1<System.Char> Newtonsoft.Json.JsonTextReader::_lastChar
	Nullable_1_t1717547653  ____lastChar_13;
	// System.Int32 Newtonsoft.Json.JsonTextReader::_currentLinePosition
	int32_t ____currentLinePosition_14;
	// System.Int32 Newtonsoft.Json.JsonTextReader::_currentLineNumber
	int32_t ____currentLineNumber_15;
	// System.Boolean Newtonsoft.Json.JsonTextReader::_end
	bool ____end_16;
	// Newtonsoft.Json.JsonTextReader/ReadType Newtonsoft.Json.JsonTextReader::_readType
	int32_t ____readType_17;
	// System.Globalization.CultureInfo Newtonsoft.Json.JsonTextReader::_culture
	CultureInfo_t3500843524 * ____culture_18;

public:
	inline static int32_t get_offset_of__reader_11() { return static_cast<int32_t>(offsetof(JsonTextReader_t726416198, ____reader_11)); }
	inline TextReader_t1561828458 * get__reader_11() const { return ____reader_11; }
	inline TextReader_t1561828458 ** get_address_of__reader_11() { return &____reader_11; }
	inline void set__reader_11(TextReader_t1561828458 * value)
	{
		____reader_11 = value;
		Il2CppCodeGenWriteBarrier(&____reader_11, value);
	}

	inline static int32_t get_offset_of__buffer_12() { return static_cast<int32_t>(offsetof(JsonTextReader_t726416198, ____buffer_12)); }
	inline StringBuffer_t2484172789 * get__buffer_12() const { return ____buffer_12; }
	inline StringBuffer_t2484172789 ** get_address_of__buffer_12() { return &____buffer_12; }
	inline void set__buffer_12(StringBuffer_t2484172789 * value)
	{
		____buffer_12 = value;
		Il2CppCodeGenWriteBarrier(&____buffer_12, value);
	}

	inline static int32_t get_offset_of__lastChar_13() { return static_cast<int32_t>(offsetof(JsonTextReader_t726416198, ____lastChar_13)); }
	inline Nullable_1_t1717547653  get__lastChar_13() const { return ____lastChar_13; }
	inline Nullable_1_t1717547653 * get_address_of__lastChar_13() { return &____lastChar_13; }
	inline void set__lastChar_13(Nullable_1_t1717547653  value)
	{
		____lastChar_13 = value;
	}

	inline static int32_t get_offset_of__currentLinePosition_14() { return static_cast<int32_t>(offsetof(JsonTextReader_t726416198, ____currentLinePosition_14)); }
	inline int32_t get__currentLinePosition_14() const { return ____currentLinePosition_14; }
	inline int32_t* get_address_of__currentLinePosition_14() { return &____currentLinePosition_14; }
	inline void set__currentLinePosition_14(int32_t value)
	{
		____currentLinePosition_14 = value;
	}

	inline static int32_t get_offset_of__currentLineNumber_15() { return static_cast<int32_t>(offsetof(JsonTextReader_t726416198, ____currentLineNumber_15)); }
	inline int32_t get__currentLineNumber_15() const { return ____currentLineNumber_15; }
	inline int32_t* get_address_of__currentLineNumber_15() { return &____currentLineNumber_15; }
	inline void set__currentLineNumber_15(int32_t value)
	{
		____currentLineNumber_15 = value;
	}

	inline static int32_t get_offset_of__end_16() { return static_cast<int32_t>(offsetof(JsonTextReader_t726416198, ____end_16)); }
	inline bool get__end_16() const { return ____end_16; }
	inline bool* get_address_of__end_16() { return &____end_16; }
	inline void set__end_16(bool value)
	{
		____end_16 = value;
	}

	inline static int32_t get_offset_of__readType_17() { return static_cast<int32_t>(offsetof(JsonTextReader_t726416198, ____readType_17)); }
	inline int32_t get__readType_17() const { return ____readType_17; }
	inline int32_t* get_address_of__readType_17() { return &____readType_17; }
	inline void set__readType_17(int32_t value)
	{
		____readType_17 = value;
	}

	inline static int32_t get_offset_of__culture_18() { return static_cast<int32_t>(offsetof(JsonTextReader_t726416198, ____culture_18)); }
	inline CultureInfo_t3500843524 * get__culture_18() const { return ____culture_18; }
	inline CultureInfo_t3500843524 ** get_address_of__culture_18() { return &____culture_18; }
	inline void set__culture_18(CultureInfo_t3500843524 * value)
	{
		____culture_18 = value;
		Il2CppCodeGenWriteBarrier(&____culture_18, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
