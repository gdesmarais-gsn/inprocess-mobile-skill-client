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

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Phoenix.Model.LoadFlows.PhoenixLoad
struct  PhoenixLoad_t991412175  : public Il2CppObject
{
public:
	// GSN.Skill.Phoenix.Model.SceneManager GSN.Skill.Phoenix.Model.LoadFlows.PhoenixLoad::_sceneManager
	SceneManager_t2219221181 * ____sceneManager_1;
	// System.Int32 GSN.Skill.Phoenix.Model.LoadFlows.PhoenixLoad::_currentGatesCompleted
	int32_t ____currentGatesCompleted_2;

public:
	inline static int32_t get_offset_of__sceneManager_1() { return static_cast<int32_t>(offsetof(PhoenixLoad_t991412175, ____sceneManager_1)); }
	inline SceneManager_t2219221181 * get__sceneManager_1() const { return ____sceneManager_1; }
	inline SceneManager_t2219221181 ** get_address_of__sceneManager_1() { return &____sceneManager_1; }
	inline void set__sceneManager_1(SceneManager_t2219221181 * value)
	{
		____sceneManager_1 = value;
		Il2CppCodeGenWriteBarrier(&____sceneManager_1, value);
	}

	inline static int32_t get_offset_of__currentGatesCompleted_2() { return static_cast<int32_t>(offsetof(PhoenixLoad_t991412175, ____currentGatesCompleted_2)); }
	inline int32_t get__currentGatesCompleted_2() const { return ____currentGatesCompleted_2; }
	inline int32_t* get_address_of__currentGatesCompleted_2() { return &____currentGatesCompleted_2; }
	inline void set__currentGatesCompleted_2(int32_t value)
	{
		____currentGatesCompleted_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
