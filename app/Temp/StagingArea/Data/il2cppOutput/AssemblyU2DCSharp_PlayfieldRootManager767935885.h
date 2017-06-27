#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// GSN.Skill.Games.Tripeaks.PlayfieldDataDB
struct PlayfieldDataDB_t137008370;
// PlayfieldRoot[]
struct PlayfieldRootU5BU5D_t234799327;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayfieldRootManager
struct  PlayfieldRootManager_t767935885  : public MonoBehaviour_t1158329972
{
public:
	// GSN.Skill.Games.Tripeaks.PlayfieldDataDB PlayfieldRootManager::myDB
	PlayfieldDataDB_t137008370 * ___myDB_2;
	// PlayfieldRoot[] PlayfieldRootManager::PlayfieldRootDB
	PlayfieldRootU5BU5D_t234799327* ___PlayfieldRootDB_3;

public:
	inline static int32_t get_offset_of_myDB_2() { return static_cast<int32_t>(offsetof(PlayfieldRootManager_t767935885, ___myDB_2)); }
	inline PlayfieldDataDB_t137008370 * get_myDB_2() const { return ___myDB_2; }
	inline PlayfieldDataDB_t137008370 ** get_address_of_myDB_2() { return &___myDB_2; }
	inline void set_myDB_2(PlayfieldDataDB_t137008370 * value)
	{
		___myDB_2 = value;
		Il2CppCodeGenWriteBarrier(&___myDB_2, value);
	}

	inline static int32_t get_offset_of_PlayfieldRootDB_3() { return static_cast<int32_t>(offsetof(PlayfieldRootManager_t767935885, ___PlayfieldRootDB_3)); }
	inline PlayfieldRootU5BU5D_t234799327* get_PlayfieldRootDB_3() const { return ___PlayfieldRootDB_3; }
	inline PlayfieldRootU5BU5D_t234799327** get_address_of_PlayfieldRootDB_3() { return &___PlayfieldRootDB_3; }
	inline void set_PlayfieldRootDB_3(PlayfieldRootU5BU5D_t234799327* value)
	{
		___PlayfieldRootDB_3 = value;
		Il2CppCodeGenWriteBarrier(&___PlayfieldRootDB_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
