#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t3397334013;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Games.Common.Utils.GameLogRecord
struct  GameLogRecord_t4003629961  : public Il2CppObject
{
public:
	// System.String GSN.Skill.Games.Common.Utils.GameLogRecord::type
	String_t* ___type_0;
	// System.Int32 GSN.Skill.Games.Common.Utils.GameLogRecord::time
	int32_t ___time_1;
	// System.Byte[] GSN.Skill.Games.Common.Utils.GameLogRecord::body
	ByteU5BU5D_t3397334013* ___body_2;

public:
	inline static int32_t get_offset_of_type_0() { return static_cast<int32_t>(offsetof(GameLogRecord_t4003629961, ___type_0)); }
	inline String_t* get_type_0() const { return ___type_0; }
	inline String_t** get_address_of_type_0() { return &___type_0; }
	inline void set_type_0(String_t* value)
	{
		___type_0 = value;
		Il2CppCodeGenWriteBarrier(&___type_0, value);
	}

	inline static int32_t get_offset_of_time_1() { return static_cast<int32_t>(offsetof(GameLogRecord_t4003629961, ___time_1)); }
	inline int32_t get_time_1() const { return ___time_1; }
	inline int32_t* get_address_of_time_1() { return &___time_1; }
	inline void set_time_1(int32_t value)
	{
		___time_1 = value;
	}

	inline static int32_t get_offset_of_body_2() { return static_cast<int32_t>(offsetof(GameLogRecord_t4003629961, ___body_2)); }
	inline ByteU5BU5D_t3397334013* get_body_2() const { return ___body_2; }
	inline ByteU5BU5D_t3397334013** get_address_of_body_2() { return &___body_2; }
	inline void set_body_2(ByteU5BU5D_t3397334013* value)
	{
		___body_2 = value;
		Il2CppCodeGenWriteBarrier(&___body_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
