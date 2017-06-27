#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// GSN.Skill.Games.Common.Client.Game.ControllerBase
struct ControllerBase_t4247623737;

#include "AssemblyU2DCSharp_GSN_Skill_Games_Common_Client_Sin723570496.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Games.Common.Client.Game.GsnFramePump
struct  GsnFramePump_t2543118307  : public Singleton_1_t723570496
{
public:
	// GSN.Skill.Games.Common.Client.Game.ControllerBase GSN.Skill.Games.Common.Client.Game.GsnFramePump::_controller
	ControllerBase_t4247623737 * ____controller_1;
	// System.Int64 GSN.Skill.Games.Common.Client.Game.GsnFramePump::_tZero
	int64_t ____tZero_2;
	// System.Int32 GSN.Skill.Games.Common.Client.Game.GsnFramePump::_virtualFrameTime
	int32_t ____virtualFrameTime_3;
	// System.Int32 GSN.Skill.Games.Common.Client.Game.GsnFramePump::_pausedTime
	int32_t ____pausedTime_4;
	// System.Int32 GSN.Skill.Games.Common.Client.Game.GsnFramePump::_timePausedAt
	int32_t ____timePausedAt_5;
	// System.Int32 GSN.Skill.Games.Common.Client.Game.GsnFramePump::_totalTimePaused
	int32_t ____totalTimePaused_6;
	// System.Int32 GSN.Skill.Games.Common.Client.Game.GsnFramePump::_pauseCount
	int32_t ____pauseCount_7;

public:
	inline static int32_t get_offset_of__controller_1() { return static_cast<int32_t>(offsetof(GsnFramePump_t2543118307, ____controller_1)); }
	inline ControllerBase_t4247623737 * get__controller_1() const { return ____controller_1; }
	inline ControllerBase_t4247623737 ** get_address_of__controller_1() { return &____controller_1; }
	inline void set__controller_1(ControllerBase_t4247623737 * value)
	{
		____controller_1 = value;
		Il2CppCodeGenWriteBarrier(&____controller_1, value);
	}

	inline static int32_t get_offset_of__tZero_2() { return static_cast<int32_t>(offsetof(GsnFramePump_t2543118307, ____tZero_2)); }
	inline int64_t get__tZero_2() const { return ____tZero_2; }
	inline int64_t* get_address_of__tZero_2() { return &____tZero_2; }
	inline void set__tZero_2(int64_t value)
	{
		____tZero_2 = value;
	}

	inline static int32_t get_offset_of__virtualFrameTime_3() { return static_cast<int32_t>(offsetof(GsnFramePump_t2543118307, ____virtualFrameTime_3)); }
	inline int32_t get__virtualFrameTime_3() const { return ____virtualFrameTime_3; }
	inline int32_t* get_address_of__virtualFrameTime_3() { return &____virtualFrameTime_3; }
	inline void set__virtualFrameTime_3(int32_t value)
	{
		____virtualFrameTime_3 = value;
	}

	inline static int32_t get_offset_of__pausedTime_4() { return static_cast<int32_t>(offsetof(GsnFramePump_t2543118307, ____pausedTime_4)); }
	inline int32_t get__pausedTime_4() const { return ____pausedTime_4; }
	inline int32_t* get_address_of__pausedTime_4() { return &____pausedTime_4; }
	inline void set__pausedTime_4(int32_t value)
	{
		____pausedTime_4 = value;
	}

	inline static int32_t get_offset_of__timePausedAt_5() { return static_cast<int32_t>(offsetof(GsnFramePump_t2543118307, ____timePausedAt_5)); }
	inline int32_t get__timePausedAt_5() const { return ____timePausedAt_5; }
	inline int32_t* get_address_of__timePausedAt_5() { return &____timePausedAt_5; }
	inline void set__timePausedAt_5(int32_t value)
	{
		____timePausedAt_5 = value;
	}

	inline static int32_t get_offset_of__totalTimePaused_6() { return static_cast<int32_t>(offsetof(GsnFramePump_t2543118307, ____totalTimePaused_6)); }
	inline int32_t get__totalTimePaused_6() const { return ____totalTimePaused_6; }
	inline int32_t* get_address_of__totalTimePaused_6() { return &____totalTimePaused_6; }
	inline void set__totalTimePaused_6(int32_t value)
	{
		____totalTimePaused_6 = value;
	}

	inline static int32_t get_offset_of__pauseCount_7() { return static_cast<int32_t>(offsetof(GsnFramePump_t2543118307, ____pauseCount_7)); }
	inline int32_t get__pauseCount_7() const { return ____pauseCount_7; }
	inline int32_t* get_address_of__pauseCount_7() { return &____pauseCount_7; }
	inline void set__pauseCount_7(int32_t value)
	{
		____pauseCount_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
