#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// GSN.Skill.Games.Common.Client.UIHudBase
struct UIHudBase_t4131117260;
// GSN.Skill.Games.Common.Client.UIResultsBase
struct UIResultsBase_t2956697171;
// GSN.Skill.Games.Common.Client.UIStartScreenBase
struct UIStartScreenBase_t566610785;
// GSN.Skill.Games.Common.Client.Game.GameBase
struct GameBase_t3011854951;
// UnityEngine.ShaderVariantCollection
struct ShaderVariantCollection_t3351177634;

#include "AssemblyU2DCSharp_GSN_Skill_Games_Common_Client_Ga3608972958.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Games.Common.Client.Game.NewViewBase
struct  NewViewBase_t1548807964  : public ViewBase_t3608972958
{
public:
	// GSN.Skill.Games.Common.Client.UIHudBase GSN.Skill.Games.Common.Client.Game.NewViewBase::_hud
	UIHudBase_t4131117260 * ____hud_12;
	// GSN.Skill.Games.Common.Client.UIResultsBase GSN.Skill.Games.Common.Client.Game.NewViewBase::_results
	UIResultsBase_t2956697171 * ____results_13;
	// GSN.Skill.Games.Common.Client.UIStartScreenBase GSN.Skill.Games.Common.Client.Game.NewViewBase::_startScreen
	UIStartScreenBase_t566610785 * ____startScreen_14;
	// GSN.Skill.Games.Common.Client.Game.GameBase GSN.Skill.Games.Common.Client.Game.NewViewBase::game
	GameBase_t3011854951 * ___game_15;
	// UnityEngine.ShaderVariantCollection GSN.Skill.Games.Common.Client.Game.NewViewBase::_shaderVariantCollection
	ShaderVariantCollection_t3351177634 * ____shaderVariantCollection_16;

public:
	inline static int32_t get_offset_of__hud_12() { return static_cast<int32_t>(offsetof(NewViewBase_t1548807964, ____hud_12)); }
	inline UIHudBase_t4131117260 * get__hud_12() const { return ____hud_12; }
	inline UIHudBase_t4131117260 ** get_address_of__hud_12() { return &____hud_12; }
	inline void set__hud_12(UIHudBase_t4131117260 * value)
	{
		____hud_12 = value;
		Il2CppCodeGenWriteBarrier(&____hud_12, value);
	}

	inline static int32_t get_offset_of__results_13() { return static_cast<int32_t>(offsetof(NewViewBase_t1548807964, ____results_13)); }
	inline UIResultsBase_t2956697171 * get__results_13() const { return ____results_13; }
	inline UIResultsBase_t2956697171 ** get_address_of__results_13() { return &____results_13; }
	inline void set__results_13(UIResultsBase_t2956697171 * value)
	{
		____results_13 = value;
		Il2CppCodeGenWriteBarrier(&____results_13, value);
	}

	inline static int32_t get_offset_of__startScreen_14() { return static_cast<int32_t>(offsetof(NewViewBase_t1548807964, ____startScreen_14)); }
	inline UIStartScreenBase_t566610785 * get__startScreen_14() const { return ____startScreen_14; }
	inline UIStartScreenBase_t566610785 ** get_address_of__startScreen_14() { return &____startScreen_14; }
	inline void set__startScreen_14(UIStartScreenBase_t566610785 * value)
	{
		____startScreen_14 = value;
		Il2CppCodeGenWriteBarrier(&____startScreen_14, value);
	}

	inline static int32_t get_offset_of_game_15() { return static_cast<int32_t>(offsetof(NewViewBase_t1548807964, ___game_15)); }
	inline GameBase_t3011854951 * get_game_15() const { return ___game_15; }
	inline GameBase_t3011854951 ** get_address_of_game_15() { return &___game_15; }
	inline void set_game_15(GameBase_t3011854951 * value)
	{
		___game_15 = value;
		Il2CppCodeGenWriteBarrier(&___game_15, value);
	}

	inline static int32_t get_offset_of__shaderVariantCollection_16() { return static_cast<int32_t>(offsetof(NewViewBase_t1548807964, ____shaderVariantCollection_16)); }
	inline ShaderVariantCollection_t3351177634 * get__shaderVariantCollection_16() const { return ____shaderVariantCollection_16; }
	inline ShaderVariantCollection_t3351177634 ** get_address_of__shaderVariantCollection_16() { return &____shaderVariantCollection_16; }
	inline void set__shaderVariantCollection_16(ShaderVariantCollection_t3351177634 * value)
	{
		____shaderVariantCollection_16 = value;
		Il2CppCodeGenWriteBarrier(&____shaderVariantCollection_16, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
