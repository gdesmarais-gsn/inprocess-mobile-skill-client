#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<System.Int32>
struct List_1_t1440998580;
// UnityEngine.Animator
struct Animator_t69676727;
// System.String
struct String_t;

#include "AssemblyU2DCSharp_GSN_Skill_Games_Common_Tutorial_2587800018.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Games.Tripeaks.TriPeaksTutorialStepController
struct  TriPeaksTutorialStepController_t1707295283  : public TutorialStepController_t2587800018
{
public:
	// System.Collections.Generic.List`1<System.Int32> GSN.Skill.Games.Tripeaks.TriPeaksTutorialStepController::cardIdsToAdvance
	List_1_t1440998580 * ___cardIdsToAdvance_6;
	// System.Collections.Generic.List`1<System.Int32> GSN.Skill.Games.Tripeaks.TriPeaksTutorialStepController::cardIdsToHighlightSelect
	List_1_t1440998580 * ___cardIdsToHighlightSelect_7;
	// System.Collections.Generic.List`1<System.Int32> GSN.Skill.Games.Tripeaks.TriPeaksTutorialStepController::cardIdsToHighlightDestination
	List_1_t1440998580 * ___cardIdsToHighlightDestination_8;
	// System.Single GSN.Skill.Games.Tripeaks.TriPeaksTutorialStepController::autoHideDuration
	float ___autoHideDuration_9;
	// System.Boolean GSN.Skill.Games.Tripeaks.TriPeaksTutorialStepController::animateIn
	bool ___animateIn_10;
	// System.Boolean GSN.Skill.Games.Tripeaks.TriPeaksTutorialStepController::animateOut
	bool ___animateOut_11;
	// UnityEngine.Animator GSN.Skill.Games.Tripeaks.TriPeaksTutorialStepController::animator
	Animator_t69676727 * ___animator_12;

public:
	inline static int32_t get_offset_of_cardIdsToAdvance_6() { return static_cast<int32_t>(offsetof(TriPeaksTutorialStepController_t1707295283, ___cardIdsToAdvance_6)); }
	inline List_1_t1440998580 * get_cardIdsToAdvance_6() const { return ___cardIdsToAdvance_6; }
	inline List_1_t1440998580 ** get_address_of_cardIdsToAdvance_6() { return &___cardIdsToAdvance_6; }
	inline void set_cardIdsToAdvance_6(List_1_t1440998580 * value)
	{
		___cardIdsToAdvance_6 = value;
		Il2CppCodeGenWriteBarrier(&___cardIdsToAdvance_6, value);
	}

	inline static int32_t get_offset_of_cardIdsToHighlightSelect_7() { return static_cast<int32_t>(offsetof(TriPeaksTutorialStepController_t1707295283, ___cardIdsToHighlightSelect_7)); }
	inline List_1_t1440998580 * get_cardIdsToHighlightSelect_7() const { return ___cardIdsToHighlightSelect_7; }
	inline List_1_t1440998580 ** get_address_of_cardIdsToHighlightSelect_7() { return &___cardIdsToHighlightSelect_7; }
	inline void set_cardIdsToHighlightSelect_7(List_1_t1440998580 * value)
	{
		___cardIdsToHighlightSelect_7 = value;
		Il2CppCodeGenWriteBarrier(&___cardIdsToHighlightSelect_7, value);
	}

	inline static int32_t get_offset_of_cardIdsToHighlightDestination_8() { return static_cast<int32_t>(offsetof(TriPeaksTutorialStepController_t1707295283, ___cardIdsToHighlightDestination_8)); }
	inline List_1_t1440998580 * get_cardIdsToHighlightDestination_8() const { return ___cardIdsToHighlightDestination_8; }
	inline List_1_t1440998580 ** get_address_of_cardIdsToHighlightDestination_8() { return &___cardIdsToHighlightDestination_8; }
	inline void set_cardIdsToHighlightDestination_8(List_1_t1440998580 * value)
	{
		___cardIdsToHighlightDestination_8 = value;
		Il2CppCodeGenWriteBarrier(&___cardIdsToHighlightDestination_8, value);
	}

	inline static int32_t get_offset_of_autoHideDuration_9() { return static_cast<int32_t>(offsetof(TriPeaksTutorialStepController_t1707295283, ___autoHideDuration_9)); }
	inline float get_autoHideDuration_9() const { return ___autoHideDuration_9; }
	inline float* get_address_of_autoHideDuration_9() { return &___autoHideDuration_9; }
	inline void set_autoHideDuration_9(float value)
	{
		___autoHideDuration_9 = value;
	}

	inline static int32_t get_offset_of_animateIn_10() { return static_cast<int32_t>(offsetof(TriPeaksTutorialStepController_t1707295283, ___animateIn_10)); }
	inline bool get_animateIn_10() const { return ___animateIn_10; }
	inline bool* get_address_of_animateIn_10() { return &___animateIn_10; }
	inline void set_animateIn_10(bool value)
	{
		___animateIn_10 = value;
	}

	inline static int32_t get_offset_of_animateOut_11() { return static_cast<int32_t>(offsetof(TriPeaksTutorialStepController_t1707295283, ___animateOut_11)); }
	inline bool get_animateOut_11() const { return ___animateOut_11; }
	inline bool* get_address_of_animateOut_11() { return &___animateOut_11; }
	inline void set_animateOut_11(bool value)
	{
		___animateOut_11 = value;
	}

	inline static int32_t get_offset_of_animator_12() { return static_cast<int32_t>(offsetof(TriPeaksTutorialStepController_t1707295283, ___animator_12)); }
	inline Animator_t69676727 * get_animator_12() const { return ___animator_12; }
	inline Animator_t69676727 ** get_address_of_animator_12() { return &___animator_12; }
	inline void set_animator_12(Animator_t69676727 * value)
	{
		___animator_12 = value;
		Il2CppCodeGenWriteBarrier(&___animator_12, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
