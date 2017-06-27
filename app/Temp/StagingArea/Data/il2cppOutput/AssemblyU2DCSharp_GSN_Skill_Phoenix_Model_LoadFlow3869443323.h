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
// GSN.Skill.Phoenix.Model.LoginFlowManager
struct LoginFlowManager_t3154992724;

#include "mscorlib_System_Object2689449295.h"
#include "AssemblyU2DCSharp_GSN_Skill_Phoenix_Model_LoadFlows457383815.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Phoenix.Model.LoadFlows.StartupLoad
struct  StartupLoad_t3869443323  : public Il2CppObject
{
public:
	// GSN.Skill.Phoenix.Model.LoadFlows.StartupLoad/StartupGates GSN.Skill.Phoenix.Model.LoadFlows.StartupLoad::_gateFlags
	int32_t ____gateFlags_1;
	// GSN.Skill.Phoenix.Model.SceneManager GSN.Skill.Phoenix.Model.LoadFlows.StartupLoad::_sceneManager
	SceneManager_t2219221181 * ____sceneManager_2;
	// GSN.Skill.Phoenix.Model.LoginFlowManager GSN.Skill.Phoenix.Model.LoadFlows.StartupLoad::_loginFlowManager
	LoginFlowManager_t3154992724 * ____loginFlowManager_3;
	// System.Boolean GSN.Skill.Phoenix.Model.LoadFlows.StartupLoad::_showWelcomeScreen
	bool ____showWelcomeScreen_4;
	// System.Int32 GSN.Skill.Phoenix.Model.LoadFlows.StartupLoad::_currentGatesCompleted
	int32_t ____currentGatesCompleted_5;

public:
	inline static int32_t get_offset_of__gateFlags_1() { return static_cast<int32_t>(offsetof(StartupLoad_t3869443323, ____gateFlags_1)); }
	inline int32_t get__gateFlags_1() const { return ____gateFlags_1; }
	inline int32_t* get_address_of__gateFlags_1() { return &____gateFlags_1; }
	inline void set__gateFlags_1(int32_t value)
	{
		____gateFlags_1 = value;
	}

	inline static int32_t get_offset_of__sceneManager_2() { return static_cast<int32_t>(offsetof(StartupLoad_t3869443323, ____sceneManager_2)); }
	inline SceneManager_t2219221181 * get__sceneManager_2() const { return ____sceneManager_2; }
	inline SceneManager_t2219221181 ** get_address_of__sceneManager_2() { return &____sceneManager_2; }
	inline void set__sceneManager_2(SceneManager_t2219221181 * value)
	{
		____sceneManager_2 = value;
		Il2CppCodeGenWriteBarrier(&____sceneManager_2, value);
	}

	inline static int32_t get_offset_of__loginFlowManager_3() { return static_cast<int32_t>(offsetof(StartupLoad_t3869443323, ____loginFlowManager_3)); }
	inline LoginFlowManager_t3154992724 * get__loginFlowManager_3() const { return ____loginFlowManager_3; }
	inline LoginFlowManager_t3154992724 ** get_address_of__loginFlowManager_3() { return &____loginFlowManager_3; }
	inline void set__loginFlowManager_3(LoginFlowManager_t3154992724 * value)
	{
		____loginFlowManager_3 = value;
		Il2CppCodeGenWriteBarrier(&____loginFlowManager_3, value);
	}

	inline static int32_t get_offset_of__showWelcomeScreen_4() { return static_cast<int32_t>(offsetof(StartupLoad_t3869443323, ____showWelcomeScreen_4)); }
	inline bool get__showWelcomeScreen_4() const { return ____showWelcomeScreen_4; }
	inline bool* get_address_of__showWelcomeScreen_4() { return &____showWelcomeScreen_4; }
	inline void set__showWelcomeScreen_4(bool value)
	{
		____showWelcomeScreen_4 = value;
	}

	inline static int32_t get_offset_of__currentGatesCompleted_5() { return static_cast<int32_t>(offsetof(StartupLoad_t3869443323, ____currentGatesCompleted_5)); }
	inline int32_t get__currentGatesCompleted_5() const { return ____currentGatesCompleted_5; }
	inline int32_t* get_address_of__currentGatesCompleted_5() { return &____currentGatesCompleted_5; }
	inline void set__currentGatesCompleted_5(int32_t value)
	{
		____currentGatesCompleted_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
