#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Delegates/ActionWithReturn`2<System.Single,System.Single>
struct ActionWithReturn_2_t186059454;

#include "mscorlib_System_Object2689449295.h"
#include "AssemblyU2DCSharp_Interpolator_SlopeType3073815131.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Interpolator
struct  Interpolator_t128803801  : public Il2CppObject
{
public:
	// System.Single Interpolator::duration
	float ___duration_0;
	// Interpolator/SlopeType Interpolator::startSlope
	int32_t ___startSlope_1;
	// Interpolator/SlopeType Interpolator::endSlope
	int32_t ___endSlope_2;
	// System.Single Interpolator::reverseDuration
	float ___reverseDuration_3;
	// Interpolator/SlopeType Interpolator::reverseEndSlope
	int32_t ___reverseEndSlope_4;
	// Interpolator/SlopeType Interpolator::reverseStartSlope
	int32_t ___reverseStartSlope_5;
	// System.Single Interpolator::t
	float ___t_6;
	// System.Boolean Interpolator::reversed
	bool ___reversed_7;
	// System.Single Interpolator::invDuration
	float ___invDuration_8;
	// Delegates/ActionWithReturn`2<System.Single,System.Single> Interpolator::evalFunc
	ActionWithReturn_2_t186059454 * ___evalFunc_9;
	// Delegates/ActionWithReturn`2<System.Single,System.Single> Interpolator::inverseEvalFunc
	ActionWithReturn_2_t186059454 * ___inverseEvalFunc_10;

public:
	inline static int32_t get_offset_of_duration_0() { return static_cast<int32_t>(offsetof(Interpolator_t128803801, ___duration_0)); }
	inline float get_duration_0() const { return ___duration_0; }
	inline float* get_address_of_duration_0() { return &___duration_0; }
	inline void set_duration_0(float value)
	{
		___duration_0 = value;
	}

	inline static int32_t get_offset_of_startSlope_1() { return static_cast<int32_t>(offsetof(Interpolator_t128803801, ___startSlope_1)); }
	inline int32_t get_startSlope_1() const { return ___startSlope_1; }
	inline int32_t* get_address_of_startSlope_1() { return &___startSlope_1; }
	inline void set_startSlope_1(int32_t value)
	{
		___startSlope_1 = value;
	}

	inline static int32_t get_offset_of_endSlope_2() { return static_cast<int32_t>(offsetof(Interpolator_t128803801, ___endSlope_2)); }
	inline int32_t get_endSlope_2() const { return ___endSlope_2; }
	inline int32_t* get_address_of_endSlope_2() { return &___endSlope_2; }
	inline void set_endSlope_2(int32_t value)
	{
		___endSlope_2 = value;
	}

	inline static int32_t get_offset_of_reverseDuration_3() { return static_cast<int32_t>(offsetof(Interpolator_t128803801, ___reverseDuration_3)); }
	inline float get_reverseDuration_3() const { return ___reverseDuration_3; }
	inline float* get_address_of_reverseDuration_3() { return &___reverseDuration_3; }
	inline void set_reverseDuration_3(float value)
	{
		___reverseDuration_3 = value;
	}

	inline static int32_t get_offset_of_reverseEndSlope_4() { return static_cast<int32_t>(offsetof(Interpolator_t128803801, ___reverseEndSlope_4)); }
	inline int32_t get_reverseEndSlope_4() const { return ___reverseEndSlope_4; }
	inline int32_t* get_address_of_reverseEndSlope_4() { return &___reverseEndSlope_4; }
	inline void set_reverseEndSlope_4(int32_t value)
	{
		___reverseEndSlope_4 = value;
	}

	inline static int32_t get_offset_of_reverseStartSlope_5() { return static_cast<int32_t>(offsetof(Interpolator_t128803801, ___reverseStartSlope_5)); }
	inline int32_t get_reverseStartSlope_5() const { return ___reverseStartSlope_5; }
	inline int32_t* get_address_of_reverseStartSlope_5() { return &___reverseStartSlope_5; }
	inline void set_reverseStartSlope_5(int32_t value)
	{
		___reverseStartSlope_5 = value;
	}

	inline static int32_t get_offset_of_t_6() { return static_cast<int32_t>(offsetof(Interpolator_t128803801, ___t_6)); }
	inline float get_t_6() const { return ___t_6; }
	inline float* get_address_of_t_6() { return &___t_6; }
	inline void set_t_6(float value)
	{
		___t_6 = value;
	}

	inline static int32_t get_offset_of_reversed_7() { return static_cast<int32_t>(offsetof(Interpolator_t128803801, ___reversed_7)); }
	inline bool get_reversed_7() const { return ___reversed_7; }
	inline bool* get_address_of_reversed_7() { return &___reversed_7; }
	inline void set_reversed_7(bool value)
	{
		___reversed_7 = value;
	}

	inline static int32_t get_offset_of_invDuration_8() { return static_cast<int32_t>(offsetof(Interpolator_t128803801, ___invDuration_8)); }
	inline float get_invDuration_8() const { return ___invDuration_8; }
	inline float* get_address_of_invDuration_8() { return &___invDuration_8; }
	inline void set_invDuration_8(float value)
	{
		___invDuration_8 = value;
	}

	inline static int32_t get_offset_of_evalFunc_9() { return static_cast<int32_t>(offsetof(Interpolator_t128803801, ___evalFunc_9)); }
	inline ActionWithReturn_2_t186059454 * get_evalFunc_9() const { return ___evalFunc_9; }
	inline ActionWithReturn_2_t186059454 ** get_address_of_evalFunc_9() { return &___evalFunc_9; }
	inline void set_evalFunc_9(ActionWithReturn_2_t186059454 * value)
	{
		___evalFunc_9 = value;
		Il2CppCodeGenWriteBarrier(&___evalFunc_9, value);
	}

	inline static int32_t get_offset_of_inverseEvalFunc_10() { return static_cast<int32_t>(offsetof(Interpolator_t128803801, ___inverseEvalFunc_10)); }
	inline ActionWithReturn_2_t186059454 * get_inverseEvalFunc_10() const { return ___inverseEvalFunc_10; }
	inline ActionWithReturn_2_t186059454 ** get_address_of_inverseEvalFunc_10() { return &___inverseEvalFunc_10; }
	inline void set_inverseEvalFunc_10(ActionWithReturn_2_t186059454 * value)
	{
		___inverseEvalFunc_10 = value;
		Il2CppCodeGenWriteBarrier(&___inverseEvalFunc_10, value);
	}
};

struct Interpolator_t128803801_StaticFields
{
public:
	// Delegates/ActionWithReturn`2<System.Single,System.Single> Interpolator::<>f__mg$cache0
	ActionWithReturn_2_t186059454 * ___U3CU3Ef__mgU24cache0_11;
	// Delegates/ActionWithReturn`2<System.Single,System.Single> Interpolator::<>f__mg$cache1
	ActionWithReturn_2_t186059454 * ___U3CU3Ef__mgU24cache1_12;
	// Delegates/ActionWithReturn`2<System.Single,System.Single> Interpolator::<>f__mg$cache2
	ActionWithReturn_2_t186059454 * ___U3CU3Ef__mgU24cache2_13;
	// Delegates/ActionWithReturn`2<System.Single,System.Single> Interpolator::<>f__mg$cache3
	ActionWithReturn_2_t186059454 * ___U3CU3Ef__mgU24cache3_14;
	// Delegates/ActionWithReturn`2<System.Single,System.Single> Interpolator::<>f__mg$cache4
	ActionWithReturn_2_t186059454 * ___U3CU3Ef__mgU24cache4_15;
	// Delegates/ActionWithReturn`2<System.Single,System.Single> Interpolator::<>f__mg$cache5
	ActionWithReturn_2_t186059454 * ___U3CU3Ef__mgU24cache5_16;
	// Delegates/ActionWithReturn`2<System.Single,System.Single> Interpolator::<>f__mg$cache6
	ActionWithReturn_2_t186059454 * ___U3CU3Ef__mgU24cache6_17;
	// Delegates/ActionWithReturn`2<System.Single,System.Single> Interpolator::<>f__mg$cache7
	ActionWithReturn_2_t186059454 * ___U3CU3Ef__mgU24cache7_18;
	// Delegates/ActionWithReturn`2<System.Single,System.Single> Interpolator::<>f__mg$cache8
	ActionWithReturn_2_t186059454 * ___U3CU3Ef__mgU24cache8_19;
	// Delegates/ActionWithReturn`2<System.Single,System.Single> Interpolator::<>f__mg$cache9
	ActionWithReturn_2_t186059454 * ___U3CU3Ef__mgU24cache9_20;
	// Delegates/ActionWithReturn`2<System.Single,System.Single> Interpolator::<>f__mg$cacheA
	ActionWithReturn_2_t186059454 * ___U3CU3Ef__mgU24cacheA_21;
	// Delegates/ActionWithReturn`2<System.Single,System.Single> Interpolator::<>f__mg$cacheB
	ActionWithReturn_2_t186059454 * ___U3CU3Ef__mgU24cacheB_22;
	// Delegates/ActionWithReturn`2<System.Single,System.Single> Interpolator::<>f__mg$cacheC
	ActionWithReturn_2_t186059454 * ___U3CU3Ef__mgU24cacheC_23;
	// Delegates/ActionWithReturn`2<System.Single,System.Single> Interpolator::<>f__mg$cacheD
	ActionWithReturn_2_t186059454 * ___U3CU3Ef__mgU24cacheD_24;
	// Delegates/ActionWithReturn`2<System.Single,System.Single> Interpolator::<>f__mg$cacheE
	ActionWithReturn_2_t186059454 * ___U3CU3Ef__mgU24cacheE_25;
	// Delegates/ActionWithReturn`2<System.Single,System.Single> Interpolator::<>f__mg$cacheF
	ActionWithReturn_2_t186059454 * ___U3CU3Ef__mgU24cacheF_26;
	// Delegates/ActionWithReturn`2<System.Single,System.Single> Interpolator::<>f__mg$cache10
	ActionWithReturn_2_t186059454 * ___U3CU3Ef__mgU24cache10_27;
	// Delegates/ActionWithReturn`2<System.Single,System.Single> Interpolator::<>f__mg$cache11
	ActionWithReturn_2_t186059454 * ___U3CU3Ef__mgU24cache11_28;

public:
	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache0_11() { return static_cast<int32_t>(offsetof(Interpolator_t128803801_StaticFields, ___U3CU3Ef__mgU24cache0_11)); }
	inline ActionWithReturn_2_t186059454 * get_U3CU3Ef__mgU24cache0_11() const { return ___U3CU3Ef__mgU24cache0_11; }
	inline ActionWithReturn_2_t186059454 ** get_address_of_U3CU3Ef__mgU24cache0_11() { return &___U3CU3Ef__mgU24cache0_11; }
	inline void set_U3CU3Ef__mgU24cache0_11(ActionWithReturn_2_t186059454 * value)
	{
		___U3CU3Ef__mgU24cache0_11 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__mgU24cache0_11, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache1_12() { return static_cast<int32_t>(offsetof(Interpolator_t128803801_StaticFields, ___U3CU3Ef__mgU24cache1_12)); }
	inline ActionWithReturn_2_t186059454 * get_U3CU3Ef__mgU24cache1_12() const { return ___U3CU3Ef__mgU24cache1_12; }
	inline ActionWithReturn_2_t186059454 ** get_address_of_U3CU3Ef__mgU24cache1_12() { return &___U3CU3Ef__mgU24cache1_12; }
	inline void set_U3CU3Ef__mgU24cache1_12(ActionWithReturn_2_t186059454 * value)
	{
		___U3CU3Ef__mgU24cache1_12 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__mgU24cache1_12, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache2_13() { return static_cast<int32_t>(offsetof(Interpolator_t128803801_StaticFields, ___U3CU3Ef__mgU24cache2_13)); }
	inline ActionWithReturn_2_t186059454 * get_U3CU3Ef__mgU24cache2_13() const { return ___U3CU3Ef__mgU24cache2_13; }
	inline ActionWithReturn_2_t186059454 ** get_address_of_U3CU3Ef__mgU24cache2_13() { return &___U3CU3Ef__mgU24cache2_13; }
	inline void set_U3CU3Ef__mgU24cache2_13(ActionWithReturn_2_t186059454 * value)
	{
		___U3CU3Ef__mgU24cache2_13 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__mgU24cache2_13, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache3_14() { return static_cast<int32_t>(offsetof(Interpolator_t128803801_StaticFields, ___U3CU3Ef__mgU24cache3_14)); }
	inline ActionWithReturn_2_t186059454 * get_U3CU3Ef__mgU24cache3_14() const { return ___U3CU3Ef__mgU24cache3_14; }
	inline ActionWithReturn_2_t186059454 ** get_address_of_U3CU3Ef__mgU24cache3_14() { return &___U3CU3Ef__mgU24cache3_14; }
	inline void set_U3CU3Ef__mgU24cache3_14(ActionWithReturn_2_t186059454 * value)
	{
		___U3CU3Ef__mgU24cache3_14 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__mgU24cache3_14, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache4_15() { return static_cast<int32_t>(offsetof(Interpolator_t128803801_StaticFields, ___U3CU3Ef__mgU24cache4_15)); }
	inline ActionWithReturn_2_t186059454 * get_U3CU3Ef__mgU24cache4_15() const { return ___U3CU3Ef__mgU24cache4_15; }
	inline ActionWithReturn_2_t186059454 ** get_address_of_U3CU3Ef__mgU24cache4_15() { return &___U3CU3Ef__mgU24cache4_15; }
	inline void set_U3CU3Ef__mgU24cache4_15(ActionWithReturn_2_t186059454 * value)
	{
		___U3CU3Ef__mgU24cache4_15 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__mgU24cache4_15, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache5_16() { return static_cast<int32_t>(offsetof(Interpolator_t128803801_StaticFields, ___U3CU3Ef__mgU24cache5_16)); }
	inline ActionWithReturn_2_t186059454 * get_U3CU3Ef__mgU24cache5_16() const { return ___U3CU3Ef__mgU24cache5_16; }
	inline ActionWithReturn_2_t186059454 ** get_address_of_U3CU3Ef__mgU24cache5_16() { return &___U3CU3Ef__mgU24cache5_16; }
	inline void set_U3CU3Ef__mgU24cache5_16(ActionWithReturn_2_t186059454 * value)
	{
		___U3CU3Ef__mgU24cache5_16 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__mgU24cache5_16, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache6_17() { return static_cast<int32_t>(offsetof(Interpolator_t128803801_StaticFields, ___U3CU3Ef__mgU24cache6_17)); }
	inline ActionWithReturn_2_t186059454 * get_U3CU3Ef__mgU24cache6_17() const { return ___U3CU3Ef__mgU24cache6_17; }
	inline ActionWithReturn_2_t186059454 ** get_address_of_U3CU3Ef__mgU24cache6_17() { return &___U3CU3Ef__mgU24cache6_17; }
	inline void set_U3CU3Ef__mgU24cache6_17(ActionWithReturn_2_t186059454 * value)
	{
		___U3CU3Ef__mgU24cache6_17 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__mgU24cache6_17, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache7_18() { return static_cast<int32_t>(offsetof(Interpolator_t128803801_StaticFields, ___U3CU3Ef__mgU24cache7_18)); }
	inline ActionWithReturn_2_t186059454 * get_U3CU3Ef__mgU24cache7_18() const { return ___U3CU3Ef__mgU24cache7_18; }
	inline ActionWithReturn_2_t186059454 ** get_address_of_U3CU3Ef__mgU24cache7_18() { return &___U3CU3Ef__mgU24cache7_18; }
	inline void set_U3CU3Ef__mgU24cache7_18(ActionWithReturn_2_t186059454 * value)
	{
		___U3CU3Ef__mgU24cache7_18 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__mgU24cache7_18, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache8_19() { return static_cast<int32_t>(offsetof(Interpolator_t128803801_StaticFields, ___U3CU3Ef__mgU24cache8_19)); }
	inline ActionWithReturn_2_t186059454 * get_U3CU3Ef__mgU24cache8_19() const { return ___U3CU3Ef__mgU24cache8_19; }
	inline ActionWithReturn_2_t186059454 ** get_address_of_U3CU3Ef__mgU24cache8_19() { return &___U3CU3Ef__mgU24cache8_19; }
	inline void set_U3CU3Ef__mgU24cache8_19(ActionWithReturn_2_t186059454 * value)
	{
		___U3CU3Ef__mgU24cache8_19 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__mgU24cache8_19, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache9_20() { return static_cast<int32_t>(offsetof(Interpolator_t128803801_StaticFields, ___U3CU3Ef__mgU24cache9_20)); }
	inline ActionWithReturn_2_t186059454 * get_U3CU3Ef__mgU24cache9_20() const { return ___U3CU3Ef__mgU24cache9_20; }
	inline ActionWithReturn_2_t186059454 ** get_address_of_U3CU3Ef__mgU24cache9_20() { return &___U3CU3Ef__mgU24cache9_20; }
	inline void set_U3CU3Ef__mgU24cache9_20(ActionWithReturn_2_t186059454 * value)
	{
		___U3CU3Ef__mgU24cache9_20 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__mgU24cache9_20, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cacheA_21() { return static_cast<int32_t>(offsetof(Interpolator_t128803801_StaticFields, ___U3CU3Ef__mgU24cacheA_21)); }
	inline ActionWithReturn_2_t186059454 * get_U3CU3Ef__mgU24cacheA_21() const { return ___U3CU3Ef__mgU24cacheA_21; }
	inline ActionWithReturn_2_t186059454 ** get_address_of_U3CU3Ef__mgU24cacheA_21() { return &___U3CU3Ef__mgU24cacheA_21; }
	inline void set_U3CU3Ef__mgU24cacheA_21(ActionWithReturn_2_t186059454 * value)
	{
		___U3CU3Ef__mgU24cacheA_21 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__mgU24cacheA_21, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cacheB_22() { return static_cast<int32_t>(offsetof(Interpolator_t128803801_StaticFields, ___U3CU3Ef__mgU24cacheB_22)); }
	inline ActionWithReturn_2_t186059454 * get_U3CU3Ef__mgU24cacheB_22() const { return ___U3CU3Ef__mgU24cacheB_22; }
	inline ActionWithReturn_2_t186059454 ** get_address_of_U3CU3Ef__mgU24cacheB_22() { return &___U3CU3Ef__mgU24cacheB_22; }
	inline void set_U3CU3Ef__mgU24cacheB_22(ActionWithReturn_2_t186059454 * value)
	{
		___U3CU3Ef__mgU24cacheB_22 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__mgU24cacheB_22, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cacheC_23() { return static_cast<int32_t>(offsetof(Interpolator_t128803801_StaticFields, ___U3CU3Ef__mgU24cacheC_23)); }
	inline ActionWithReturn_2_t186059454 * get_U3CU3Ef__mgU24cacheC_23() const { return ___U3CU3Ef__mgU24cacheC_23; }
	inline ActionWithReturn_2_t186059454 ** get_address_of_U3CU3Ef__mgU24cacheC_23() { return &___U3CU3Ef__mgU24cacheC_23; }
	inline void set_U3CU3Ef__mgU24cacheC_23(ActionWithReturn_2_t186059454 * value)
	{
		___U3CU3Ef__mgU24cacheC_23 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__mgU24cacheC_23, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cacheD_24() { return static_cast<int32_t>(offsetof(Interpolator_t128803801_StaticFields, ___U3CU3Ef__mgU24cacheD_24)); }
	inline ActionWithReturn_2_t186059454 * get_U3CU3Ef__mgU24cacheD_24() const { return ___U3CU3Ef__mgU24cacheD_24; }
	inline ActionWithReturn_2_t186059454 ** get_address_of_U3CU3Ef__mgU24cacheD_24() { return &___U3CU3Ef__mgU24cacheD_24; }
	inline void set_U3CU3Ef__mgU24cacheD_24(ActionWithReturn_2_t186059454 * value)
	{
		___U3CU3Ef__mgU24cacheD_24 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__mgU24cacheD_24, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cacheE_25() { return static_cast<int32_t>(offsetof(Interpolator_t128803801_StaticFields, ___U3CU3Ef__mgU24cacheE_25)); }
	inline ActionWithReturn_2_t186059454 * get_U3CU3Ef__mgU24cacheE_25() const { return ___U3CU3Ef__mgU24cacheE_25; }
	inline ActionWithReturn_2_t186059454 ** get_address_of_U3CU3Ef__mgU24cacheE_25() { return &___U3CU3Ef__mgU24cacheE_25; }
	inline void set_U3CU3Ef__mgU24cacheE_25(ActionWithReturn_2_t186059454 * value)
	{
		___U3CU3Ef__mgU24cacheE_25 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__mgU24cacheE_25, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cacheF_26() { return static_cast<int32_t>(offsetof(Interpolator_t128803801_StaticFields, ___U3CU3Ef__mgU24cacheF_26)); }
	inline ActionWithReturn_2_t186059454 * get_U3CU3Ef__mgU24cacheF_26() const { return ___U3CU3Ef__mgU24cacheF_26; }
	inline ActionWithReturn_2_t186059454 ** get_address_of_U3CU3Ef__mgU24cacheF_26() { return &___U3CU3Ef__mgU24cacheF_26; }
	inline void set_U3CU3Ef__mgU24cacheF_26(ActionWithReturn_2_t186059454 * value)
	{
		___U3CU3Ef__mgU24cacheF_26 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__mgU24cacheF_26, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache10_27() { return static_cast<int32_t>(offsetof(Interpolator_t128803801_StaticFields, ___U3CU3Ef__mgU24cache10_27)); }
	inline ActionWithReturn_2_t186059454 * get_U3CU3Ef__mgU24cache10_27() const { return ___U3CU3Ef__mgU24cache10_27; }
	inline ActionWithReturn_2_t186059454 ** get_address_of_U3CU3Ef__mgU24cache10_27() { return &___U3CU3Ef__mgU24cache10_27; }
	inline void set_U3CU3Ef__mgU24cache10_27(ActionWithReturn_2_t186059454 * value)
	{
		___U3CU3Ef__mgU24cache10_27 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__mgU24cache10_27, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache11_28() { return static_cast<int32_t>(offsetof(Interpolator_t128803801_StaticFields, ___U3CU3Ef__mgU24cache11_28)); }
	inline ActionWithReturn_2_t186059454 * get_U3CU3Ef__mgU24cache11_28() const { return ___U3CU3Ef__mgU24cache11_28; }
	inline ActionWithReturn_2_t186059454 ** get_address_of_U3CU3Ef__mgU24cache11_28() { return &___U3CU3Ef__mgU24cache11_28; }
	inline void set_U3CU3Ef__mgU24cache11_28(ActionWithReturn_2_t186059454 * value)
	{
		___U3CU3Ef__mgU24cache11_28 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__mgU24cache11_28, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
