#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Object[]
struct ObjectU5BU5D_t3614634134;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FastList`1<System.Object>
struct  FastList_1_t688812401  : public Il2CppObject
{
public:
	// T[] FastList`1::items
	ObjectU5BU5D_t3614634134* ___items_0;
	// System.Int32 FastList`1::Count
	int32_t ___Count_1;
	// System.Int32 FastList`1::eIndex
	int32_t ___eIndex_2;

public:
	inline static int32_t get_offset_of_items_0() { return static_cast<int32_t>(offsetof(FastList_1_t688812401, ___items_0)); }
	inline ObjectU5BU5D_t3614634134* get_items_0() const { return ___items_0; }
	inline ObjectU5BU5D_t3614634134** get_address_of_items_0() { return &___items_0; }
	inline void set_items_0(ObjectU5BU5D_t3614634134* value)
	{
		___items_0 = value;
		Il2CppCodeGenWriteBarrier(&___items_0, value);
	}

	inline static int32_t get_offset_of_Count_1() { return static_cast<int32_t>(offsetof(FastList_1_t688812401, ___Count_1)); }
	inline int32_t get_Count_1() const { return ___Count_1; }
	inline int32_t* get_address_of_Count_1() { return &___Count_1; }
	inline void set_Count_1(int32_t value)
	{
		___Count_1 = value;
	}

	inline static int32_t get_offset_of_eIndex_2() { return static_cast<int32_t>(offsetof(FastList_1_t688812401, ___eIndex_2)); }
	inline int32_t get_eIndex_2() const { return ___eIndex_2; }
	inline int32_t* get_address_of_eIndex_2() { return &___eIndex_2; }
	inline void set_eIndex_2(int32_t value)
	{
		___eIndex_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
