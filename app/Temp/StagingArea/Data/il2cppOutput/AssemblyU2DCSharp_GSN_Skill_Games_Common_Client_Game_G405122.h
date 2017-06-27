#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// GSN.Skill.Games.Common.Model.GameModelBase
struct GameModelBase_t2215752692;

#include "AssemblyU2DCSharp_GSN_Skill_Games_Common_Client_Si4191067265.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Games.Common.Client.Game.GameModelProxyBase
struct  GameModelProxyBase_t405122  : public SingletonManual_1_t4191067265
{
public:
	// GSN.Skill.Games.Common.Model.GameModelBase GSN.Skill.Games.Common.Client.Game.GameModelProxyBase::_model
	GameModelBase_t2215752692 * ____model_1;

public:
	inline static int32_t get_offset_of__model_1() { return static_cast<int32_t>(offsetof(GameModelProxyBase_t405122, ____model_1)); }
	inline GameModelBase_t2215752692 * get__model_1() const { return ____model_1; }
	inline GameModelBase_t2215752692 ** get_address_of__model_1() { return &____model_1; }
	inline void set__model_1(GameModelBase_t2215752692 * value)
	{
		____model_1 = value;
		Il2CppCodeGenWriteBarrier(&____model_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
