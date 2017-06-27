#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.Dictionary`2<System.Int32,GSN.Skill.Phoenix.Model.Data.GameData>
struct Dictionary_2_t851639555;
// System.Collections.Generic.HashSet`1<System.Int32>
struct HashSet_1_t405338302;
// GSN.Skill.Phoenix.Requests.Tournament.ListGameTypesRequestData
struct ListGameTypesRequestData_t3554081872;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Phoenix.Model.Data.GameListData
struct  GameListData_t2961126766  : public Il2CppObject
{
public:
	// System.Collections.Generic.Dictionary`2<System.Int32,GSN.Skill.Phoenix.Model.Data.GameData> GSN.Skill.Phoenix.Model.Data.GameListData::gameData
	Dictionary_2_t851639555 * ___gameData_0;
	// System.Collections.Generic.HashSet`1<System.Int32> GSN.Skill.Phoenix.Model.Data.GameListData::_unsupportedPhoenixGames
	HashSet_1_t405338302 * ____unsupportedPhoenixGames_1;
	// GSN.Skill.Phoenix.Requests.Tournament.ListGameTypesRequestData GSN.Skill.Phoenix.Model.Data.GameListData::_gameListData
	ListGameTypesRequestData_t3554081872 * ____gameListData_2;
	// System.Int32 GSN.Skill.Phoenix.Model.Data.GameListData::_usersCurrentGameID
	int32_t ____usersCurrentGameID_3;

public:
	inline static int32_t get_offset_of_gameData_0() { return static_cast<int32_t>(offsetof(GameListData_t2961126766, ___gameData_0)); }
	inline Dictionary_2_t851639555 * get_gameData_0() const { return ___gameData_0; }
	inline Dictionary_2_t851639555 ** get_address_of_gameData_0() { return &___gameData_0; }
	inline void set_gameData_0(Dictionary_2_t851639555 * value)
	{
		___gameData_0 = value;
		Il2CppCodeGenWriteBarrier(&___gameData_0, value);
	}

	inline static int32_t get_offset_of__unsupportedPhoenixGames_1() { return static_cast<int32_t>(offsetof(GameListData_t2961126766, ____unsupportedPhoenixGames_1)); }
	inline HashSet_1_t405338302 * get__unsupportedPhoenixGames_1() const { return ____unsupportedPhoenixGames_1; }
	inline HashSet_1_t405338302 ** get_address_of__unsupportedPhoenixGames_1() { return &____unsupportedPhoenixGames_1; }
	inline void set__unsupportedPhoenixGames_1(HashSet_1_t405338302 * value)
	{
		____unsupportedPhoenixGames_1 = value;
		Il2CppCodeGenWriteBarrier(&____unsupportedPhoenixGames_1, value);
	}

	inline static int32_t get_offset_of__gameListData_2() { return static_cast<int32_t>(offsetof(GameListData_t2961126766, ____gameListData_2)); }
	inline ListGameTypesRequestData_t3554081872 * get__gameListData_2() const { return ____gameListData_2; }
	inline ListGameTypesRequestData_t3554081872 ** get_address_of__gameListData_2() { return &____gameListData_2; }
	inline void set__gameListData_2(ListGameTypesRequestData_t3554081872 * value)
	{
		____gameListData_2 = value;
		Il2CppCodeGenWriteBarrier(&____gameListData_2, value);
	}

	inline static int32_t get_offset_of__usersCurrentGameID_3() { return static_cast<int32_t>(offsetof(GameListData_t2961126766, ____usersCurrentGameID_3)); }
	inline int32_t get__usersCurrentGameID_3() const { return ____usersCurrentGameID_3; }
	inline int32_t* get_address_of__usersCurrentGameID_3() { return &____usersCurrentGameID_3; }
	inline void set__usersCurrentGameID_3(int32_t value)
	{
		____usersCurrentGameID_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
