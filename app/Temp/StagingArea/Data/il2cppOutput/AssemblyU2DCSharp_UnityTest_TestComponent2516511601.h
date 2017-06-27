#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityTest.ITestComponent
struct ITestComponent_t2920761518;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t1642385972;
// System.Func`2<System.String,System.Boolean>
struct Func_2_t1989381442;
// System.Func`2<System.String,System.String>
struct Func_2_t193026957;
// System.Func`2<System.Reflection.Assembly,System.Collections.Generic.IEnumerable`1<System.Type>>
struct Func_2_t101629490;
// System.Func`2<UnityTest.TestComponent,System.Boolean>
struct Func_2_t4279871162;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "AssemblyU2DCSharp_UnityTest_TestComponent_Included3258709055.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityTest.TestComponent
struct  TestComponent_t2516511601  : public MonoBehaviour_t1158329972
{
public:
	// System.Single UnityTest.TestComponent::timeout
	float ___timeout_3;
	// System.Boolean UnityTest.TestComponent::ignored
	bool ___ignored_4;
	// System.Boolean UnityTest.TestComponent::succeedAfterAllAssertionsAreExecuted
	bool ___succeedAfterAllAssertionsAreExecuted_5;
	// System.Boolean UnityTest.TestComponent::expectException
	bool ___expectException_6;
	// System.String UnityTest.TestComponent::expectedExceptionList
	String_t* ___expectedExceptionList_7;
	// System.Boolean UnityTest.TestComponent::succeedWhenExceptionIsThrown
	bool ___succeedWhenExceptionIsThrown_8;
	// UnityTest.TestComponent/IncludedPlatforms UnityTest.TestComponent::includedPlatforms
	int32_t ___includedPlatforms_9;
	// System.String[] UnityTest.TestComponent::platformsToIgnore
	StringU5BU5D_t1642385972* ___platformsToIgnore_10;
	// System.Boolean UnityTest.TestComponent::dynamic
	bool ___dynamic_11;
	// System.String UnityTest.TestComponent::dynamicTypeName
	String_t* ___dynamicTypeName_12;

public:
	inline static int32_t get_offset_of_timeout_3() { return static_cast<int32_t>(offsetof(TestComponent_t2516511601, ___timeout_3)); }
	inline float get_timeout_3() const { return ___timeout_3; }
	inline float* get_address_of_timeout_3() { return &___timeout_3; }
	inline void set_timeout_3(float value)
	{
		___timeout_3 = value;
	}

	inline static int32_t get_offset_of_ignored_4() { return static_cast<int32_t>(offsetof(TestComponent_t2516511601, ___ignored_4)); }
	inline bool get_ignored_4() const { return ___ignored_4; }
	inline bool* get_address_of_ignored_4() { return &___ignored_4; }
	inline void set_ignored_4(bool value)
	{
		___ignored_4 = value;
	}

	inline static int32_t get_offset_of_succeedAfterAllAssertionsAreExecuted_5() { return static_cast<int32_t>(offsetof(TestComponent_t2516511601, ___succeedAfterAllAssertionsAreExecuted_5)); }
	inline bool get_succeedAfterAllAssertionsAreExecuted_5() const { return ___succeedAfterAllAssertionsAreExecuted_5; }
	inline bool* get_address_of_succeedAfterAllAssertionsAreExecuted_5() { return &___succeedAfterAllAssertionsAreExecuted_5; }
	inline void set_succeedAfterAllAssertionsAreExecuted_5(bool value)
	{
		___succeedAfterAllAssertionsAreExecuted_5 = value;
	}

	inline static int32_t get_offset_of_expectException_6() { return static_cast<int32_t>(offsetof(TestComponent_t2516511601, ___expectException_6)); }
	inline bool get_expectException_6() const { return ___expectException_6; }
	inline bool* get_address_of_expectException_6() { return &___expectException_6; }
	inline void set_expectException_6(bool value)
	{
		___expectException_6 = value;
	}

	inline static int32_t get_offset_of_expectedExceptionList_7() { return static_cast<int32_t>(offsetof(TestComponent_t2516511601, ___expectedExceptionList_7)); }
	inline String_t* get_expectedExceptionList_7() const { return ___expectedExceptionList_7; }
	inline String_t** get_address_of_expectedExceptionList_7() { return &___expectedExceptionList_7; }
	inline void set_expectedExceptionList_7(String_t* value)
	{
		___expectedExceptionList_7 = value;
		Il2CppCodeGenWriteBarrier(&___expectedExceptionList_7, value);
	}

	inline static int32_t get_offset_of_succeedWhenExceptionIsThrown_8() { return static_cast<int32_t>(offsetof(TestComponent_t2516511601, ___succeedWhenExceptionIsThrown_8)); }
	inline bool get_succeedWhenExceptionIsThrown_8() const { return ___succeedWhenExceptionIsThrown_8; }
	inline bool* get_address_of_succeedWhenExceptionIsThrown_8() { return &___succeedWhenExceptionIsThrown_8; }
	inline void set_succeedWhenExceptionIsThrown_8(bool value)
	{
		___succeedWhenExceptionIsThrown_8 = value;
	}

	inline static int32_t get_offset_of_includedPlatforms_9() { return static_cast<int32_t>(offsetof(TestComponent_t2516511601, ___includedPlatforms_9)); }
	inline int32_t get_includedPlatforms_9() const { return ___includedPlatforms_9; }
	inline int32_t* get_address_of_includedPlatforms_9() { return &___includedPlatforms_9; }
	inline void set_includedPlatforms_9(int32_t value)
	{
		___includedPlatforms_9 = value;
	}

	inline static int32_t get_offset_of_platformsToIgnore_10() { return static_cast<int32_t>(offsetof(TestComponent_t2516511601, ___platformsToIgnore_10)); }
	inline StringU5BU5D_t1642385972* get_platformsToIgnore_10() const { return ___platformsToIgnore_10; }
	inline StringU5BU5D_t1642385972** get_address_of_platformsToIgnore_10() { return &___platformsToIgnore_10; }
	inline void set_platformsToIgnore_10(StringU5BU5D_t1642385972* value)
	{
		___platformsToIgnore_10 = value;
		Il2CppCodeGenWriteBarrier(&___platformsToIgnore_10, value);
	}

	inline static int32_t get_offset_of_dynamic_11() { return static_cast<int32_t>(offsetof(TestComponent_t2516511601, ___dynamic_11)); }
	inline bool get_dynamic_11() const { return ___dynamic_11; }
	inline bool* get_address_of_dynamic_11() { return &___dynamic_11; }
	inline void set_dynamic_11(bool value)
	{
		___dynamic_11 = value;
	}

	inline static int32_t get_offset_of_dynamicTypeName_12() { return static_cast<int32_t>(offsetof(TestComponent_t2516511601, ___dynamicTypeName_12)); }
	inline String_t* get_dynamicTypeName_12() const { return ___dynamicTypeName_12; }
	inline String_t** get_address_of_dynamicTypeName_12() { return &___dynamicTypeName_12; }
	inline void set_dynamicTypeName_12(String_t* value)
	{
		___dynamicTypeName_12 = value;
		Il2CppCodeGenWriteBarrier(&___dynamicTypeName_12, value);
	}
};

struct TestComponent_t2516511601_StaticFields
{
public:
	// UnityTest.ITestComponent UnityTest.TestComponent::NullTestComponent
	Il2CppObject * ___NullTestComponent_2;
	// System.Func`2<System.String,System.Boolean> UnityTest.TestComponent::<>f__am$cache0
	Func_2_t1989381442 * ___U3CU3Ef__amU24cache0_13;
	// System.Func`2<System.String,System.String> UnityTest.TestComponent::<>f__am$cache1
	Func_2_t193026957 * ___U3CU3Ef__amU24cache1_14;
	// System.Func`2<System.Reflection.Assembly,System.Collections.Generic.IEnumerable`1<System.Type>> UnityTest.TestComponent::<>f__am$cache2
	Func_2_t101629490 * ___U3CU3Ef__amU24cache2_15;
	// System.Func`2<UnityTest.TestComponent,System.Boolean> UnityTest.TestComponent::<>f__am$cache3
	Func_2_t4279871162 * ___U3CU3Ef__amU24cache3_16;
	// System.Func`2<UnityTest.TestComponent,System.Boolean> UnityTest.TestComponent::<>f__am$cache4
	Func_2_t4279871162 * ___U3CU3Ef__amU24cache4_17;

public:
	inline static int32_t get_offset_of_NullTestComponent_2() { return static_cast<int32_t>(offsetof(TestComponent_t2516511601_StaticFields, ___NullTestComponent_2)); }
	inline Il2CppObject * get_NullTestComponent_2() const { return ___NullTestComponent_2; }
	inline Il2CppObject ** get_address_of_NullTestComponent_2() { return &___NullTestComponent_2; }
	inline void set_NullTestComponent_2(Il2CppObject * value)
	{
		___NullTestComponent_2 = value;
		Il2CppCodeGenWriteBarrier(&___NullTestComponent_2, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_13() { return static_cast<int32_t>(offsetof(TestComponent_t2516511601_StaticFields, ___U3CU3Ef__amU24cache0_13)); }
	inline Func_2_t1989381442 * get_U3CU3Ef__amU24cache0_13() const { return ___U3CU3Ef__amU24cache0_13; }
	inline Func_2_t1989381442 ** get_address_of_U3CU3Ef__amU24cache0_13() { return &___U3CU3Ef__amU24cache0_13; }
	inline void set_U3CU3Ef__amU24cache0_13(Func_2_t1989381442 * value)
	{
		___U3CU3Ef__amU24cache0_13 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache0_13, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache1_14() { return static_cast<int32_t>(offsetof(TestComponent_t2516511601_StaticFields, ___U3CU3Ef__amU24cache1_14)); }
	inline Func_2_t193026957 * get_U3CU3Ef__amU24cache1_14() const { return ___U3CU3Ef__amU24cache1_14; }
	inline Func_2_t193026957 ** get_address_of_U3CU3Ef__amU24cache1_14() { return &___U3CU3Ef__amU24cache1_14; }
	inline void set_U3CU3Ef__amU24cache1_14(Func_2_t193026957 * value)
	{
		___U3CU3Ef__amU24cache1_14 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache1_14, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache2_15() { return static_cast<int32_t>(offsetof(TestComponent_t2516511601_StaticFields, ___U3CU3Ef__amU24cache2_15)); }
	inline Func_2_t101629490 * get_U3CU3Ef__amU24cache2_15() const { return ___U3CU3Ef__amU24cache2_15; }
	inline Func_2_t101629490 ** get_address_of_U3CU3Ef__amU24cache2_15() { return &___U3CU3Ef__amU24cache2_15; }
	inline void set_U3CU3Ef__amU24cache2_15(Func_2_t101629490 * value)
	{
		___U3CU3Ef__amU24cache2_15 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache2_15, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache3_16() { return static_cast<int32_t>(offsetof(TestComponent_t2516511601_StaticFields, ___U3CU3Ef__amU24cache3_16)); }
	inline Func_2_t4279871162 * get_U3CU3Ef__amU24cache3_16() const { return ___U3CU3Ef__amU24cache3_16; }
	inline Func_2_t4279871162 ** get_address_of_U3CU3Ef__amU24cache3_16() { return &___U3CU3Ef__amU24cache3_16; }
	inline void set_U3CU3Ef__amU24cache3_16(Func_2_t4279871162 * value)
	{
		___U3CU3Ef__amU24cache3_16 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache3_16, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache4_17() { return static_cast<int32_t>(offsetof(TestComponent_t2516511601_StaticFields, ___U3CU3Ef__amU24cache4_17)); }
	inline Func_2_t4279871162 * get_U3CU3Ef__amU24cache4_17() const { return ___U3CU3Ef__amU24cache4_17; }
	inline Func_2_t4279871162 ** get_address_of_U3CU3Ef__amU24cache4_17() { return &___U3CU3Ef__amU24cache4_17; }
	inline void set_U3CU3Ef__amU24cache4_17(Func_2_t4279871162 * value)
	{
		___U3CU3Ef__amU24cache4_17 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache4_17, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
