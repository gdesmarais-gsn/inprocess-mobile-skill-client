#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// GSN.Skill.Phoenix.Model.Data.GameListData
struct GameListData_t2961126766;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Phoenix.Model.Screens.HomeScreenModel
struct  HomeScreenModel_t2376270550  : public Il2CppObject
{
public:
	// GSN.Skill.Phoenix.Model.Data.GameListData GSN.Skill.Phoenix.Model.Screens.HomeScreenModel::_gameListData
	GameListData_t2961126766 * ____gameListData_0;

public:
	inline static int32_t get_offset_of__gameListData_0() { return static_cast<int32_t>(offsetof(HomeScreenModel_t2376270550, ____gameListData_0)); }
	inline GameListData_t2961126766 * get__gameListData_0() const { return ____gameListData_0; }
	inline GameListData_t2961126766 ** get_address_of__gameListData_0() { return &____gameListData_0; }
	inline void set__gameListData_0(GameListData_t2961126766 * value)
	{
		____gameListData_0 = value;
		Il2CppCodeGenWriteBarrier(&____gameListData_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
