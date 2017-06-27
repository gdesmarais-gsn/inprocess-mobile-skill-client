﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Transform
struct Transform_t3275118058;
// LTRect
struct LTRect_t2720449186;
// LTDescr/EaseTypeDelegate
struct EaseTypeDelegate_t2852699939;
// LTDescr/ActionMethodDelegate
struct ActionMethodDelegate_t1923010138;
// UnityEngine.SpriteRenderer
struct SpriteRenderer_t1209076198;
// UnityEngine.RectTransform
struct RectTransform_t3349966182;
// UnityEngine.UI.Text
struct Text_t356221433;
// UnityEngine.UI.Image
struct Image_t2042527209;
// UnityEngine.UI.RawImage
struct RawImage_t2749640213;
// UnityEngine.Sprite[]
struct SpriteU5BU5D_t3359083662;
// LTDescrOptional
struct LTDescrOptional_t91551083;

#include "mscorlib_System_Object2689449295.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "AssemblyU2DCSharp_TweenAction3330578889.h"
#include "AssemblyU2DCSharp_LeanTweenType1294766541.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LTDescr
struct  LTDescr_t1981209097  : public Il2CppObject
{
public:
	// System.Boolean LTDescr::toggle
	bool ___toggle_0;
	// System.Boolean LTDescr::useEstimatedTime
	bool ___useEstimatedTime_1;
	// System.Boolean LTDescr::useFrames
	bool ___useFrames_2;
	// System.Boolean LTDescr::useManualTime
	bool ___useManualTime_3;
	// System.Boolean LTDescr::usesNormalDt
	bool ___usesNormalDt_4;
	// System.Boolean LTDescr::hasInitiliazed
	bool ___hasInitiliazed_5;
	// System.Boolean LTDescr::hasExtraOnCompletes
	bool ___hasExtraOnCompletes_6;
	// System.Boolean LTDescr::hasPhysics
	bool ___hasPhysics_7;
	// System.Boolean LTDescr::onCompleteOnRepeat
	bool ___onCompleteOnRepeat_8;
	// System.Boolean LTDescr::onCompleteOnStart
	bool ___onCompleteOnStart_9;
	// System.Boolean LTDescr::useRecursion
	bool ___useRecursion_10;
	// System.Single LTDescr::ratioPassed
	float ___ratioPassed_11;
	// System.Single LTDescr::passed
	float ___passed_12;
	// System.Single LTDescr::delay
	float ___delay_13;
	// System.Single LTDescr::time
	float ___time_14;
	// System.Single LTDescr::speed
	float ___speed_15;
	// System.Single LTDescr::lastVal
	float ___lastVal_16;
	// System.UInt32 LTDescr::_id
	uint32_t ____id_17;
	// System.Int32 LTDescr::loopCount
	int32_t ___loopCount_18;
	// System.UInt32 LTDescr::counter
	uint32_t ___counter_19;
	// System.Single LTDescr::direction
	float ___direction_20;
	// System.Single LTDescr::directionLast
	float ___directionLast_21;
	// System.Single LTDescr::overshoot
	float ___overshoot_22;
	// System.Single LTDescr::period
	float ___period_23;
	// System.Single LTDescr::scale
	float ___scale_24;
	// System.Boolean LTDescr::destroyOnComplete
	bool ___destroyOnComplete_25;
	// UnityEngine.Transform LTDescr::trans
	Transform_t3275118058 * ___trans_26;
	// LTRect LTDescr::ltRect
	LTRect_t2720449186 * ___ltRect_27;
	// UnityEngine.Vector3 LTDescr::fromInternal
	Vector3_t2243707580  ___fromInternal_28;
	// UnityEngine.Vector3 LTDescr::toInternal
	Vector3_t2243707580  ___toInternal_29;
	// UnityEngine.Vector3 LTDescr::diff
	Vector3_t2243707580  ___diff_30;
	// UnityEngine.Vector3 LTDescr::diffDiv2
	Vector3_t2243707580  ___diffDiv2_31;
	// TweenAction LTDescr::type
	int32_t ___type_32;
	// LeanTweenType LTDescr::easeType
	int32_t ___easeType_33;
	// LeanTweenType LTDescr::loopType
	int32_t ___loopType_34;
	// System.Boolean LTDescr::hasUpdateCallback
	bool ___hasUpdateCallback_35;
	// LTDescr/EaseTypeDelegate LTDescr::easeMethod
	EaseTypeDelegate_t2852699939 * ___easeMethod_36;
	// LTDescr/ActionMethodDelegate LTDescr::<easeInternal>k__BackingField
	ActionMethodDelegate_t1923010138 * ___U3CeaseInternalU3Ek__BackingField_37;
	// LTDescr/ActionMethodDelegate LTDescr::<initInternal>k__BackingField
	ActionMethodDelegate_t1923010138 * ___U3CinitInternalU3Ek__BackingField_38;
	// UnityEngine.SpriteRenderer LTDescr::spriteRen
	SpriteRenderer_t1209076198 * ___spriteRen_39;
	// UnityEngine.RectTransform LTDescr::rectTransform
	RectTransform_t3349966182 * ___rectTransform_40;
	// UnityEngine.UI.Text LTDescr::uiText
	Text_t356221433 * ___uiText_41;
	// UnityEngine.UI.Image LTDescr::uiImage
	Image_t2042527209 * ___uiImage_42;
	// UnityEngine.UI.RawImage LTDescr::rawImage
	RawImage_t2749640213 * ___rawImage_43;
	// UnityEngine.Sprite[] LTDescr::sprites
	SpriteU5BU5D_t3359083662* ___sprites_44;
	// LTDescrOptional LTDescr::_optional
	LTDescrOptional_t91551083 * ____optional_45;

public:
	inline static int32_t get_offset_of_toggle_0() { return static_cast<int32_t>(offsetof(LTDescr_t1981209097, ___toggle_0)); }
	inline bool get_toggle_0() const { return ___toggle_0; }
	inline bool* get_address_of_toggle_0() { return &___toggle_0; }
	inline void set_toggle_0(bool value)
	{
		___toggle_0 = value;
	}

	inline static int32_t get_offset_of_useEstimatedTime_1() { return static_cast<int32_t>(offsetof(LTDescr_t1981209097, ___useEstimatedTime_1)); }
	inline bool get_useEstimatedTime_1() const { return ___useEstimatedTime_1; }
	inline bool* get_address_of_useEstimatedTime_1() { return &___useEstimatedTime_1; }
	inline void set_useEstimatedTime_1(bool value)
	{
		___useEstimatedTime_1 = value;
	}

	inline static int32_t get_offset_of_useFrames_2() { return static_cast<int32_t>(offsetof(LTDescr_t1981209097, ___useFrames_2)); }
	inline bool get_useFrames_2() const { return ___useFrames_2; }
	inline bool* get_address_of_useFrames_2() { return &___useFrames_2; }
	inline void set_useFrames_2(bool value)
	{
		___useFrames_2 = value;
	}

	inline static int32_t get_offset_of_useManualTime_3() { return static_cast<int32_t>(offsetof(LTDescr_t1981209097, ___useManualTime_3)); }
	inline bool get_useManualTime_3() const { return ___useManualTime_3; }
	inline bool* get_address_of_useManualTime_3() { return &___useManualTime_3; }
	inline void set_useManualTime_3(bool value)
	{
		___useManualTime_3 = value;
	}

	inline static int32_t get_offset_of_usesNormalDt_4() { return static_cast<int32_t>(offsetof(LTDescr_t1981209097, ___usesNormalDt_4)); }
	inline bool get_usesNormalDt_4() const { return ___usesNormalDt_4; }
	inline bool* get_address_of_usesNormalDt_4() { return &___usesNormalDt_4; }
	inline void set_usesNormalDt_4(bool value)
	{
		___usesNormalDt_4 = value;
	}

	inline static int32_t get_offset_of_hasInitiliazed_5() { return static_cast<int32_t>(offsetof(LTDescr_t1981209097, ___hasInitiliazed_5)); }
	inline bool get_hasInitiliazed_5() const { return ___hasInitiliazed_5; }
	inline bool* get_address_of_hasInitiliazed_5() { return &___hasInitiliazed_5; }
	inline void set_hasInitiliazed_5(bool value)
	{
		___hasInitiliazed_5 = value;
	}

	inline static int32_t get_offset_of_hasExtraOnCompletes_6() { return static_cast<int32_t>(offsetof(LTDescr_t1981209097, ___hasExtraOnCompletes_6)); }
	inline bool get_hasExtraOnCompletes_6() const { return ___hasExtraOnCompletes_6; }
	inline bool* get_address_of_hasExtraOnCompletes_6() { return &___hasExtraOnCompletes_6; }
	inline void set_hasExtraOnCompletes_6(bool value)
	{
		___hasExtraOnCompletes_6 = value;
	}

	inline static int32_t get_offset_of_hasPhysics_7() { return static_cast<int32_t>(offsetof(LTDescr_t1981209097, ___hasPhysics_7)); }
	inline bool get_hasPhysics_7() const { return ___hasPhysics_7; }
	inline bool* get_address_of_hasPhysics_7() { return &___hasPhysics_7; }
	inline void set_hasPhysics_7(bool value)
	{
		___hasPhysics_7 = value;
	}

	inline static int32_t get_offset_of_onCompleteOnRepeat_8() { return static_cast<int32_t>(offsetof(LTDescr_t1981209097, ___onCompleteOnRepeat_8)); }
	inline bool get_onCompleteOnRepeat_8() const { return ___onCompleteOnRepeat_8; }
	inline bool* get_address_of_onCompleteOnRepeat_8() { return &___onCompleteOnRepeat_8; }
	inline void set_onCompleteOnRepeat_8(bool value)
	{
		___onCompleteOnRepeat_8 = value;
	}

	inline static int32_t get_offset_of_onCompleteOnStart_9() { return static_cast<int32_t>(offsetof(LTDescr_t1981209097, ___onCompleteOnStart_9)); }
	inline bool get_onCompleteOnStart_9() const { return ___onCompleteOnStart_9; }
	inline bool* get_address_of_onCompleteOnStart_9() { return &___onCompleteOnStart_9; }
	inline void set_onCompleteOnStart_9(bool value)
	{
		___onCompleteOnStart_9 = value;
	}

	inline static int32_t get_offset_of_useRecursion_10() { return static_cast<int32_t>(offsetof(LTDescr_t1981209097, ___useRecursion_10)); }
	inline bool get_useRecursion_10() const { return ___useRecursion_10; }
	inline bool* get_address_of_useRecursion_10() { return &___useRecursion_10; }
	inline void set_useRecursion_10(bool value)
	{
		___useRecursion_10 = value;
	}

	inline static int32_t get_offset_of_ratioPassed_11() { return static_cast<int32_t>(offsetof(LTDescr_t1981209097, ___ratioPassed_11)); }
	inline float get_ratioPassed_11() const { return ___ratioPassed_11; }
	inline float* get_address_of_ratioPassed_11() { return &___ratioPassed_11; }
	inline void set_ratioPassed_11(float value)
	{
		___ratioPassed_11 = value;
	}

	inline static int32_t get_offset_of_passed_12() { return static_cast<int32_t>(offsetof(LTDescr_t1981209097, ___passed_12)); }
	inline float get_passed_12() const { return ___passed_12; }
	inline float* get_address_of_passed_12() { return &___passed_12; }
	inline void set_passed_12(float value)
	{
		___passed_12 = value;
	}

	inline static int32_t get_offset_of_delay_13() { return static_cast<int32_t>(offsetof(LTDescr_t1981209097, ___delay_13)); }
	inline float get_delay_13() const { return ___delay_13; }
	inline float* get_address_of_delay_13() { return &___delay_13; }
	inline void set_delay_13(float value)
	{
		___delay_13 = value;
	}

	inline static int32_t get_offset_of_time_14() { return static_cast<int32_t>(offsetof(LTDescr_t1981209097, ___time_14)); }
	inline float get_time_14() const { return ___time_14; }
	inline float* get_address_of_time_14() { return &___time_14; }
	inline void set_time_14(float value)
	{
		___time_14 = value;
	}

	inline static int32_t get_offset_of_speed_15() { return static_cast<int32_t>(offsetof(LTDescr_t1981209097, ___speed_15)); }
	inline float get_speed_15() const { return ___speed_15; }
	inline float* get_address_of_speed_15() { return &___speed_15; }
	inline void set_speed_15(float value)
	{
		___speed_15 = value;
	}

	inline static int32_t get_offset_of_lastVal_16() { return static_cast<int32_t>(offsetof(LTDescr_t1981209097, ___lastVal_16)); }
	inline float get_lastVal_16() const { return ___lastVal_16; }
	inline float* get_address_of_lastVal_16() { return &___lastVal_16; }
	inline void set_lastVal_16(float value)
	{
		___lastVal_16 = value;
	}

	inline static int32_t get_offset_of__id_17() { return static_cast<int32_t>(offsetof(LTDescr_t1981209097, ____id_17)); }
	inline uint32_t get__id_17() const { return ____id_17; }
	inline uint32_t* get_address_of__id_17() { return &____id_17; }
	inline void set__id_17(uint32_t value)
	{
		____id_17 = value;
	}

	inline static int32_t get_offset_of_loopCount_18() { return static_cast<int32_t>(offsetof(LTDescr_t1981209097, ___loopCount_18)); }
	inline int32_t get_loopCount_18() const { return ___loopCount_18; }
	inline int32_t* get_address_of_loopCount_18() { return &___loopCount_18; }
	inline void set_loopCount_18(int32_t value)
	{
		___loopCount_18 = value;
	}

	inline static int32_t get_offset_of_counter_19() { return static_cast<int32_t>(offsetof(LTDescr_t1981209097, ___counter_19)); }
	inline uint32_t get_counter_19() const { return ___counter_19; }
	inline uint32_t* get_address_of_counter_19() { return &___counter_19; }
	inline void set_counter_19(uint32_t value)
	{
		___counter_19 = value;
	}

	inline static int32_t get_offset_of_direction_20() { return static_cast<int32_t>(offsetof(LTDescr_t1981209097, ___direction_20)); }
	inline float get_direction_20() const { return ___direction_20; }
	inline float* get_address_of_direction_20() { return &___direction_20; }
	inline void set_direction_20(float value)
	{
		___direction_20 = value;
	}

	inline static int32_t get_offset_of_directionLast_21() { return static_cast<int32_t>(offsetof(LTDescr_t1981209097, ___directionLast_21)); }
	inline float get_directionLast_21() const { return ___directionLast_21; }
	inline float* get_address_of_directionLast_21() { return &___directionLast_21; }
	inline void set_directionLast_21(float value)
	{
		___directionLast_21 = value;
	}

	inline static int32_t get_offset_of_overshoot_22() { return static_cast<int32_t>(offsetof(LTDescr_t1981209097, ___overshoot_22)); }
	inline float get_overshoot_22() const { return ___overshoot_22; }
	inline float* get_address_of_overshoot_22() { return &___overshoot_22; }
	inline void set_overshoot_22(float value)
	{
		___overshoot_22 = value;
	}

	inline static int32_t get_offset_of_period_23() { return static_cast<int32_t>(offsetof(LTDescr_t1981209097, ___period_23)); }
	inline float get_period_23() const { return ___period_23; }
	inline float* get_address_of_period_23() { return &___period_23; }
	inline void set_period_23(float value)
	{
		___period_23 = value;
	}

	inline static int32_t get_offset_of_scale_24() { return static_cast<int32_t>(offsetof(LTDescr_t1981209097, ___scale_24)); }
	inline float get_scale_24() const { return ___scale_24; }
	inline float* get_address_of_scale_24() { return &___scale_24; }
	inline void set_scale_24(float value)
	{
		___scale_24 = value;
	}

	inline static int32_t get_offset_of_destroyOnComplete_25() { return static_cast<int32_t>(offsetof(LTDescr_t1981209097, ___destroyOnComplete_25)); }
	inline bool get_destroyOnComplete_25() const { return ___destroyOnComplete_25; }
	inline bool* get_address_of_destroyOnComplete_25() { return &___destroyOnComplete_25; }
	inline void set_destroyOnComplete_25(bool value)
	{
		___destroyOnComplete_25 = value;
	}

	inline static int32_t get_offset_of_trans_26() { return static_cast<int32_t>(offsetof(LTDescr_t1981209097, ___trans_26)); }
	inline Transform_t3275118058 * get_trans_26() const { return ___trans_26; }
	inline Transform_t3275118058 ** get_address_of_trans_26() { return &___trans_26; }
	inline void set_trans_26(Transform_t3275118058 * value)
	{
		___trans_26 = value;
		Il2CppCodeGenWriteBarrier(&___trans_26, value);
	}

	inline static int32_t get_offset_of_ltRect_27() { return static_cast<int32_t>(offsetof(LTDescr_t1981209097, ___ltRect_27)); }
	inline LTRect_t2720449186 * get_ltRect_27() const { return ___ltRect_27; }
	inline LTRect_t2720449186 ** get_address_of_ltRect_27() { return &___ltRect_27; }
	inline void set_ltRect_27(LTRect_t2720449186 * value)
	{
		___ltRect_27 = value;
		Il2CppCodeGenWriteBarrier(&___ltRect_27, value);
	}

	inline static int32_t get_offset_of_fromInternal_28() { return static_cast<int32_t>(offsetof(LTDescr_t1981209097, ___fromInternal_28)); }
	inline Vector3_t2243707580  get_fromInternal_28() const { return ___fromInternal_28; }
	inline Vector3_t2243707580 * get_address_of_fromInternal_28() { return &___fromInternal_28; }
	inline void set_fromInternal_28(Vector3_t2243707580  value)
	{
		___fromInternal_28 = value;
	}

	inline static int32_t get_offset_of_toInternal_29() { return static_cast<int32_t>(offsetof(LTDescr_t1981209097, ___toInternal_29)); }
	inline Vector3_t2243707580  get_toInternal_29() const { return ___toInternal_29; }
	inline Vector3_t2243707580 * get_address_of_toInternal_29() { return &___toInternal_29; }
	inline void set_toInternal_29(Vector3_t2243707580  value)
	{
		___toInternal_29 = value;
	}

	inline static int32_t get_offset_of_diff_30() { return static_cast<int32_t>(offsetof(LTDescr_t1981209097, ___diff_30)); }
	inline Vector3_t2243707580  get_diff_30() const { return ___diff_30; }
	inline Vector3_t2243707580 * get_address_of_diff_30() { return &___diff_30; }
	inline void set_diff_30(Vector3_t2243707580  value)
	{
		___diff_30 = value;
	}

	inline static int32_t get_offset_of_diffDiv2_31() { return static_cast<int32_t>(offsetof(LTDescr_t1981209097, ___diffDiv2_31)); }
	inline Vector3_t2243707580  get_diffDiv2_31() const { return ___diffDiv2_31; }
	inline Vector3_t2243707580 * get_address_of_diffDiv2_31() { return &___diffDiv2_31; }
	inline void set_diffDiv2_31(Vector3_t2243707580  value)
	{
		___diffDiv2_31 = value;
	}

	inline static int32_t get_offset_of_type_32() { return static_cast<int32_t>(offsetof(LTDescr_t1981209097, ___type_32)); }
	inline int32_t get_type_32() const { return ___type_32; }
	inline int32_t* get_address_of_type_32() { return &___type_32; }
	inline void set_type_32(int32_t value)
	{
		___type_32 = value;
	}

	inline static int32_t get_offset_of_easeType_33() { return static_cast<int32_t>(offsetof(LTDescr_t1981209097, ___easeType_33)); }
	inline int32_t get_easeType_33() const { return ___easeType_33; }
	inline int32_t* get_address_of_easeType_33() { return &___easeType_33; }
	inline void set_easeType_33(int32_t value)
	{
		___easeType_33 = value;
	}

	inline static int32_t get_offset_of_loopType_34() { return static_cast<int32_t>(offsetof(LTDescr_t1981209097, ___loopType_34)); }
	inline int32_t get_loopType_34() const { return ___loopType_34; }
	inline int32_t* get_address_of_loopType_34() { return &___loopType_34; }
	inline void set_loopType_34(int32_t value)
	{
		___loopType_34 = value;
	}

	inline static int32_t get_offset_of_hasUpdateCallback_35() { return static_cast<int32_t>(offsetof(LTDescr_t1981209097, ___hasUpdateCallback_35)); }
	inline bool get_hasUpdateCallback_35() const { return ___hasUpdateCallback_35; }
	inline bool* get_address_of_hasUpdateCallback_35() { return &___hasUpdateCallback_35; }
	inline void set_hasUpdateCallback_35(bool value)
	{
		___hasUpdateCallback_35 = value;
	}

	inline static int32_t get_offset_of_easeMethod_36() { return static_cast<int32_t>(offsetof(LTDescr_t1981209097, ___easeMethod_36)); }
	inline EaseTypeDelegate_t2852699939 * get_easeMethod_36() const { return ___easeMethod_36; }
	inline EaseTypeDelegate_t2852699939 ** get_address_of_easeMethod_36() { return &___easeMethod_36; }
	inline void set_easeMethod_36(EaseTypeDelegate_t2852699939 * value)
	{
		___easeMethod_36 = value;
		Il2CppCodeGenWriteBarrier(&___easeMethod_36, value);
	}

	inline static int32_t get_offset_of_U3CeaseInternalU3Ek__BackingField_37() { return static_cast<int32_t>(offsetof(LTDescr_t1981209097, ___U3CeaseInternalU3Ek__BackingField_37)); }
	inline ActionMethodDelegate_t1923010138 * get_U3CeaseInternalU3Ek__BackingField_37() const { return ___U3CeaseInternalU3Ek__BackingField_37; }
	inline ActionMethodDelegate_t1923010138 ** get_address_of_U3CeaseInternalU3Ek__BackingField_37() { return &___U3CeaseInternalU3Ek__BackingField_37; }
	inline void set_U3CeaseInternalU3Ek__BackingField_37(ActionMethodDelegate_t1923010138 * value)
	{
		___U3CeaseInternalU3Ek__BackingField_37 = value;
		Il2CppCodeGenWriteBarrier(&___U3CeaseInternalU3Ek__BackingField_37, value);
	}

	inline static int32_t get_offset_of_U3CinitInternalU3Ek__BackingField_38() { return static_cast<int32_t>(offsetof(LTDescr_t1981209097, ___U3CinitInternalU3Ek__BackingField_38)); }
	inline ActionMethodDelegate_t1923010138 * get_U3CinitInternalU3Ek__BackingField_38() const { return ___U3CinitInternalU3Ek__BackingField_38; }
	inline ActionMethodDelegate_t1923010138 ** get_address_of_U3CinitInternalU3Ek__BackingField_38() { return &___U3CinitInternalU3Ek__BackingField_38; }
	inline void set_U3CinitInternalU3Ek__BackingField_38(ActionMethodDelegate_t1923010138 * value)
	{
		___U3CinitInternalU3Ek__BackingField_38 = value;
		Il2CppCodeGenWriteBarrier(&___U3CinitInternalU3Ek__BackingField_38, value);
	}

	inline static int32_t get_offset_of_spriteRen_39() { return static_cast<int32_t>(offsetof(LTDescr_t1981209097, ___spriteRen_39)); }
	inline SpriteRenderer_t1209076198 * get_spriteRen_39() const { return ___spriteRen_39; }
	inline SpriteRenderer_t1209076198 ** get_address_of_spriteRen_39() { return &___spriteRen_39; }
	inline void set_spriteRen_39(SpriteRenderer_t1209076198 * value)
	{
		___spriteRen_39 = value;
		Il2CppCodeGenWriteBarrier(&___spriteRen_39, value);
	}

	inline static int32_t get_offset_of_rectTransform_40() { return static_cast<int32_t>(offsetof(LTDescr_t1981209097, ___rectTransform_40)); }
	inline RectTransform_t3349966182 * get_rectTransform_40() const { return ___rectTransform_40; }
	inline RectTransform_t3349966182 ** get_address_of_rectTransform_40() { return &___rectTransform_40; }
	inline void set_rectTransform_40(RectTransform_t3349966182 * value)
	{
		___rectTransform_40 = value;
		Il2CppCodeGenWriteBarrier(&___rectTransform_40, value);
	}

	inline static int32_t get_offset_of_uiText_41() { return static_cast<int32_t>(offsetof(LTDescr_t1981209097, ___uiText_41)); }
	inline Text_t356221433 * get_uiText_41() const { return ___uiText_41; }
	inline Text_t356221433 ** get_address_of_uiText_41() { return &___uiText_41; }
	inline void set_uiText_41(Text_t356221433 * value)
	{
		___uiText_41 = value;
		Il2CppCodeGenWriteBarrier(&___uiText_41, value);
	}

	inline static int32_t get_offset_of_uiImage_42() { return static_cast<int32_t>(offsetof(LTDescr_t1981209097, ___uiImage_42)); }
	inline Image_t2042527209 * get_uiImage_42() const { return ___uiImage_42; }
	inline Image_t2042527209 ** get_address_of_uiImage_42() { return &___uiImage_42; }
	inline void set_uiImage_42(Image_t2042527209 * value)
	{
		___uiImage_42 = value;
		Il2CppCodeGenWriteBarrier(&___uiImage_42, value);
	}

	inline static int32_t get_offset_of_rawImage_43() { return static_cast<int32_t>(offsetof(LTDescr_t1981209097, ___rawImage_43)); }
	inline RawImage_t2749640213 * get_rawImage_43() const { return ___rawImage_43; }
	inline RawImage_t2749640213 ** get_address_of_rawImage_43() { return &___rawImage_43; }
	inline void set_rawImage_43(RawImage_t2749640213 * value)
	{
		___rawImage_43 = value;
		Il2CppCodeGenWriteBarrier(&___rawImage_43, value);
	}

	inline static int32_t get_offset_of_sprites_44() { return static_cast<int32_t>(offsetof(LTDescr_t1981209097, ___sprites_44)); }
	inline SpriteU5BU5D_t3359083662* get_sprites_44() const { return ___sprites_44; }
	inline SpriteU5BU5D_t3359083662** get_address_of_sprites_44() { return &___sprites_44; }
	inline void set_sprites_44(SpriteU5BU5D_t3359083662* value)
	{
		___sprites_44 = value;
		Il2CppCodeGenWriteBarrier(&___sprites_44, value);
	}

	inline static int32_t get_offset_of__optional_45() { return static_cast<int32_t>(offsetof(LTDescr_t1981209097, ____optional_45)); }
	inline LTDescrOptional_t91551083 * get__optional_45() const { return ____optional_45; }
	inline LTDescrOptional_t91551083 ** get_address_of__optional_45() { return &____optional_45; }
	inline void set__optional_45(LTDescrOptional_t91551083 * value)
	{
		____optional_45 = value;
		Il2CppCodeGenWriteBarrier(&____optional_45, value);
	}
};

struct LTDescr_t1981209097_StaticFields
{
public:
	// System.UInt32 LTDescr::global_counter
	uint32_t ___global_counter_46;
	// System.Single LTDescr::val
	float ___val_47;
	// System.Single LTDescr::dt
	float ___dt_48;
	// UnityEngine.Vector3 LTDescr::newVect
	Vector3_t2243707580  ___newVect_49;
	// LTDescr/ActionMethodDelegate LTDescr::<>f__am$cache0
	ActionMethodDelegate_t1923010138 * ___U3CU3Ef__amU24cache0_50;
	// LTDescr/ActionMethodDelegate LTDescr::<>f__am$cache1
	ActionMethodDelegate_t1923010138 * ___U3CU3Ef__amU24cache1_51;

public:
	inline static int32_t get_offset_of_global_counter_46() { return static_cast<int32_t>(offsetof(LTDescr_t1981209097_StaticFields, ___global_counter_46)); }
	inline uint32_t get_global_counter_46() const { return ___global_counter_46; }
	inline uint32_t* get_address_of_global_counter_46() { return &___global_counter_46; }
	inline void set_global_counter_46(uint32_t value)
	{
		___global_counter_46 = value;
	}

	inline static int32_t get_offset_of_val_47() { return static_cast<int32_t>(offsetof(LTDescr_t1981209097_StaticFields, ___val_47)); }
	inline float get_val_47() const { return ___val_47; }
	inline float* get_address_of_val_47() { return &___val_47; }
	inline void set_val_47(float value)
	{
		___val_47 = value;
	}

	inline static int32_t get_offset_of_dt_48() { return static_cast<int32_t>(offsetof(LTDescr_t1981209097_StaticFields, ___dt_48)); }
	inline float get_dt_48() const { return ___dt_48; }
	inline float* get_address_of_dt_48() { return &___dt_48; }
	inline void set_dt_48(float value)
	{
		___dt_48 = value;
	}

	inline static int32_t get_offset_of_newVect_49() { return static_cast<int32_t>(offsetof(LTDescr_t1981209097_StaticFields, ___newVect_49)); }
	inline Vector3_t2243707580  get_newVect_49() const { return ___newVect_49; }
	inline Vector3_t2243707580 * get_address_of_newVect_49() { return &___newVect_49; }
	inline void set_newVect_49(Vector3_t2243707580  value)
	{
		___newVect_49 = value;
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_50() { return static_cast<int32_t>(offsetof(LTDescr_t1981209097_StaticFields, ___U3CU3Ef__amU24cache0_50)); }
	inline ActionMethodDelegate_t1923010138 * get_U3CU3Ef__amU24cache0_50() const { return ___U3CU3Ef__amU24cache0_50; }
	inline ActionMethodDelegate_t1923010138 ** get_address_of_U3CU3Ef__amU24cache0_50() { return &___U3CU3Ef__amU24cache0_50; }
	inline void set_U3CU3Ef__amU24cache0_50(ActionMethodDelegate_t1923010138 * value)
	{
		___U3CU3Ef__amU24cache0_50 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache0_50, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache1_51() { return static_cast<int32_t>(offsetof(LTDescr_t1981209097_StaticFields, ___U3CU3Ef__amU24cache1_51)); }
	inline ActionMethodDelegate_t1923010138 * get_U3CU3Ef__amU24cache1_51() const { return ___U3CU3Ef__amU24cache1_51; }
	inline ActionMethodDelegate_t1923010138 ** get_address_of_U3CU3Ef__amU24cache1_51() { return &___U3CU3Ef__amU24cache1_51; }
	inline void set_U3CU3Ef__amU24cache1_51(ActionMethodDelegate_t1923010138 * value)
	{
		___U3CU3Ef__amU24cache1_51 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache1_51, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif