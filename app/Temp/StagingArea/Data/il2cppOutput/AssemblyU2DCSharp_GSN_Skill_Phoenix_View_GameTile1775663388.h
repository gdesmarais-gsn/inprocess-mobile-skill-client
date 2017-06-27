#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.UI.Button
struct Button_t2872111280;

#include "AssemblyU2DCSharp_GSN_Skill_Phoenix_View_BaseView2538946938.h"
#include "AssemblyU2DCSharp_GSN_Skill_Phoenix_Model_Data_Gam1843813920.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Phoenix.View.GameTile
struct  GameTile_t1775663388  : public BaseView_t2538946938
{
public:
	// UnityEngine.UI.Button GSN.Skill.Phoenix.View.GameTile::_gameTileButton
	Button_t2872111280 * ____gameTileButton_5;
	// GSN.Skill.Phoenix.Model.Data.GameData GSN.Skill.Phoenix.View.GameTile::gameData
	GameData_t1843813920  ___gameData_6;

public:
	inline static int32_t get_offset_of__gameTileButton_5() { return static_cast<int32_t>(offsetof(GameTile_t1775663388, ____gameTileButton_5)); }
	inline Button_t2872111280 * get__gameTileButton_5() const { return ____gameTileButton_5; }
	inline Button_t2872111280 ** get_address_of__gameTileButton_5() { return &____gameTileButton_5; }
	inline void set__gameTileButton_5(Button_t2872111280 * value)
	{
		____gameTileButton_5 = value;
		Il2CppCodeGenWriteBarrier(&____gameTileButton_5, value);
	}

	inline static int32_t get_offset_of_gameData_6() { return static_cast<int32_t>(offsetof(GameTile_t1775663388, ___gameData_6)); }
	inline GameData_t1843813920  get_gameData_6() const { return ___gameData_6; }
	inline GameData_t1843813920 * get_address_of_gameData_6() { return &___gameData_6; }
	inline void set_gameData_6(GameData_t1843813920  value)
	{
		___gameData_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
