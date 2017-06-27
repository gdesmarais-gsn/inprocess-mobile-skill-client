#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// TMPro.TextMeshPro
struct TextMeshPro_t2521834357;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t3057952154;
// System.String
struct String_t;

#include "AssemblyU2DCSharp_GSN_Skill_Games_Tripeaks_Hazard1547505166.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Games.Tripeaks.DynamiteHazard
struct  DynamiteHazard_t3784712259  : public Hazard_t1547505166
{
public:
	// TMPro.TextMeshPro GSN.Skill.Games.Tripeaks.DynamiteHazard::_textMesh
	TextMeshPro_t2521834357 * ____textMesh_8;
	// UnityEngine.GameObject GSN.Skill.Games.Tripeaks.DynamiteHazard::_revealObject
	GameObject_t1756533147 * ____revealObject_9;
	// UnityEngine.GameObject[] GSN.Skill.Games.Tripeaks.DynamiteHazard::_fillObjects
	GameObjectU5BU5D_t3057952154* ____fillObjects_10;
	// UnityEngine.GameObject GSN.Skill.Games.Tripeaks.DynamiteHazard::_bombEffect
	GameObject_t1756533147 * ____bombEffect_11;
	// System.Single GSN.Skill.Games.Tripeaks.DynamiteHazard::_anglePerFillObject
	float ____anglePerFillObject_12;
	// System.Single GSN.Skill.Games.Tripeaks.DynamiteHazard::_lastAngle
	float ____lastAngle_13;
	// System.Int32 GSN.Skill.Games.Tripeaks.DynamiteHazard::_startCounterValue
	int32_t ____startCounterValue_14;
	// System.Int32 GSN.Skill.Games.Tripeaks.DynamiteHazard::_lastCounterValue
	int32_t ____lastCounterValue_15;

public:
	inline static int32_t get_offset_of__textMesh_8() { return static_cast<int32_t>(offsetof(DynamiteHazard_t3784712259, ____textMesh_8)); }
	inline TextMeshPro_t2521834357 * get__textMesh_8() const { return ____textMesh_8; }
	inline TextMeshPro_t2521834357 ** get_address_of__textMesh_8() { return &____textMesh_8; }
	inline void set__textMesh_8(TextMeshPro_t2521834357 * value)
	{
		____textMesh_8 = value;
		Il2CppCodeGenWriteBarrier(&____textMesh_8, value);
	}

	inline static int32_t get_offset_of__revealObject_9() { return static_cast<int32_t>(offsetof(DynamiteHazard_t3784712259, ____revealObject_9)); }
	inline GameObject_t1756533147 * get__revealObject_9() const { return ____revealObject_9; }
	inline GameObject_t1756533147 ** get_address_of__revealObject_9() { return &____revealObject_9; }
	inline void set__revealObject_9(GameObject_t1756533147 * value)
	{
		____revealObject_9 = value;
		Il2CppCodeGenWriteBarrier(&____revealObject_9, value);
	}

	inline static int32_t get_offset_of__fillObjects_10() { return static_cast<int32_t>(offsetof(DynamiteHazard_t3784712259, ____fillObjects_10)); }
	inline GameObjectU5BU5D_t3057952154* get__fillObjects_10() const { return ____fillObjects_10; }
	inline GameObjectU5BU5D_t3057952154** get_address_of__fillObjects_10() { return &____fillObjects_10; }
	inline void set__fillObjects_10(GameObjectU5BU5D_t3057952154* value)
	{
		____fillObjects_10 = value;
		Il2CppCodeGenWriteBarrier(&____fillObjects_10, value);
	}

	inline static int32_t get_offset_of__bombEffect_11() { return static_cast<int32_t>(offsetof(DynamiteHazard_t3784712259, ____bombEffect_11)); }
	inline GameObject_t1756533147 * get__bombEffect_11() const { return ____bombEffect_11; }
	inline GameObject_t1756533147 ** get_address_of__bombEffect_11() { return &____bombEffect_11; }
	inline void set__bombEffect_11(GameObject_t1756533147 * value)
	{
		____bombEffect_11 = value;
		Il2CppCodeGenWriteBarrier(&____bombEffect_11, value);
	}

	inline static int32_t get_offset_of__anglePerFillObject_12() { return static_cast<int32_t>(offsetof(DynamiteHazard_t3784712259, ____anglePerFillObject_12)); }
	inline float get__anglePerFillObject_12() const { return ____anglePerFillObject_12; }
	inline float* get_address_of__anglePerFillObject_12() { return &____anglePerFillObject_12; }
	inline void set__anglePerFillObject_12(float value)
	{
		____anglePerFillObject_12 = value;
	}

	inline static int32_t get_offset_of__lastAngle_13() { return static_cast<int32_t>(offsetof(DynamiteHazard_t3784712259, ____lastAngle_13)); }
	inline float get__lastAngle_13() const { return ____lastAngle_13; }
	inline float* get_address_of__lastAngle_13() { return &____lastAngle_13; }
	inline void set__lastAngle_13(float value)
	{
		____lastAngle_13 = value;
	}

	inline static int32_t get_offset_of__startCounterValue_14() { return static_cast<int32_t>(offsetof(DynamiteHazard_t3784712259, ____startCounterValue_14)); }
	inline int32_t get__startCounterValue_14() const { return ____startCounterValue_14; }
	inline int32_t* get_address_of__startCounterValue_14() { return &____startCounterValue_14; }
	inline void set__startCounterValue_14(int32_t value)
	{
		____startCounterValue_14 = value;
	}

	inline static int32_t get_offset_of__lastCounterValue_15() { return static_cast<int32_t>(offsetof(DynamiteHazard_t3784712259, ____lastCounterValue_15)); }
	inline int32_t get__lastCounterValue_15() const { return ____lastCounterValue_15; }
	inline int32_t* get_address_of__lastCounterValue_15() { return &____lastCounterValue_15; }
	inline void set__lastCounterValue_15(int32_t value)
	{
		____lastCounterValue_15 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
