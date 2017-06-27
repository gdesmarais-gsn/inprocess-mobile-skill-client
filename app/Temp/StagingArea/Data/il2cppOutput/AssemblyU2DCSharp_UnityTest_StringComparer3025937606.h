#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "AssemblyU2DCSharp_UnityTest_ComparerBaseGeneric_1_3595253256.h"
#include "AssemblyU2DCSharp_UnityTest_StringComparer_Compare2214952917.h"
#include "mscorlib_System_StringComparison2376310518.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityTest.StringComparer
struct  StringComparer_t3025937606  : public ComparerBaseGeneric_1_t3595253256
{
public:
	// UnityTest.StringComparer/CompareType UnityTest.StringComparer::compareType
	int32_t ___compareType_14;
	// System.StringComparison UnityTest.StringComparer::comparisonType
	int32_t ___comparisonType_15;
	// System.Boolean UnityTest.StringComparer::ignoreCase
	bool ___ignoreCase_16;

public:
	inline static int32_t get_offset_of_compareType_14() { return static_cast<int32_t>(offsetof(StringComparer_t3025937606, ___compareType_14)); }
	inline int32_t get_compareType_14() const { return ___compareType_14; }
	inline int32_t* get_address_of_compareType_14() { return &___compareType_14; }
	inline void set_compareType_14(int32_t value)
	{
		___compareType_14 = value;
	}

	inline static int32_t get_offset_of_comparisonType_15() { return static_cast<int32_t>(offsetof(StringComparer_t3025937606, ___comparisonType_15)); }
	inline int32_t get_comparisonType_15() const { return ___comparisonType_15; }
	inline int32_t* get_address_of_comparisonType_15() { return &___comparisonType_15; }
	inline void set_comparisonType_15(int32_t value)
	{
		___comparisonType_15 = value;
	}

	inline static int32_t get_offset_of_ignoreCase_16() { return static_cast<int32_t>(offsetof(StringComparer_t3025937606, ___ignoreCase_16)); }
	inline bool get_ignoreCase_16() const { return ___ignoreCase_16; }
	inline bool* get_address_of_ignoreCase_16() { return &___ignoreCase_16; }
	inline void set_ignoreCase_16(bool value)
	{
		___ignoreCase_16 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
