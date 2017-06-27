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

// QuadRenderer/SubMeshData
struct  SubMeshData_t1378627764  : public Il2CppObject
{
public:
	// System.Int32[] QuadRenderer/SubMeshData::triangles
	Int32U5BU5D_t3030399641* ___triangles_0;
	// System.Int32 QuadRenderer/SubMeshData::numQuads
	int32_t ___numQuads_1;
	// System.Int32 QuadRenderer/SubMeshData::newNumQuads
	int32_t ___newNumQuads_2;
	// System.Int32 QuadRenderer/SubMeshData::writeIndex
	int32_t ___writeIndex_3;

public:
	inline static int32_t get_offset_of_triangles_0() { return static_cast<int32_t>(offsetof(SubMeshData_t1378627764, ___triangles_0)); }
	inline Int32U5BU5D_t3030399641* get_triangles_0() const { return ___triangles_0; }
	inline Int32U5BU5D_t3030399641** get_address_of_triangles_0() { return &___triangles_0; }
	inline void set_triangles_0(Int32U5BU5D_t3030399641* value)
	{
		___triangles_0 = value;
		Il2CppCodeGenWriteBarrier(&___triangles_0, value);
	}

	inline static int32_t get_offset_of_numQuads_1() { return static_cast<int32_t>(offsetof(SubMeshData_t1378627764, ___numQuads_1)); }
	inline int32_t get_numQuads_1() const { return ___numQuads_1; }
	inline int32_t* get_address_of_numQuads_1() { return &___numQuads_1; }
	inline void set_numQuads_1(int32_t value)
	{
		___numQuads_1 = value;
	}

	inline static int32_t get_offset_of_newNumQuads_2() { return static_cast<int32_t>(offsetof(SubMeshData_t1378627764, ___newNumQuads_2)); }
	inline int32_t get_newNumQuads_2() const { return ___newNumQuads_2; }
	inline int32_t* get_address_of_newNumQuads_2() { return &___newNumQuads_2; }
	inline void set_newNumQuads_2(int32_t value)
	{
		___newNumQuads_2 = value;
	}

	inline static int32_t get_offset_of_writeIndex_3() { return static_cast<int32_t>(offsetof(SubMeshData_t1378627764, ___writeIndex_3)); }
	inline int32_t get_writeIndex_3() const { return ___writeIndex_3; }
	inline int32_t* get_address_of_writeIndex_3() { return &___writeIndex_3; }
	inline void set_writeIndex_3(int32_t value)
	{
		___writeIndex_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
