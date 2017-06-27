﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<System.Object>>
struct Dictionary_2_t1066396062;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t2058570427;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t2981576340;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t164973122;
// System.Object
struct Il2CppObject;
// System.Func`2<System.Object,System.Int32>
struct Func_2_t2207932334;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t1284510226;
// System.Linq.IGrouping`2<System.Int32,System.Object>
struct IGrouping_2_t322702868;

#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_E2386420764.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_23118708580.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Enumerable/<CreateGroupByIterator>c__Iterator5`2<System.Object,System.Int32>
struct  U3CCreateGroupByIteratorU3Ec__Iterator5_2_t3071837846  : public Il2CppObject
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,System.Collections.Generic.List`1<TSource>> System.Linq.Enumerable/<CreateGroupByIterator>c__Iterator5`2::<groups>__0
	Dictionary_2_t1066396062 * ___U3CgroupsU3E__0_0;
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/<CreateGroupByIterator>c__Iterator5`2::<nullList>__1
	List_1_t2058570427 * ___U3CnullListU3E__1_1;
	// System.Int32 System.Linq.Enumerable/<CreateGroupByIterator>c__Iterator5`2::<counter>__2
	int32_t ___U3CcounterU3E__2_2;
	// System.Int32 System.Linq.Enumerable/<CreateGroupByIterator>c__Iterator5`2::<nullCounter>__3
	int32_t ___U3CnullCounterU3E__3_3;
	// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/<CreateGroupByIterator>c__Iterator5`2::source
	Il2CppObject* ___source_4;
	// System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/<CreateGroupByIterator>c__Iterator5`2::<$s_71>__4
	Il2CppObject* ___U3CU24s_71U3E__4_5;
	// TSource System.Linq.Enumerable/<CreateGroupByIterator>c__Iterator5`2::<element>__5
	Il2CppObject * ___U3CelementU3E__5_6;
	// System.Func`2<TSource,TKey> System.Linq.Enumerable/<CreateGroupByIterator>c__Iterator5`2::keySelector
	Func_2_t2207932334 * ___keySelector_7;
	// TKey System.Linq.Enumerable/<CreateGroupByIterator>c__Iterator5`2::<key>__6
	int32_t ___U3CkeyU3E__6_8;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Linq.Enumerable/<CreateGroupByIterator>c__Iterator5`2::comparer
	Il2CppObject* ___comparer_9;
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/<CreateGroupByIterator>c__Iterator5`2::<group>__7
	List_1_t2058570427 * ___U3CgroupU3E__7_10;
	// System.Collections.Generic.Dictionary`2/Enumerator<TKey,System.Collections.Generic.List`1<TSource>> System.Linq.Enumerable/<CreateGroupByIterator>c__Iterator5`2::<$s_72>__8
	Enumerator_t2386420764  ___U3CU24s_72U3E__8_11;
	// System.Collections.Generic.KeyValuePair`2<TKey,System.Collections.Generic.List`1<TSource>> System.Linq.Enumerable/<CreateGroupByIterator>c__Iterator5`2::<group>__9
	KeyValuePair_2_t3118708580  ___U3CgroupU3E__9_12;
	// System.Int32 System.Linq.Enumerable/<CreateGroupByIterator>c__Iterator5`2::$PC
	int32_t ___U24PC_13;
	// System.Linq.IGrouping`2<TKey,TSource> System.Linq.Enumerable/<CreateGroupByIterator>c__Iterator5`2::$current
	Il2CppObject* ___U24current_14;
	// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/<CreateGroupByIterator>c__Iterator5`2::<$>source
	Il2CppObject* ___U3CU24U3Esource_15;
	// System.Func`2<TSource,TKey> System.Linq.Enumerable/<CreateGroupByIterator>c__Iterator5`2::<$>keySelector
	Func_2_t2207932334 * ___U3CU24U3EkeySelector_16;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Linq.Enumerable/<CreateGroupByIterator>c__Iterator5`2::<$>comparer
	Il2CppObject* ___U3CU24U3Ecomparer_17;

public:
	inline static int32_t get_offset_of_U3CgroupsU3E__0_0() { return static_cast<int32_t>(offsetof(U3CCreateGroupByIteratorU3Ec__Iterator5_2_t3071837846, ___U3CgroupsU3E__0_0)); }
	inline Dictionary_2_t1066396062 * get_U3CgroupsU3E__0_0() const { return ___U3CgroupsU3E__0_0; }
	inline Dictionary_2_t1066396062 ** get_address_of_U3CgroupsU3E__0_0() { return &___U3CgroupsU3E__0_0; }
	inline void set_U3CgroupsU3E__0_0(Dictionary_2_t1066396062 * value)
	{
		___U3CgroupsU3E__0_0 = value;
		Il2CppCodeGenWriteBarrier(&___U3CgroupsU3E__0_0, value);
	}

	inline static int32_t get_offset_of_U3CnullListU3E__1_1() { return static_cast<int32_t>(offsetof(U3CCreateGroupByIteratorU3Ec__Iterator5_2_t3071837846, ___U3CnullListU3E__1_1)); }
	inline List_1_t2058570427 * get_U3CnullListU3E__1_1() const { return ___U3CnullListU3E__1_1; }
	inline List_1_t2058570427 ** get_address_of_U3CnullListU3E__1_1() { return &___U3CnullListU3E__1_1; }
	inline void set_U3CnullListU3E__1_1(List_1_t2058570427 * value)
	{
		___U3CnullListU3E__1_1 = value;
		Il2CppCodeGenWriteBarrier(&___U3CnullListU3E__1_1, value);
	}

	inline static int32_t get_offset_of_U3CcounterU3E__2_2() { return static_cast<int32_t>(offsetof(U3CCreateGroupByIteratorU3Ec__Iterator5_2_t3071837846, ___U3CcounterU3E__2_2)); }
	inline int32_t get_U3CcounterU3E__2_2() const { return ___U3CcounterU3E__2_2; }
	inline int32_t* get_address_of_U3CcounterU3E__2_2() { return &___U3CcounterU3E__2_2; }
	inline void set_U3CcounterU3E__2_2(int32_t value)
	{
		___U3CcounterU3E__2_2 = value;
	}

	inline static int32_t get_offset_of_U3CnullCounterU3E__3_3() { return static_cast<int32_t>(offsetof(U3CCreateGroupByIteratorU3Ec__Iterator5_2_t3071837846, ___U3CnullCounterU3E__3_3)); }
	inline int32_t get_U3CnullCounterU3E__3_3() const { return ___U3CnullCounterU3E__3_3; }
	inline int32_t* get_address_of_U3CnullCounterU3E__3_3() { return &___U3CnullCounterU3E__3_3; }
	inline void set_U3CnullCounterU3E__3_3(int32_t value)
	{
		___U3CnullCounterU3E__3_3 = value;
	}

	inline static int32_t get_offset_of_source_4() { return static_cast<int32_t>(offsetof(U3CCreateGroupByIteratorU3Ec__Iterator5_2_t3071837846, ___source_4)); }
	inline Il2CppObject* get_source_4() const { return ___source_4; }
	inline Il2CppObject** get_address_of_source_4() { return &___source_4; }
	inline void set_source_4(Il2CppObject* value)
	{
		___source_4 = value;
		Il2CppCodeGenWriteBarrier(&___source_4, value);
	}

	inline static int32_t get_offset_of_U3CU24s_71U3E__4_5() { return static_cast<int32_t>(offsetof(U3CCreateGroupByIteratorU3Ec__Iterator5_2_t3071837846, ___U3CU24s_71U3E__4_5)); }
	inline Il2CppObject* get_U3CU24s_71U3E__4_5() const { return ___U3CU24s_71U3E__4_5; }
	inline Il2CppObject** get_address_of_U3CU24s_71U3E__4_5() { return &___U3CU24s_71U3E__4_5; }
	inline void set_U3CU24s_71U3E__4_5(Il2CppObject* value)
	{
		___U3CU24s_71U3E__4_5 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU24s_71U3E__4_5, value);
	}

	inline static int32_t get_offset_of_U3CelementU3E__5_6() { return static_cast<int32_t>(offsetof(U3CCreateGroupByIteratorU3Ec__Iterator5_2_t3071837846, ___U3CelementU3E__5_6)); }
	inline Il2CppObject * get_U3CelementU3E__5_6() const { return ___U3CelementU3E__5_6; }
	inline Il2CppObject ** get_address_of_U3CelementU3E__5_6() { return &___U3CelementU3E__5_6; }
	inline void set_U3CelementU3E__5_6(Il2CppObject * value)
	{
		___U3CelementU3E__5_6 = value;
		Il2CppCodeGenWriteBarrier(&___U3CelementU3E__5_6, value);
	}

	inline static int32_t get_offset_of_keySelector_7() { return static_cast<int32_t>(offsetof(U3CCreateGroupByIteratorU3Ec__Iterator5_2_t3071837846, ___keySelector_7)); }
	inline Func_2_t2207932334 * get_keySelector_7() const { return ___keySelector_7; }
	inline Func_2_t2207932334 ** get_address_of_keySelector_7() { return &___keySelector_7; }
	inline void set_keySelector_7(Func_2_t2207932334 * value)
	{
		___keySelector_7 = value;
		Il2CppCodeGenWriteBarrier(&___keySelector_7, value);
	}

	inline static int32_t get_offset_of_U3CkeyU3E__6_8() { return static_cast<int32_t>(offsetof(U3CCreateGroupByIteratorU3Ec__Iterator5_2_t3071837846, ___U3CkeyU3E__6_8)); }
	inline int32_t get_U3CkeyU3E__6_8() const { return ___U3CkeyU3E__6_8; }
	inline int32_t* get_address_of_U3CkeyU3E__6_8() { return &___U3CkeyU3E__6_8; }
	inline void set_U3CkeyU3E__6_8(int32_t value)
	{
		___U3CkeyU3E__6_8 = value;
	}

	inline static int32_t get_offset_of_comparer_9() { return static_cast<int32_t>(offsetof(U3CCreateGroupByIteratorU3Ec__Iterator5_2_t3071837846, ___comparer_9)); }
	inline Il2CppObject* get_comparer_9() const { return ___comparer_9; }
	inline Il2CppObject** get_address_of_comparer_9() { return &___comparer_9; }
	inline void set_comparer_9(Il2CppObject* value)
	{
		___comparer_9 = value;
		Il2CppCodeGenWriteBarrier(&___comparer_9, value);
	}

	inline static int32_t get_offset_of_U3CgroupU3E__7_10() { return static_cast<int32_t>(offsetof(U3CCreateGroupByIteratorU3Ec__Iterator5_2_t3071837846, ___U3CgroupU3E__7_10)); }
	inline List_1_t2058570427 * get_U3CgroupU3E__7_10() const { return ___U3CgroupU3E__7_10; }
	inline List_1_t2058570427 ** get_address_of_U3CgroupU3E__7_10() { return &___U3CgroupU3E__7_10; }
	inline void set_U3CgroupU3E__7_10(List_1_t2058570427 * value)
	{
		___U3CgroupU3E__7_10 = value;
		Il2CppCodeGenWriteBarrier(&___U3CgroupU3E__7_10, value);
	}

	inline static int32_t get_offset_of_U3CU24s_72U3E__8_11() { return static_cast<int32_t>(offsetof(U3CCreateGroupByIteratorU3Ec__Iterator5_2_t3071837846, ___U3CU24s_72U3E__8_11)); }
	inline Enumerator_t2386420764  get_U3CU24s_72U3E__8_11() const { return ___U3CU24s_72U3E__8_11; }
	inline Enumerator_t2386420764 * get_address_of_U3CU24s_72U3E__8_11() { return &___U3CU24s_72U3E__8_11; }
	inline void set_U3CU24s_72U3E__8_11(Enumerator_t2386420764  value)
	{
		___U3CU24s_72U3E__8_11 = value;
	}

	inline static int32_t get_offset_of_U3CgroupU3E__9_12() { return static_cast<int32_t>(offsetof(U3CCreateGroupByIteratorU3Ec__Iterator5_2_t3071837846, ___U3CgroupU3E__9_12)); }
	inline KeyValuePair_2_t3118708580  get_U3CgroupU3E__9_12() const { return ___U3CgroupU3E__9_12; }
	inline KeyValuePair_2_t3118708580 * get_address_of_U3CgroupU3E__9_12() { return &___U3CgroupU3E__9_12; }
	inline void set_U3CgroupU3E__9_12(KeyValuePair_2_t3118708580  value)
	{
		___U3CgroupU3E__9_12 = value;
	}

	inline static int32_t get_offset_of_U24PC_13() { return static_cast<int32_t>(offsetof(U3CCreateGroupByIteratorU3Ec__Iterator5_2_t3071837846, ___U24PC_13)); }
	inline int32_t get_U24PC_13() const { return ___U24PC_13; }
	inline int32_t* get_address_of_U24PC_13() { return &___U24PC_13; }
	inline void set_U24PC_13(int32_t value)
	{
		___U24PC_13 = value;
	}

	inline static int32_t get_offset_of_U24current_14() { return static_cast<int32_t>(offsetof(U3CCreateGroupByIteratorU3Ec__Iterator5_2_t3071837846, ___U24current_14)); }
	inline Il2CppObject* get_U24current_14() const { return ___U24current_14; }
	inline Il2CppObject** get_address_of_U24current_14() { return &___U24current_14; }
	inline void set_U24current_14(Il2CppObject* value)
	{
		___U24current_14 = value;
		Il2CppCodeGenWriteBarrier(&___U24current_14, value);
	}

	inline static int32_t get_offset_of_U3CU24U3Esource_15() { return static_cast<int32_t>(offsetof(U3CCreateGroupByIteratorU3Ec__Iterator5_2_t3071837846, ___U3CU24U3Esource_15)); }
	inline Il2CppObject* get_U3CU24U3Esource_15() const { return ___U3CU24U3Esource_15; }
	inline Il2CppObject** get_address_of_U3CU24U3Esource_15() { return &___U3CU24U3Esource_15; }
	inline void set_U3CU24U3Esource_15(Il2CppObject* value)
	{
		___U3CU24U3Esource_15 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU24U3Esource_15, value);
	}

	inline static int32_t get_offset_of_U3CU24U3EkeySelector_16() { return static_cast<int32_t>(offsetof(U3CCreateGroupByIteratorU3Ec__Iterator5_2_t3071837846, ___U3CU24U3EkeySelector_16)); }
	inline Func_2_t2207932334 * get_U3CU24U3EkeySelector_16() const { return ___U3CU24U3EkeySelector_16; }
	inline Func_2_t2207932334 ** get_address_of_U3CU24U3EkeySelector_16() { return &___U3CU24U3EkeySelector_16; }
	inline void set_U3CU24U3EkeySelector_16(Func_2_t2207932334 * value)
	{
		___U3CU24U3EkeySelector_16 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU24U3EkeySelector_16, value);
	}

	inline static int32_t get_offset_of_U3CU24U3Ecomparer_17() { return static_cast<int32_t>(offsetof(U3CCreateGroupByIteratorU3Ec__Iterator5_2_t3071837846, ___U3CU24U3Ecomparer_17)); }
	inline Il2CppObject* get_U3CU24U3Ecomparer_17() const { return ___U3CU24U3Ecomparer_17; }
	inline Il2CppObject** get_address_of_U3CU24U3Ecomparer_17() { return &___U3CU24U3Ecomparer_17; }
	inline void set_U3CU24U3Ecomparer_17(Il2CppObject* value)
	{
		___U3CU24U3Ecomparer_17 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU24U3Ecomparer_17, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
