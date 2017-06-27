#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Int32[]
struct Int32U5BU5D_t3030399641;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PatchRenderer/SubMeshData
struct  SubMeshData_t2172124649  : public Il2CppObject
{
public:
	// System.Int32[] PatchRenderer/SubMeshData::triangles
	Int32U5BU5D_t3030399641* ___triangles_0;
	// System.Int32 PatchRenderer/SubMeshData::numQuads
	int32_t ___numQuads_1;
	// System.Int32 PatchRenderer/SubMeshData::newNumQuads
	int32_t ___newNumQuads_2;
	// System.Int32 PatchRenderer/SubMeshData::maxNumQuads
	int32_t ___maxNumQuads_3;
	// System.Int32 PatchRenderer/SubMeshData::writeIndex
	int32_t ___writeIndex_4;

public:
	inline static int32_t get_offset_of_triangles_0() { return static_cast<int32_t>(offsetof(SubMeshData_t2172124649, ___triangles_0)); }
	inline Int32U5BU5D_t3030399641* get_triangles_0() const { return ___triangles_0; }
	inline Int32U5BU5D_t3030399641** get_address_of_triangles_0() { return &___triangles_0; }
	inline void set_triangles_0(Int32U5BU5D_t3030399641* value)
	{
		___triangles_0 = value;
		Il2CppCodeGenWriteBarrier(&___triangles_0, value);
	}

	inline static int32_t get_offset_of_numQuads_1() { return static_cast<int32_t>(offsetof(SubMeshData_t2172124649, ___numQuads_1)); }
	inline int32_t get_numQuads_1() const { return ___numQuads_1; }
	inline int32_t* get_address_of_numQuads_1() { return &___numQuads_1; }
	inline void set_numQuads_1(int32_t value)
	{
		___numQuads_1 = value;
	}

	inline static int32_t get_offset_of_newNumQuads_2() { return static_cast<int32_t>(offsetof(SubMeshData_t2172124649, ___newNumQuads_2)); }
	inline int32_t get_newNumQuads_2() const { return ___newNumQuads_2; }
	inline int32_t* get_address_of_newNumQuads_2() { return &___newNumQuads_2; }
	inline void set_newNumQuads_2(int32_t value)
	{
		___newNumQuads_2 = value;
	}

	inline static int32_t get_offset_of_maxNumQuads_3() { return static_cast<int32_t>(offsetof(SubMeshData_t2172124649, ___maxNumQuads_3)); }
	inline int32_t get_maxNumQuads_3() const { return ___maxNumQuads_3; }
	inline int32_t* get_address_of_maxNumQuads_3() { return &___maxNumQuads_3; }
	inline void set_maxNumQuads_3(int32_t value)
	{
		___maxNumQuads_3 = value;
	}

	inline static int32_t get_offset_of_writeIndex_4() { return static_cast<int32_t>(offsetof(SubMeshData_t2172124649, ___writeIndex_4)); }
	inline int32_t get_writeIndex_4() const { return ___writeIndex_4; }
	inline int32_t* get_address_of_writeIndex_4() { return &___writeIndex_4; }
	inline void set_writeIndex_4(int32_t value)
	{
		___writeIndex_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
