#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t1756533147;

#include "AssemblyU2DCSharp_GSN_Skill_Phoenix_View_BaseView2538946938.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Phoenix.View.ScreenView
struct  ScreenView_t3652740853  : public BaseView_t2538946938
{
public:
	// UnityEngine.GameObject GSN.Skill.Phoenix.View.ScreenView::_screenContents
	GameObject_t1756533147 * ____screenContents_5;
	// UnityEngine.GameObject GSN.Skill.Phoenix.View.ScreenView::_activityIndicator
	GameObject_t1756533147 * ____activityIndicator_6;
	// System.Single GSN.Skill.Phoenix.View.ScreenView::_screenInTime
	float ____screenInTime_7;
	// System.Single GSN.Skill.Phoenix.View.ScreenView::_screenOutTime
	float ____screenOutTime_8;
	// System.Boolean GSN.Skill.Phoenix.View.ScreenView::_fetchingScreenData
	bool ____fetchingScreenData_9;

public:
	inline static int32_t get_offset_of__screenContents_5() { return static_cast<int32_t>(offsetof(ScreenView_t3652740853, ____screenContents_5)); }
	inline GameObject_t1756533147 * get__screenContents_5() const { return ____screenContents_5; }
	inline GameObject_t1756533147 ** get_address_of__screenContents_5() { return &____screenContents_5; }
	inline void set__screenContents_5(GameObject_t1756533147 * value)
	{
		____screenContents_5 = value;
		Il2CppCodeGenWriteBarrier(&____screenContents_5, value);
	}

	inline static int32_t get_offset_of__activityIndicator_6() { return static_cast<int32_t>(offsetof(ScreenView_t3652740853, ____activityIndicator_6)); }
	inline GameObject_t1756533147 * get__activityIndicator_6() const { return ____activityIndicator_6; }
	inline GameObject_t1756533147 ** get_address_of__activityIndicator_6() { return &____activityIndicator_6; }
	inline void set__activityIndicator_6(GameObject_t1756533147 * value)
	{
		____activityIndicator_6 = value;
		Il2CppCodeGenWriteBarrier(&____activityIndicator_6, value);
	}

	inline static int32_t get_offset_of__screenInTime_7() { return static_cast<int32_t>(offsetof(ScreenView_t3652740853, ____screenInTime_7)); }
	inline float get__screenInTime_7() const { return ____screenInTime_7; }
	inline float* get_address_of__screenInTime_7() { return &____screenInTime_7; }
	inline void set__screenInTime_7(float value)
	{
		____screenInTime_7 = value;
	}

	inline static int32_t get_offset_of__screenOutTime_8() { return static_cast<int32_t>(offsetof(ScreenView_t3652740853, ____screenOutTime_8)); }
	inline float get__screenOutTime_8() const { return ____screenOutTime_8; }
	inline float* get_address_of__screenOutTime_8() { return &____screenOutTime_8; }
	inline void set__screenOutTime_8(float value)
	{
		____screenOutTime_8 = value;
	}

	inline static int32_t get_offset_of__fetchingScreenData_9() { return static_cast<int32_t>(offsetof(ScreenView_t3652740853, ____fetchingScreenData_9)); }
	inline bool get__fetchingScreenData_9() const { return ____fetchingScreenData_9; }
	inline bool* get_address_of__fetchingScreenData_9() { return &____fetchingScreenData_9; }
	inline void set__fetchingScreenData_9(bool value)
	{
		____fetchingScreenData_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
