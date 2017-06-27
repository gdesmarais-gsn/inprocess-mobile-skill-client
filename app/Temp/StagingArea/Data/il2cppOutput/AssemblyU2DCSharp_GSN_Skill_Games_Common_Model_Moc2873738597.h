#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// GSN.Skill.Games.Common.Model.IDataSafePlugin
struct IDataSafePlugin_t3786836483;
// GSN.Skill.Games.Common.Utils.IGameSession
struct IGameSession_t348500823;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t3943999495;
// System.Action`1<System.Collections.Generic.Dictionary`2<System.String,System.String>>
struct Action_1_t3745798877;
// GSN.Skill.Games.Common.Utils.TimeoutDispatcher
struct TimeoutDispatcher_t290349592;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Games.Common.Model.MockDataSafe
struct  MockDataSafe_t2873738597  : public Il2CppObject
{
public:
	// GSN.Skill.Games.Common.Model.IDataSafePlugin GSN.Skill.Games.Common.Model.MockDataSafe::gsPlugin
	Il2CppObject * ___gsPlugin_0;
	// GSN.Skill.Games.Common.Utils.IGameSession GSN.Skill.Games.Common.Model.MockDataSafe::gameSession
	Il2CppObject * ___gameSession_1;
	// System.Byte[] GSN.Skill.Games.Common.Model.MockDataSafe::request
	ByteU5BU5D_t3397334013* ___request_2;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> GSN.Skill.Games.Common.Model.MockDataSafe::response
	Dictionary_2_t3943999495 * ___response_3;
	// System.Action`1<System.Collections.Generic.Dictionary`2<System.String,System.String>> GSN.Skill.Games.Common.Model.MockDataSafe::doneAction
	Action_1_t3745798877 * ___doneAction_4;
	// GSN.Skill.Games.Common.Utils.TimeoutDispatcher GSN.Skill.Games.Common.Model.MockDataSafe::td
	TimeoutDispatcher_t290349592 * ___td_5;

public:
	inline static int32_t get_offset_of_gsPlugin_0() { return static_cast<int32_t>(offsetof(MockDataSafe_t2873738597, ___gsPlugin_0)); }
	inline Il2CppObject * get_gsPlugin_0() const { return ___gsPlugin_0; }
	inline Il2CppObject ** get_address_of_gsPlugin_0() { return &___gsPlugin_0; }
	inline void set_gsPlugin_0(Il2CppObject * value)
	{
		___gsPlugin_0 = value;
		Il2CppCodeGenWriteBarrier(&___gsPlugin_0, value);
	}

	inline static int32_t get_offset_of_gameSession_1() { return static_cast<int32_t>(offsetof(MockDataSafe_t2873738597, ___gameSession_1)); }
	inline Il2CppObject * get_gameSession_1() const { return ___gameSession_1; }
	inline Il2CppObject ** get_address_of_gameSession_1() { return &___gameSession_1; }
	inline void set_gameSession_1(Il2CppObject * value)
	{
		___gameSession_1 = value;
		Il2CppCodeGenWriteBarrier(&___gameSession_1, value);
	}

	inline static int32_t get_offset_of_request_2() { return static_cast<int32_t>(offsetof(MockDataSafe_t2873738597, ___request_2)); }
	inline ByteU5BU5D_t3397334013* get_request_2() const { return ___request_2; }
	inline ByteU5BU5D_t3397334013** get_address_of_request_2() { return &___request_2; }
	inline void set_request_2(ByteU5BU5D_t3397334013* value)
	{
		___request_2 = value;
		Il2CppCodeGenWriteBarrier(&___request_2, value);
	}

	inline static int32_t get_offset_of_response_3() { return static_cast<int32_t>(offsetof(MockDataSafe_t2873738597, ___response_3)); }
	inline Dictionary_2_t3943999495 * get_response_3() const { return ___response_3; }
	inline Dictionary_2_t3943999495 ** get_address_of_response_3() { return &___response_3; }
	inline void set_response_3(Dictionary_2_t3943999495 * value)
	{
		___response_3 = value;
		Il2CppCodeGenWriteBarrier(&___response_3, value);
	}

	inline static int32_t get_offset_of_doneAction_4() { return static_cast<int32_t>(offsetof(MockDataSafe_t2873738597, ___doneAction_4)); }
	inline Action_1_t3745798877 * get_doneAction_4() const { return ___doneAction_4; }
	inline Action_1_t3745798877 ** get_address_of_doneAction_4() { return &___doneAction_4; }
	inline void set_doneAction_4(Action_1_t3745798877 * value)
	{
		___doneAction_4 = value;
		Il2CppCodeGenWriteBarrier(&___doneAction_4, value);
	}

	inline static int32_t get_offset_of_td_5() { return static_cast<int32_t>(offsetof(MockDataSafe_t2873738597, ___td_5)); }
	inline TimeoutDispatcher_t290349592 * get_td_5() const { return ___td_5; }
	inline TimeoutDispatcher_t290349592 ** get_address_of_td_5() { return &___td_5; }
	inline void set_td_5(TimeoutDispatcher_t290349592 * value)
	{
		___td_5 = value;
		Il2CppCodeGenWriteBarrier(&___td_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
