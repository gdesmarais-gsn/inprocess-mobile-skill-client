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
// GSN.Skill.Games.Common.Tutorial.TutorialGroup
struct TutorialGroup_t2606817647;
// GSN.Skill.Games.Common.Tutorial.ITutorialStepCallback
struct ITutorialStepCallback_t1871791272;
// GSN.Skill.Games.Common.Tutorial.Unity.TutorialStepMainPrefab
struct TutorialStepMainPrefab_t994062865;
// System.Collections.Generic.List`1<GSN.Skill.Games.Common.Tutorial.Unity.TutorialStepAdditionalPrefab>
struct List_1_t312975503;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Games.Common.Tutorial.TutorialStep
struct  TutorialStep_t11121064  : public Il2CppObject
{
public:
	// System.String GSN.Skill.Games.Common.Tutorial.TutorialStep::Id
	String_t* ___Id_0;
	// System.Boolean GSN.Skill.Games.Common.Tutorial.TutorialStep::BlocksInput
	bool ___BlocksInput_1;
	// System.Boolean GSN.Skill.Games.Common.Tutorial.TutorialStep::AutoLaunchNextStep
	bool ___AutoLaunchNextStep_2;
	// System.Boolean GSN.Skill.Games.Common.Tutorial.TutorialStep::CompleteOnHide
	bool ___CompleteOnHide_3;
	// System.Boolean GSN.Skill.Games.Common.Tutorial.TutorialStep::_isShown
	bool ____isShown_4;
	// GSN.Skill.Games.Common.Tutorial.TutorialGroup GSN.Skill.Games.Common.Tutorial.TutorialStep::_group
	TutorialGroup_t2606817647 * ____group_5;
	// GSN.Skill.Games.Common.Tutorial.ITutorialStepCallback GSN.Skill.Games.Common.Tutorial.TutorialStep::_callbacks
	Il2CppObject * ____callbacks_6;
	// GSN.Skill.Games.Common.Tutorial.Unity.TutorialStepMainPrefab GSN.Skill.Games.Common.Tutorial.TutorialStep::Prefab
	TutorialStepMainPrefab_t994062865 * ___Prefab_7;
	// System.Collections.Generic.List`1<GSN.Skill.Games.Common.Tutorial.Unity.TutorialStepAdditionalPrefab> GSN.Skill.Games.Common.Tutorial.TutorialStep::AdditionalPrefabs
	List_1_t312975503 * ___AdditionalPrefabs_8;
	// System.Int32 GSN.Skill.Games.Common.Tutorial.TutorialStep::_countCompletedPrefabs
	int32_t ____countCompletedPrefabs_9;

public:
	inline static int32_t get_offset_of_Id_0() { return static_cast<int32_t>(offsetof(TutorialStep_t11121064, ___Id_0)); }
	inline String_t* get_Id_0() const { return ___Id_0; }
	inline String_t** get_address_of_Id_0() { return &___Id_0; }
	inline void set_Id_0(String_t* value)
	{
		___Id_0 = value;
		Il2CppCodeGenWriteBarrier(&___Id_0, value);
	}

	inline static int32_t get_offset_of_BlocksInput_1() { return static_cast<int32_t>(offsetof(TutorialStep_t11121064, ___BlocksInput_1)); }
	inline bool get_BlocksInput_1() const { return ___BlocksInput_1; }
	inline bool* get_address_of_BlocksInput_1() { return &___BlocksInput_1; }
	inline void set_BlocksInput_1(bool value)
	{
		___BlocksInput_1 = value;
	}

	inline static int32_t get_offset_of_AutoLaunchNextStep_2() { return static_cast<int32_t>(offsetof(TutorialStep_t11121064, ___AutoLaunchNextStep_2)); }
	inline bool get_AutoLaunchNextStep_2() const { return ___AutoLaunchNextStep_2; }
	inline bool* get_address_of_AutoLaunchNextStep_2() { return &___AutoLaunchNextStep_2; }
	inline void set_AutoLaunchNextStep_2(bool value)
	{
		___AutoLaunchNextStep_2 = value;
	}

	inline static int32_t get_offset_of_CompleteOnHide_3() { return static_cast<int32_t>(offsetof(TutorialStep_t11121064, ___CompleteOnHide_3)); }
	inline bool get_CompleteOnHide_3() const { return ___CompleteOnHide_3; }
	inline bool* get_address_of_CompleteOnHide_3() { return &___CompleteOnHide_3; }
	inline void set_CompleteOnHide_3(bool value)
	{
		___CompleteOnHide_3 = value;
	}

	inline static int32_t get_offset_of__isShown_4() { return static_cast<int32_t>(offsetof(TutorialStep_t11121064, ____isShown_4)); }
	inline bool get__isShown_4() const { return ____isShown_4; }
	inline bool* get_address_of__isShown_4() { return &____isShown_4; }
	inline void set__isShown_4(bool value)
	{
		____isShown_4 = value;
	}

	inline static int32_t get_offset_of__group_5() { return static_cast<int32_t>(offsetof(TutorialStep_t11121064, ____group_5)); }
	inline TutorialGroup_t2606817647 * get__group_5() const { return ____group_5; }
	inline TutorialGroup_t2606817647 ** get_address_of__group_5() { return &____group_5; }
	inline void set__group_5(TutorialGroup_t2606817647 * value)
	{
		____group_5 = value;
		Il2CppCodeGenWriteBarrier(&____group_5, value);
	}

	inline static int32_t get_offset_of__callbacks_6() { return static_cast<int32_t>(offsetof(TutorialStep_t11121064, ____callbacks_6)); }
	inline Il2CppObject * get__callbacks_6() const { return ____callbacks_6; }
	inline Il2CppObject ** get_address_of__callbacks_6() { return &____callbacks_6; }
	inline void set__callbacks_6(Il2CppObject * value)
	{
		____callbacks_6 = value;
		Il2CppCodeGenWriteBarrier(&____callbacks_6, value);
	}

	inline static int32_t get_offset_of_Prefab_7() { return static_cast<int32_t>(offsetof(TutorialStep_t11121064, ___Prefab_7)); }
	inline TutorialStepMainPrefab_t994062865 * get_Prefab_7() const { return ___Prefab_7; }
	inline TutorialStepMainPrefab_t994062865 ** get_address_of_Prefab_7() { return &___Prefab_7; }
	inline void set_Prefab_7(TutorialStepMainPrefab_t994062865 * value)
	{
		___Prefab_7 = value;
		Il2CppCodeGenWriteBarrier(&___Prefab_7, value);
	}

	inline static int32_t get_offset_of_AdditionalPrefabs_8() { return static_cast<int32_t>(offsetof(TutorialStep_t11121064, ___AdditionalPrefabs_8)); }
	inline List_1_t312975503 * get_AdditionalPrefabs_8() const { return ___AdditionalPrefabs_8; }
	inline List_1_t312975503 ** get_address_of_AdditionalPrefabs_8() { return &___AdditionalPrefabs_8; }
	inline void set_AdditionalPrefabs_8(List_1_t312975503 * value)
	{
		___AdditionalPrefabs_8 = value;
		Il2CppCodeGenWriteBarrier(&___AdditionalPrefabs_8, value);
	}

	inline static int32_t get_offset_of__countCompletedPrefabs_9() { return static_cast<int32_t>(offsetof(TutorialStep_t11121064, ____countCompletedPrefabs_9)); }
	inline int32_t get__countCompletedPrefabs_9() const { return ____countCompletedPrefabs_9; }
	inline int32_t* get_address_of__countCompletedPrefabs_9() { return &____countCompletedPrefabs_9; }
	inline void set__countCompletedPrefabs_9(int32_t value)
	{
		____countCompletedPrefabs_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
