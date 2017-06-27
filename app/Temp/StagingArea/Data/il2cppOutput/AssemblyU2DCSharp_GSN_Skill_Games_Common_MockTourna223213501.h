#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t3943999495;
// GSN.Skill.Games.Common.Utils.IGameSession
struct IGameSession_t348500823;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Games.Common.MockTournamentSessionData
struct  MockTournamentSessionData_t223213501  : public Il2CppObject
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.String> GSN.Skill.Games.Common.MockTournamentSessionData::_strings
	Dictionary_2_t3943999495 * ____strings_0;
	// GSN.Skill.Games.Common.Utils.IGameSession GSN.Skill.Games.Common.MockTournamentSessionData::_gameSession
	Il2CppObject * ____gameSession_1;
	// System.Int32 GSN.Skill.Games.Common.MockTournamentSessionData::<ClientCalculatedScore>k__BackingField
	int32_t ___U3CClientCalculatedScoreU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of__strings_0() { return static_cast<int32_t>(offsetof(MockTournamentSessionData_t223213501, ____strings_0)); }
	inline Dictionary_2_t3943999495 * get__strings_0() const { return ____strings_0; }
	inline Dictionary_2_t3943999495 ** get_address_of__strings_0() { return &____strings_0; }
	inline void set__strings_0(Dictionary_2_t3943999495 * value)
	{
		____strings_0 = value;
		Il2CppCodeGenWriteBarrier(&____strings_0, value);
	}

	inline static int32_t get_offset_of__gameSession_1() { return static_cast<int32_t>(offsetof(MockTournamentSessionData_t223213501, ____gameSession_1)); }
	inline Il2CppObject * get__gameSession_1() const { return ____gameSession_1; }
	inline Il2CppObject ** get_address_of__gameSession_1() { return &____gameSession_1; }
	inline void set__gameSession_1(Il2CppObject * value)
	{
		____gameSession_1 = value;
		Il2CppCodeGenWriteBarrier(&____gameSession_1, value);
	}

	inline static int32_t get_offset_of_U3CClientCalculatedScoreU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(MockTournamentSessionData_t223213501, ___U3CClientCalculatedScoreU3Ek__BackingField_2)); }
	inline int32_t get_U3CClientCalculatedScoreU3Ek__BackingField_2() const { return ___U3CClientCalculatedScoreU3Ek__BackingField_2; }
	inline int32_t* get_address_of_U3CClientCalculatedScoreU3Ek__BackingField_2() { return &___U3CClientCalculatedScoreU3Ek__BackingField_2; }
	inline void set_U3CClientCalculatedScoreU3Ek__BackingField_2(int32_t value)
	{
		___U3CClientCalculatedScoreU3Ek__BackingField_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
