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
// System.Collections.Generic.Dictionary`2<GSN.Skill.Phoenix.Model.SceneLoadType,GSN.Skill.Phoenix.Model.LoadFlows.ISceneLoad>
struct Dictionary_2_t4053688042;
// GSN.Skill.Phoenix.Model.LoadFlows.ISceneLoad
struct ISceneLoad_t993950601;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "AssemblyU2DCSharp_GSN_Skill_Phoenix_Model_PhoenixSce23563331.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Phoenix.Model.SceneManager
struct  SceneManager_t2219221181  : public MonoBehaviour_t1158329972
{
public:
	// GSN.Skill.Phoenix.Model.PhoenixScene GSN.Skill.Phoenix.Model.SceneManager::_currentScene
	int32_t ____currentScene_5;
	// System.Collections.Generic.Dictionary`2<GSN.Skill.Phoenix.Model.SceneLoadType,GSN.Skill.Phoenix.Model.LoadFlows.ISceneLoad> GSN.Skill.Phoenix.Model.SceneManager::_sceneLoads
	Dictionary_2_t4053688042 * ____sceneLoads_6;
	// GSN.Skill.Phoenix.Model.LoadFlows.ISceneLoad GSN.Skill.Phoenix.Model.SceneManager::_currentSceneLoad
	Il2CppObject * ____currentSceneLoad_7;

public:
	inline static int32_t get_offset_of__currentScene_5() { return static_cast<int32_t>(offsetof(SceneManager_t2219221181, ____currentScene_5)); }
	inline int32_t get__currentScene_5() const { return ____currentScene_5; }
	inline int32_t* get_address_of__currentScene_5() { return &____currentScene_5; }
	inline void set__currentScene_5(int32_t value)
	{
		____currentScene_5 = value;
	}

	inline static int32_t get_offset_of__sceneLoads_6() { return static_cast<int32_t>(offsetof(SceneManager_t2219221181, ____sceneLoads_6)); }
	inline Dictionary_2_t4053688042 * get__sceneLoads_6() const { return ____sceneLoads_6; }
	inline Dictionary_2_t4053688042 ** get_address_of__sceneLoads_6() { return &____sceneLoads_6; }
	inline void set__sceneLoads_6(Dictionary_2_t4053688042 * value)
	{
		____sceneLoads_6 = value;
		Il2CppCodeGenWriteBarrier(&____sceneLoads_6, value);
	}

	inline static int32_t get_offset_of__currentSceneLoad_7() { return static_cast<int32_t>(offsetof(SceneManager_t2219221181, ____currentSceneLoad_7)); }
	inline Il2CppObject * get__currentSceneLoad_7() const { return ____currentSceneLoad_7; }
	inline Il2CppObject ** get_address_of__currentSceneLoad_7() { return &____currentSceneLoad_7; }
	inline void set__currentSceneLoad_7(Il2CppObject * value)
	{
		____currentSceneLoad_7 = value;
		Il2CppCodeGenWriteBarrier(&____currentSceneLoad_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
