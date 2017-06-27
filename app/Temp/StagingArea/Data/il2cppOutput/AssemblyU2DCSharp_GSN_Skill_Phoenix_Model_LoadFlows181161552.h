#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// GSN.Skill.Phoenix.Model.SceneManager
struct SceneManager_t2219221181;
// GSN.Skill.Phoenix.WebObject.WebObjectWrapper
struct WebObjectWrapper_t631940280;
// System.String
struct String_t;

#include "mscorlib_System_Object2689449295.h"
#include "AssemblyU2DCSharp_GSN_Skill_Phoenix_Model_LoadFlow2023042265.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Phoenix.Model.LoadFlows.GameLoad
struct  GameLoad_t181161552  : public Il2CppObject
{
public:
	// GSN.Skill.Phoenix.Model.SceneManager GSN.Skill.Phoenix.Model.LoadFlows.GameLoad::_sceneManager
	SceneManager_t2219221181 * ____sceneManager_1;
	// GSN.Skill.Phoenix.WebObject.WebObjectWrapper GSN.Skill.Phoenix.Model.LoadFlows.GameLoad::_webGame
	WebObjectWrapper_t631940280 * ____webGame_2;
	// GSN.Skill.Phoenix.Model.LoadFlows.GameLoad/GameLoadGates GSN.Skill.Phoenix.Model.LoadFlows.GameLoad::_gateFlags
	int32_t ____gateFlags_3;
	// System.Int32 GSN.Skill.Phoenix.Model.LoadFlows.GameLoad::_currentGatesCompleted
	int32_t ____currentGatesCompleted_4;

public:
	inline static int32_t get_offset_of__sceneManager_1() { return static_cast<int32_t>(offsetof(GameLoad_t181161552, ____sceneManager_1)); }
	inline SceneManager_t2219221181 * get__sceneManager_1() const { return ____sceneManager_1; }
	inline SceneManager_t2219221181 ** get_address_of__sceneManager_1() { return &____sceneManager_1; }
	inline void set__sceneManager_1(SceneManager_t2219221181 * value)
	{
		____sceneManager_1 = value;
		Il2CppCodeGenWriteBarrier(&____sceneManager_1, value);
	}

	inline static int32_t get_offset_of__webGame_2() { return static_cast<int32_t>(offsetof(GameLoad_t181161552, ____webGame_2)); }
	inline WebObjectWrapper_t631940280 * get__webGame_2() const { return ____webGame_2; }
	inline WebObjectWrapper_t631940280 ** get_address_of__webGame_2() { return &____webGame_2; }
	inline void set__webGame_2(WebObjectWrapper_t631940280 * value)
	{
		____webGame_2 = value;
		Il2CppCodeGenWriteBarrier(&____webGame_2, value);
	}

	inline static int32_t get_offset_of__gateFlags_3() { return static_cast<int32_t>(offsetof(GameLoad_t181161552, ____gateFlags_3)); }
	inline int32_t get__gateFlags_3() const { return ____gateFlags_3; }
	inline int32_t* get_address_of__gateFlags_3() { return &____gateFlags_3; }
	inline void set__gateFlags_3(int32_t value)
	{
		____gateFlags_3 = value;
	}

	inline static int32_t get_offset_of__currentGatesCompleted_4() { return static_cast<int32_t>(offsetof(GameLoad_t181161552, ____currentGatesCompleted_4)); }
	inline int32_t get__currentGatesCompleted_4() const { return ____currentGatesCompleted_4; }
	inline int32_t* get_address_of__currentGatesCompleted_4() { return &____currentGatesCompleted_4; }
	inline void set__currentGatesCompleted_4(int32_t value)
	{
		____currentGatesCompleted_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
