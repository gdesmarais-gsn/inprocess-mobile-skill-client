#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<CoroutineHandle>
struct List_1_t3105422156;
// System.Predicate`1<CoroutineHandle>
struct Predicate_1_t2179271139;

#include "mscorlib_System_ValueType3507792607.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UpdateMgr/Sequence
struct  Sequence_t1269511759 
{
public:
	// System.Collections.Generic.List`1<CoroutineHandle> UpdateMgr/Sequence::mFunctions
	List_1_t3105422156 * ___mFunctions_0;
	// System.Boolean UpdateMgr/Sequence::mCleanUpZombies
	bool ___mCleanUpZombies_1;

public:
	inline static int32_t get_offset_of_mFunctions_0() { return static_cast<int32_t>(offsetof(Sequence_t1269511759, ___mFunctions_0)); }
	inline List_1_t3105422156 * get_mFunctions_0() const { return ___mFunctions_0; }
	inline List_1_t3105422156 ** get_address_of_mFunctions_0() { return &___mFunctions_0; }
	inline void set_mFunctions_0(List_1_t3105422156 * value)
	{
		___mFunctions_0 = value;
		Il2CppCodeGenWriteBarrier(&___mFunctions_0, value);
	}

	inline static int32_t get_offset_of_mCleanUpZombies_1() { return static_cast<int32_t>(offsetof(Sequence_t1269511759, ___mCleanUpZombies_1)); }
	inline bool get_mCleanUpZombies_1() const { return ___mCleanUpZombies_1; }
	inline bool* get_address_of_mCleanUpZombies_1() { return &___mCleanUpZombies_1; }
	inline void set_mCleanUpZombies_1(bool value)
	{
		___mCleanUpZombies_1 = value;
	}
};

struct Sequence_t1269511759_StaticFields
{
public:
	// System.Predicate`1<CoroutineHandle> UpdateMgr/Sequence::<>f__mg$cache0
	Predicate_1_t2179271139 * ___U3CU3Ef__mgU24cache0_2;

public:
	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache0_2() { return static_cast<int32_t>(offsetof(Sequence_t1269511759_StaticFields, ___U3CU3Ef__mgU24cache0_2)); }
	inline Predicate_1_t2179271139 * get_U3CU3Ef__mgU24cache0_2() const { return ___U3CU3Ef__mgU24cache0_2; }
	inline Predicate_1_t2179271139 ** get_address_of_U3CU3Ef__mgU24cache0_2() { return &___U3CU3Ef__mgU24cache0_2; }
	inline void set_U3CU3Ef__mgU24cache0_2(Predicate_1_t2179271139 * value)
	{
		___U3CU3Ef__mgU24cache0_2 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__mgU24cache0_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UpdateMgr/Sequence
struct Sequence_t1269511759_marshaled_pinvoke
{
	List_1_t3105422156 * ___mFunctions_0;
	int32_t ___mCleanUpZombies_1;
};
// Native definition for COM marshalling of UpdateMgr/Sequence
struct Sequence_t1269511759_marshaled_com
{
	List_1_t3105422156 * ___mFunctions_0;
	int32_t ___mCleanUpZombies_1;
};
