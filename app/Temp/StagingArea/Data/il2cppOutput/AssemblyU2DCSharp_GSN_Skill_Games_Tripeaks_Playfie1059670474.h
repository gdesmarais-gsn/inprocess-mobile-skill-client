#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// OBB2D
struct OBB2D_t437233951;

#include "AssemblyU2DCSharp_GSN_Skill_Games_Tripeaks_BaseCard423020963.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "UnityEngine_UnityEngine_Quaternion4030073918.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Games.Tripeaks.PlayfieldData/CardData
struct  CardData_t1059670474  : public BaseCardData_t423020963
{
public:
	// UnityEngine.Vector3 GSN.Skill.Games.Tripeaks.PlayfieldData/CardData::cardPos
	Vector3_t2243707580  ___cardPos_8;
	// UnityEngine.Quaternion GSN.Skill.Games.Tripeaks.PlayfieldData/CardData::cardRot
	Quaternion_t4030073918  ___cardRot_9;
	// OBB2D GSN.Skill.Games.Tripeaks.PlayfieldData/CardData::obb
	OBB2D_t437233951 * ___obb_10;

public:
	inline static int32_t get_offset_of_cardPos_8() { return static_cast<int32_t>(offsetof(CardData_t1059670474, ___cardPos_8)); }
	inline Vector3_t2243707580  get_cardPos_8() const { return ___cardPos_8; }
	inline Vector3_t2243707580 * get_address_of_cardPos_8() { return &___cardPos_8; }
	inline void set_cardPos_8(Vector3_t2243707580  value)
	{
		___cardPos_8 = value;
	}

	inline static int32_t get_offset_of_cardRot_9() { return static_cast<int32_t>(offsetof(CardData_t1059670474, ___cardRot_9)); }
	inline Quaternion_t4030073918  get_cardRot_9() const { return ___cardRot_9; }
	inline Quaternion_t4030073918 * get_address_of_cardRot_9() { return &___cardRot_9; }
	inline void set_cardRot_9(Quaternion_t4030073918  value)
	{
		___cardRot_9 = value;
	}

	inline static int32_t get_offset_of_obb_10() { return static_cast<int32_t>(offsetof(CardData_t1059670474, ___obb_10)); }
	inline OBB2D_t437233951 * get_obb_10() const { return ___obb_10; }
	inline OBB2D_t437233951 ** get_address_of_obb_10() { return &___obb_10; }
	inline void set_obb_10(OBB2D_t437233951 * value)
	{
		___obb_10 = value;
		Il2CppCodeGenWriteBarrier(&___obb_10, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
