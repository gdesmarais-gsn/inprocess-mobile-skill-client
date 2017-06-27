#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t3057952154;
// SceneryChanger/MaterialEntry[]
struct MaterialEntryU5BU5D_t3603219266;
// SceneryChanger/Fog
struct Fog_t2628220434;
// UnityEngine.Camera
struct Camera_t189460977;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SceneryChanger/Scenery
struct  Scenery_t2624549033  : public Il2CppObject
{
public:
	// System.String SceneryChanger/Scenery::name
	String_t* ___name_0;
	// System.String SceneryChanger/Scenery::parentSceneName
	String_t* ___parentSceneName_1;
	// System.String SceneryChanger/Scenery::bgmID
	String_t* ___bgmID_2;
	// UnityEngine.GameObject[] SceneryChanger/Scenery::objectsToShow
	GameObjectU5BU5D_t3057952154* ___objectsToShow_3;
	// UnityEngine.GameObject[] SceneryChanger/Scenery::objectsToHide
	GameObjectU5BU5D_t3057952154* ___objectsToHide_4;
	// UnityEngine.GameObject[] SceneryChanger/Scenery::objectsToChange
	GameObjectU5BU5D_t3057952154* ___objectsToChange_5;
	// SceneryChanger/MaterialEntry[] SceneryChanger/Scenery::materialChanges
	MaterialEntryU5BU5D_t3603219266* ___materialChanges_6;
	// SceneryChanger/Fog SceneryChanger/Scenery::fog
	Fog_t2628220434 * ___fog_7;
	// UnityEngine.Camera SceneryChanger/Scenery::camera
	Camera_t189460977 * ___camera_8;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(Scenery_t2624549033, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier(&___name_0, value);
	}

	inline static int32_t get_offset_of_parentSceneName_1() { return static_cast<int32_t>(offsetof(Scenery_t2624549033, ___parentSceneName_1)); }
	inline String_t* get_parentSceneName_1() const { return ___parentSceneName_1; }
	inline String_t** get_address_of_parentSceneName_1() { return &___parentSceneName_1; }
	inline void set_parentSceneName_1(String_t* value)
	{
		___parentSceneName_1 = value;
		Il2CppCodeGenWriteBarrier(&___parentSceneName_1, value);
	}

	inline static int32_t get_offset_of_bgmID_2() { return static_cast<int32_t>(offsetof(Scenery_t2624549033, ___bgmID_2)); }
	inline String_t* get_bgmID_2() const { return ___bgmID_2; }
	inline String_t** get_address_of_bgmID_2() { return &___bgmID_2; }
	inline void set_bgmID_2(String_t* value)
	{
		___bgmID_2 = value;
		Il2CppCodeGenWriteBarrier(&___bgmID_2, value);
	}

	inline static int32_t get_offset_of_objectsToShow_3() { return static_cast<int32_t>(offsetof(Scenery_t2624549033, ___objectsToShow_3)); }
	inline GameObjectU5BU5D_t3057952154* get_objectsToShow_3() const { return ___objectsToShow_3; }
	inline GameObjectU5BU5D_t3057952154** get_address_of_objectsToShow_3() { return &___objectsToShow_3; }
	inline void set_objectsToShow_3(GameObjectU5BU5D_t3057952154* value)
	{
		___objectsToShow_3 = value;
		Il2CppCodeGenWriteBarrier(&___objectsToShow_3, value);
	}

	inline static int32_t get_offset_of_objectsToHide_4() { return static_cast<int32_t>(offsetof(Scenery_t2624549033, ___objectsToHide_4)); }
	inline GameObjectU5BU5D_t3057952154* get_objectsToHide_4() const { return ___objectsToHide_4; }
	inline GameObjectU5BU5D_t3057952154** get_address_of_objectsToHide_4() { return &___objectsToHide_4; }
	inline void set_objectsToHide_4(GameObjectU5BU5D_t3057952154* value)
	{
		___objectsToHide_4 = value;
		Il2CppCodeGenWriteBarrier(&___objectsToHide_4, value);
	}

	inline static int32_t get_offset_of_objectsToChange_5() { return static_cast<int32_t>(offsetof(Scenery_t2624549033, ___objectsToChange_5)); }
	inline GameObjectU5BU5D_t3057952154* get_objectsToChange_5() const { return ___objectsToChange_5; }
	inline GameObjectU5BU5D_t3057952154** get_address_of_objectsToChange_5() { return &___objectsToChange_5; }
	inline void set_objectsToChange_5(GameObjectU5BU5D_t3057952154* value)
	{
		___objectsToChange_5 = value;
		Il2CppCodeGenWriteBarrier(&___objectsToChange_5, value);
	}

	inline static int32_t get_offset_of_materialChanges_6() { return static_cast<int32_t>(offsetof(Scenery_t2624549033, ___materialChanges_6)); }
	inline MaterialEntryU5BU5D_t3603219266* get_materialChanges_6() const { return ___materialChanges_6; }
	inline MaterialEntryU5BU5D_t3603219266** get_address_of_materialChanges_6() { return &___materialChanges_6; }
	inline void set_materialChanges_6(MaterialEntryU5BU5D_t3603219266* value)
	{
		___materialChanges_6 = value;
		Il2CppCodeGenWriteBarrier(&___materialChanges_6, value);
	}

	inline static int32_t get_offset_of_fog_7() { return static_cast<int32_t>(offsetof(Scenery_t2624549033, ___fog_7)); }
	inline Fog_t2628220434 * get_fog_7() const { return ___fog_7; }
	inline Fog_t2628220434 ** get_address_of_fog_7() { return &___fog_7; }
	inline void set_fog_7(Fog_t2628220434 * value)
	{
		___fog_7 = value;
		Il2CppCodeGenWriteBarrier(&___fog_7, value);
	}

	inline static int32_t get_offset_of_camera_8() { return static_cast<int32_t>(offsetof(Scenery_t2624549033, ___camera_8)); }
	inline Camera_t189460977 * get_camera_8() const { return ___camera_8; }
	inline Camera_t189460977 ** get_address_of_camera_8() { return &___camera_8; }
	inline void set_camera_8(Camera_t189460977 * value)
	{
		___camera_8 = value;
		Il2CppCodeGenWriteBarrier(&___camera_8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
