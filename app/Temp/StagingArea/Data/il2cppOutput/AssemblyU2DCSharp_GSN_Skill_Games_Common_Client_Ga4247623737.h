#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Newtonsoft.Json.JsonSerializerSettings
struct JsonSerializerSettings_t842388167;
// GSN.Skill.Games.Common.Model.GameModelBase
struct GameModelBase_t2215752692;
// GSN.Skill.Games.Common.Client.Game.ViewBase
struct ViewBase_t3608972958;
// GSN.Skill.Games.Common.Utils.MovePlayer
struct MovePlayer_t3684524782;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Games.Common.Client.Game.ControllerBase
struct  ControllerBase_t4247623737  : public MonoBehaviour_t1158329972
{
public:
	// GSN.Skill.Games.Common.Model.GameModelBase GSN.Skill.Games.Common.Client.Game.ControllerBase::<model>k__BackingField
	GameModelBase_t2215752692 * ___U3CmodelU3Ek__BackingField_3;
	// GSN.Skill.Games.Common.Client.Game.ViewBase GSN.Skill.Games.Common.Client.Game.ControllerBase::<view>k__BackingField
	ViewBase_t3608972958 * ___U3CviewU3Ek__BackingField_4;
	// System.Int32 GSN.Skill.Games.Common.Client.Game.ControllerBase::_gameTime
	int32_t ____gameTime_5;
	// GSN.Skill.Games.Common.Utils.MovePlayer GSN.Skill.Games.Common.Client.Game.ControllerBase::_replayer
	MovePlayer_t3684524782 * ____replayer_6;

public:
	inline static int32_t get_offset_of_U3CmodelU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(ControllerBase_t4247623737, ___U3CmodelU3Ek__BackingField_3)); }
	inline GameModelBase_t2215752692 * get_U3CmodelU3Ek__BackingField_3() const { return ___U3CmodelU3Ek__BackingField_3; }
	inline GameModelBase_t2215752692 ** get_address_of_U3CmodelU3Ek__BackingField_3() { return &___U3CmodelU3Ek__BackingField_3; }
	inline void set_U3CmodelU3Ek__BackingField_3(GameModelBase_t2215752692 * value)
	{
		___U3CmodelU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier(&___U3CmodelU3Ek__BackingField_3, value);
	}

	inline static int32_t get_offset_of_U3CviewU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(ControllerBase_t4247623737, ___U3CviewU3Ek__BackingField_4)); }
	inline ViewBase_t3608972958 * get_U3CviewU3Ek__BackingField_4() const { return ___U3CviewU3Ek__BackingField_4; }
	inline ViewBase_t3608972958 ** get_address_of_U3CviewU3Ek__BackingField_4() { return &___U3CviewU3Ek__BackingField_4; }
	inline void set_U3CviewU3Ek__BackingField_4(ViewBase_t3608972958 * value)
	{
		___U3CviewU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier(&___U3CviewU3Ek__BackingField_4, value);
	}

	inline static int32_t get_offset_of__gameTime_5() { return static_cast<int32_t>(offsetof(ControllerBase_t4247623737, ____gameTime_5)); }
	inline int32_t get__gameTime_5() const { return ____gameTime_5; }
	inline int32_t* get_address_of__gameTime_5() { return &____gameTime_5; }
	inline void set__gameTime_5(int32_t value)
	{
		____gameTime_5 = value;
	}

	inline static int32_t get_offset_of__replayer_6() { return static_cast<int32_t>(offsetof(ControllerBase_t4247623737, ____replayer_6)); }
	inline MovePlayer_t3684524782 * get__replayer_6() const { return ____replayer_6; }
	inline MovePlayer_t3684524782 ** get_address_of__replayer_6() { return &____replayer_6; }
	inline void set__replayer_6(MovePlayer_t3684524782 * value)
	{
		____replayer_6 = value;
		Il2CppCodeGenWriteBarrier(&____replayer_6, value);
	}
};

struct ControllerBase_t4247623737_StaticFields
{
public:
	// Newtonsoft.Json.JsonSerializerSettings GSN.Skill.Games.Common.Client.Game.ControllerBase::_iinputMsgSerializerSettings
	JsonSerializerSettings_t842388167 * ____iinputMsgSerializerSettings_2;

public:
	inline static int32_t get_offset_of__iinputMsgSerializerSettings_2() { return static_cast<int32_t>(offsetof(ControllerBase_t4247623737_StaticFields, ____iinputMsgSerializerSettings_2)); }
	inline JsonSerializerSettings_t842388167 * get__iinputMsgSerializerSettings_2() const { return ____iinputMsgSerializerSettings_2; }
	inline JsonSerializerSettings_t842388167 ** get_address_of__iinputMsgSerializerSettings_2() { return &____iinputMsgSerializerSettings_2; }
	inline void set__iinputMsgSerializerSettings_2(JsonSerializerSettings_t842388167 * value)
	{
		____iinputMsgSerializerSettings_2 = value;
		Il2CppCodeGenWriteBarrier(&____iinputMsgSerializerSettings_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
