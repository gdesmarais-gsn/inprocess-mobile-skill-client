#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Sprite
struct Sprite_t309593783;
// System.String
struct String_t;

#include "AssemblyU2DCSharp_GSN_Skill_Games_Common_Client_Ti2957623898.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Games.Common.Tip
struct  Tip_t677278875  : public TipBase_t2957623898
{
public:
	// UnityEngine.Sprite GSN.Skill.Games.Common.Tip::sprite
	Sprite_t309593783 * ___sprite_2;
	// System.String GSN.Skill.Games.Common.Tip::id
	String_t* ___id_3;
	// System.String GSN.Skill.Games.Common.Tip::text
	String_t* ___text_4;

public:
	inline static int32_t get_offset_of_sprite_2() { return static_cast<int32_t>(offsetof(Tip_t677278875, ___sprite_2)); }
	inline Sprite_t309593783 * get_sprite_2() const { return ___sprite_2; }
	inline Sprite_t309593783 ** get_address_of_sprite_2() { return &___sprite_2; }
	inline void set_sprite_2(Sprite_t309593783 * value)
	{
		___sprite_2 = value;
		Il2CppCodeGenWriteBarrier(&___sprite_2, value);
	}

	inline static int32_t get_offset_of_id_3() { return static_cast<int32_t>(offsetof(Tip_t677278875, ___id_3)); }
	inline String_t* get_id_3() const { return ___id_3; }
	inline String_t** get_address_of_id_3() { return &___id_3; }
	inline void set_id_3(String_t* value)
	{
		___id_3 = value;
		Il2CppCodeGenWriteBarrier(&___id_3, value);
	}

	inline static int32_t get_offset_of_text_4() { return static_cast<int32_t>(offsetof(Tip_t677278875, ___text_4)); }
	inline String_t* get_text_4() const { return ___text_4; }
	inline String_t** get_address_of_text_4() { return &___text_4; }
	inline void set_text_4(String_t* value)
	{
		___text_4 = value;
		Il2CppCodeGenWriteBarrier(&___text_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
