#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// SceneryChanger
struct SceneryChanger_t2642862775;
// Delegates/Action
struct Action_t1511407763;
// SceneryChanger/SceneryCategory[]
struct SceneryCategoryU5BU5D_t4270211020;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t1642385972;
// SceneryChanger/Scenery
struct Scenery_t2624549033;
// System.Collections.Generic.Dictionary`2<System.String,SceneryChanger/Scenery>
struct Dictionary_2_t244360999;

#include "AssemblyU2DCSharp_ReloadableMonoBehaviour1116404963.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SceneryChanger
struct  SceneryChanger_t2642862775  : public ReloadableMonoBehaviour_t1116404963
{
public:
	// Delegates/Action SceneryChanger::onAfterSetScene
	Action_t1511407763 * ___onAfterSetScene_3;
	// SceneryChanger/SceneryCategory[] SceneryChanger::sceneCategories
	SceneryCategoryU5BU5D_t4270211020* ___sceneCategories_4;
	// System.String SceneryChanger::initialSceneName
	String_t* ___initialSceneName_5;
	// System.String[] SceneryChanger::initialUnapplySceneNames
	StringU5BU5D_t1642385972* ___initialUnapplySceneNames_6;
	// SceneryChanger/Scenery SceneryChanger::activeScenery
	Scenery_t2624549033 * ___activeScenery_7;
	// System.Collections.Generic.Dictionary`2<System.String,SceneryChanger/Scenery> SceneryChanger::sceneryDataLookup
	Dictionary_2_t244360999 * ___sceneryDataLookup_8;

public:
	inline static int32_t get_offset_of_onAfterSetScene_3() { return static_cast<int32_t>(offsetof(SceneryChanger_t2642862775, ___onAfterSetScene_3)); }
	inline Action_t1511407763 * get_onAfterSetScene_3() const { return ___onAfterSetScene_3; }
	inline Action_t1511407763 ** get_address_of_onAfterSetScene_3() { return &___onAfterSetScene_3; }
	inline void set_onAfterSetScene_3(Action_t1511407763 * value)
	{
		___onAfterSetScene_3 = value;
		Il2CppCodeGenWriteBarrier(&___onAfterSetScene_3, value);
	}

	inline static int32_t get_offset_of_sceneCategories_4() { return static_cast<int32_t>(offsetof(SceneryChanger_t2642862775, ___sceneCategories_4)); }
	inline SceneryCategoryU5BU5D_t4270211020* get_sceneCategories_4() const { return ___sceneCategories_4; }
	inline SceneryCategoryU5BU5D_t4270211020** get_address_of_sceneCategories_4() { return &___sceneCategories_4; }
	inline void set_sceneCategories_4(SceneryCategoryU5BU5D_t4270211020* value)
	{
		___sceneCategories_4 = value;
		Il2CppCodeGenWriteBarrier(&___sceneCategories_4, value);
	}

	inline static int32_t get_offset_of_initialSceneName_5() { return static_cast<int32_t>(offsetof(SceneryChanger_t2642862775, ___initialSceneName_5)); }
	inline String_t* get_initialSceneName_5() const { return ___initialSceneName_5; }
	inline String_t** get_address_of_initialSceneName_5() { return &___initialSceneName_5; }
	inline void set_initialSceneName_5(String_t* value)
	{
		___initialSceneName_5 = value;
		Il2CppCodeGenWriteBarrier(&___initialSceneName_5, value);
	}

	inline static int32_t get_offset_of_initialUnapplySceneNames_6() { return static_cast<int32_t>(offsetof(SceneryChanger_t2642862775, ___initialUnapplySceneNames_6)); }
	inline StringU5BU5D_t1642385972* get_initialUnapplySceneNames_6() const { return ___initialUnapplySceneNames_6; }
	inline StringU5BU5D_t1642385972** get_address_of_initialUnapplySceneNames_6() { return &___initialUnapplySceneNames_6; }
	inline void set_initialUnapplySceneNames_6(StringU5BU5D_t1642385972* value)
	{
		___initialUnapplySceneNames_6 = value;
		Il2CppCodeGenWriteBarrier(&___initialUnapplySceneNames_6, value);
	}

	inline static int32_t get_offset_of_activeScenery_7() { return static_cast<int32_t>(offsetof(SceneryChanger_t2642862775, ___activeScenery_7)); }
	inline Scenery_t2624549033 * get_activeScenery_7() const { return ___activeScenery_7; }
	inline Scenery_t2624549033 ** get_address_of_activeScenery_7() { return &___activeScenery_7; }
	inline void set_activeScenery_7(Scenery_t2624549033 * value)
	{
		___activeScenery_7 = value;
		Il2CppCodeGenWriteBarrier(&___activeScenery_7, value);
	}

	inline static int32_t get_offset_of_sceneryDataLookup_8() { return static_cast<int32_t>(offsetof(SceneryChanger_t2642862775, ___sceneryDataLookup_8)); }
	inline Dictionary_2_t244360999 * get_sceneryDataLookup_8() const { return ___sceneryDataLookup_8; }
	inline Dictionary_2_t244360999 ** get_address_of_sceneryDataLookup_8() { return &___sceneryDataLookup_8; }
	inline void set_sceneryDataLookup_8(Dictionary_2_t244360999 * value)
	{
		___sceneryDataLookup_8 = value;
		Il2CppCodeGenWriteBarrier(&___sceneryDataLookup_8, value);
	}
};

struct SceneryChanger_t2642862775_StaticFields
{
public:
	// SceneryChanger SceneryChanger::Inst
	SceneryChanger_t2642862775 * ___Inst_2;

public:
	inline static int32_t get_offset_of_Inst_2() { return static_cast<int32_t>(offsetof(SceneryChanger_t2642862775_StaticFields, ___Inst_2)); }
	inline SceneryChanger_t2642862775 * get_Inst_2() const { return ___Inst_2; }
	inline SceneryChanger_t2642862775 ** get_address_of_Inst_2() { return &___Inst_2; }
	inline void set_Inst_2(SceneryChanger_t2642862775 * value)
	{
		___Inst_2 = value;
		Il2CppCodeGenWriteBarrier(&___Inst_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
