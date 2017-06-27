#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// GSN.Skill.Games.Common.Tutorial.TutorialManager/TutorialStepWillShowHandler
struct TutorialStepWillShowHandler_t4289788300;
// GSN.Skill.Games.Common.Tutorial.TutorialManager/TutorialStepShownHandler
struct TutorialStepShownHandler_t112432346;
// GSN.Skill.Games.Common.Tutorial.TutorialManager/TutorialStepWillHideHandler
struct TutorialStepWillHideHandler_t328307079;
// GSN.Skill.Games.Common.Tutorial.TutorialManager/TutorialStepHiddenHandler
struct TutorialStepHiddenHandler_t671449327;
// GSN.Skill.Games.Common.Tutorial.TutorialStep
struct TutorialStep_t11121064;
// System.Collections.Generic.List`1<GSN.Skill.Games.Common.Tutorial.TutorialStep>
struct List_1_t3675209492;
// System.Collections.Generic.Dictionary`2<System.String,GSN.Skill.Games.Common.Tutorial.TutorialGroup>
struct Dictionary_2_t226629613;

#include "AssemblyU2DCSharp_GSN_Skill_Games_Common_Client_Sin417789728.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Games.Common.Tutorial.TutorialManager
struct  TutorialManager_t2237337539  : public Singleton_1_t417789728
{
public:
	// GSN.Skill.Games.Common.Tutorial.TutorialManager/TutorialStepWillShowHandler GSN.Skill.Games.Common.Tutorial.TutorialManager::TutorialStepWillShow
	TutorialStepWillShowHandler_t4289788300 * ___TutorialStepWillShow_1;
	// GSN.Skill.Games.Common.Tutorial.TutorialManager/TutorialStepShownHandler GSN.Skill.Games.Common.Tutorial.TutorialManager::TutorialStepShown
	TutorialStepShownHandler_t112432346 * ___TutorialStepShown_2;
	// GSN.Skill.Games.Common.Tutorial.TutorialManager/TutorialStepWillHideHandler GSN.Skill.Games.Common.Tutorial.TutorialManager::TutorialStepWillHide
	TutorialStepWillHideHandler_t328307079 * ___TutorialStepWillHide_3;
	// GSN.Skill.Games.Common.Tutorial.TutorialManager/TutorialStepHiddenHandler GSN.Skill.Games.Common.Tutorial.TutorialManager::TutorialStepHidden
	TutorialStepHiddenHandler_t671449327 * ___TutorialStepHidden_4;
	// GSN.Skill.Games.Common.Tutorial.TutorialStep GSN.Skill.Games.Common.Tutorial.TutorialManager::_shownStep
	TutorialStep_t11121064 * ____shownStep_5;
	// System.Collections.Generic.List`1<GSN.Skill.Games.Common.Tutorial.TutorialStep> GSN.Skill.Games.Common.Tutorial.TutorialManager::_ignoreHideEventsFromSteps
	List_1_t3675209492 * ____ignoreHideEventsFromSteps_6;
	// System.Boolean GSN.Skill.Games.Common.Tutorial.TutorialManager::_allowAutoLaunchNextStep
	bool ____allowAutoLaunchNextStep_7;
	// System.Boolean GSN.Skill.Games.Common.Tutorial.TutorialManager::_isCurrentStepShown
	bool ____isCurrentStepShown_8;
	// System.Collections.Generic.Dictionary`2<System.String,GSN.Skill.Games.Common.Tutorial.TutorialGroup> GSN.Skill.Games.Common.Tutorial.TutorialManager::_tutorialGroups
	Dictionary_2_t226629613 * ____tutorialGroups_9;

public:
	inline static int32_t get_offset_of_TutorialStepWillShow_1() { return static_cast<int32_t>(offsetof(TutorialManager_t2237337539, ___TutorialStepWillShow_1)); }
	inline TutorialStepWillShowHandler_t4289788300 * get_TutorialStepWillShow_1() const { return ___TutorialStepWillShow_1; }
	inline TutorialStepWillShowHandler_t4289788300 ** get_address_of_TutorialStepWillShow_1() { return &___TutorialStepWillShow_1; }
	inline void set_TutorialStepWillShow_1(TutorialStepWillShowHandler_t4289788300 * value)
	{
		___TutorialStepWillShow_1 = value;
		Il2CppCodeGenWriteBarrier(&___TutorialStepWillShow_1, value);
	}

	inline static int32_t get_offset_of_TutorialStepShown_2() { return static_cast<int32_t>(offsetof(TutorialManager_t2237337539, ___TutorialStepShown_2)); }
	inline TutorialStepShownHandler_t112432346 * get_TutorialStepShown_2() const { return ___TutorialStepShown_2; }
	inline TutorialStepShownHandler_t112432346 ** get_address_of_TutorialStepShown_2() { return &___TutorialStepShown_2; }
	inline void set_TutorialStepShown_2(TutorialStepShownHandler_t112432346 * value)
	{
		___TutorialStepShown_2 = value;
		Il2CppCodeGenWriteBarrier(&___TutorialStepShown_2, value);
	}

	inline static int32_t get_offset_of_TutorialStepWillHide_3() { return static_cast<int32_t>(offsetof(TutorialManager_t2237337539, ___TutorialStepWillHide_3)); }
	inline TutorialStepWillHideHandler_t328307079 * get_TutorialStepWillHide_3() const { return ___TutorialStepWillHide_3; }
	inline TutorialStepWillHideHandler_t328307079 ** get_address_of_TutorialStepWillHide_3() { return &___TutorialStepWillHide_3; }
	inline void set_TutorialStepWillHide_3(TutorialStepWillHideHandler_t328307079 * value)
	{
		___TutorialStepWillHide_3 = value;
		Il2CppCodeGenWriteBarrier(&___TutorialStepWillHide_3, value);
	}

	inline static int32_t get_offset_of_TutorialStepHidden_4() { return static_cast<int32_t>(offsetof(TutorialManager_t2237337539, ___TutorialStepHidden_4)); }
	inline TutorialStepHiddenHandler_t671449327 * get_TutorialStepHidden_4() const { return ___TutorialStepHidden_4; }
	inline TutorialStepHiddenHandler_t671449327 ** get_address_of_TutorialStepHidden_4() { return &___TutorialStepHidden_4; }
	inline void set_TutorialStepHidden_4(TutorialStepHiddenHandler_t671449327 * value)
	{
		___TutorialStepHidden_4 = value;
		Il2CppCodeGenWriteBarrier(&___TutorialStepHidden_4, value);
	}

	inline static int32_t get_offset_of__shownStep_5() { return static_cast<int32_t>(offsetof(TutorialManager_t2237337539, ____shownStep_5)); }
	inline TutorialStep_t11121064 * get__shownStep_5() const { return ____shownStep_5; }
	inline TutorialStep_t11121064 ** get_address_of__shownStep_5() { return &____shownStep_5; }
	inline void set__shownStep_5(TutorialStep_t11121064 * value)
	{
		____shownStep_5 = value;
		Il2CppCodeGenWriteBarrier(&____shownStep_5, value);
	}

	inline static int32_t get_offset_of__ignoreHideEventsFromSteps_6() { return static_cast<int32_t>(offsetof(TutorialManager_t2237337539, ____ignoreHideEventsFromSteps_6)); }
	inline List_1_t3675209492 * get__ignoreHideEventsFromSteps_6() const { return ____ignoreHideEventsFromSteps_6; }
	inline List_1_t3675209492 ** get_address_of__ignoreHideEventsFromSteps_6() { return &____ignoreHideEventsFromSteps_6; }
	inline void set__ignoreHideEventsFromSteps_6(List_1_t3675209492 * value)
	{
		____ignoreHideEventsFromSteps_6 = value;
		Il2CppCodeGenWriteBarrier(&____ignoreHideEventsFromSteps_6, value);
	}

	inline static int32_t get_offset_of__allowAutoLaunchNextStep_7() { return static_cast<int32_t>(offsetof(TutorialManager_t2237337539, ____allowAutoLaunchNextStep_7)); }
	inline bool get__allowAutoLaunchNextStep_7() const { return ____allowAutoLaunchNextStep_7; }
	inline bool* get_address_of__allowAutoLaunchNextStep_7() { return &____allowAutoLaunchNextStep_7; }
	inline void set__allowAutoLaunchNextStep_7(bool value)
	{
		____allowAutoLaunchNextStep_7 = value;
	}

	inline static int32_t get_offset_of__isCurrentStepShown_8() { return static_cast<int32_t>(offsetof(TutorialManager_t2237337539, ____isCurrentStepShown_8)); }
	inline bool get__isCurrentStepShown_8() const { return ____isCurrentStepShown_8; }
	inline bool* get_address_of__isCurrentStepShown_8() { return &____isCurrentStepShown_8; }
	inline void set__isCurrentStepShown_8(bool value)
	{
		____isCurrentStepShown_8 = value;
	}

	inline static int32_t get_offset_of__tutorialGroups_9() { return static_cast<int32_t>(offsetof(TutorialManager_t2237337539, ____tutorialGroups_9)); }
	inline Dictionary_2_t226629613 * get__tutorialGroups_9() const { return ____tutorialGroups_9; }
	inline Dictionary_2_t226629613 ** get_address_of__tutorialGroups_9() { return &____tutorialGroups_9; }
	inline void set__tutorialGroups_9(Dictionary_2_t226629613 * value)
	{
		____tutorialGroups_9 = value;
		Il2CppCodeGenWriteBarrier(&____tutorialGroups_9, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
