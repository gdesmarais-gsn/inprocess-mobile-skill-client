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
// GSN.Skill.Phoenix.Requests.Tournament.ListFlavorsRequestData
struct ListFlavorsRequestData_t34547778;
// System.Collections.Generic.HashSet`1<GSN.Skill.Phoenix.Requests.Tournament.AuxDataType>
struct HashSet_1_t3958962796;
// System.Collections.Generic.Dictionary`2<System.Int32,GSN.Skill.Phoenix.TournamentListEvent/TournamentData>
struct Dictionary_2_t3917390186;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Phoenix.Model.Screens.TournamentSelectScreenModel
struct  TournamentSelectScreenModel_t2189310134  : public Il2CppObject
{
public:
	// GSN.Skill.Phoenix.Model.Data.GameListData GSN.Skill.Phoenix.Model.Screens.TournamentSelectScreenModel::_gameListData
	GameListData_t2961126766 * ____gameListData_0;
	// GSN.Skill.Phoenix.Requests.Tournament.ListFlavorsRequestData GSN.Skill.Phoenix.Model.Screens.TournamentSelectScreenModel::_listFlavor
	ListFlavorsRequestData_t34547778 * ____listFlavor_1;
	// System.Collections.Generic.HashSet`1<GSN.Skill.Phoenix.Requests.Tournament.AuxDataType> GSN.Skill.Phoenix.Model.Screens.TournamentSelectScreenModel::_supportedAuxDataTypes
	HashSet_1_t3958962796 * ____supportedAuxDataTypes_2;
	// System.Collections.Generic.Dictionary`2<System.Int32,GSN.Skill.Phoenix.TournamentListEvent/TournamentData> GSN.Skill.Phoenix.Model.Screens.TournamentSelectScreenModel::_tournData
	Dictionary_2_t3917390186 * ____tournData_3;

public:
	inline static int32_t get_offset_of__gameListData_0() { return static_cast<int32_t>(offsetof(TournamentSelectScreenModel_t2189310134, ____gameListData_0)); }
	inline GameListData_t2961126766 * get__gameListData_0() const { return ____gameListData_0; }
	inline GameListData_t2961126766 ** get_address_of__gameListData_0() { return &____gameListData_0; }
	inline void set__gameListData_0(GameListData_t2961126766 * value)
	{
		____gameListData_0 = value;
		Il2CppCodeGenWriteBarrier(&____gameListData_0, value);
	}

	inline static int32_t get_offset_of__listFlavor_1() { return static_cast<int32_t>(offsetof(TournamentSelectScreenModel_t2189310134, ____listFlavor_1)); }
	inline ListFlavorsRequestData_t34547778 * get__listFlavor_1() const { return ____listFlavor_1; }
	inline ListFlavorsRequestData_t34547778 ** get_address_of__listFlavor_1() { return &____listFlavor_1; }
	inline void set__listFlavor_1(ListFlavorsRequestData_t34547778 * value)
	{
		____listFlavor_1 = value;
		Il2CppCodeGenWriteBarrier(&____listFlavor_1, value);
	}

	inline static int32_t get_offset_of__supportedAuxDataTypes_2() { return static_cast<int32_t>(offsetof(TournamentSelectScreenModel_t2189310134, ____supportedAuxDataTypes_2)); }
	inline HashSet_1_t3958962796 * get__supportedAuxDataTypes_2() const { return ____supportedAuxDataTypes_2; }
	inline HashSet_1_t3958962796 ** get_address_of__supportedAuxDataTypes_2() { return &____supportedAuxDataTypes_2; }
	inline void set__supportedAuxDataTypes_2(HashSet_1_t3958962796 * value)
	{
		____supportedAuxDataTypes_2 = value;
		Il2CppCodeGenWriteBarrier(&____supportedAuxDataTypes_2, value);
	}

	inline static int32_t get_offset_of__tournData_3() { return static_cast<int32_t>(offsetof(TournamentSelectScreenModel_t2189310134, ____tournData_3)); }
	inline Dictionary_2_t3917390186 * get__tournData_3() const { return ____tournData_3; }
	inline Dictionary_2_t3917390186 ** get_address_of__tournData_3() { return &____tournData_3; }
	inline void set__tournData_3(Dictionary_2_t3917390186 * value)
	{
		____tournData_3 = value;
		Il2CppCodeGenWriteBarrier(&____tournData_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
