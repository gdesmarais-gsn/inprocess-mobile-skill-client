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
// LTBezierPath
struct LTBezierPath_t292484408;
// LTSpline
struct LTSpline_t3159710915;
// UnityEngine.AnimationCurve
struct AnimationCurve_t3306541151;
// LTRect
struct LTRect_t2720449186;
// System.Action`1<System.Single>
struct Action_1_t1878309314;
// System.Action`2<System.Single,System.Single>
struct Action_2_t3216573049;
// System.Action`2<System.Single,System.Object>
struct Action_2_t3829512412;
// System.Action`1<UnityEngine.Vector2>
struct Action_1_t2045506961;
// System.Action`1<UnityEngine.Vector3>
struct Action_1_t2045506962;
// System.Action`2<UnityEngine.Vector3,System.Object>
struct Action_2_t129729484;
// System.Action`1<UnityEngine.Color>
struct Action_1_t1822191457;
// System.Action`2<UnityEngine.Color,System.Object>
struct Action_2_t3924735457;
// System.Action
struct Action_t3226471752;
// System.Action`1<System.Object>
struct Action_1_t2491248677;
// System.Object
struct Il2CppObject;

#include "mscorlib_System_Object2689449295.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "UnityEngine_UnityEngine_Quaternion4030073918.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LTDescrOptional
struct  LTDescrOptional_t91551083  : public Il2CppObject
{
public:
	// UnityEngine.Transform LTDescrOptional::<toTrans>k__BackingField
	Transform_t3275118058 * ___U3CtoTransU3Ek__BackingField_0;
	// UnityEngine.Vector3 LTDescrOptional::<point>k__BackingField
	Vector3_t2243707580  ___U3CpointU3Ek__BackingField_1;
	// UnityEngine.Vector3 LTDescrOptional::<axis>k__BackingField
	Vector3_t2243707580  ___U3CaxisU3Ek__BackingField_2;
	// System.Single LTDescrOptional::<lastVal>k__BackingField
	float ___U3ClastValU3Ek__BackingField_3;
	// UnityEngine.Quaternion LTDescrOptional::<origRotation>k__BackingField
	Quaternion_t4030073918  ___U3CorigRotationU3Ek__BackingField_4;
	// LTBezierPath LTDescrOptional::<path>k__BackingField
	LTBezierPath_t292484408 * ___U3CpathU3Ek__BackingField_5;
	// LTSpline LTDescrOptional::<spline>k__BackingField
	LTSpline_t3159710915 * ___U3CsplineU3Ek__BackingField_6;
	// UnityEngine.AnimationCurve LTDescrOptional::animationCurve
	AnimationCurve_t3306541151 * ___animationCurve_7;
	// System.Int32 LTDescrOptional::initFrameCount
	int32_t ___initFrameCount_8;
	// LTRect LTDescrOptional::<ltRect>k__BackingField
	LTRect_t2720449186 * ___U3CltRectU3Ek__BackingField_9;
	// System.Action`1<System.Single> LTDescrOptional::<onUpdateFloat>k__BackingField
	Action_1_t1878309314 * ___U3ConUpdateFloatU3Ek__BackingField_10;
	// System.Action`2<System.Single,System.Single> LTDescrOptional::<onUpdateFloatRatio>k__BackingField
	Action_2_t3216573049 * ___U3ConUpdateFloatRatioU3Ek__BackingField_11;
	// System.Action`2<System.Single,System.Object> LTDescrOptional::<onUpdateFloatObject>k__BackingField
	Action_2_t3829512412 * ___U3ConUpdateFloatObjectU3Ek__BackingField_12;
	// System.Action`1<UnityEngine.Vector2> LTDescrOptional::<onUpdateVector2>k__BackingField
	Action_1_t2045506961 * ___U3ConUpdateVector2U3Ek__BackingField_13;
	// System.Action`1<UnityEngine.Vector3> LTDescrOptional::<onUpdateVector3>k__BackingField
	Action_1_t2045506962 * ___U3ConUpdateVector3U3Ek__BackingField_14;
	// System.Action`2<UnityEngine.Vector3,System.Object> LTDescrOptional::<onUpdateVector3Object>k__BackingField
	Action_2_t129729484 * ___U3ConUpdateVector3ObjectU3Ek__BackingField_15;
	// System.Action`1<UnityEngine.Color> LTDescrOptional::<onUpdateColor>k__BackingField
	Action_1_t1822191457 * ___U3ConUpdateColorU3Ek__BackingField_16;
	// System.Action`2<UnityEngine.Color,System.Object> LTDescrOptional::<onUpdateColorObject>k__BackingField
	Action_2_t3924735457 * ___U3ConUpdateColorObjectU3Ek__BackingField_17;
	// System.Action LTDescrOptional::<onComplete>k__BackingField
	Action_t3226471752 * ___U3ConCompleteU3Ek__BackingField_18;
	// System.Action`1<System.Object> LTDescrOptional::<onCompleteObject>k__BackingField
	Action_1_t2491248677 * ___U3ConCompleteObjectU3Ek__BackingField_19;
	// System.Object LTDescrOptional::<onCompleteParam>k__BackingField
	Il2CppObject * ___U3ConCompleteParamU3Ek__BackingField_20;
	// System.Object LTDescrOptional::<onUpdateParam>k__BackingField
	Il2CppObject * ___U3ConUpdateParamU3Ek__BackingField_21;
	// System.Action LTDescrOptional::<onStart>k__BackingField
	Action_t3226471752 * ___U3ConStartU3Ek__BackingField_22;

public:
	inline static int32_t get_offset_of_U3CtoTransU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(LTDescrOptional_t91551083, ___U3CtoTransU3Ek__BackingField_0)); }
	inline Transform_t3275118058 * get_U3CtoTransU3Ek__BackingField_0() const { return ___U3CtoTransU3Ek__BackingField_0; }
	inline Transform_t3275118058 ** get_address_of_U3CtoTransU3Ek__BackingField_0() { return &___U3CtoTransU3Ek__BackingField_0; }
	inline void set_U3CtoTransU3Ek__BackingField_0(Transform_t3275118058 * value)
	{
		___U3CtoTransU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier(&___U3CtoTransU3Ek__BackingField_0, value);
	}

	inline static int32_t get_offset_of_U3CpointU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(LTDescrOptional_t91551083, ___U3CpointU3Ek__BackingField_1)); }
	inline Vector3_t2243707580  get_U3CpointU3Ek__BackingField_1() const { return ___U3CpointU3Ek__BackingField_1; }
	inline Vector3_t2243707580 * get_address_of_U3CpointU3Ek__BackingField_1() { return &___U3CpointU3Ek__BackingField_1; }
	inline void set_U3CpointU3Ek__BackingField_1(Vector3_t2243707580  value)
	{
		___U3CpointU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CaxisU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(LTDescrOptional_t91551083, ___U3CaxisU3Ek__BackingField_2)); }
	inline Vector3_t2243707580  get_U3CaxisU3Ek__BackingField_2() const { return ___U3CaxisU3Ek__BackingField_2; }
	inline Vector3_t2243707580 * get_address_of_U3CaxisU3Ek__BackingField_2() { return &___U3CaxisU3Ek__BackingField_2; }
	inline void set_U3CaxisU3Ek__BackingField_2(Vector3_t2243707580  value)
	{
		___U3CaxisU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3ClastValU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(LTDescrOptional_t91551083, ___U3ClastValU3Ek__BackingField_3)); }
	inline float get_U3ClastValU3Ek__BackingField_3() const { return ___U3ClastValU3Ek__BackingField_3; }
	inline float* get_address_of_U3ClastValU3Ek__BackingField_3() { return &___U3ClastValU3Ek__BackingField_3; }
	inline void set_U3ClastValU3Ek__BackingField_3(float value)
	{
		___U3ClastValU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CorigRotationU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(LTDescrOptional_t91551083, ___U3CorigRotationU3Ek__BackingField_4)); }
	inline Quaternion_t4030073918  get_U3CorigRotationU3Ek__BackingField_4() const { return ___U3CorigRotationU3Ek__BackingField_4; }
	inline Quaternion_t4030073918 * get_address_of_U3CorigRotationU3Ek__BackingField_4() { return &___U3CorigRotationU3Ek__BackingField_4; }
	inline void set_U3CorigRotationU3Ek__BackingField_4(Quaternion_t4030073918  value)
	{
		___U3CorigRotationU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CpathU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(LTDescrOptional_t91551083, ___U3CpathU3Ek__BackingField_5)); }
	inline LTBezierPath_t292484408 * get_U3CpathU3Ek__BackingField_5() const { return ___U3CpathU3Ek__BackingField_5; }
	inline LTBezierPath_t292484408 ** get_address_of_U3CpathU3Ek__BackingField_5() { return &___U3CpathU3Ek__BackingField_5; }
	inline void set_U3CpathU3Ek__BackingField_5(LTBezierPath_t292484408 * value)
	{
		___U3CpathU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier(&___U3CpathU3Ek__BackingField_5, value);
	}

	inline static int32_t get_offset_of_U3CsplineU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(LTDescrOptional_t91551083, ___U3CsplineU3Ek__BackingField_6)); }
	inline LTSpline_t3159710915 * get_U3CsplineU3Ek__BackingField_6() const { return ___U3CsplineU3Ek__BackingField_6; }
	inline LTSpline_t3159710915 ** get_address_of_U3CsplineU3Ek__BackingField_6() { return &___U3CsplineU3Ek__BackingField_6; }
	inline void set_U3CsplineU3Ek__BackingField_6(LTSpline_t3159710915 * value)
	{
		___U3CsplineU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier(&___U3CsplineU3Ek__BackingField_6, value);
	}

	inline static int32_t get_offset_of_animationCurve_7() { return static_cast<int32_t>(offsetof(LTDescrOptional_t91551083, ___animationCurve_7)); }
	inline AnimationCurve_t3306541151 * get_animationCurve_7() const { return ___animationCurve_7; }
	inline AnimationCurve_t3306541151 ** get_address_of_animationCurve_7() { return &___animationCurve_7; }
	inline void set_animationCurve_7(AnimationCurve_t3306541151 * value)
	{
		___animationCurve_7 = value;
		Il2CppCodeGenWriteBarrier(&___animationCurve_7, value);
	}

	inline static int32_t get_offset_of_initFrameCount_8() { return static_cast<int32_t>(offsetof(LTDescrOptional_t91551083, ___initFrameCount_8)); }
	inline int32_t get_initFrameCount_8() const { return ___initFrameCount_8; }
	inline int32_t* get_address_of_initFrameCount_8() { return &___initFrameCount_8; }
	inline void set_initFrameCount_8(int32_t value)
	{
		___initFrameCount_8 = value;
	}

	inline static int32_t get_offset_of_U3CltRectU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(LTDescrOptional_t91551083, ___U3CltRectU3Ek__BackingField_9)); }
	inline LTRect_t2720449186 * get_U3CltRectU3Ek__BackingField_9() const { return ___U3CltRectU3Ek__BackingField_9; }
	inline LTRect_t2720449186 ** get_address_of_U3CltRectU3Ek__BackingField_9() { return &___U3CltRectU3Ek__BackingField_9; }
	inline void set_U3CltRectU3Ek__BackingField_9(LTRect_t2720449186 * value)
	{
		___U3CltRectU3Ek__BackingField_9 = value;
		Il2CppCodeGenWriteBarrier(&___U3CltRectU3Ek__BackingField_9, value);
	}

	inline static int32_t get_offset_of_U3ConUpdateFloatU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(LTDescrOptional_t91551083, ___U3ConUpdateFloatU3Ek__BackingField_10)); }
	inline Action_1_t1878309314 * get_U3ConUpdateFloatU3Ek__BackingField_10() const { return ___U3ConUpdateFloatU3Ek__BackingField_10; }
	inline Action_1_t1878309314 ** get_address_of_U3ConUpdateFloatU3Ek__BackingField_10() { return &___U3ConUpdateFloatU3Ek__BackingField_10; }
	inline void set_U3ConUpdateFloatU3Ek__BackingField_10(Action_1_t1878309314 * value)
	{
		___U3ConUpdateFloatU3Ek__BackingField_10 = value;
		Il2CppCodeGenWriteBarrier(&___U3ConUpdateFloatU3Ek__BackingField_10, value);
	}

	inline static int32_t get_offset_of_U3ConUpdateFloatRatioU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(LTDescrOptional_t91551083, ___U3ConUpdateFloatRatioU3Ek__BackingField_11)); }
	inline Action_2_t3216573049 * get_U3ConUpdateFloatRatioU3Ek__BackingField_11() const { return ___U3ConUpdateFloatRatioU3Ek__BackingField_11; }
	inline Action_2_t3216573049 ** get_address_of_U3ConUpdateFloatRatioU3Ek__BackingField_11() { return &___U3ConUpdateFloatRatioU3Ek__BackingField_11; }
	inline void set_U3ConUpdateFloatRatioU3Ek__BackingField_11(Action_2_t3216573049 * value)
	{
		___U3ConUpdateFloatRatioU3Ek__BackingField_11 = value;
		Il2CppCodeGenWriteBarrier(&___U3ConUpdateFloatRatioU3Ek__BackingField_11, value);
	}

	inline static int32_t get_offset_of_U3ConUpdateFloatObjectU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(LTDescrOptional_t91551083, ___U3ConUpdateFloatObjectU3Ek__BackingField_12)); }
	inline Action_2_t3829512412 * get_U3ConUpdateFloatObjectU3Ek__BackingField_12() const { return ___U3ConUpdateFloatObjectU3Ek__BackingField_12; }
	inline Action_2_t3829512412 ** get_address_of_U3ConUpdateFloatObjectU3Ek__BackingField_12() { return &___U3ConUpdateFloatObjectU3Ek__BackingField_12; }
	inline void set_U3ConUpdateFloatObjectU3Ek__BackingField_12(Action_2_t3829512412 * value)
	{
		___U3ConUpdateFloatObjectU3Ek__BackingField_12 = value;
		Il2CppCodeGenWriteBarrier(&___U3ConUpdateFloatObjectU3Ek__BackingField_12, value);
	}

	inline static int32_t get_offset_of_U3ConUpdateVector2U3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(LTDescrOptional_t91551083, ___U3ConUpdateVector2U3Ek__BackingField_13)); }
	inline Action_1_t2045506961 * get_U3ConUpdateVector2U3Ek__BackingField_13() const { return ___U3ConUpdateVector2U3Ek__BackingField_13; }
	inline Action_1_t2045506961 ** get_address_of_U3ConUpdateVector2U3Ek__BackingField_13() { return &___U3ConUpdateVector2U3Ek__BackingField_13; }
	inline void set_U3ConUpdateVector2U3Ek__BackingField_13(Action_1_t2045506961 * value)
	{
		___U3ConUpdateVector2U3Ek__BackingField_13 = value;
		Il2CppCodeGenWriteBarrier(&___U3ConUpdateVector2U3Ek__BackingField_13, value);
	}

	inline static int32_t get_offset_of_U3ConUpdateVector3U3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(LTDescrOptional_t91551083, ___U3ConUpdateVector3U3Ek__BackingField_14)); }
	inline Action_1_t2045506962 * get_U3ConUpdateVector3U3Ek__BackingField_14() const { return ___U3ConUpdateVector3U3Ek__BackingField_14; }
	inline Action_1_t2045506962 ** get_address_of_U3ConUpdateVector3U3Ek__BackingField_14() { return &___U3ConUpdateVector3U3Ek__BackingField_14; }
	inline void set_U3ConUpdateVector3U3Ek__BackingField_14(Action_1_t2045506962 * value)
	{
		___U3ConUpdateVector3U3Ek__BackingField_14 = value;
		Il2CppCodeGenWriteBarrier(&___U3ConUpdateVector3U3Ek__BackingField_14, value);
	}

	inline static int32_t get_offset_of_U3ConUpdateVector3ObjectU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(LTDescrOptional_t91551083, ___U3ConUpdateVector3ObjectU3Ek__BackingField_15)); }
	inline Action_2_t129729484 * get_U3ConUpdateVector3ObjectU3Ek__BackingField_15() const { return ___U3ConUpdateVector3ObjectU3Ek__BackingField_15; }
	inline Action_2_t129729484 ** get_address_of_U3ConUpdateVector3ObjectU3Ek__BackingField_15() { return &___U3ConUpdateVector3ObjectU3Ek__BackingField_15; }
	inline void set_U3ConUpdateVector3ObjectU3Ek__BackingField_15(Action_2_t129729484 * value)
	{
		___U3ConUpdateVector3ObjectU3Ek__BackingField_15 = value;
		Il2CppCodeGenWriteBarrier(&___U3ConUpdateVector3ObjectU3Ek__BackingField_15, value);
	}

	inline static int32_t get_offset_of_U3ConUpdateColorU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(LTDescrOptional_t91551083, ___U3ConUpdateColorU3Ek__BackingField_16)); }
	inline Action_1_t1822191457 * get_U3ConUpdateColorU3Ek__BackingField_16() const { return ___U3ConUpdateColorU3Ek__BackingField_16; }
	inline Action_1_t1822191457 ** get_address_of_U3ConUpdateColorU3Ek__BackingField_16() { return &___U3ConUpdateColorU3Ek__BackingField_16; }
	inline void set_U3ConUpdateColorU3Ek__BackingField_16(Action_1_t1822191457 * value)
	{
		___U3ConUpdateColorU3Ek__BackingField_16 = value;
		Il2CppCodeGenWriteBarrier(&___U3ConUpdateColorU3Ek__BackingField_16, value);
	}

	inline static int32_t get_offset_of_U3ConUpdateColorObjectU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(LTDescrOptional_t91551083, ___U3ConUpdateColorObjectU3Ek__BackingField_17)); }
	inline Action_2_t3924735457 * get_U3ConUpdateColorObjectU3Ek__BackingField_17() const { return ___U3ConUpdateColorObjectU3Ek__BackingField_17; }
	inline Action_2_t3924735457 ** get_address_of_U3ConUpdateColorObjectU3Ek__BackingField_17() { return &___U3ConUpdateColorObjectU3Ek__BackingField_17; }
	inline void set_U3ConUpdateColorObjectU3Ek__BackingField_17(Action_2_t3924735457 * value)
	{
		___U3ConUpdateColorObjectU3Ek__BackingField_17 = value;
		Il2CppCodeGenWriteBarrier(&___U3ConUpdateColorObjectU3Ek__BackingField_17, value);
	}

	inline static int32_t get_offset_of_U3ConCompleteU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(LTDescrOptional_t91551083, ___U3ConCompleteU3Ek__BackingField_18)); }
	inline Action_t3226471752 * get_U3ConCompleteU3Ek__BackingField_18() const { return ___U3ConCompleteU3Ek__BackingField_18; }
	inline Action_t3226471752 ** get_address_of_U3ConCompleteU3Ek__BackingField_18() { return &___U3ConCompleteU3Ek__BackingField_18; }
	inline void set_U3ConCompleteU3Ek__BackingField_18(Action_t3226471752 * value)
	{
		___U3ConCompleteU3Ek__BackingField_18 = value;
		Il2CppCodeGenWriteBarrier(&___U3ConCompleteU3Ek__BackingField_18, value);
	}

	inline static int32_t get_offset_of_U3ConCompleteObjectU3Ek__BackingField_19() { return static_cast<int32_t>(offsetof(LTDescrOptional_t91551083, ___U3ConCompleteObjectU3Ek__BackingField_19)); }
	inline Action_1_t2491248677 * get_U3ConCompleteObjectU3Ek__BackingField_19() const { return ___U3ConCompleteObjectU3Ek__BackingField_19; }
	inline Action_1_t2491248677 ** get_address_of_U3ConCompleteObjectU3Ek__BackingField_19() { return &___U3ConCompleteObjectU3Ek__BackingField_19; }
	inline void set_U3ConCompleteObjectU3Ek__BackingField_19(Action_1_t2491248677 * value)
	{
		___U3ConCompleteObjectU3Ek__BackingField_19 = value;
		Il2CppCodeGenWriteBarrier(&___U3ConCompleteObjectU3Ek__BackingField_19, value);
	}

	inline static int32_t get_offset_of_U3ConCompleteParamU3Ek__BackingField_20() { return static_cast<int32_t>(offsetof(LTDescrOptional_t91551083, ___U3ConCompleteParamU3Ek__BackingField_20)); }
	inline Il2CppObject * get_U3ConCompleteParamU3Ek__BackingField_20() const { return ___U3ConCompleteParamU3Ek__BackingField_20; }
	inline Il2CppObject ** get_address_of_U3ConCompleteParamU3Ek__BackingField_20() { return &___U3ConCompleteParamU3Ek__BackingField_20; }
	inline void set_U3ConCompleteParamU3Ek__BackingField_20(Il2CppObject * value)
	{
		___U3ConCompleteParamU3Ek__BackingField_20 = value;
		Il2CppCodeGenWriteBarrier(&___U3ConCompleteParamU3Ek__BackingField_20, value);
	}

	inline static int32_t get_offset_of_U3ConUpdateParamU3Ek__BackingField_21() { return static_cast<int32_t>(offsetof(LTDescrOptional_t91551083, ___U3ConUpdateParamU3Ek__BackingField_21)); }
	inline Il2CppObject * get_U3ConUpdateParamU3Ek__BackingField_21() const { return ___U3ConUpdateParamU3Ek__BackingField_21; }
	inline Il2CppObject ** get_address_of_U3ConUpdateParamU3Ek__BackingField_21() { return &___U3ConUpdateParamU3Ek__BackingField_21; }
	inline void set_U3ConUpdateParamU3Ek__BackingField_21(Il2CppObject * value)
	{
		___U3ConUpdateParamU3Ek__BackingField_21 = value;
		Il2CppCodeGenWriteBarrier(&___U3ConUpdateParamU3Ek__BackingField_21, value);
	}

	inline static int32_t get_offset_of_U3ConStartU3Ek__BackingField_22() { return static_cast<int32_t>(offsetof(LTDescrOptional_t91551083, ___U3ConStartU3Ek__BackingField_22)); }
	inline Action_t3226471752 * get_U3ConStartU3Ek__BackingField_22() const { return ___U3ConStartU3Ek__BackingField_22; }
	inline Action_t3226471752 ** get_address_of_U3ConStartU3Ek__BackingField_22() { return &___U3ConStartU3Ek__BackingField_22; }
	inline void set_U3ConStartU3Ek__BackingField_22(Action_t3226471752 * value)
	{
		___U3ConStartU3Ek__BackingField_22 = value;
		Il2CppCodeGenWriteBarrier(&___U3ConStartU3Ek__BackingField_22, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
