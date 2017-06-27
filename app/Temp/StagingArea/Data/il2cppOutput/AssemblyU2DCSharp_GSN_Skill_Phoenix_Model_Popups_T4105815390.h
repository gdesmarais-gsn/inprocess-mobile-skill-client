#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "mscorlib_System_Object2689449295.h"
#include "AssemblyU2DCSharp_GSN_Skill_Phoenix_TournamentListE614597255.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Phoenix.Model.Popups.TournamentDetailsPopupModel
struct  TournamentDetailsPopupModel_t4105815390  : public Il2CppObject
{
public:
	// GSN.Skill.Phoenix.TournamentListEvent/TournamentData GSN.Skill.Phoenix.Model.Popups.TournamentDetailsPopupModel::_tournData
	TournamentData_t614597255  ____tournData_0;
	// System.Int32 GSN.Skill.Phoenix.Model.Popups.TournamentDetailsPopupModel::_totalCashGamePlays
	int32_t ____totalCashGamePlays_1;
	// System.Int32 GSN.Skill.Phoenix.Model.Popups.TournamentDetailsPopupModel::_totalSpecificGamePlays
	int32_t ____totalSpecificGamePlays_2;

public:
	inline static int32_t get_offset_of__tournData_0() { return static_cast<int32_t>(offsetof(TournamentDetailsPopupModel_t4105815390, ____tournData_0)); }
	inline TournamentData_t614597255  get__tournData_0() const { return ____tournData_0; }
	inline TournamentData_t614597255 * get_address_of__tournData_0() { return &____tournData_0; }
	inline void set__tournData_0(TournamentData_t614597255  value)
	{
		____tournData_0 = value;
	}

	inline static int32_t get_offset_of__totalCashGamePlays_1() { return static_cast<int32_t>(offsetof(TournamentDetailsPopupModel_t4105815390, ____totalCashGamePlays_1)); }
	inline int32_t get__totalCashGamePlays_1() const { return ____totalCashGamePlays_1; }
	inline int32_t* get_address_of__totalCashGamePlays_1() { return &____totalCashGamePlays_1; }
	inline void set__totalCashGamePlays_1(int32_t value)
	{
		____totalCashGamePlays_1 = value;
	}

	inline static int32_t get_offset_of__totalSpecificGamePlays_2() { return static_cast<int32_t>(offsetof(TournamentDetailsPopupModel_t4105815390, ____totalSpecificGamePlays_2)); }
	inline int32_t get__totalSpecificGamePlays_2() const { return ____totalSpecificGamePlays_2; }
	inline int32_t* get_address_of__totalSpecificGamePlays_2() { return &____totalSpecificGamePlays_2; }
	inline void set__totalSpecificGamePlays_2(int32_t value)
	{
		____totalSpecificGamePlays_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
