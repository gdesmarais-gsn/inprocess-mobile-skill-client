#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Action
struct Action_t3226471752;
// System.String
struct String_t;
// UnityEngine.GameObject
struct GameObject_t1756533147;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Games.Common.Tutorial.Unity.TutorialStepPrefabBase
struct  TutorialStepPrefabBase_t3134565035  : public Il2CppObject
{
public:
	// System.Action GSN.Skill.Games.Common.Tutorial.Unity.TutorialStepPrefabBase::Shown
	Action_t3226471752 * ___Shown_0;
	// System.Action GSN.Skill.Games.Common.Tutorial.Unity.TutorialStepPrefabBase::Hidden
	Action_t3226471752 * ___Hidden_1;
	// System.String GSN.Skill.Games.Common.Tutorial.Unity.TutorialStepPrefabBase::Name
	String_t* ___Name_2;
	// System.String GSN.Skill.Games.Common.Tutorial.Unity.TutorialStepPrefabBase::_fullPath
	String_t* ____fullPath_3;
	// UnityEngine.GameObject GSN.Skill.Games.Common.Tutorial.Unity.TutorialStepPrefabBase::prefab
	GameObject_t1756533147 * ___prefab_4;
	// UnityEngine.GameObject GSN.Skill.Games.Common.Tutorial.Unity.TutorialStepPrefabBase::<gameObject>k__BackingField
	GameObject_t1756533147 * ___U3CgameObjectU3Ek__BackingField_5;

public:
	inline static int32_t get_offset_of_Shown_0() { return static_cast<int32_t>(offsetof(TutorialStepPrefabBase_t3134565035, ___Shown_0)); }
	inline Action_t3226471752 * get_Shown_0() const { return ___Shown_0; }
	inline Action_t3226471752 ** get_address_of_Shown_0() { return &___Shown_0; }
	inline void set_Shown_0(Action_t3226471752 * value)
	{
		___Shown_0 = value;
		Il2CppCodeGenWriteBarrier(&___Shown_0, value);
	}

	inline static int32_t get_offset_of_Hidden_1() { return static_cast<int32_t>(offsetof(TutorialStepPrefabBase_t3134565035, ___Hidden_1)); }
	inline Action_t3226471752 * get_Hidden_1() const { return ___Hidden_1; }
	inline Action_t3226471752 ** get_address_of_Hidden_1() { return &___Hidden_1; }
	inline void set_Hidden_1(Action_t3226471752 * value)
	{
		___Hidden_1 = value;
		Il2CppCodeGenWriteBarrier(&___Hidden_1, value);
	}

	inline static int32_t get_offset_of_Name_2() { return static_cast<int32_t>(offsetof(TutorialStepPrefabBase_t3134565035, ___Name_2)); }
	inline String_t* get_Name_2() const { return ___Name_2; }
	inline String_t** get_address_of_Name_2() { return &___Name_2; }
	inline void set_Name_2(String_t* value)
	{
		___Name_2 = value;
		Il2CppCodeGenWriteBarrier(&___Name_2, value);
	}

	inline static int32_t get_offset_of__fullPath_3() { return static_cast<int32_t>(offsetof(TutorialStepPrefabBase_t3134565035, ____fullPath_3)); }
	inline String_t* get__fullPath_3() const { return ____fullPath_3; }
	inline String_t** get_address_of__fullPath_3() { return &____fullPath_3; }
	inline void set__fullPath_3(String_t* value)
	{
		____fullPath_3 = value;
		Il2CppCodeGenWriteBarrier(&____fullPath_3, value);
	}

	inline static int32_t get_offset_of_prefab_4() { return static_cast<int32_t>(offsetof(TutorialStepPrefabBase_t3134565035, ___prefab_4)); }
	inline GameObject_t1756533147 * get_prefab_4() const { return ___prefab_4; }
	inline GameObject_t1756533147 ** get_address_of_prefab_4() { return &___prefab_4; }
	inline void set_prefab_4(GameObject_t1756533147 * value)
	{
		___prefab_4 = value;
		Il2CppCodeGenWriteBarrier(&___prefab_4, value);
	}

	inline static int32_t get_offset_of_U3CgameObjectU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(TutorialStepPrefabBase_t3134565035, ___U3CgameObjectU3Ek__BackingField_5)); }
	inline GameObject_t1756533147 * get_U3CgameObjectU3Ek__BackingField_5() const { return ___U3CgameObjectU3Ek__BackingField_5; }
	inline GameObject_t1756533147 ** get_address_of_U3CgameObjectU3Ek__BackingField_5() { return &___U3CgameObjectU3Ek__BackingField_5; }
	inline void set_U3CgameObjectU3Ek__BackingField_5(GameObject_t1756533147 * value)
	{
		___U3CgameObjectU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier(&___U3CgameObjectU3Ek__BackingField_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
