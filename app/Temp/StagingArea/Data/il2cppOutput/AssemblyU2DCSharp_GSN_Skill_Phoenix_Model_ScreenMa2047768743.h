#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// GSN.Skill.Phoenix.Model.Screens.GameHistoryScreenModel
struct GameHistoryScreenModel_t2520348191;
// GSN.Skill.Phoenix.Model.Screens.TournamentSelectScreenModel
struct TournamentSelectScreenModel_t2189310134;
// GSN.Skill.Phoenix.Model.Screens.HomeScreenModel
struct HomeScreenModel_t2376270550;
// GSN.Skill.Phoenix.Model.Screens.IScreenModel
struct IScreenModel_t3835223902;

#include "mscorlib_System_Object2689449295.h"
#include "AssemblyU2DCSharp_GSN_Skill_Phoenix_Model_ScreenTy4085852022.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Phoenix.Model.ScreenManager
struct  ScreenManager_t2047768743  : public Il2CppObject
{
public:
	// GSN.Skill.Phoenix.Model.Screens.GameHistoryScreenModel GSN.Skill.Phoenix.Model.ScreenManager::<gameHistoryScreen>k__BackingField
	GameHistoryScreenModel_t2520348191 * ___U3CgameHistoryScreenU3Ek__BackingField_0;
	// GSN.Skill.Phoenix.Model.Screens.TournamentSelectScreenModel GSN.Skill.Phoenix.Model.ScreenManager::<tournamentSelectScreen>k__BackingField
	TournamentSelectScreenModel_t2189310134 * ___U3CtournamentSelectScreenU3Ek__BackingField_1;
	// GSN.Skill.Phoenix.Model.Screens.HomeScreenModel GSN.Skill.Phoenix.Model.ScreenManager::_homeScreen
	HomeScreenModel_t2376270550 * ____homeScreen_2;
	// GSN.Skill.Phoenix.Model.Screens.IScreenModel GSN.Skill.Phoenix.Model.ScreenManager::_currentScreen
	Il2CppObject * ____currentScreen_3;
	// GSN.Skill.Phoenix.Model.ScreenType GSN.Skill.Phoenix.Model.ScreenManager::_currentScreenType
	int32_t ____currentScreenType_4;

public:
	inline static int32_t get_offset_of_U3CgameHistoryScreenU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(ScreenManager_t2047768743, ___U3CgameHistoryScreenU3Ek__BackingField_0)); }
	inline GameHistoryScreenModel_t2520348191 * get_U3CgameHistoryScreenU3Ek__BackingField_0() const { return ___U3CgameHistoryScreenU3Ek__BackingField_0; }
	inline GameHistoryScreenModel_t2520348191 ** get_address_of_U3CgameHistoryScreenU3Ek__BackingField_0() { return &___U3CgameHistoryScreenU3Ek__BackingField_0; }
	inline void set_U3CgameHistoryScreenU3Ek__BackingField_0(GameHistoryScreenModel_t2520348191 * value)
	{
		___U3CgameHistoryScreenU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier(&___U3CgameHistoryScreenU3Ek__BackingField_0, value);
	}

	inline static int32_t get_offset_of_U3CtournamentSelectScreenU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(ScreenManager_t2047768743, ___U3CtournamentSelectScreenU3Ek__BackingField_1)); }
	inline TournamentSelectScreenModel_t2189310134 * get_U3CtournamentSelectScreenU3Ek__BackingField_1() const { return ___U3CtournamentSelectScreenU3Ek__BackingField_1; }
	inline TournamentSelectScreenModel_t2189310134 ** get_address_of_U3CtournamentSelectScreenU3Ek__BackingField_1() { return &___U3CtournamentSelectScreenU3Ek__BackingField_1; }
	inline void set_U3CtournamentSelectScreenU3Ek__BackingField_1(TournamentSelectScreenModel_t2189310134 * value)
	{
		___U3CtournamentSelectScreenU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier(&___U3CtournamentSelectScreenU3Ek__BackingField_1, value);
	}

	inline static int32_t get_offset_of__homeScreen_2() { return static_cast<int32_t>(offsetof(ScreenManager_t2047768743, ____homeScreen_2)); }
	inline HomeScreenModel_t2376270550 * get__homeScreen_2() const { return ____homeScreen_2; }
	inline HomeScreenModel_t2376270550 ** get_address_of__homeScreen_2() { return &____homeScreen_2; }
	inline void set__homeScreen_2(HomeScreenModel_t2376270550 * value)
	{
		____homeScreen_2 = value;
		Il2CppCodeGenWriteBarrier(&____homeScreen_2, value);
	}

	inline static int32_t get_offset_of__currentScreen_3() { return static_cast<int32_t>(offsetof(ScreenManager_t2047768743, ____currentScreen_3)); }
	inline Il2CppObject * get__currentScreen_3() const { return ____currentScreen_3; }
	inline Il2CppObject ** get_address_of__currentScreen_3() { return &____currentScreen_3; }
	inline void set__currentScreen_3(Il2CppObject * value)
	{
		____currentScreen_3 = value;
		Il2CppCodeGenWriteBarrier(&____currentScreen_3, value);
	}

	inline static int32_t get_offset_of__currentScreenType_4() { return static_cast<int32_t>(offsetof(ScreenManager_t2047768743, ____currentScreenType_4)); }
	inline int32_t get__currentScreenType_4() const { return ____currentScreenType_4; }
	inline int32_t* get_address_of__currentScreenType_4() { return &____currentScreenType_4; }
	inline void set__currentScreenType_4(int32_t value)
	{
		____currentScreenType_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
