#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// PlanarStream/StreamObject
struct StreamObject_t1307730122;

#include "mscorlib_System_ValueType3507792607.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlanarStream/AxisEntry
struct  AxisEntry_t2134574852 
{
public:
	// System.Single PlanarStream/AxisEntry::edge
	float ___edge_0;
	// PlanarStream/StreamObject PlanarStream/AxisEntry::obj
	StreamObject_t1307730122 * ___obj_1;

public:
	inline static int32_t get_offset_of_edge_0() { return static_cast<int32_t>(offsetof(AxisEntry_t2134574852, ___edge_0)); }
	inline float get_edge_0() const { return ___edge_0; }
	inline float* get_address_of_edge_0() { return &___edge_0; }
	inline void set_edge_0(float value)
	{
		___edge_0 = value;
	}

	inline static int32_t get_offset_of_obj_1() { return static_cast<int32_t>(offsetof(AxisEntry_t2134574852, ___obj_1)); }
	inline StreamObject_t1307730122 * get_obj_1() const { return ___obj_1; }
	inline StreamObject_t1307730122 ** get_address_of_obj_1() { return &___obj_1; }
	inline void set_obj_1(StreamObject_t1307730122 * value)
	{
		___obj_1 = value;
		Il2CppCodeGenWriteBarrier(&___obj_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of PlanarStream/AxisEntry
struct AxisEntry_t2134574852_marshaled_pinvoke
{
	float ___edge_0;
	StreamObject_t1307730122 * ___obj_1;
};
// Native definition for COM marshalling of PlanarStream/AxisEntry
struct AxisEntry_t2134574852_marshaled_com
{
	float ___edge_0;
	StreamObject_t1307730122 * ___obj_1;
};
