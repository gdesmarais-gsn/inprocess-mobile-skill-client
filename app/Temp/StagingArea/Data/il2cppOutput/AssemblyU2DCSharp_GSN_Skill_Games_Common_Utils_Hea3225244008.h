#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// GSN.Skill.Games.Common.Utils.IHeapable[]
struct IHeapableU5BU5D_t3215976268;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Games.Common.Utils.Heap
struct  Heap_t3225244008  : public Il2CppObject
{
public:
	// System.Int32 GSN.Skill.Games.Common.Utils.Heap::capacity
	int32_t ___capacity_3;
	// GSN.Skill.Games.Common.Utils.IHeapable[] GSN.Skill.Games.Common.Utils.Heap::heap
	IHeapableU5BU5D_t3215976268* ___heap_4;
	// System.Int32 GSN.Skill.Games.Common.Utils.Heap::tail
	int32_t ___tail_5;

public:
	inline static int32_t get_offset_of_capacity_3() { return static_cast<int32_t>(offsetof(Heap_t3225244008, ___capacity_3)); }
	inline int32_t get_capacity_3() const { return ___capacity_3; }
	inline int32_t* get_address_of_capacity_3() { return &___capacity_3; }
	inline void set_capacity_3(int32_t value)
	{
		___capacity_3 = value;
	}

	inline static int32_t get_offset_of_heap_4() { return static_cast<int32_t>(offsetof(Heap_t3225244008, ___heap_4)); }
	inline IHeapableU5BU5D_t3215976268* get_heap_4() const { return ___heap_4; }
	inline IHeapableU5BU5D_t3215976268** get_address_of_heap_4() { return &___heap_4; }
	inline void set_heap_4(IHeapableU5BU5D_t3215976268* value)
	{
		___heap_4 = value;
		Il2CppCodeGenWriteBarrier(&___heap_4, value);
	}

	inline static int32_t get_offset_of_tail_5() { return static_cast<int32_t>(offsetof(Heap_t3225244008, ___tail_5)); }
	inline int32_t get_tail_5() const { return ___tail_5; }
	inline int32_t* get_address_of_tail_5() { return &___tail_5; }
	inline void set_tail_5(int32_t value)
	{
		___tail_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
