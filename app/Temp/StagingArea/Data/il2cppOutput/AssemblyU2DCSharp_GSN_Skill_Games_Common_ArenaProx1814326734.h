#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// GSN.Skill.Games.Common.MockTournamentSessionData
struct MockTournamentSessionData_t223213501;
// GSN.Skill.Games.Common.Utils.IGameSession
struct IGameSession_t348500823;
// GSN.Skill.Games.Common.Utils.IDataSafe
struct IDataSafe_t659114092;
// System.Action
struct Action_t3226471752;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Games.Common.ArenaProxy/MockArenaProxy
struct  MockArenaProxy_t1814326734  : public Il2CppObject
{
public:
	// GSN.Skill.Games.Common.MockTournamentSessionData GSN.Skill.Games.Common.ArenaProxy/MockArenaProxy::_mockTournamentSessionData
	MockTournamentSessionData_t223213501 * ____mockTournamentSessionData_0;
	// GSN.Skill.Games.Common.Utils.IGameSession GSN.Skill.Games.Common.ArenaProxy/MockArenaProxy::_gameSession
	Il2CppObject * ____gameSession_1;
	// GSN.Skill.Games.Common.Utils.IDataSafe GSN.Skill.Games.Common.ArenaProxy/MockArenaProxy::_dataSafe
	Il2CppObject * ____dataSafe_2;
	// System.Action GSN.Skill.Games.Common.ArenaProxy/MockArenaProxy::_returnFromGame
	Action_t3226471752 * ____returnFromGame_3;

public:
	inline static int32_t get_offset_of__mockTournamentSessionData_0() { return static_cast<int32_t>(offsetof(MockArenaProxy_t1814326734, ____mockTournamentSessionData_0)); }
	inline MockTournamentSessionData_t223213501 * get__mockTournamentSessionData_0() const { return ____mockTournamentSessionData_0; }
	inline MockTournamentSessionData_t223213501 ** get_address_of__mockTournamentSessionData_0() { return &____mockTournamentSessionData_0; }
	inline void set__mockTournamentSessionData_0(MockTournamentSessionData_t223213501 * value)
	{
		____mockTournamentSessionData_0 = value;
		Il2CppCodeGenWriteBarrier(&____mockTournamentSessionData_0, value);
	}

	inline static int32_t get_offset_of__gameSession_1() { return static_cast<int32_t>(offsetof(MockArenaProxy_t1814326734, ____gameSession_1)); }
	inline Il2CppObject * get__gameSession_1() const { return ____gameSession_1; }
	inline Il2CppObject ** get_address_of__gameSession_1() { return &____gameSession_1; }
	inline void set__gameSession_1(Il2CppObject * value)
	{
		____gameSession_1 = value;
		Il2CppCodeGenWriteBarrier(&____gameSession_1, value);
	}

	inline static int32_t get_offset_of__dataSafe_2() { return static_cast<int32_t>(offsetof(MockArenaProxy_t1814326734, ____dataSafe_2)); }
	inline Il2CppObject * get__dataSafe_2() const { return ____dataSafe_2; }
	inline Il2CppObject ** get_address_of__dataSafe_2() { return &____dataSafe_2; }
	inline void set__dataSafe_2(Il2CppObject * value)
	{
		____dataSafe_2 = value;
		Il2CppCodeGenWriteBarrier(&____dataSafe_2, value);
	}

	inline static int32_t get_offset_of__returnFromGame_3() { return static_cast<int32_t>(offsetof(MockArenaProxy_t1814326734, ____returnFromGame_3)); }
	inline Action_t3226471752 * get__returnFromGame_3() const { return ____returnFromGame_3; }
	inline Action_t3226471752 ** get_address_of__returnFromGame_3() { return &____returnFromGame_3; }
	inline void set__returnFromGame_3(Action_t3226471752 * value)
	{
		____returnFromGame_3 = value;
		Il2CppCodeGenWriteBarrier(&____returnFromGame_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
