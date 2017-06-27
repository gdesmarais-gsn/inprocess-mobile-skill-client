#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Transform
struct Transform_t3275118058;
// TMPro.TextMeshProUGUI
struct TextMeshProUGUI_t934157183;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.UI.CanvasScaler
struct CanvasScaler_t2574720772;
// System.String
struct String_t;

#include "AssemblyU2DCSharp_GSN_Skill_Phoenix_View_ScreenVie3652740853.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Phoenix.View.LoadScreenView
struct  LoadScreenView_t768218321  : public ScreenView_t3652740853
{
public:
	// UnityEngine.Transform GSN.Skill.Phoenix.View.LoadScreenView::_progressBar
	Transform_t3275118058 * ____progressBar_10;
	// UnityEngine.Transform GSN.Skill.Phoenix.View.LoadScreenView::_progressBarReflection
	Transform_t3275118058 * ____progressBarReflection_11;
	// TMPro.TextMeshProUGUI GSN.Skill.Phoenix.View.LoadScreenView::_progressPercentText
	TextMeshProUGUI_t934157183 * ____progressPercentText_12;
	// System.Single GSN.Skill.Phoenix.View.LoadScreenView::_barStartOffSet
	float ____barStartOffSet_13;
	// UnityEngine.Vector3 GSN.Skill.Phoenix.View.LoadScreenView::_scratchVector
	Vector3_t2243707580  ____scratchVector_14;
	// UnityEngine.Transform GSN.Skill.Phoenix.View.LoadScreenView::_errorPopupAnchor
	Transform_t3275118058 * ____errorPopupAnchor_15;
	// UnityEngine.GameObject GSN.Skill.Phoenix.View.LoadScreenView::_globalaActivityIndicator
	GameObject_t1756533147 * ____globalaActivityIndicator_16;
	// UnityEngine.GameObject GSN.Skill.Phoenix.View.LoadScreenView::_landscapeBackground
	GameObject_t1756533147 * ____landscapeBackground_17;
	// UnityEngine.UI.CanvasScaler GSN.Skill.Phoenix.View.LoadScreenView::_canvasScaler
	CanvasScaler_t2574720772 * ____canvasScaler_18;
	// System.Single GSN.Skill.Phoenix.View.LoadScreenView::_currentProgress
	float ____currentProgress_25;

public:
	inline static int32_t get_offset_of__progressBar_10() { return static_cast<int32_t>(offsetof(LoadScreenView_t768218321, ____progressBar_10)); }
	inline Transform_t3275118058 * get__progressBar_10() const { return ____progressBar_10; }
	inline Transform_t3275118058 ** get_address_of__progressBar_10() { return &____progressBar_10; }
	inline void set__progressBar_10(Transform_t3275118058 * value)
	{
		____progressBar_10 = value;
		Il2CppCodeGenWriteBarrier(&____progressBar_10, value);
	}

	inline static int32_t get_offset_of__progressBarReflection_11() { return static_cast<int32_t>(offsetof(LoadScreenView_t768218321, ____progressBarReflection_11)); }
	inline Transform_t3275118058 * get__progressBarReflection_11() const { return ____progressBarReflection_11; }
	inline Transform_t3275118058 ** get_address_of__progressBarReflection_11() { return &____progressBarReflection_11; }
	inline void set__progressBarReflection_11(Transform_t3275118058 * value)
	{
		____progressBarReflection_11 = value;
		Il2CppCodeGenWriteBarrier(&____progressBarReflection_11, value);
	}

	inline static int32_t get_offset_of__progressPercentText_12() { return static_cast<int32_t>(offsetof(LoadScreenView_t768218321, ____progressPercentText_12)); }
	inline TextMeshProUGUI_t934157183 * get__progressPercentText_12() const { return ____progressPercentText_12; }
	inline TextMeshProUGUI_t934157183 ** get_address_of__progressPercentText_12() { return &____progressPercentText_12; }
	inline void set__progressPercentText_12(TextMeshProUGUI_t934157183 * value)
	{
		____progressPercentText_12 = value;
		Il2CppCodeGenWriteBarrier(&____progressPercentText_12, value);
	}

	inline static int32_t get_offset_of__barStartOffSet_13() { return static_cast<int32_t>(offsetof(LoadScreenView_t768218321, ____barStartOffSet_13)); }
	inline float get__barStartOffSet_13() const { return ____barStartOffSet_13; }
	inline float* get_address_of__barStartOffSet_13() { return &____barStartOffSet_13; }
	inline void set__barStartOffSet_13(float value)
	{
		____barStartOffSet_13 = value;
	}

	inline static int32_t get_offset_of__scratchVector_14() { return static_cast<int32_t>(offsetof(LoadScreenView_t768218321, ____scratchVector_14)); }
	inline Vector3_t2243707580  get__scratchVector_14() const { return ____scratchVector_14; }
	inline Vector3_t2243707580 * get_address_of__scratchVector_14() { return &____scratchVector_14; }
	inline void set__scratchVector_14(Vector3_t2243707580  value)
	{
		____scratchVector_14 = value;
	}

	inline static int32_t get_offset_of__errorPopupAnchor_15() { return static_cast<int32_t>(offsetof(LoadScreenView_t768218321, ____errorPopupAnchor_15)); }
	inline Transform_t3275118058 * get__errorPopupAnchor_15() const { return ____errorPopupAnchor_15; }
	inline Transform_t3275118058 ** get_address_of__errorPopupAnchor_15() { return &____errorPopupAnchor_15; }
	inline void set__errorPopupAnchor_15(Transform_t3275118058 * value)
	{
		____errorPopupAnchor_15 = value;
		Il2CppCodeGenWriteBarrier(&____errorPopupAnchor_15, value);
	}

	inline static int32_t get_offset_of__globalaActivityIndicator_16() { return static_cast<int32_t>(offsetof(LoadScreenView_t768218321, ____globalaActivityIndicator_16)); }
	inline GameObject_t1756533147 * get__globalaActivityIndicator_16() const { return ____globalaActivityIndicator_16; }
	inline GameObject_t1756533147 ** get_address_of__globalaActivityIndicator_16() { return &____globalaActivityIndicator_16; }
	inline void set__globalaActivityIndicator_16(GameObject_t1756533147 * value)
	{
		____globalaActivityIndicator_16 = value;
		Il2CppCodeGenWriteBarrier(&____globalaActivityIndicator_16, value);
	}

	inline static int32_t get_offset_of__landscapeBackground_17() { return static_cast<int32_t>(offsetof(LoadScreenView_t768218321, ____landscapeBackground_17)); }
	inline GameObject_t1756533147 * get__landscapeBackground_17() const { return ____landscapeBackground_17; }
	inline GameObject_t1756533147 ** get_address_of__landscapeBackground_17() { return &____landscapeBackground_17; }
	inline void set__landscapeBackground_17(GameObject_t1756533147 * value)
	{
		____landscapeBackground_17 = value;
		Il2CppCodeGenWriteBarrier(&____landscapeBackground_17, value);
	}

	inline static int32_t get_offset_of__canvasScaler_18() { return static_cast<int32_t>(offsetof(LoadScreenView_t768218321, ____canvasScaler_18)); }
	inline CanvasScaler_t2574720772 * get__canvasScaler_18() const { return ____canvasScaler_18; }
	inline CanvasScaler_t2574720772 ** get_address_of__canvasScaler_18() { return &____canvasScaler_18; }
	inline void set__canvasScaler_18(CanvasScaler_t2574720772 * value)
	{
		____canvasScaler_18 = value;
		Il2CppCodeGenWriteBarrier(&____canvasScaler_18, value);
	}

	inline static int32_t get_offset_of__currentProgress_25() { return static_cast<int32_t>(offsetof(LoadScreenView_t768218321, ____currentProgress_25)); }
	inline float get__currentProgress_25() const { return ____currentProgress_25; }
	inline float* get_address_of__currentProgress_25() { return &____currentProgress_25; }
	inline void set__currentProgress_25(float value)
	{
		____currentProgress_25 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
