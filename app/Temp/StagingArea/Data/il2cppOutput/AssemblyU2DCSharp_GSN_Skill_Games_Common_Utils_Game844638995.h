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

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Games.Common.Utils.GameLogHeader
struct  GameLogHeader_t844638995  : public Il2CppObject
{
public:
	// System.String GSN.Skill.Games.Common.Utils.GameLogHeader::label
	String_t* ___label_3;
	// System.Int32 GSN.Skill.Games.Common.Utils.GameLogHeader::formatVersion
	int32_t ___formatVersion_4;

public:
	inline static int32_t get_offset_of_label_3() { return static_cast<int32_t>(offsetof(GameLogHeader_t844638995, ___label_3)); }
	inline String_t* get_label_3() const { return ___label_3; }
	inline String_t** get_address_of_label_3() { return &___label_3; }
	inline void set_label_3(String_t* value)
	{
		___label_3 = value;
		Il2CppCodeGenWriteBarrier(&___label_3, value);
	}

	inline static int32_t get_offset_of_formatVersion_4() { return static_cast<int32_t>(offsetof(GameLogHeader_t844638995, ___formatVersion_4)); }
	inline int32_t get_formatVersion_4() const { return ___formatVersion_4; }
	inline int32_t* get_address_of_formatVersion_4() { return &___formatVersion_4; }
	inline void set_formatVersion_4(int32_t value)
	{
		___formatVersion_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
