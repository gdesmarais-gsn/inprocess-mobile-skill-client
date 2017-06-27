#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// GSN.Skill.Games.Common.Client.TipBase[]
struct TipBaseU5BU5D_t536491775;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t1642385972;

#include "AssemblyU2DCSharp_GSN_Skill_Games_Common_Client_UIIn75348177.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Games.Common.Client.UIGameTipsBase
struct  UIGameTipsBase_t3527044721  : public UIInfoTab_t75348177
{
public:
	// GSN.Skill.Games.Common.Client.TipBase[] GSN.Skill.Games.Common.Client.UIGameTipsBase::_tips
	TipBaseU5BU5D_t536491775* ____tips_3;
	// System.String[] GSN.Skill.Games.Common.Client.UIGameTipsBase::DEFAULT_TIPS
	StringU5BU5D_t1642385972* ___DEFAULT_TIPS_7;
	// System.String[] GSN.Skill.Games.Common.Client.UIGameTipsBase::GENERIC_TIP_OPTION_NAME
	StringU5BU5D_t1642385972* ___GENERIC_TIP_OPTION_NAME_8;

public:
	inline static int32_t get_offset_of__tips_3() { return static_cast<int32_t>(offsetof(UIGameTipsBase_t3527044721, ____tips_3)); }
	inline TipBaseU5BU5D_t536491775* get__tips_3() const { return ____tips_3; }
	inline TipBaseU5BU5D_t536491775** get_address_of__tips_3() { return &____tips_3; }
	inline void set__tips_3(TipBaseU5BU5D_t536491775* value)
	{
		____tips_3 = value;
		Il2CppCodeGenWriteBarrier(&____tips_3, value);
	}

	inline static int32_t get_offset_of_DEFAULT_TIPS_7() { return static_cast<int32_t>(offsetof(UIGameTipsBase_t3527044721, ___DEFAULT_TIPS_7)); }
	inline StringU5BU5D_t1642385972* get_DEFAULT_TIPS_7() const { return ___DEFAULT_TIPS_7; }
	inline StringU5BU5D_t1642385972** get_address_of_DEFAULT_TIPS_7() { return &___DEFAULT_TIPS_7; }
	inline void set_DEFAULT_TIPS_7(StringU5BU5D_t1642385972* value)
	{
		___DEFAULT_TIPS_7 = value;
		Il2CppCodeGenWriteBarrier(&___DEFAULT_TIPS_7, value);
	}

	inline static int32_t get_offset_of_GENERIC_TIP_OPTION_NAME_8() { return static_cast<int32_t>(offsetof(UIGameTipsBase_t3527044721, ___GENERIC_TIP_OPTION_NAME_8)); }
	inline StringU5BU5D_t1642385972* get_GENERIC_TIP_OPTION_NAME_8() const { return ___GENERIC_TIP_OPTION_NAME_8; }
	inline StringU5BU5D_t1642385972** get_address_of_GENERIC_TIP_OPTION_NAME_8() { return &___GENERIC_TIP_OPTION_NAME_8; }
	inline void set_GENERIC_TIP_OPTION_NAME_8(StringU5BU5D_t1642385972* value)
	{
		___GENERIC_TIP_OPTION_NAME_8 = value;
		Il2CppCodeGenWriteBarrier(&___GENERIC_TIP_OPTION_NAME_8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
