﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t2981576340;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t164973122;
// System.Object
struct Il2CppObject;
// System.Func`3<System.Object,System.Int32,System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>
struct Func_3_t3811912889;

#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_23716250094.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Enumerable/<CreateSelectIterator>c__Iterator11`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>
struct  U3CCreateSelectIteratorU3Ec__Iterator11_2_t4260699463  : public Il2CppObject
{
public:
	// System.Int32 System.Linq.Enumerable/<CreateSelectIterator>c__Iterator11`2::<counter>__0
	int32_t ___U3CcounterU3E__0_0;
	// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/<CreateSelectIterator>c__Iterator11`2::source
	Il2CppObject* ___source_1;
	// System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/<CreateSelectIterator>c__Iterator11`2::<$s_92>__1
	Il2CppObject* ___U3CU24s_92U3E__1_2;
	// TSource System.Linq.Enumerable/<CreateSelectIterator>c__Iterator11`2::<element>__2
	Il2CppObject * ___U3CelementU3E__2_3;
	// System.Func`3<TSource,System.Int32,TResult> System.Linq.Enumerable/<CreateSelectIterator>c__Iterator11`2::selector
	Func_3_t3811912889 * ___selector_4;
	// System.Int32 System.Linq.Enumerable/<CreateSelectIterator>c__Iterator11`2::$PC
	int32_t ___U24PC_5;
	// TResult System.Linq.Enumerable/<CreateSelectIterator>c__Iterator11`2::$current
	KeyValuePair_2_t3716250094  ___U24current_6;
	// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/<CreateSelectIterator>c__Iterator11`2::<$>source
	Il2CppObject* ___U3CU24U3Esource_7;
	// System.Func`3<TSource,System.Int32,TResult> System.Linq.Enumerable/<CreateSelectIterator>c__Iterator11`2::<$>selector
	Func_3_t3811912889 * ___U3CU24U3Eselector_8;

public:
	inline static int32_t get_offset_of_U3CcounterU3E__0_0() { return static_cast<int32_t>(offsetof(U3CCreateSelectIteratorU3Ec__Iterator11_2_t4260699463, ___U3CcounterU3E__0_0)); }
	inline int32_t get_U3CcounterU3E__0_0() const { return ___U3CcounterU3E__0_0; }
	inline int32_t* get_address_of_U3CcounterU3E__0_0() { return &___U3CcounterU3E__0_0; }
	inline void set_U3CcounterU3E__0_0(int32_t value)
	{
		___U3CcounterU3E__0_0 = value;
	}

	inline static int32_t get_offset_of_source_1() { return static_cast<int32_t>(offsetof(U3CCreateSelectIteratorU3Ec__Iterator11_2_t4260699463, ___source_1)); }
	inline Il2CppObject* get_source_1() const { return ___source_1; }
	inline Il2CppObject** get_address_of_source_1() { return &___source_1; }
	inline void set_source_1(Il2CppObject* value)
	{
		___source_1 = value;
		Il2CppCodeGenWriteBarrier(&___source_1, value);
	}

	inline static int32_t get_offset_of_U3CU24s_92U3E__1_2() { return static_cast<int32_t>(offsetof(U3CCreateSelectIteratorU3Ec__Iterator11_2_t4260699463, ___U3CU24s_92U3E__1_2)); }
	inline Il2CppObject* get_U3CU24s_92U3E__1_2() const { return ___U3CU24s_92U3E__1_2; }
	inline Il2CppObject** get_address_of_U3CU24s_92U3E__1_2() { return &___U3CU24s_92U3E__1_2; }
	inline void set_U3CU24s_92U3E__1_2(Il2CppObject* value)
	{
		___U3CU24s_92U3E__1_2 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU24s_92U3E__1_2, value);
	}

	inline static int32_t get_offset_of_U3CelementU3E__2_3() { return static_cast<int32_t>(offsetof(U3CCreateSelectIteratorU3Ec__Iterator11_2_t4260699463, ___U3CelementU3E__2_3)); }
	inline Il2CppObject * get_U3CelementU3E__2_3() const { return ___U3CelementU3E__2_3; }
	inline Il2CppObject ** get_address_of_U3CelementU3E__2_3() { return &___U3CelementU3E__2_3; }
	inline void set_U3CelementU3E__2_3(Il2CppObject * value)
	{
		___U3CelementU3E__2_3 = value;
		Il2CppCodeGenWriteBarrier(&___U3CelementU3E__2_3, value);
	}

	inline static int32_t get_offset_of_selector_4() { return static_cast<int32_t>(offsetof(U3CCreateSelectIteratorU3Ec__Iterator11_2_t4260699463, ___selector_4)); }
	inline Func_3_t3811912889 * get_selector_4() const { return ___selector_4; }
	inline Func_3_t3811912889 ** get_address_of_selector_4() { return &___selector_4; }
	inline void set_selector_4(Func_3_t3811912889 * value)
	{
		___selector_4 = value;
		Il2CppCodeGenWriteBarrier(&___selector_4, value);
	}

	inline static int32_t get_offset_of_U24PC_5() { return static_cast<int32_t>(offsetof(U3CCreateSelectIteratorU3Ec__Iterator11_2_t4260699463, ___U24PC_5)); }
	inline int32_t get_U24PC_5() const { return ___U24PC_5; }
	inline int32_t* get_address_of_U24PC_5() { return &___U24PC_5; }
	inline void set_U24PC_5(int32_t value)
	{
		___U24PC_5 = value;
	}

	inline static int32_t get_offset_of_U24current_6() { return static_cast<int32_t>(offsetof(U3CCreateSelectIteratorU3Ec__Iterator11_2_t4260699463, ___U24current_6)); }
	inline KeyValuePair_2_t3716250094  get_U24current_6() const { return ___U24current_6; }
	inline KeyValuePair_2_t3716250094 * get_address_of_U24current_6() { return &___U24current_6; }
	inline void set_U24current_6(KeyValuePair_2_t3716250094  value)
	{
		___U24current_6 = value;
	}

	inline static int32_t get_offset_of_U3CU24U3Esource_7() { return static_cast<int32_t>(offsetof(U3CCreateSelectIteratorU3Ec__Iterator11_2_t4260699463, ___U3CU24U3Esource_7)); }
	inline Il2CppObject* get_U3CU24U3Esource_7() const { return ___U3CU24U3Esource_7; }
	inline Il2CppObject** get_address_of_U3CU24U3Esource_7() { return &___U3CU24U3Esource_7; }
	inline void set_U3CU24U3Esource_7(Il2CppObject* value)
	{
		___U3CU24U3Esource_7 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU24U3Esource_7, value);
	}

	inline static int32_t get_offset_of_U3CU24U3Eselector_8() { return static_cast<int32_t>(offsetof(U3CCreateSelectIteratorU3Ec__Iterator11_2_t4260699463, ___U3CU24U3Eselector_8)); }
	inline Func_3_t3811912889 * get_U3CU24U3Eselector_8() const { return ___U3CU24U3Eselector_8; }
	inline Func_3_t3811912889 ** get_address_of_U3CU24U3Eselector_8() { return &___U3CU24U3Eselector_8; }
	inline void set_U3CU24U3Eselector_8(Func_3_t3811912889 * value)
	{
		___U3CU24U3Eselector_8 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU24U3Eselector_8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
