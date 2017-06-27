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
// GSN.Skill.Games.Common.Client.Game.ViewBase
struct ViewBase_t3608972958;
// GSN.Skill.Games.Common.Client.Game.ControllerBase
struct ControllerBase_t4247623737;
// GSN.Skill.Games.Common.Utils.IGameSession
struct IGameSession_t348500823;
// System.Action`1<System.String>
struct Action_1_t1831019615;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Games.Common.Client.Game.GameBase
struct  GameBase_t3011854951  : public MonoBehaviour_t1158329972
{
public:
	// GSN.Skill.Games.Common.Model.GameModelBase GSN.Skill.Games.Common.Client.Game.GameBase::_model
	GameModelBase_t2215752692 * ____model_2;
	// GSN.Skill.Games.Common.Client.Game.ViewBase GSN.Skill.Games.Common.Client.Game.GameBase::_view
	ViewBase_t3608972958 * ____view_3;
	// GSN.Skill.Games.Common.Client.Game.ControllerBase GSN.Skill.Games.Common.Client.Game.GameBase::_controller
	ControllerBase_t4247623737 * ____controller_4;
	// GSN.Skill.Games.Common.Utils.IGameSession GSN.Skill.Games.Common.Client.Game.GameBase::_gameSession
	Il2CppObject * ____gameSession_5;
	// System.Boolean GSN.Skill.Games.Common.Client.Game.GameBase::_paused
	bool ____paused_7;
	// System.Int32 GSN.Skill.Games.Common.Client.Game.GameBase::_pausedAt
	int32_t ____pausedAt_8;

public:
	inline static int32_t get_offset_of__model_2() { return static_cast<int32_t>(offsetof(GameBase_t3011854951, ____model_2)); }
	inline GameModelBase_t2215752692 * get__model_2() const { return ____model_2; }
	inline GameModelBase_t2215752692 ** get_address_of__model_2() { return &____model_2; }
	inline void set__model_2(GameModelBase_t2215752692 * value)
	{
		____model_2 = value;
		Il2CppCodeGenWriteBarrier(&____model_2, value);
	}

	inline static int32_t get_offset_of__view_3() { return static_cast<int32_t>(offsetof(GameBase_t3011854951, ____view_3)); }
	inline ViewBase_t3608972958 * get__view_3() const { return ____view_3; }
	inline ViewBase_t3608972958 ** get_address_of__view_3() { return &____view_3; }
	inline void set__view_3(ViewBase_t3608972958 * value)
	{
		____view_3 = value;
		Il2CppCodeGenWriteBarrier(&____view_3, value);
	}

	inline static int32_t get_offset_of__controller_4() { return static_cast<int32_t>(offsetof(GameBase_t3011854951, ____controller_4)); }
	inline ControllerBase_t4247623737 * get__controller_4() const { return ____controller_4; }
	inline ControllerBase_t4247623737 ** get_address_of__controller_4() { return &____controller_4; }
	inline void set__controller_4(ControllerBase_t4247623737 * value)
	{
		____controller_4 = value;
		Il2CppCodeGenWriteBarrier(&____controller_4, value);
	}

	inline static int32_t get_offset_of__gameSession_5() { return static_cast<int32_t>(offsetof(GameBase_t3011854951, ____gameSession_5)); }
	inline Il2CppObject * get__gameSession_5() const { return ____gameSession_5; }
	inline Il2CppObject ** get_address_of__gameSession_5() { return &____gameSession_5; }
	inline void set__gameSession_5(Il2CppObject * value)
	{
		____gameSession_5 = value;
		Il2CppCodeGenWriteBarrier(&____gameSession_5, value);
	}

	inline static int32_t get_offset_of__paused_7() { return static_cast<int32_t>(offsetof(GameBase_t3011854951, ____paused_7)); }
	inline bool get__paused_7() const { return ____paused_7; }
	inline bool* get_address_of__paused_7() { return &____paused_7; }
	inline void set__paused_7(bool value)
	{
		____paused_7 = value;
	}

	inline static int32_t get_offset_of__pausedAt_8() { return static_cast<int32_t>(offsetof(GameBase_t3011854951, ____pausedAt_8)); }
	inline int32_t get__pausedAt_8() const { return ____pausedAt_8; }
	inline int32_t* get_address_of__pausedAt_8() { return &____pausedAt_8; }
	inline void set__pausedAt_8(int32_t value)
	{
		____pausedAt_8 = value;
	}
};

struct GameBase_t3011854951_StaticFields
{
public:
	// System.Action`1<System.String> GSN.Skill.Games.Common.Client.Game.GameBase::<>f__mg$cache0
	Action_1_t1831019615 * ___U3CU3Ef__mgU24cache0_9;
	// System.Action`1<System.String> GSN.Skill.Games.Common.Client.Game.GameBase::<>f__mg$cache1
	Action_1_t1831019615 * ___U3CU3Ef__mgU24cache1_10;
	// System.Action`1<System.String> GSN.Skill.Games.Common.Client.Game.GameBase::<>f__mg$cache2
	Action_1_t1831019615 * ___U3CU3Ef__mgU24cache2_11;

public:
	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache0_9() { return static_cast<int32_t>(offsetof(GameBase_t3011854951_StaticFields, ___U3CU3Ef__mgU24cache0_9)); }
	inline Action_1_t1831019615 * get_U3CU3Ef__mgU24cache0_9() const { return ___U3CU3Ef__mgU24cache0_9; }
	inline Action_1_t1831019615 ** get_address_of_U3CU3Ef__mgU24cache0_9() { return &___U3CU3Ef__mgU24cache0_9; }
	inline void set_U3CU3Ef__mgU24cache0_9(Action_1_t1831019615 * value)
	{
		___U3CU3Ef__mgU24cache0_9 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__mgU24cache0_9, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache1_10() { return static_cast<int32_t>(offsetof(GameBase_t3011854951_StaticFields, ___U3CU3Ef__mgU24cache1_10)); }
	inline Action_1_t1831019615 * get_U3CU3Ef__mgU24cache1_10() const { return ___U3CU3Ef__mgU24cache1_10; }
	inline Action_1_t1831019615 ** get_address_of_U3CU3Ef__mgU24cache1_10() { return &___U3CU3Ef__mgU24cache1_10; }
	inline void set_U3CU3Ef__mgU24cache1_10(Action_1_t1831019615 * value)
	{
		___U3CU3Ef__mgU24cache1_10 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__mgU24cache1_10, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache2_11() { return static_cast<int32_t>(offsetof(GameBase_t3011854951_StaticFields, ___U3CU3Ef__mgU24cache2_11)); }
	inline Action_1_t1831019615 * get_U3CU3Ef__mgU24cache2_11() const { return ___U3CU3Ef__mgU24cache2_11; }
	inline Action_1_t1831019615 ** get_address_of_U3CU3Ef__mgU24cache2_11() { return &___U3CU3Ef__mgU24cache2_11; }
	inline void set_U3CU3Ef__mgU24cache2_11(Action_1_t1831019615 * value)
	{
		___U3CU3Ef__mgU24cache2_11 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__mgU24cache2_11, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
