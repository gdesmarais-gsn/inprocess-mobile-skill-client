#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<TMPro.KerningPair>
struct List_1_t946875054;
// System.Func`2<TMPro.KerningPair,System.Int32>
struct Func_2_t2704521871;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TMPro.KerningTable
struct  KerningTable_t2970824110  : public Il2CppObject
{
public:
	// System.Collections.Generic.List`1<TMPro.KerningPair> TMPro.KerningTable::kerningPairs
	List_1_t946875054 * ___kerningPairs_0;

public:
	inline static int32_t get_offset_of_kerningPairs_0() { return static_cast<int32_t>(offsetof(KerningTable_t2970824110, ___kerningPairs_0)); }
	inline List_1_t946875054 * get_kerningPairs_0() const { return ___kerningPairs_0; }
	inline List_1_t946875054 ** get_address_of_kerningPairs_0() { return &___kerningPairs_0; }
	inline void set_kerningPairs_0(List_1_t946875054 * value)
	{
		___kerningPairs_0 = value;
		Il2CppCodeGenWriteBarrier(&___kerningPairs_0, value);
	}
};

struct KerningTable_t2970824110_StaticFields
{
public:
	// System.Func`2<TMPro.KerningPair,System.Int32> TMPro.KerningTable::<>f__am$cache0
	Func_2_t2704521871 * ___U3CU3Ef__amU24cache0_1;
	// System.Func`2<TMPro.KerningPair,System.Int32> TMPro.KerningTable::<>f__am$cache1
	Func_2_t2704521871 * ___U3CU3Ef__amU24cache1_2;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_1() { return static_cast<int32_t>(offsetof(KerningTable_t2970824110_StaticFields, ___U3CU3Ef__amU24cache0_1)); }
	inline Func_2_t2704521871 * get_U3CU3Ef__amU24cache0_1() const { return ___U3CU3Ef__amU24cache0_1; }
	inline Func_2_t2704521871 ** get_address_of_U3CU3Ef__amU24cache0_1() { return &___U3CU3Ef__amU24cache0_1; }
	inline void set_U3CU3Ef__amU24cache0_1(Func_2_t2704521871 * value)
	{
		___U3CU3Ef__amU24cache0_1 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache0_1, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache1_2() { return static_cast<int32_t>(offsetof(KerningTable_t2970824110_StaticFields, ___U3CU3Ef__amU24cache1_2)); }
	inline Func_2_t2704521871 * get_U3CU3Ef__amU24cache1_2() const { return ___U3CU3Ef__amU24cache1_2; }
	inline Func_2_t2704521871 ** get_address_of_U3CU3Ef__amU24cache1_2() { return &___U3CU3Ef__amU24cache1_2; }
	inline void set_U3CU3Ef__amU24cache1_2(Func_2_t2704521871 * value)
	{
		___U3CU3Ef__amU24cache1_2 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache1_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
