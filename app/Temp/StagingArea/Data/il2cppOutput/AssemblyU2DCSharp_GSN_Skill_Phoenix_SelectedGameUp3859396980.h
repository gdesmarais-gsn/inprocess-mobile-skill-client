#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "mscorlib_System_Object2689449295.h"
#include "AssemblyU2DCSharp_GSN_Skill_Phoenix_Model_Data_Gam1843813920.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Phoenix.SelectedGameUpdateEvent
struct  SelectedGameUpdateEvent_t3859396980  : public Il2CppObject
{
public:
	// GSN.Skill.Phoenix.Model.Data.GameData GSN.Skill.Phoenix.SelectedGameUpdateEvent::selectedGame
	GameData_t1843813920  ___selectedGame_0;

public:
	inline static int32_t get_offset_of_selectedGame_0() { return static_cast<int32_t>(offsetof(SelectedGameUpdateEvent_t3859396980, ___selectedGame_0)); }
	inline GameData_t1843813920  get_selectedGame_0() const { return ___selectedGame_0; }
	inline GameData_t1843813920 * get_address_of_selectedGame_0() { return &___selectedGame_0; }
	inline void set_selectedGame_0(GameData_t1843813920  value)
	{
		___selectedGame_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
