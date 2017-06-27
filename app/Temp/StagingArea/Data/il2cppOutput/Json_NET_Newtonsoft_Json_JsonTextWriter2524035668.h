#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.IO.TextWriter
struct TextWriter_t4027217640;
// Newtonsoft.Json.Utilities.Base64Encoder
struct Base64Encoder_t2682770749;

#include "Json_NET_Newtonsoft_Json_JsonWriter1973729997.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Newtonsoft.Json.JsonTextWriter
struct  JsonTextWriter_t2524035668  : public JsonWriter_t1973729997
{
public:
	// System.IO.TextWriter Newtonsoft.Json.JsonTextWriter::_writer
	TextWriter_t4027217640 * ____writer_7;
	// Newtonsoft.Json.Utilities.Base64Encoder Newtonsoft.Json.JsonTextWriter::_base64Encoder
	Base64Encoder_t2682770749 * ____base64Encoder_8;
	// System.Char Newtonsoft.Json.JsonTextWriter::_indentChar
	Il2CppChar ____indentChar_9;
	// System.Int32 Newtonsoft.Json.JsonTextWriter::_indentation
	int32_t ____indentation_10;
	// System.Char Newtonsoft.Json.JsonTextWriter::_quoteChar
	Il2CppChar ____quoteChar_11;
	// System.Boolean Newtonsoft.Json.JsonTextWriter::_quoteName
	bool ____quoteName_12;

public:
	inline static int32_t get_offset_of__writer_7() { return static_cast<int32_t>(offsetof(JsonTextWriter_t2524035668, ____writer_7)); }
	inline TextWriter_t4027217640 * get__writer_7() const { return ____writer_7; }
	inline TextWriter_t4027217640 ** get_address_of__writer_7() { return &____writer_7; }
	inline void set__writer_7(TextWriter_t4027217640 * value)
	{
		____writer_7 = value;
		Il2CppCodeGenWriteBarrier(&____writer_7, value);
	}

	inline static int32_t get_offset_of__base64Encoder_8() { return static_cast<int32_t>(offsetof(JsonTextWriter_t2524035668, ____base64Encoder_8)); }
	inline Base64Encoder_t2682770749 * get__base64Encoder_8() const { return ____base64Encoder_8; }
	inline Base64Encoder_t2682770749 ** get_address_of__base64Encoder_8() { return &____base64Encoder_8; }
	inline void set__base64Encoder_8(Base64Encoder_t2682770749 * value)
	{
		____base64Encoder_8 = value;
		Il2CppCodeGenWriteBarrier(&____base64Encoder_8, value);
	}

	inline static int32_t get_offset_of__indentChar_9() { return static_cast<int32_t>(offsetof(JsonTextWriter_t2524035668, ____indentChar_9)); }
	inline Il2CppChar get__indentChar_9() const { return ____indentChar_9; }
	inline Il2CppChar* get_address_of__indentChar_9() { return &____indentChar_9; }
	inline void set__indentChar_9(Il2CppChar value)
	{
		____indentChar_9 = value;
	}

	inline static int32_t get_offset_of__indentation_10() { return static_cast<int32_t>(offsetof(JsonTextWriter_t2524035668, ____indentation_10)); }
	inline int32_t get__indentation_10() const { return ____indentation_10; }
	inline int32_t* get_address_of__indentation_10() { return &____indentation_10; }
	inline void set__indentation_10(int32_t value)
	{
		____indentation_10 = value;
	}

	inline static int32_t get_offset_of__quoteChar_11() { return static_cast<int32_t>(offsetof(JsonTextWriter_t2524035668, ____quoteChar_11)); }
	inline Il2CppChar get__quoteChar_11() const { return ____quoteChar_11; }
	inline Il2CppChar* get_address_of__quoteChar_11() { return &____quoteChar_11; }
	inline void set__quoteChar_11(Il2CppChar value)
	{
		____quoteChar_11 = value;
	}

	inline static int32_t get_offset_of__quoteName_12() { return static_cast<int32_t>(offsetof(JsonTextWriter_t2524035668, ____quoteName_12)); }
	inline bool get__quoteName_12() const { return ____quoteName_12; }
	inline bool* get_address_of__quoteName_12() { return &____quoteName_12; }
	inline void set__quoteName_12(bool value)
	{
		____quoteName_12 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
