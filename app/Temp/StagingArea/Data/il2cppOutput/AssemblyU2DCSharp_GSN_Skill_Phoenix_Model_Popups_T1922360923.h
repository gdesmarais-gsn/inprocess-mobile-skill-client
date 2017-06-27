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
// GSN.Skill.Phoenix.Model.Data.CurrentUser
struct CurrentUser_t3910039426;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Phoenix.Model.Popups.TournamentResultPopupModel
struct  TournamentResultPopupModel_t1922360923  : public Il2CppObject
{
public:
	// GSN.Skill.Phoenix.Model.Data.GameListData GSN.Skill.Phoenix.Model.Popups.TournamentResultPopupModel::_gameListData
	GameListData_t2961126766 * ____gameListData_0;
	// GSN.Skill.Phoenix.Model.Data.CurrentUser GSN.Skill.Phoenix.Model.Popups.TournamentResultPopupModel::_currentUser
	CurrentUser_t3910039426 * ____currentUser_1;
	// System.Int32 GSN.Skill.Phoenix.Model.Popups.TournamentResultPopupModel::_tournamentID
	int32_t ____tournamentID_2;

public:
	inline static int32_t get_offset_of__gameListData_0() { return static_cast<int32_t>(offsetof(TournamentResultPopupModel_t1922360923, ____gameListData_0)); }
	inline GameListData_t2961126766 * get__gameListData_0() const { return ____gameListData_0; }
	inline GameListData_t2961126766 ** get_address_of__gameListData_0() { return &____gameListData_0; }
	inline void set__gameListData_0(GameListData_t2961126766 * value)
	{
		____gameListData_0 = value;
		Il2CppCodeGenWriteBarrier(&____gameListData_0, value);
	}

	inline static int32_t get_offset_of__currentUser_1() { return static_cast<int32_t>(offsetof(TournamentResultPopupModel_t1922360923, ____currentUser_1)); }
	inline CurrentUser_t3910039426 * get__currentUser_1() const { return ____currentUser_1; }
	inline CurrentUser_t3910039426 ** get_address_of__currentUser_1() { return &____currentUser_1; }
	inline void set__currentUser_1(CurrentUser_t3910039426 * value)
	{
		____currentUser_1 = value;
		Il2CppCodeGenWriteBarrier(&____currentUser_1, value);
	}

	inline static int32_t get_offset_of__tournamentID_2() { return static_cast<int32_t>(offsetof(TournamentResultPopupModel_t1922360923, ____tournamentID_2)); }
	inline int32_t get__tournamentID_2() const { return ____tournamentID_2; }
	inline int32_t* get_address_of__tournamentID_2() { return &____tournamentID_2; }
	inline void set__tournamentID_2(int32_t value)
	{
		____tournamentID_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
