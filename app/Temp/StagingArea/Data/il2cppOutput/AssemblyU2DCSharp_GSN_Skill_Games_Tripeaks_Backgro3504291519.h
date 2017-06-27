#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<System.String>
struct List_1_t1398341365;
// SceneryChanger
struct SceneryChanger_t2642862775;
// System.String
struct String_t;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Games.Tripeaks.BackgroundLoader
struct  BackgroundLoader_t3504291519  : public MonoBehaviour_t1158329972
{
public:
	// System.Boolean GSN.Skill.Games.Tripeaks.BackgroundLoader::<loaded>k__BackingField
	bool ___U3CloadedU3Ek__BackingField_2;
	// System.Collections.Generic.List`1<System.String> GSN.Skill.Games.Tripeaks.BackgroundLoader::_backgroundResources
	List_1_t1398341365 * ____backgroundResources_3;
	// System.Collections.Generic.List`1<System.String> GSN.Skill.Games.Tripeaks.BackgroundLoader::_timeOfDay
	List_1_t1398341365 * ____timeOfDay_4;
	// SceneryChanger GSN.Skill.Games.Tripeaks.BackgroundLoader::_sceneryChanger
	SceneryChanger_t2642862775 * ____sceneryChanger_6;

public:
	inline static int32_t get_offset_of_U3CloadedU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(BackgroundLoader_t3504291519, ___U3CloadedU3Ek__BackingField_2)); }
	inline bool get_U3CloadedU3Ek__BackingField_2() const { return ___U3CloadedU3Ek__BackingField_2; }
	inline bool* get_address_of_U3CloadedU3Ek__BackingField_2() { return &___U3CloadedU3Ek__BackingField_2; }
	inline void set_U3CloadedU3Ek__BackingField_2(bool value)
	{
		___U3CloadedU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of__backgroundResources_3() { return static_cast<int32_t>(offsetof(BackgroundLoader_t3504291519, ____backgroundResources_3)); }
	inline List_1_t1398341365 * get__backgroundResources_3() const { return ____backgroundResources_3; }
	inline List_1_t1398341365 ** get_address_of__backgroundResources_3() { return &____backgroundResources_3; }
	inline void set__backgroundResources_3(List_1_t1398341365 * value)
	{
		____backgroundResources_3 = value;
		Il2CppCodeGenWriteBarrier(&____backgroundResources_3, value);
	}

	inline static int32_t get_offset_of__timeOfDay_4() { return static_cast<int32_t>(offsetof(BackgroundLoader_t3504291519, ____timeOfDay_4)); }
	inline List_1_t1398341365 * get__timeOfDay_4() const { return ____timeOfDay_4; }
	inline List_1_t1398341365 ** get_address_of__timeOfDay_4() { return &____timeOfDay_4; }
	inline void set__timeOfDay_4(List_1_t1398341365 * value)
	{
		____timeOfDay_4 = value;
		Il2CppCodeGenWriteBarrier(&____timeOfDay_4, value);
	}

	inline static int32_t get_offset_of__sceneryChanger_6() { return static_cast<int32_t>(offsetof(BackgroundLoader_t3504291519, ____sceneryChanger_6)); }
	inline SceneryChanger_t2642862775 * get__sceneryChanger_6() const { return ____sceneryChanger_6; }
	inline SceneryChanger_t2642862775 ** get_address_of__sceneryChanger_6() { return &____sceneryChanger_6; }
	inline void set__sceneryChanger_6(SceneryChanger_t2642862775 * value)
	{
		____sceneryChanger_6 = value;
		Il2CppCodeGenWriteBarrier(&____sceneryChanger_6, value);
	}
};

struct BackgroundLoader_t3504291519_StaticFields
{
public:
	// System.Int32 GSN.Skill.Games.Tripeaks.BackgroundLoader::NUM_TIMES_OF_DAY
	int32_t ___NUM_TIMES_OF_DAY_5;

public:
	inline static int32_t get_offset_of_NUM_TIMES_OF_DAY_5() { return static_cast<int32_t>(offsetof(BackgroundLoader_t3504291519_StaticFields, ___NUM_TIMES_OF_DAY_5)); }
	inline int32_t get_NUM_TIMES_OF_DAY_5() const { return ___NUM_TIMES_OF_DAY_5; }
	inline int32_t* get_address_of_NUM_TIMES_OF_DAY_5() { return &___NUM_TIMES_OF_DAY_5; }
	inline void set_NUM_TIMES_OF_DAY_5(int32_t value)
	{
		___NUM_TIMES_OF_DAY_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
