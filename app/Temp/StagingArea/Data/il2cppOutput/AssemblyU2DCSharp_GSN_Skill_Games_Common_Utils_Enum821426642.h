#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String[]
struct StringU5BU5D_t1642385972;
// UnityEngine.Sprite[]
struct SpriteU5BU5D_t3359083662;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Games.Common.Utils.EnumeratedArray`1<UnityEngine.Sprite>
struct  EnumeratedArray_1_t821426642  : public Il2CppObject
{
public:
	// System.String[] GSN.Skill.Games.Common.Utils.EnumeratedArray`1::enumNames
	StringU5BU5D_t1642385972* ___enumNames_0;
	// T[] GSN.Skill.Games.Common.Utils.EnumeratedArray`1::_data
	SpriteU5BU5D_t3359083662* ____data_1;

public:
	inline static int32_t get_offset_of_enumNames_0() { return static_cast<int32_t>(offsetof(EnumeratedArray_1_t821426642, ___enumNames_0)); }
	inline StringU5BU5D_t1642385972* get_enumNames_0() const { return ___enumNames_0; }
	inline StringU5BU5D_t1642385972** get_address_of_enumNames_0() { return &___enumNames_0; }
	inline void set_enumNames_0(StringU5BU5D_t1642385972* value)
	{
		___enumNames_0 = value;
		Il2CppCodeGenWriteBarrier(&___enumNames_0, value);
	}

	inline static int32_t get_offset_of__data_1() { return static_cast<int32_t>(offsetof(EnumeratedArray_1_t821426642, ____data_1)); }
	inline SpriteU5BU5D_t3359083662* get__data_1() const { return ____data_1; }
	inline SpriteU5BU5D_t3359083662** get_address_of__data_1() { return &____data_1; }
	inline void set__data_1(SpriteU5BU5D_t3359083662* value)
	{
		____data_1 = value;
		Il2CppCodeGenWriteBarrier(&____data_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
