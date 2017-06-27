#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.UI.Image
struct Image_t2042527209;

#include "AssemblyU2DCSharp_GSN_Skill_Games_Common_Client_Ga1687446475.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Games.Common.Client.Game.UIDevLoad
struct  UIDevLoad_t3998077829  : public UILoadBase_t1687446475
{
public:
	// UnityEngine.UI.Image GSN.Skill.Games.Common.Client.Game.UIDevLoad::progressFill
	Image_t2042527209 * ___progressFill_3;

public:
	inline static int32_t get_offset_of_progressFill_3() { return static_cast<int32_t>(offsetof(UIDevLoad_t3998077829, ___progressFill_3)); }
	inline Image_t2042527209 * get_progressFill_3() const { return ___progressFill_3; }
	inline Image_t2042527209 ** get_address_of_progressFill_3() { return &___progressFill_3; }
	inline void set_progressFill_3(Image_t2042527209 * value)
	{
		___progressFill_3 = value;
		Il2CppCodeGenWriteBarrier(&___progressFill_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
