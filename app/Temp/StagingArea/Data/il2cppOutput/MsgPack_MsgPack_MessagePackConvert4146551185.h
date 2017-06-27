#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Text.Encoding
struct Encoding_t663144255;

#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_DateTime693205669.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MsgPack.MessagePackConvert
struct  MessagePackConvert_t4146551185  : public Il2CppObject
{
public:

public:
};

struct MessagePackConvert_t4146551185_StaticFields
{
public:
	// System.Text.Encoding MsgPack.MessagePackConvert::_utf8NonBomStrict
	Encoding_t663144255 * ____utf8NonBomStrict_0;
	// System.Text.Encoding MsgPack.MessagePackConvert::_utf8NonBom
	Encoding_t663144255 * ____utf8NonBom_1;
	// System.DateTime MsgPack.MessagePackConvert::_unixEpocUtc
	DateTime_t693205669  ____unixEpocUtc_2;

public:
	inline static int32_t get_offset_of__utf8NonBomStrict_0() { return static_cast<int32_t>(offsetof(MessagePackConvert_t4146551185_StaticFields, ____utf8NonBomStrict_0)); }
	inline Encoding_t663144255 * get__utf8NonBomStrict_0() const { return ____utf8NonBomStrict_0; }
	inline Encoding_t663144255 ** get_address_of__utf8NonBomStrict_0() { return &____utf8NonBomStrict_0; }
	inline void set__utf8NonBomStrict_0(Encoding_t663144255 * value)
	{
		____utf8NonBomStrict_0 = value;
		Il2CppCodeGenWriteBarrier(&____utf8NonBomStrict_0, value);
	}

	inline static int32_t get_offset_of__utf8NonBom_1() { return static_cast<int32_t>(offsetof(MessagePackConvert_t4146551185_StaticFields, ____utf8NonBom_1)); }
	inline Encoding_t663144255 * get__utf8NonBom_1() const { return ____utf8NonBom_1; }
	inline Encoding_t663144255 ** get_address_of__utf8NonBom_1() { return &____utf8NonBom_1; }
	inline void set__utf8NonBom_1(Encoding_t663144255 * value)
	{
		____utf8NonBom_1 = value;
		Il2CppCodeGenWriteBarrier(&____utf8NonBom_1, value);
	}

	inline static int32_t get_offset_of__unixEpocUtc_2() { return static_cast<int32_t>(offsetof(MessagePackConvert_t4146551185_StaticFields, ____unixEpocUtc_2)); }
	inline DateTime_t693205669  get__unixEpocUtc_2() const { return ____unixEpocUtc_2; }
	inline DateTime_t693205669 * get_address_of__unixEpocUtc_2() { return &____unixEpocUtc_2; }
	inline void set__unixEpocUtc_2(DateTime_t693205669  value)
	{
		____unixEpocUtc_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
