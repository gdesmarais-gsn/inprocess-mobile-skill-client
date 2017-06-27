#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.String>
struct Func_2_t1405561329;
// System.String
struct String_t;
// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct List_1_t3702943074;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Newtonsoft.Json.Utilities.StringUtils/<ForgivingCaseSensitiveFind>c__AnonStorey2`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct  U3CForgivingCaseSensitiveFindU3Ec__AnonStorey2_1_t482069130  : public Il2CppObject
{
public:
	// System.Func`2<TSource,System.String> Newtonsoft.Json.Utilities.StringUtils/<ForgivingCaseSensitiveFind>c__AnonStorey2`1::valueSelector
	Func_2_t1405561329 * ___valueSelector_0;
	// System.String Newtonsoft.Json.Utilities.StringUtils/<ForgivingCaseSensitiveFind>c__AnonStorey2`1::testValue
	String_t* ___testValue_1;
	// System.Collections.Generic.List`1<TSource> Newtonsoft.Json.Utilities.StringUtils/<ForgivingCaseSensitiveFind>c__AnonStorey2`1::caseInsensitiveResults
	List_1_t3702943074 * ___caseInsensitiveResults_2;

public:
	inline static int32_t get_offset_of_valueSelector_0() { return static_cast<int32_t>(offsetof(U3CForgivingCaseSensitiveFindU3Ec__AnonStorey2_1_t482069130, ___valueSelector_0)); }
	inline Func_2_t1405561329 * get_valueSelector_0() const { return ___valueSelector_0; }
	inline Func_2_t1405561329 ** get_address_of_valueSelector_0() { return &___valueSelector_0; }
	inline void set_valueSelector_0(Func_2_t1405561329 * value)
	{
		___valueSelector_0 = value;
		Il2CppCodeGenWriteBarrier(&___valueSelector_0, value);
	}

	inline static int32_t get_offset_of_testValue_1() { return static_cast<int32_t>(offsetof(U3CForgivingCaseSensitiveFindU3Ec__AnonStorey2_1_t482069130, ___testValue_1)); }
	inline String_t* get_testValue_1() const { return ___testValue_1; }
	inline String_t** get_address_of_testValue_1() { return &___testValue_1; }
	inline void set_testValue_1(String_t* value)
	{
		___testValue_1 = value;
		Il2CppCodeGenWriteBarrier(&___testValue_1, value);
	}

	inline static int32_t get_offset_of_caseInsensitiveResults_2() { return static_cast<int32_t>(offsetof(U3CForgivingCaseSensitiveFindU3Ec__AnonStorey2_1_t482069130, ___caseInsensitiveResults_2)); }
	inline List_1_t3702943074 * get_caseInsensitiveResults_2() const { return ___caseInsensitiveResults_2; }
	inline List_1_t3702943074 ** get_address_of_caseInsensitiveResults_2() { return &___caseInsensitiveResults_2; }
	inline void set_caseInsensitiveResults_2(List_1_t3702943074 * value)
	{
		___caseInsensitiveResults_2 = value;
		Il2CppCodeGenWriteBarrier(&___caseInsensitiveResults_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
