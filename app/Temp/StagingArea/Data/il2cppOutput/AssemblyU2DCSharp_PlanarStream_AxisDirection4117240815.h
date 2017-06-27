#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// PlanarStream/AxisEntry[]
struct AxisEntryU5BU5D_t2077722733;
// System.Comparison`1<PlanarStream/AxisEntry>
struct Comparison_1_t3396313703;

#include "mscorlib_System_Object2689449295.h"
#include "AssemblyU2DCSharp_PlanarStream_AxisEntry2134574852.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlanarStream/AxisDirection
struct  AxisDirection_t4117240815  : public Il2CppObject
{
public:
	// PlanarStream/AxisEntry[] PlanarStream/AxisDirection::entries
	AxisEntryU5BU5D_t2077722733* ___entries_0;
	// System.Int32 PlanarStream/AxisDirection::nextIndex
	int32_t ___nextIndex_1;
	// System.Boolean PlanarStream/AxisDirection::isForward
	bool ___isForward_2;
	// PlanarStream/AxisEntry PlanarStream/AxisDirection::next
	AxisEntry_t2134574852  ___next_3;
	// PlanarStream/AxisEntry PlanarStream/AxisDirection::prev
	AxisEntry_t2134574852  ___prev_4;

public:
	inline static int32_t get_offset_of_entries_0() { return static_cast<int32_t>(offsetof(AxisDirection_t4117240815, ___entries_0)); }
	inline AxisEntryU5BU5D_t2077722733* get_entries_0() const { return ___entries_0; }
	inline AxisEntryU5BU5D_t2077722733** get_address_of_entries_0() { return &___entries_0; }
	inline void set_entries_0(AxisEntryU5BU5D_t2077722733* value)
	{
		___entries_0 = value;
		Il2CppCodeGenWriteBarrier(&___entries_0, value);
	}

	inline static int32_t get_offset_of_nextIndex_1() { return static_cast<int32_t>(offsetof(AxisDirection_t4117240815, ___nextIndex_1)); }
	inline int32_t get_nextIndex_1() const { return ___nextIndex_1; }
	inline int32_t* get_address_of_nextIndex_1() { return &___nextIndex_1; }
	inline void set_nextIndex_1(int32_t value)
	{
		___nextIndex_1 = value;
	}

	inline static int32_t get_offset_of_isForward_2() { return static_cast<int32_t>(offsetof(AxisDirection_t4117240815, ___isForward_2)); }
	inline bool get_isForward_2() const { return ___isForward_2; }
	inline bool* get_address_of_isForward_2() { return &___isForward_2; }
	inline void set_isForward_2(bool value)
	{
		___isForward_2 = value;
	}

	inline static int32_t get_offset_of_next_3() { return static_cast<int32_t>(offsetof(AxisDirection_t4117240815, ___next_3)); }
	inline AxisEntry_t2134574852  get_next_3() const { return ___next_3; }
	inline AxisEntry_t2134574852 * get_address_of_next_3() { return &___next_3; }
	inline void set_next_3(AxisEntry_t2134574852  value)
	{
		___next_3 = value;
	}

	inline static int32_t get_offset_of_prev_4() { return static_cast<int32_t>(offsetof(AxisDirection_t4117240815, ___prev_4)); }
	inline AxisEntry_t2134574852  get_prev_4() const { return ___prev_4; }
	inline AxisEntry_t2134574852 * get_address_of_prev_4() { return &___prev_4; }
	inline void set_prev_4(AxisEntry_t2134574852  value)
	{
		___prev_4 = value;
	}
};

struct AxisDirection_t4117240815_StaticFields
{
public:
	// System.Comparison`1<PlanarStream/AxisEntry> PlanarStream/AxisDirection::<>f__mg$cache0
	Comparison_1_t3396313703 * ___U3CU3Ef__mgU24cache0_5;

public:
	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache0_5() { return static_cast<int32_t>(offsetof(AxisDirection_t4117240815_StaticFields, ___U3CU3Ef__mgU24cache0_5)); }
	inline Comparison_1_t3396313703 * get_U3CU3Ef__mgU24cache0_5() const { return ___U3CU3Ef__mgU24cache0_5; }
	inline Comparison_1_t3396313703 ** get_address_of_U3CU3Ef__mgU24cache0_5() { return &___U3CU3Ef__mgU24cache0_5; }
	inline void set_U3CU3Ef__mgU24cache0_5(Comparison_1_t3396313703 * value)
	{
		___U3CU3Ef__mgU24cache0_5 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__mgU24cache0_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
